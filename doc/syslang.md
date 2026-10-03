Je propose aussi une convention dès la v0.1 :

- **OBSERVÉ** : directement attesté par les listings CAIA ou le C généré.
- **DÉDUIT** : interprétation fortement soutenue par plusieurs observations.
- **HYPOTHÈSE** : explication plausible mais non encore établie.

---

# Langage système CAIA — spécification v0.1

## 1. Nature du langage

**OBSERVÉ — le langage CAIA n'est pas impératif au sens classique.**

Le corps d'une fonction est constitué de clauses gardées.

Une clause a la forme :

```text
G1,...,Gn => A1,...,Am
```

La partie gauche contient des gardes, mais aussi des producteurs de bindings nécessaires à l'activation de la clause. La partie droite contient les productions ou effets.

Une clause n'est pas une instruction séquentielle placée à cet endroit du texte. Le compilateur peut réordonner les calculs selon les dépendances et les contraintes de priorité.

**OBSERVÉ —** `FNDEXPR`, `NATFNDA` et `ENTRAINE` fournissent des couples source/C importants pour l'étude de cet ordonnancement. Dans `NATFNDA`, notamment, une valeur `KK` utilisée textuellement avant sa production est calculée auparavant dans le C généré.

## 2. Modèle d'exécution provisoire

**Modèle opérationnel provisoire — DÉDUIT des listings et du C généré, et non définition formelle démontrée du compilateur.**

Une procédure CAIA peut être vue comme :

```text
ÉTAT
    environnement de valeurs/bindings
    + heap relationnel CAIA
    + état connu/inconnu des résultats

PROCÉDURE
    ensemble de clauses
    + classes éventuelles de priorité

CLAUSE
    gardes/producteurs -> productions/effets
```

Le modèle provisoire du travail du compilateur est :

```text
1. déterminer les dépendances producteurs/consommateurs
2. respecter les phases DABORD / normale / ENDERNIER
3. organiser les alternatives pouvant produire une même valeur
4. positionner les gardes INCONNU après les producteurs pertinents
5. transformer générateurs/parcours en boucles
6. éventuellement développer certaines procédures (exemple : FND)
7. émettre un CFG impératif C (if, goto, boucles)
```

Cette vue rassemble des comportements distincts :

**A. Ordonnancement statique — OBSERVÉ.** `ENTRAINE`, `FNDEXPR` et `NATFNDA` montrent que le compilateur organise clauses et calculs selon leurs dépendances. Cet ordonnancement peut produire un CFG sans boucle.

**B. Générateurs dynamiques — OBSERVÉ.** `APP`, `POURTOUS`, `UN` et le pattern matching peuvent énumérer des solutions ou bindings à l'exécution. Une SCC ou un `goto` arrière dans le C ne prouve donc pas un calcul de point fixe : cela peut représenter une énumération ou du backtracking.

**C. Générateurs sur collections mutées — OBSERVÉ pour `PROCEDURALISE`.** L'énumération d'une collection qui est également modifiée peut former une worklist implicite et produire une saturation locale. Cela ne démontre pas l'existence d'un moteur général de point fixe.

## 3. Clauses

Forme générale observée :

```text
P1,P2,...,Pn => Q1,Q2,...,Qm
```

La partie gauche représente une conjonction de gardes et de producteurs de bindings ou calculs nécessaires à l'activation de la clause.

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

**DÉDUIT —** les observations sur `FNDEXPR`, `NATFNDA` et `TRADNAM` soutiennent le modèle suivant :

- `DABORD` impose un placement dans une phase antérieure.
- `ENDERNIER` impose un placement dans une phase postérieure.

Modèle provisoire :

```text
phase DABORD
phase normale
phase ENDERNIER
```

Ces annotations apparaissent aussi dans des constructions imbriquées. Il ne faut donc pas les réduire à un simple prologue et épilogue de fonction : leur portée peut être plus locale, et plusieurs niveaux de portée restent possibles.

