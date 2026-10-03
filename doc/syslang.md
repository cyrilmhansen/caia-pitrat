Je propose aussi une convention dès la v0.1 :

- **OBSERVÉ** : directement attesté par les listings CAIA ou le C généré.
- **DÉDUIT** : interprétation fortement soutenue par plusieurs observations.
- **HYPOTHÈSE** : explication plausible mais non encore établie.

---

# Langage système CAIA — spécification v0.1

## 1. Nature du langage

**OBSERVÉ — le langage CAIA n'est pas impératif au sens classique.**

Le corps d'une fonction est constitué de clauses gardées.

Une clause typique :

```text
conditions
    =>
actions / productions
```

La position textuelle des clauses n'est pas nécessairement leur ordre d'exécution dans le C généré.

`FNDEXPR` en fournit une preuve directe : le compilateur réordonne les calculs pour satisfaire les dépendances tout en conservant les priorités sémantiques.

## 2. Modèle d'exécution provisoire

Une procédure CAIA peut être vue comme :

```text
ensemble de clauses
+ variables initialement connues ou inconnues
+ dépendances entre clauses
+ priorités particulières
```

Le compilateur :

```text
analyse les dépendances
        ↓
détermine un ordre d'évaluation
        ↓
génère un CFG impératif
        ↓
if / goto / loops en C
```

Il reste à déterminer si la sémantique source permet réellement un point fixe général ou seulement un ordonnancement statique suffisamment riche.

## 3. Clauses

Forme générale observée :

```text
P1,P2,...,Pn => Q1,Q2,...,Qm
```

La partie gauche représente une conjonction de conditions, bindings ou calculs nécessaires.

La partie droite produit des valeurs ou effets.

Exemple :

```text
R(X)=ATT => RES:=S(X)
```

## 4. Priorités de clauses

Deux constructions particulières sont observées :

```text
DABORD ...
ENDERNIER ...
```

**DÉDUIT :**

- `DABORD` marque des règles devant établir des connaissances prioritaires.
- `ENDERNIER` marque des règles de finalisation.

Le détail exact de leur ordonnancement relatif doit encore être spécifié formellement.

## 5. Variables et état inconnu

Une variable peut être non déterminée.

Constructions :

```text
INCONNU(X)
CONNU(X)
```

Le C généré utilise notamment une valeur sentinelle `incon`.

L'échec à produire une valeur peut faire partie du fonctionnement normal.

## 6. Affectation

Deux formes doivent être distinguées.

Affectation de variable :

```text
X := valeur
```

Mise à jour d'une relation/propriété :

```text
EXPR(X)=L
```

Dans une garde, une forme comme :

```text
R(X)=ATT
```

est un test d'égalité/unification selon le contexte.

La distinction exacte entre affectation relationnelle, test et unification devra être affinée.

## 7. Appels de procédures

Une procédure logique déclare :

```text
DONNEES [...]
RESULTATS [...]
```

Exemple :

```text
DONNEES [R,BA,XP,Q]
RESULTATS [T]
```

Les appels permettent de renommer explicitement données et résultats :

```text
CORRECTIF A->R BA ... TT<-T
```

Lecture actuellement déduite :

```text
valeur_locale -> paramètre_formel_d'entrée
variable_locale <- résultat_formel
```

L'omission des flèches est permise lorsque les noms coïncident.

## 8. Variantes de signature

Une même fonction logique peut posséder plusieurs variantes :

```text
0 ... DONNEES [...] RESULTATS [...]
1 ... DONNEES [...] RESULTATS [...]
2 ...
```

Celles-ci peuvent devenir :

```text
FOO0.c
FOO1.c
FOO2.c
```

Il ne faut donc pas considérer les suffixes numériques comme des fonctions conceptuellement indépendantes.

## 9. Inlining / expansion

Certaines fonctions logiques n'ont aucune fonction C autonome.

`FND` en est l'exemple établi.

Son corps est incorporé dans des appelants comme :

```text
FNDO
FNDE
FNDC
```

Le critère de cette expansion reste inconnu.

## 10. Accès aux propriétés

La syntaxe :

```text
P(X)
```

peut représenter une propriété/relation et **ne signifie pas nécessairement un appel de procédure**.

Exemples :

