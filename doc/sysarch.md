Je propose aussi une convention dès la v0.1 :

- **OBSERVÉ** : directement attesté par les listings CAIA ou le C généré.
- **DÉDUIT** : interprétation fortement soutenue par plusieurs observations.
- **HYPOTHÈSE** : explication plausible mais non encore établie.

# Architecture système CAIA — spécification v0.1

## 1. Périmètre

Cette spécification décrit le système CAIA tel qu'observé dans le snapshot `caia-su-24feb2016`, et en particulier la relation entre :

```text
représentation persistante
        ↕
univers d'objets CAIA
        ↕
langage système CAIA
        ↕
traduction / interprétation
        ↕
C généré
```

Elle ne tente pas pour l'instant de reconstruire les intentions historiques exactes de Jacques Pitrat lorsque celles-ci ne sont pas attestées.

## 2. Principe architectural principal

**DÉDUIT — CAIA repose sur un univers de représentation largement uniforme.**

Le système évite de multiplier les représentations spécialisées. Les règles, expressions, variables, propriétés, structures intermédiaires et métadonnées sont représentées dans un même univers relationnel.

Il n'existe pas, dans ce que nous avons observé, de séparation stricte du type :

```text
AST
symbol table
type system
intermediate representation
optimizer IR
runtime objects
```

À la place, ces rôles sont exprimés par des **objets CAIA reliés par des attributs et relations**.

Conséquence architecturale :

```text
moins de frontières
+ forte réutilisation des mécanismes génériques
+ transformations très compactes
- couplage généralisé
- invariants largement implicites
- lecture locale difficile
```

## 3. Représentation physique

**OBSERVÉ — l'implémentation C repose principalement sur des tableaux globaux.**

Parmi eux :

```text
r[]
s[]
t[]
w[][]

x[]
z[]
pile[]

g[]
vg[]
...
```

Les tableaux `r/s/t` participent notamment à la représentation de structures chaînées. `FND` montre une recherche dans une chaîne ordonnée :

```text
R(X) = clé
S(X) = valeur
T(X) = suivant
```

Le C généré réalise cela directement avec :

```c
r[p]
s[p]
t[p]
```

**DÉDUIT — il s'agit d'une forme de heap universel**, plutôt que d'un ensemble de structures C explicitement typées.

## 4. Modèle sémantique des objets

Un objet CAIA peut posséder des propriétés ou relations telles que :

```text
TYPE(X)
PERE(X)
IF(X)
THEN(X)
E1(X)
E2(X)
VARI(X)
EXPR(X)
SETEXPR(X)
ENSVAR(X)
...
```

Les métadonnées du système permettent également de raisonner sur les propriétés elles-mêmes :

```text
OBJTYPE(...)
ENSTYPE(...)
ATTRIBUT(...)
ENSY(@TYPE)
ENSEXP(@TYPE)
NC(...)
NF(...)
XALNOM(...)
ZALNOM(...)
...
```

**DÉDUIT — le métamodèle est réflexif** : le système peut inspecter les caractéristiques de ses propres types, relations et fonctions et effectuer des traversées génériques pilotées par celles-ci.

`TRADCREE` en est un exemple : il peut reconstruire les attributs simples et les attributs-ensembles d'un objet en fonction de son type.

## 5. Absence d'orientation objet classique

**OBSERVÉ — aucune architecture orientée objet classique n'a été identifiée.**

La variation de comportement n'est pas exprimée principalement par :

```text
type
 └─ méthodes
     └─ dispatch dynamique
```

mais plutôt par :

```text
fonction globale
   + pattern matching
   + inspection de TYPE
   + consultation du métamodèle
   + réécriture
```

**DÉDUIT — le modèle est plus proche de valeurs Lisp structurées combinées à un métamodèle relationnel** que d'une architecture à classes.

## 6. Accès élémentaire aux propriétés

`FND` constitue une primitive fondamentale :

```text
R(X)=ATT
    => RES:=S(X)

R(X)<ATT,T(X)>0
    => FND T(X)->X ATT R<-RES,
       RES:=R
```

Il effectue une recherche ordonnée dans une structure chaînée.