## 5. Variables et état inconnu

Une variable peut être non déterminée.

Constructions :

```text
INCONNU(X)
CONNU(X)
```

Le C généré utilise notamment une valeur sentinelle `incon`.

**DÉDUIT —** `INCONNU(X)` sert fréquemment de garde de fallback. Provisoirement, elle est vraie lorsque `X` n'a pas été produit par les producteurs applicables antérieurs dans l'ordre sémantique calculé. « Antérieurs » désigne cet ordre calculé, pas nécessairement l'ordre du texte source.

Le style suivant constitue un équivalent déclaratif fréquent d'un `else` :

```text
règles spécialisées => X := ...
INCONNU(X) => X := valeur_par_défaut
```

Cette description reste provisoire : la sémantique formelle générale de `INCONNU` n'est pas établie. L'absence de valeur peut faire partie du fonctionnement normal.

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

**OBSERVÉ — C généré de `PROCEDURALISE`.** `X.APP.E` y est compilé comme un parcours direct de la représentation de la collection. En particulier, `X.APP.THEN(N)` parcourt directement la chaîne représentant `THEN(N)`. Des actions de la même procédure peuvent exécuter `PLUS THEN(N) ...` et `OTE THEN(N) X`; `PLUSC0` ajoute des éléments à la collection existante.

Dans cet exemple, l'énumération de `THEN(N)` ne travaille pas sur un snapshot préalable : elle parcourt la structure courante et les mutations peuvent affecter les bindings futurs.

**DÉDUIT —** `X.APP.E` est généralement un générateur sur une collection vivante : un élément ajouté à la suite pendant l'énumération peut être visité dans la même invocation. La généralisation reste prudente, car d'autres représentations de `E` peuvent avoir un comportement différent.

**Conséquence observée dans `PROCEDURALISE` :** une procédure peut exprimer une saturation locale sans boucle explicite dans le source. Des clauses génératrices ajoutent des éléments à la relation qu'elles énumèrent, puis ces éléments deviennent candidats aux mêmes clauses. On peut décrire cela comme une worklist implicite ou un parcours vivant, sans en faire un moteur général de point fixe.

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

Il faut distinguer trois cas :

```text
succès avec une valeur
absence / valeur inconnue normale dans le modèle CAIA
échec d'un appel, signalé dans le C par v[102]
```

`AJUSTFIN` illustre la différence entre le résultat sémantique (`@OUI` ou `@NON`) et l'échec de l'appel lui-même. Il ne faut pas assimiler automatiquement `incon`, un non-match et `v[102]`.

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

### Note méthodologique sur le C généré

La structure du C doit toujours être confrontée au listing CAIA correspondant. Beaucoup de labels et de `goto` ne signifient pas qu'il y a une boucle : le CFG de `ENTRAINE` est acyclique malgré ses nombreux labels. `EVLJ` est essentiellement un dispatch. Les SCC de `POSTMORTEM` correspondent notamment au générateur explicite `C.APP.[1 TO 3]`, et des SCC issues du pattern matching peuvent représenter l'énumération ou le backtracking.

## 24. Ce qui reste ouvert

Les principaux points encore non spécifiés sont :

```text
sémantique formelle exacte de =>
portée et niveaux éventuels des phases DABORD / normale / ENDERNIER
existence ailleurs dans CAIA d'un mécanisme plus général de réactivation ou de calcul de point fixe
sémantique exacte de UN
portée et durée de vie des variables
critère d'inlining comme FND
règles exactes de choix entre variantes 0/1/2...
nature exacte de FORCE
sémantique complète des modes @COURANT/@CREE/@MATCHE
gestion complète des erreurs
modèle de concurrence éventuel — rien ne l'indique pour l'instant
```

État actuel concernant les calculs répétés : aucune preuve d'un moteur générique de point fixe ; preuves d'ordonnancement statique, de générateurs dynamiques et d'une saturation locale obtenue par mutation d'une collection pendant son énumération.

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