```text
TYPE(A)
PERE(N)
META(F)
REPLACE(K)
```

Les procédures, en revanche, sont typiquement invoquées sous forme :

```text
NATFNA A BA M
```

Cette distinction est fondamentale pour un futur parser.

## 11. Appartenance

Formes observées :

```text
X.APP.E
X.NAPP.E
```

Interprétation :

```text
APP  : appartient à
NAPP : n'appartient pas à
```

Dans certaines clauses, `X.APP.E` peut aussi introduire successivement les bindings correspondant aux éléments de `E`.

## 12. Collections

Constructions observées :

```text
SE[...]
BAG[...]
SGLT(...)
VIDE
UNION[...]
MOENS(...)
CARD(...)
```

`SE` construit un ensemble par compréhension.

`BAG` construit une collection avec multiplicité.

## 13. Quantification et génération

Constructions observées :

```text
POURTOUS[...]
NONEX[...]
UN[...]
```

Interprétation provisoire :

```text
POURTOUS
    appliquer pour tous les bindings valides

NONEX
    aucune solution/binding ne satisfait l'expression

UN
    existence/sélection d'un binding
```

Le comportement exact de `UN` doit encore être spécifié.

## 14. Conditionnelles

Forme :

```text
COND[
    condition1 : valeur1,
    condition2 : valeur2,
    : valeur_par_défaut
]
```

Il s'agit d'une expression conditionnelle.

## 15. Pattern matching

Construction centrale :

```text
MATCHE(expression, motif)
```

Les motifs peuvent inclure des variables de catégories particulières :

```text
\V:*V
\O:*F
\K:**
```

et des gardes :

```text
\O:*F;[NARG(F)=2]
```

On rencontre aussi :

```text
fonction"..."
ordre"..."
bloc"..."
MATCHESET(...)
```

**DÉDUIT — le pattern matching constitue l'un des mécanismes principaux de variation de comportement du langage.**

## 16. Création d'objets

Construction :

```text
CREE(...)
```

Elle fabrique une représentation CAIA correspondant à l'expression donnée.

Elle est largement utilisée par les transformations.

## 17. Mutations relationnelles

Opérations observées :

```text
PLUS relation valeur
OTE relation valeur
ENLEVE relation
```

Elles modifient explicitement les relations/collections.

Le langage n'est donc pas purement fonctionnel.

## 18. Métadonnées et réflexion

Le programme peut inspecter le métamodèle via :

```text
TYPE
OBJTYPE
ENSTYPE
ATTRIBUT
NC
NF
XALNOM
ZALNOM
SETFCT
SETCREE
EXECUTABLE
NARG
...
```

Cette réflexion est utilisée directement par le compilateur CAIA.

## 19. Types et représentations

Le langage ne semble pas posséder un système de types statiques conventionnel.

Il manipule néanmoins :

```text
types sémantiques
catégories de valeurs
modes de représentation
métadonnées de fonctions
```

Une variable peut accumuler plusieurs propriétés dans `E2`.

La consolidation produit notamment :

```text
@EXPR
@NEXPR
@AUTROBJ
```

## 20. Échec

Une condition ou un appel peut ne pas produire de valeur.

Ce cas est généralement traité comme une non-applicabilité normale plutôt qu'une erreur.

Le C généré utilise notamment :

```text
v[102]
```

pour signaler certains échecs d'appels.

## 21. Diagnostics

Mécanismes observés :

```text
MESSAGE
MESPION
EDITE
ERR*
```

Ils sont distincts de l'échec normal d'une clause.

## 22. Sucre syntaxique

Le langage possède des constructions de haut niveau qui sont réécrites avant ou pendant la traduction.

Exemples :

```text
IS EMPTY
IS EVEN
IS ODD
NOT(...)
[A TO B]
THEREIS ...
FORALL ...
IS @KNOWN
```

Le sucre peut être **sémantiquement informé** : la forme produite peut dépendre des propriétés connues dans `BA`.

## 23. Absence de séquentialité stricte

Une propriété essentielle de la v0.1 est :

```text
ordre textuel des clauses
≠
ordre d'exécution C
```

Le compilateur peut déplacer un calcul en amont lorsqu'il est nécessaire pour déterminer les dépendances d'une autre clause.