Les familles :

```text
FNDO
FNDE
FNDC
FNDOND
FNDEND
FNDCND
...
```

constituent des adaptateurs ou spécialisations autour de cette représentation fondamentale.

**OBSERVÉ — `FND` lui-même n'a pas de `FND0.c`.** Son calcul est développé directement dans plusieurs fonctions générées comme `FNDO0`, `FNDE0` et `FNDC0`.

Cela établit que :

```text
un objet logique CAIA
≠ nécessairement
une fonction C
```

## 7. Environnement d'analyse sémantique `BA`

Une partie essentielle du traducteur utilise un objet `BA`.

`TRADEB` ou `TRADNAM` initialise typiquement :

```text
BA := (ACC:N, O2:@OUI)
```

`E1(BA)` contient ensuite des fiches de variables.

Structure actuellement déduite :

```text
BA
├─ ACC     contexte/règle
├─ O2      mode ou état
└─ E1
    ├─ fiche V1
    │   ├─ VARI = V1
    │   ├─ E2 = ensemble de propriétés inférées
    │   ├─ EXPR = classification synthétique
    │   ├─ FORCE = ...
    │   └─ SETEXPR = liens vers d'autres fiches
    │
    └─ fiche V2
```

`VDSBA(V,BA)` est un **lookup-or-create** de la fiche correspondant à une variable.

## 8. Analyse et inférence

Le sous-système observé comprend notamment :

```text
NATFN / NATFNA
    analyse récursive des expressions

NATFNS / NATFNDA
    inscription de propriétés sur les fiches

MEMEXPR
    liens entre fiches et propagation

TYPEXPR
    inférence de propriétés d'expression

FNDEXPR
    consolidation des faits en EXPR(X)
```

`TYPEXPR` distingue au moins trois dimensions :

```text
NV : nature de la valeur
XP : représentation de l'expression
TS : propriété structurale, notamment @ENSEMBLE
```

`XP` peut prendre des valeurs telles que :

```text
@EXPR
@NEXPR
@AUTROBJ
```

Ce ne sont pas simplement des types de données, mais des **modes de représentation sémantique**.

## 9. Graphe de connaissances sur les variables

`MEMEXPR` construit des liens symétriques entre fiches via `SETEXPR`.

Certaines informations de `E2` sont propagées le long de ces liens.

**DÉDUIT — BA représente donc non seulement une table de symboles mais un petit graphe de contraintes/connaissances sur les variables.**

## 10. Analyse de dépendances

Le groupe :

```text
CALK
CALKA
CALKB
```

détermine quelles conditions peuvent être utilisées avec les variables actuellement connues.

`CALKA` peut également enrichir :

```text
ENSVAR(NA)
```

lorsqu'une condition permet de découvrir de nouvelles variables.

**DÉDUIT — ce mécanisme réalise un ordonnancement logique des conditions selon leurs dépendances de données.**

## 11. Normalisation et désucrage

Le groupe :

```text
BOOTRADA
BOOTRADB
BOOTRADIS
BOOTRADBAS
...
```

réécrit des formes du langage vers des formes plus primitives.

Exemples observés :

```text
A IS EMPTY
    → CARD(A)=0

A IS EVEN
    → PAIR(A)

NOT(A)
    → NONEX[...]

[A TO B]
    → ENSINTERV(A,B)

D IS @KNOWN
    → D # valeur sentinelle
```

Cette transformation utilise aussi `BA`.

**DÉDUIT — le lowering est sémantiquement informé**, et non purement syntaxique.

## 12. Transformation structurelle

`TRADCREE` et `TRADCREA` assurent une reconstruction récursive d'objets et expressions.

Leur comportement combine :

```text
réécritures spécialisées
        +
fallback structurel générique
```

`TRADCREE` peut notamment utiliser le métamodèle pour parcourir tous les attributs correspondant au type de l'objet.

## 13. Calculabilité et adaptation des représentations

Le groupe :

```text
CALCULABLE
AJUSTFIN
AJUSTECAL
AJUSTEXP
AJUSTECALA
CREXPR
ACCORDXP
```

gère la compatibilité entre la représentation disponible et celle demandée.

Schéma :

```text
CALCULABLE
   │
   ├─ oui → AJUSTECAL
   │
   └─ non → AJUSTEXP
              │
           AJUSTFIN
              │
            CREXPR
```

`ACCORDXP` vérifie la compatibilité d'une variable avec une représentation demandée à partir des propriétés présentes dans `E2`.

**DÉDUIT — CAIA possède un véritable système de coercions entre représentations symboliques.**

## 14. Traduction des règles en atomes

Chaîne actuellement observée :

```text
CRATOME
   │
   ├─ préparation / sauvegarde
   │
   └─ CRATOMY
        │
        └─ CRATOMZ
             │
             └─ CRATOMZA
                  │
                  └─ TRADATOME
                       │
                       └─ TRADATOMA
                            │
                            └─ TRADATOMX
```

Cette chaîne n'est pas strictement linéaire : certains appels recroisent des sous-systèmes appartenant à d'autres communautés techniques.

`TRADATOMX` traite notamment les antécédents et conséquences d'une règle.

## 15. Architecture non stratifiée

Il ne faut pas modéliser CAIA comme une pile de couches strictes.

La structure observée est plutôt :

```text
analyse sémantique
      ↕
inférence
      ↕
désucrage
      ↕
transformation structurelle
      ↕
analyse de dépendances
      ↕
coercions
      ↕
construction de règles
```

Les dépendances sont bidirectionnelles et les connaissances peuvent être enrichies au cours de la transformation.

**DÉDUIT — CAIA possède une architecture fluide de passes coopérantes.**

## 16. Persistence

Le système persiste notamment :

```text
da
cmt
_NN
```

Des fonctions identifiées :

```text
LECT
STR
STORE
DISQUE
DISQUZ
```

Des états observés autour de `s[x[N]]` suggèrent :

```text
66 : objet sur disque / non chargé
67 : chargé / propre
68 : modifié / à écrire
```

Cette interprétation reste **DÉDUITE**, même si elle est fortement soutenue.

## 17. Génération C

Le C généré est une cible d'exécution, pas une représentation conceptuelle fidèle du source.

Transformations déjà observées :

```text
règles déclaratives
    → graphe de contrôle if/goto

variables CAIA
    → x[jvj+n], pile[], variables C

appel logique
    → convention pile[]

récursion terminale FND
    → boucle C

une fonction logique
    → parfois plusieurs fonctions C

une fonction logique
    → parfois aucune fonction C autonome
```

Les slots `f[]` constituent une table de fonctions générées et peuvent être rebondés dynamiquement dans certains cas.

## 18. Interfaces et couplage

Aucune notion moderne forte d'interface n'a été identifiée.

Les contrats existent principalement sous forme de conventions partagées :

```text
sens de BA
contenu de E2
signification de EXPR
modes @COURANT/@CREE/@MATCHE
conventions des attributs
invariants des relations
```

Cette absence de frontière formelle explique une partie du fort couplage observé.

## 19. Erreur et non-applicabilité

Il faut distinguer :

```text
non-applicabilité normale
    → une règle ne matche pas
    → résultat inconnu / absent

anomalie
    → MESSAGE
    → MESPION
    → ERR*
    → diagnostics spécifiques
```

Aucun mécanisme général comparable aux exceptions modernes n'a été identifié.

## 20. Tests et vérification

Aucun système de tests unitaires comparable aux frameworks modernes n'a été observé dans le corpus étudié.

Des mécanismes existent néanmoins :

```text
MESPION
MESSAGE
tests de cohérence
VERIF*
TEST*
```

Leur rôle exact comme système de validation reste à établir.

---

## Relation entre les deux spécifications

Je garderais les deux documents séparés, mais avec cette dépendance :

```text
Architecture système CAIA
    définit :
        objets
        relations
        métamodèle
        environnement BA
        grands sous-systèmes

               ↓

Langage système CAIA
    définit :
        comment ces objets sont manipulés
        comment les règles sont écrites
        comment elles sont ordonnancées
        comment elles sont compilées
```