Le source exprime donc davantage :

```text
ce qui doit être vrai
ce qui peut être calculé
ce qui doit être produit
```

que :

```text
faire A
puis B
puis C
```

## 24. Ce qui reste ouvert

Les principaux points encore non spécifiés sont :

```text
sémantique formelle exacte de =>
règles de priorité exactes de DABORD / ENDERNIER
existence éventuelle d'un calcul de point fixe
sémantique exacte de UN
portée et durée de vie des variables
critère d'inlining comme FND
règles exactes de choix entre variantes 0/1/2...
nature exacte de FORCE
sémantique complète des modes @COURANT/@CREE/@MATCHE
gestion complète des erreurs
modèle de concurrence éventuel — rien ne l'indique pour l'instant
```

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

-----


Maj en attente

Une clause CAIA a la forme G1,...,Gn => A1,...,Am. Les expressions de gauche constituent les conditions et producteurs de bindings nécessaires à l'activation de la clause. Les expressions de droite constituent les productions ou effets de la clause. Une clause n'est pas une instruction placée à une position séquentielle : le compilateur peut la déplacer relativement aux autres clauses tant que leurs dépendances et contraintes de priorité sont respectées.

--
Donc INCONNU(R) peut être spécifié provisoirement comme :

garde vraie lorsque la valeur n'a pas été produite par les producteurs applicables précédents dans l'ordre sémantique calculé.

Le mot « précédents » désigne ici l'ordre calculé, pas nécessairement l'ordre textuel.

Cela explique une grande partie du style CAIA :

règles spécialisées produisent X
INCONNU(X) => valeur par défaut

Il n'y a nul besoin d'un else.


--
Cela suggère une hiérarchie :
phase DABORD
phase normale
phase ENDERNIER

mais potentiellement à plusieurs niveaux de portée.

C'est un point à garder comme question ouverte plutôt que de l'aplatir prématurément.

DABORD    = contrainte de placement dans une phase antérieure
ENDERNIER = contrainte de placement dans une phase postérieure

--
Il faut donc distinguer trois états :

succès avec une valeur
absence / inconnu normal dans le modèle CAIA
échec d'un appel de procédure (`v[102]` dans la cible C)
--

ÉTAT
    environnement de valeurs/bindings
    + heap relationnel CAIA
    + état connu/inconnu des résultats

PROCÉDURE
    ensemble de clauses réparties éventuellement
    entre plusieurs classes de priorité

CLAUSE
    garde/producteurs -> productions/effets

COMPILATION
    1. construire les dépendances entre producteurs et consommateurs
    2. respecter les phases DABORD / normale / ENDERNIER
    3. organiser les alternatives produisant la même valeur
    4. placer les gardes INCONNU après les producteurs pertinents
    5. transformer parcours/générateurs en boucles
    6. éventuellement développer certaines procédures
    7. émettre un CFG impératif C
--

Cela précise fortement notre sémantique de APP
Je mettrais maintenant dans syslang.md, avec statut OBSERVÉ pour le C généré de PROCEDURALISE, puis DÉDUIT comme règle générale :
X.APP.E est un générateur qui lie successivement X aux éléments de E. L’implémentation observée parcourt directement la représentation courante de la collection et ne construit pas de snapshot préalable. Les mutations de E intervenant pendant son parcours peuvent donc affecter les bindings futurs. En particulier, un élément ajouté à la suite de la collection pendant l’énumération peut être visité au cours de la même invocation.

Puis une conséquence séparée :
Une procédure CAIA peut ainsi exprimer une saturation locale sans boucle explicite : des clauses génératrices peuvent ajouter de nouveaux éléments à la relation qu’elles énumèrent, lesquels seront ensuite soumis aux mêmes clauses.

C’est beaucoup plus fort et beaucoup plus précis que notre ancienne hypothèse « peut-être un calcul de point fixe ».
---
1. ordonnanceur statique
   ENTRAINE, FNDEXPR, NATFNDA...
   → le compilateur organise les clauses selon leurs dépendances

2. générateurs dynamiques
   APP, POURTOUS, UN, pattern matching...
   → le programme C énumère des solutions à l'exécution

3. générateurs sur collections mutées
   PROCEDURALISE
   → worklist / saturation locale implicite
---

