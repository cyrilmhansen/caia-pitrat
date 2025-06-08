# CAIA Module Pseudocode Translation

This document provides a translation of selected CAIA modules from their original rule-based language (found in `doc/modules.txt`) into commented pseudocode. The aim is to make the logic of these modules more generally understandable.

**Note on Translation:**
- The CAIA language is dense and relies on context, global variables, and symbolic atoms.
- This pseudocode is an interpretation and may not capture all nuances of the original CAIA execution.
- Variable names are kept similar to the original for traceability.
- `->` in CAIA rules often indicates passing parameters or a data flow, represented here as function arguments or assignments.
- `.APP.` is interpreted as membership, element access, or property access.
- Symbolic atoms like `@OUI`, `@NBRE` are treated as predefined constants or types.
- Global variable usage is noted in comments.

---

## Module: $ACHEVE

**Original Date:** 10-4-2020
**Type:** EXPERTISE DE BASE (Basic Expertise)

**Purpose (Inferred):** This module seems to manage the completion or achievement process for a task or problem `X`. It handles cases where `X` has one child (delegating to it) or multiple children (performing a form of iterative deepening or backtracking, and calculating success percentages).

**Global Variables Used:** `S`, `L`, `X`, `N`

**Interface 0:**
*   Called by: `$PCTREUSSI`, `$VEILLE`
*   Input Data: None (VIDE)
*   Output Results: `N` (likely a success percentage or count)

```pseudocode
FUNCTION ACHEVE_interface_0():
    // Corresponds to the "ENDERNIER =>N:=DIV(NUM(S),10)" rule,
    // which is the last one and likely the result provider for interface 0.
    // Assumes S is a global structure with a NUM property.
    // This interface seems to be called to get a result (N) based on prior state of S.

    N = NUM(Global.S) / 10;
    RETURN N;
ENDFUNCTION
```

**Interface 1:**
*   Called by: `$ACHEVE` (recursive call)
*   Input Data: `X_in`, `S_in`, `L_in`
*   Output Results: None (VIDE) - likely modifies global state.

```pseudocode
FUNCTION ACHEVE_interface_1(X_param, S_param, L_param):
    // Setup local context based on parameters and globals
    // Note: Direct mapping of X, S, L from CAIA to local variables is complex due to potential
    // aliasing with globals. Assuming parameters take precedence or shadow globals for this scope.
    // Let's use X_local, S_local, L_local to differentiate if needed, though CAIA might directly use globals.

    // Initialize local X to the input parameter X_param
    X = X_param; // This X is local to this function execution context
    // Initialize local S to the input parameter S_param
    S = S_param; // This S is local to this function execution context
    // Initialize local L to the input parameter L_param
    L = L_param; // This L is local to this function execution context

    // Rule: CARD(FILS(X))=1,UN[Z;Z.APP.FILS(X)]=>ACHEVE Z->X S L
    children_of_X = GET_CHILDREN(X);
    IF CARDINALITY(children_of_X) == 1 THEN
        Z_unique = GET_UNIQUE_ELEMENT(children_of_X);
        // Recursive call to ACHEVE (likely interface 1 itself, or another part of ACHEVE)
        // The parameters Z, X, S, L are passed.
        // It's ambiguous if X here is the original X_param or the current X.
        // Assuming X_param is the intended parent for Z.
        ACHEVE_interface_1(Z_unique, X_param, S, L); // Recursive call
        RETURN; // End processing for this branch
    ENDIF

    // Rule: =>S:=(NUM:0)
    // This rule seems to execute if the first one doesn't.
    // It re-initializes S (if S is a structure passed by reference or a global).
    // If S_param was by value, this would be a local S. Given "VARIABLES GLOBALES [`S`,...]", S is likely global or modified by reference.
    // Assuming S is a structure that can hold a NUM property.
    S.NUM = 0; // Modifies the S visible in this scope (passed in or global)

    // Rule: P=CARD(FILS(X)),P>1,H=CML[1;Y.APP.FILS(X),ETAT(Y).APP.[@SOLUTION,@ECHEC,@INDETERMINATION]],
    //       LL=FOIS(L,P),LL<100000=>BT NUM(S) DIV(FOIS(10000,H),LL),
    //       POURTOUS[Z.APP.FILS(X),ETAT(Z)=@INCONNU=>ACHEVE Z->X S LL->L]
    P = CARDINALITY(children_of_X); // children_of_X was fetched earlier
    IF P > 1 THEN
        H = 0; // CML seems to be a counter or accumulator
        // CML[1; Y.APP.FILS(X), ETAT(Y).APP.[@SOLUTION,@ECHEC,@INDETERMINATION]]
        // This looks like: count children of X whose state is SOLUTION, ECHEC, or INDETERMINATION.
        FOREACH Y_child IN children_of_X DO
            IF GET_STATE(Y_child) == @SOLUTION OR GET_STATE(Y_child) == @ECHEC OR GET_STATE(Y_child) == @INDETERMINATION THEN
                H = H + 1; // Or some weighted sum based on CML's first argument '1'
            ENDIF
        ENDFOREACH

        LL = L * P; // FOIS is multiplication

        IF LL < 100000 THEN
            // BT NUM(S) DIV(FOIS(10000,H),LL)
            // BT might mean "BackTrack" or "Branch Terminal" or simply "set value".
            // It could be an update to S.NUM or a call to a function BT.
            // Assuming it updates S.NUM for now, as S.NUM is used later.
            IF LL != 0 THEN // Avoid division by zero
                S.NUM = S.NUM + (10000 * H) / LL; // Or some other update logic for BT
            ENDIF

            // POURTOUS[Z.APP.FILS(X),ETAT(Z)=@INCONNU=>ACHEVE Z->X S LL->L]
            FOREACH Z_child IN children_of_X DO
                IF GET_STATE(Z_child) == @INCONNU THEN
                    // Recursive call, passing the new LL as the L parameter
                    ACHEVE_interface_1(Z_child, X, S, LL);
                ENDIF
            ENDFOREACH
            RETURN; // End processing for this branch
        ENDIF
    ENDIF

    // Rule: =>L:=1
    // This executes if the preceding complex rule's conditions (P>1 and LL<100000) were not met,
    // or if the first rule (CARD(FILS(X))=1) was not met.
    L = 1; // Resets L (local or global L depending on scope)

    // Rule: =>X:=ESSAI
    // Assigns a global constant/object @ESSAI to X.
    X = @ESSAI; // Modifies local X or global X

    // The "ENDERNIER =>N:=DIV(NUM(S),10)" rule is associated with Interface 0.
    // For Interface 1, there's no explicit RESULTAT, so actions modify state.
    RETURN;

ENDFUNCTION

// Helper function interpretations (these are not part of CAIA but assumed for pseudocode clarity):
// GET_CHILDREN(object): Returns a list/set of children of the object.
// CARDINALITY(collection): Returns the number of elements in the collection.
// GET_UNIQUE_ELEMENT(collection): Returns the single element if cardinality is 1.
// GET_STATE(object): Returns the state of the object (e.g., @SOLUTION, @INCONNU).
// @ESSAI: A global constant representing an initial problem or state.
// Global.S: Refers to the global variable S.
```

---

## Module: $AFP

**Original Date:** 10-4-2020

**Purpose (Inferred):** This module seems to be involved in constraint propagation or a forward chaining process. It deals with numerical properties (`NUM`), entities (`A`, `B`, `C`), and their relationships, potentially adding new constraints or detecting contradictions. The name `$AFP` might stand for "Application de Fonctions de Prédilection" (Application of Predilection Functions) or something similar related to forward processing.

**Global Variables Used:** `ND`, `EA`, `X`, `EE`, `S`, `EC`, `T`, `A`, `B`, `C`, `HIST` (many of these are also listed as DONNEES for interface 0, suggesting they are passed in and potentially modified if they are structures/references).

**Interface 0:**
*   Called by: `$NOUVCONTRB`
*   Input Data: `A_in`, `B_in`, `C_in`, `HIST_in`, `T_in`
*   Output Results: None (VIDE) - modifies global state.

```pseudocode
FUNCTION AFP_interface_0(A_param, B_param, C_param, HIST_param, T_param):
    // Initialize local context from parameters or globals
    // CAIA's scoping is complex; assuming parameters initialize local versions or shadow globals.
    A = A_param;
    B = B_param;
    C = C_param;
    HIST = HIST_param;
    T = T_param; // T is also a global, this sets its initial value for this run

    // Rule 1: 999.NAPP.C,OU[0.NAPP.C,-1.NAPP.C]=>ND:=NDD(A)
    // .NAPP. might mean "is not a property of" or "is not in". C is a collection.
    // OU is OR. NDD(A) is likely "Noeud De Donnée" (Data Node) for A.
    IF (NOT IS_PROPERTY_OF(999, C) OR IS_PROPERTY_OF(0, C) OR IS_PROPERTY_OF(-1, C)) THEN
        Global.ND = GET_DATA_NODE(A); // Assign to global ND
    ENDIF

    // Rule 2: =>EA:=SE[COND[PREM(ND)=@OUI,YY=-1:1,:YY];YY.APP.C,YY.NAPP.EE,
    // NONEX[PREM(ND)=@OUI,ABS(YY)>1]]
    // SE is a set constructor. COND is a conditional. PREM(ND) might be "first element of ND".
    // YY.APP.C means YY is in C. YY.NAPP.EE means YY is not in EE (global or local).
    // This rule is complex and constructs a set EA.
    temp_EA_set = EMPTY_SET;
    // Interpretation of COND:
    // IF PREM(Global.ND) == @OUI THEN
    //   FOR YY IN [-1, 1] DO // Assuming this range based on context
    //     IF IS_ELEMENT_OF(YY, C) AND NOT IS_ELEMENT_OF(YY, Global.EE) AND NOT (PREM(Global.ND) == @OUI AND ABS(YY) > 1) THEN
    //       ADD_TO_SET(temp_EA_set, YY);
    //     ENDIF
    //   ENDFOR
    // ELSE
    //   FOREACH YY IN C DO
    //     IF NOT IS_ELEMENT_OF(YY, Global.EE) AND NOT (PREM(Global.ND) == @OUI AND ABS(YY) > 1) THEN // This NONEX is tricky
    //       ADD_TO_SET(temp_EA_set, YY);
    //     ENDIF
    //   ENDFOREACH
    // ENDIF
    // This is a highly speculative translation of the SE[...] construct.
    // For now, let's represent it as a call to a hypothetical function reflecting its complexity.
    Global.EA = CONSTRUCT_SET_EA(Global.ND, C, Global.EE);

    // Rule 3: XX.APP.ENSFPREM(ND),NUM(XX)=B=>X:=XX,EE:=INTERDIT(X)
    // ENSFPREM(ND) is likely a set of "faits premiers" (primary facts) of ND.
    // If an element XX in this set has NUM(XX) equal to B_param...
    FOREACH XX_element IN GET_PRIMARY_FACTS(Global.ND) DO
        IF GET_NUM_PROPERTY(XX_element) == B THEN
            Global.X = XX_element;
            Global.EE = GET_INTERDICTED_SET(Global.X); // INTERDIT(X)
            BREAK_FOREACH; // Assuming only one such XX is processed
        ENDIF
    ENDFOREACH

    // Rule 4: INCONNU(X),XX=(NUM:B,ENSNUM:EA)=>PLUS ENSFPREM(ND) XX,S:=@OUI,EC:=EA
    // If X (global) is still unknown (not set by rule 3)
    IF IS_UNKNOWN(Global.X) THEN
        XX_new_fact = CREATE_STRUCTURE(NUM: B, ENSNUM: Global.EA);
        ADD_TO_SET(GET_PRIMARY_FACTS(Global.ND), XX_new_fact); // PLUS ENSFPREM(ND) XX
        Global.S = @OUI;
        Global.EC = Global.EA;
    ENDIF

    // Rule 5: EB=ENSNUM(X),AFPA EA EB EX<-EX,AFPA EA->EB EB->EA EZ<-EX,CMFFLISR UNION[EX,EZ]->EA EY<-EY,
    // NON(EGALENS(EB,EY))=>ENSNUM(X)=EY,EC:=EY,S:=@OUI
    // This is a complex rule involving calls to other modules/functions: AFPA, CMFFLISR
    // and assignments based on their results (indicated by <-).
    IF Global.X IS NOT UNKNOWN THEN // Ensure X is known
        EB_current = GET_ENSNUM_PROPERTY(Global.X);

        // EX_val = AFPA(Global.EA, EB_current, Global.EX); // EX is modified by AFPA
        // EZ_val = AFPA(Global.EA, EB_current, Global.EZ); // EZ is modified by AFPA. Note: EA->EB, EB->EA are argument passing styles
        // For simplicity, assume AFPA returns a structure containing EX and EZ
        AFPA_result1 = AFPA_variant1(Global.EA, EB_current, Global.EX); // EX is output
        EX_updated = AFPA_result1.EX_out;

        AFPA_result2 = AFPA_variant2(Global.EA, EB_current, Global.EZ); // EZ is output, EA and EB might be swapped as inputs
        EZ_updated = AFPA_result2.EZ_out;

        EA_intermediate = UNION(EX_updated, EZ_updated);
        EY_val = CMFFLISR(EA_intermediate, Global.EY); // EY is modified

        IF NOT ARE_SETS_EQUAL(EB_current, EY_val) THEN
            SET_ENSNUM_PROPERTY(Global.X, EY_val);
            Global.EC = EY_val;
            Global.S = @OUI;
        ENDIF
    ENDIF

    // Rule 6: CARD(EC)=0=>CONTRADICTION HIST
    IF CARDINALITY(Global.EC) == 0 THEN
        CONTRADICTION_module(HIST); // Call to CONTRADICTION module
    ENDIF

    // Rule 7: S=@OUI=>MESPION [1,2] @AFP A B EC .h HIST,AJOUTER @VERIFOEP->TY ND->VB HIST,
    // POURTOUS[RK.APP.CONTR(ND)=>AJOUTER @VERIFPR->TY RK->VB HIST]
    IF Global.S == @OUI THEN
        MESPION_trace(1, 2, "@AFP", A, B, Global.EC, ".h", HIST); // Debug trace
        ADD_STRUCTURE_TO_HIST(HIST, CREATE_STRUCTURE(TY: @VERIFOEP, VB: Global.ND)); // AJOUTER ... HIST
        FOREACH RK_element IN GET_CONTR_PROPERTY(Global.ND) DO
            ADD_STRUCTURE_TO_HIST(HIST, CREATE_STRUCTURE(TY: @VERIFPR, VB: RK_element));
        ENDFOREACH
    ENDIF

    // Rule 8: V(111)=0,S=@OUI=>ARCHIVE @AFP->T A B->IB EC
    IF GET_GLOBAL_V_ARRAY(111) == 0 AND Global.S == @OUI THEN
        ARCHIVE_module("@AFP", A, B, Global.EC); // T, IB are implicit target slots in ARCHIVE
    ENDIF

    // Rule 9: INCONNU(X)=>EE:=VIDE
    IF IS_UNKNOWN(Global.X) THEN
        Global.EE = EMPTY_SET;
    ENDIF

    // Rule 10: CARD(EC)=1,UN[I;I.APP.EC],T=@OUI=>CONTRAINTE CREE(FP(%A,VLN(B),VLN(I))))
    IF CARDINALITY(Global.EC) == 1 THEN
        I_element = GET_UNIQUE_ELEMENT(Global.EC);
        IF Global.T == @OUI THEN // T here refers to the global T, potentially modified by the last rule
            new_constraint = CREATE_FP_CONSTRAINT(A, GET_NUMERIC_VALUE(B), GET_NUMERIC_VALUE(I_element));
            ADD_CONSTRAINT_module(new_constraint); // Call to CONTRAINTE module
        ENDIF
    ENDIF

    // Rule 11: CARD(EC)>1,I=MINI[ABS(J);J.APP.EC],I>0,T=@OUI=>CONTRAINTE CREE(FP(%A,VLN(B),VLN(MOINS(I))))
    IF CARDINALITY(Global.EC) > 1 THEN
        min_abs_J = MAX_INT;
        selected_I = 0;
        FOREACH J_element IN Global.EC DO
            IF ABS(J_element) < min_abs_J THEN
                min_abs_J = ABS(J_element);
                selected_I = J_element; // The actual J, not its absolute value
            ENDIF
        ENDFOREACH

        IF selected_I > 0 AND Global.T == @OUI THEN // Check if I (original value) > 0
            new_constraint = CREATE_FP_CONSTRAINT(A, GET_NUMERIC_VALUE(B), GET_NUMERIC_VALUE(-selected_I)); // VLN(MOINS(I))
            ADD_CONSTRAINT_module(new_constraint);
        ENDIF
    ENDIF

    // Rule 12: =>T:=@OUI
    // This rule always executes as a final step for this interface if not returned earlier.
    Global.T = @OUI; // Sets the global T

    RETURN; // Interface 0 has no explicit results, modifies globals
ENDFUNCTION

// Helper function interpretations (these are not part of CAIA but assumed for pseudocode clarity):
// IS_PROPERTY_OF(value, object): Checks if value is a property or in a specific part of C.
// GET_DATA_NODE(object): Returns a data node associated with the object.
// CONSTRUCT_SET_EA(nd, c, ee): Represents the complex SE[...] logic.
// GET_PRIMARY_FACTS(data_node): Returns a set of primary facts.
// GET_NUM_PROPERTY(object): Returns a numerical property.
// GET_INTERDICTED_SET(object): Returns a set of interdicted items for an object.
// IS_UNKNOWN(object_or_var): Checks if an object/variable is in an unknown/uninitialized state.
// CREATE_STRUCTURE(...): Creates a CAIA data structure.
// ADD_TO_SET(set, element): Adds an element to a set.
// GET_ENSNUM_PROPERTY(object): Gets the ENSNUM property.
// AFPA_variant1 / AFPA_variant2 : Hypothetical functions for the AFPA calls with different data flows.
// UNION(set1, set2): Returns the union of two sets.
// CMFFLISR(set1, set2_modified_by_ref): Calls CMFFLISR, which modifies its second argument.
// ARE_SETS_EQUAL(set1, set2): Compares two sets.
// SET_ENSNUM_PROPERTY(object, value): Sets the ENSNUM property.
// CONTRADICTION_module(history): Calls the CONTRADICTION module.
// MESPION_trace(...): Outputs debug information.
// ADD_STRUCTURE_TO_HIST(history, structure): Adds a structure to the history.
// GET_CONTR_PROPERTY(data_node): Gets the CONTR property.
// ARCHIVE_module(type, key1, key2, data): Archives data.
// GET_GLOBAL_V_ARRAY(index): Accesses the global v[] array.
// CREATE_FP_CONSTRAINT(param1, param2, param3): Creates a specific type of constraint.
// ADD_CONSTRAINT_module(constraint): Adds a new constraint to the system.
// ABS(value): Absolute value.
// MAX_INT: A very large integer for finding minimums.
// GET_NUMERIC_VALUE(value_or_object): Extracts a numeric value.

// Note on AFPA calls:
// AFPA EA EB EX<-EX : EA and EB are inputs, EX is input/output.
// AFPA EA->EB EB->EA EZ<-EX : This syntax is unusual. It might mean:
//   Input1 = EA, Input2 = EB, InputOutput = EZ (where result is stored in EZ, EX is old value of EZ)
//   OR it could mean Input1 = current EA, Input2 = current EB, but for the call, use EA where EB was and EB where EA was.
//   The pseudocode uses a simplified interpretation for now (AFPA_variant2).
```

**Interface 1:**
*   Called by: `ATOME211T`, `ATOME210T`, `ATOME140T`, `ATOME147T`, `ATOME224T`
*   Input Data: `HIST_in`, `A_in`, `B_in`, `C_in`
*   Output Results: None (VIDE)

```pseudocode
FUNCTION AFP_interface_1(HIST_param, A_param, B_param, C_param):
    // This interface is called by other modules (ATOMExxxT).
    // It seems to be a simplified entry point or a variant that might initialize T differently
    // or skip some initial setup compared to Interface 0.

    // Initialize T to @OUI by default as per the last rule of Interface 0,
    // as Interface 1 doesn't receive T as input.
    Global.T = @OUI;

    // Call the main logic of AFP, similar to Interface 0, but with T preset.
    // This assumes that the core logic of AFP is mostly shared.
    // Parameters A, B, C, HIST would be set from A_param, B_param, C_param, HIST_param.

    A = A_param;
    B = B_param;
    C = C_param;
    HIST = HIST_param;

    // Re-execute the core logic of AFP (rules 1-11 from Interface 0)
    // Rule 1
    IF (NOT IS_PROPERTY_OF(999, C) OR IS_PROPERTY_OF(0, C) OR IS_PROPERTY_OF(-1, C)) THEN
        Global.ND = GET_DATA_NODE(A);
    ENDIF

    // Rule 2
    Global.EA = CONSTRUCT_SET_EA(Global.ND, C, Global.EE);

    // Rule 3
    // Potential re-initialization of X and EE based on B
    temp_X = Global.X; // Save current X
    temp_EE = Global.EE; // Save current EE
    found_xx = FALSE;
    FOREACH XX_element IN GET_PRIMARY_FACTS(Global.ND) DO
        IF GET_NUM_PROPERTY(XX_element) == B THEN
            Global.X = XX_element;
            Global.EE = GET_INTERDICTED_SET(Global.X);
            found_xx = TRUE;
            BREAK_FOREACH;
        ENDIF
    ENDFOREACH
    IF NOT found_xx THEN // If B does not identify a primary fact, restore original X, EE
      Global.X = temp_X;
      Global.EE = temp_EE;
    ENDIF


    // Rule 4
    IF IS_UNKNOWN(Global.X) THEN // If X is still unknown or became unknown
        // Check if B (B_param) is suitable for NUM property
        // This rule's condition INCONNU(X) might mean X was not set by Rule 3 with current B
        XX_new_fact = CREATE_STRUCTURE(NUM: B, ENSNUM: Global.EA);
        ADD_TO_SET(GET_PRIMARY_FACTS(Global.ND), XX_new_fact);
        Global.S = @OUI;
        Global.EC = Global.EA;
    ENDIF

    // Rule 5 (assuming S might have been set to @OUI by rule 4)
    IF Global.X IS NOT UNKNOWN THEN
        EB_current = GET_ENSNUM_PROPERTY(Global.X);
        AFPA_result1 = AFPA_variant1(Global.EA, EB_current, Global.EX);
        EX_updated = AFPA_result1.EX_out;
        AFPA_result2 = AFPA_variant2(Global.EA, EB_current, Global.EZ);
        EZ_updated = AFPA_result2.EZ_out;
        EA_intermediate = UNION(EX_updated, EZ_updated);
        EY_val = CMFFLISR(EA_intermediate, Global.EY);

        IF NOT ARE_SETS_EQUAL(EB_current, EY_val) THEN
            SET_ENSNUM_PROPERTY(Global.X, EY_val);
            Global.EC = EY_val;
            Global.S = @OUI;
        ENDIF
    ENDIF

    // Rule 6
    IF CARDINALITY(Global.EC) == 0 THEN
        CONTRADICTION_module(HIST);
    ENDIF

    // Rule 7
    IF Global.S == @OUI THEN
        MESPION_trace(1, 2, "@AFP", A, B, Global.EC, ".h", HIST);
        ADD_STRUCTURE_TO_HIST(HIST, CREATE_STRUCTURE(TY: @VERIFOEP, VB: Global.ND));
        FOREACH RK_element IN GET_CONTR_PROPERTY(Global.ND) DO
            ADD_STRUCTURE_TO_HIST(HIST, CREATE_STRUCTURE(TY: @VERIFPR, VB: RK_element));
        ENDFOREACH
    ENDIF

    // Rule 8
    IF GET_GLOBAL_V_ARRAY(111) == 0 AND Global.S == @OUI THEN
        ARCHIVE_module("@AFP", A, B, Global.EC);
    ENDIF

    // Rule 9
    IF IS_UNKNOWN(Global.X) THEN // If X became unknown again or remained so
        Global.EE = EMPTY_SET;
    ENDIF

    // Rule 10
    IF CARDINALITY(Global.EC) == 1 THEN
        I_element = GET_UNIQUE_ELEMENT(Global.EC);
        IF Global.T == @OUI THEN
            new_constraint = CREATE_FP_CONSTRAINT(A, GET_NUMERIC_VALUE(B), GET_NUMERIC_VALUE(I_element));
            ADD_CONSTRAINT_module(new_constraint);
        ENDIF
    ENDIF

    // Rule 11
    IF CARDINALITY(Global.EC) > 1 THEN
        min_abs_J = MAX_INT;
        selected_I = 0;
        FOREACH J_element IN Global.EC DO
            IF ABS(J_element) < min_abs_J THEN
                min_abs_J = ABS(J_element);
                selected_I = J_element;
            ENDIF
        ENDFOREACH

        IF selected_I > 0 AND Global.T == @OUI THEN
            new_constraint = CREATE_FP_CONSTRAINT(A, GET_NUMERIC_VALUE(B), GET_NUMERIC_VALUE(-selected_I));
            ADD_CONSTRAINT_module(new_constraint);
        ENDIF
    ENDIF

    // Final default action from Interface 0: =>T:=@OUI (already set at the beginning of this interface)
    // Global.T = @OUI;

    RETURN; // Interface 1 also has no explicit results
ENDFUNCTION
```

---

## Module: $AIDETVAR

**Original Date:** 10-4-2020
**Type:** EXPERTISE DE BASE (Basic Expertise)

**Purpose (Inferred):** This module, likely "Aide à Determiner Variable" (Help to Determine Variable/Function), seems to analyze an input expression `X` using pattern matching (`MATCHE`) to determine a function/operator `F` and a core variable/argument `V`. It handles different functional forms, including basic equality, specific function types (`@EQM`, `@FP`), and relational operators (`@LT`, `@LE`, `@GT`, `@GE`), including their symmetric forms.

**Global Variables Used:** `F`, `V`, `X` (Note: `X` is input, `F` and `V` are outputs, but also listed as globals, meaning their values are set globally or returned to the caller who then sets globals).

**Interface 0:**
*   Called by: `$RSNANOU`
*   Input Data: `X_in`
*   Output Results: `F_out`, `V_out`

**Interface 1:**
*   Called by: `$RSNANOU`
*   Input Data: `X_in`
*   Output Results: `F_out`

```pseudocode
// Combined logic for $AIDETVAR, covering both interfaces.
// The specific interface used by the caller ($RSNANOU) determines which results are actually used.

FUNCTION AIDETVAR(X_param):
    // Initialize local X with the input parameter
    X_local = X_param;

    // Initialize F_local and V_local to some default "not found" or "unknown" state
    // (CAIA might use @BID or rely on rules not matching)
    F_local = @UNKNOWN_FUNCTION;
    V_local = @UNKNOWN_VARIABLE;

    // Rule 1: MATCHE(X,*A{**{**}}=\K:**)=>F:=@EQ,V:=A
    // Matches X against a pattern: an argument A (which is a structure itself) followed by an equality with some K.
    // Example: X might be an expression like "myStruct{prop1=val1} = someValue"
    MATCH_RESULT = MATCH(X_local, PATTERN_STRUCTURE_EQUALS_K);
    IF MATCH_RESULT.success THEN
        A_matched = MATCH_RESULT.get_variable("A"); // The *A{**{**}} part
        // K_matched = MATCH_RESULT.get_variable("K"); // The \K:** part (not directly used for F or V)
        F_local = @EQ;    // Set F to the equality function/atom
        V_local = A_matched; // Set V to the matched structure A

        // Set global variables (or prepare for return values)
        Global.F = F_local;
        Global.V = V_local;
        RETURN {F_result: F_local, V_result: V_local}; // For Interface 0
        // For Interface 1, only F_result would be relevant.
    ENDIF

    // Rule 2: MATCHE(X,fonction"\O:*FF;[FF.APP.[@EQM,@FP]]"(*A{**{**}},**,**))=>F:=FF,V:=A
    // Matches X against a function call where the function FF is of type @EQM or @FP.
    // The first argument of this function is A (a structure).
    // Example: X might be "func_eqm(myStruct{...}, arg2, arg3)"
    MATCH_RESULT = MATCH(X_local, PATTERN_FUNCTION_EQM_FP);
    IF MATCH_RESULT.success THEN
        FF_matched = MATCH_RESULT.get_variable("FF"); // The function name/object
        A_matched = MATCH_RESULT.get_variable("A");  // The *A{**{**}} part
        F_local = FF_matched;
        V_local = A_matched;

        Global.F = F_local;
        Global.V = V_local;
        RETURN {F_result: F_local, V_result: V_local};
    ENDIF

    // Rule 3: MATCHE(X,fonction"\O:*FF;[FF.APP.[@LT,@LE,@GT,@GE]]"(*A{**{**}},\K:**))=>F:=FF,V:=A
    // Matches X against a function call where FF is a relational operator, A is the first argument.
    // Example: X might be "less_than(myStruct{...}, some_K_value)"
    MATCH_RESULT = MATCH(X_local, PATTERN_FUNCTION_RELATIONAL_ARG1_A);
    IF MATCH_RESULT.success THEN
        FF_matched = MATCH_RESULT.get_variable("FF");
        A_matched = MATCH_RESULT.get_variable("A");
        // K_matched = MATCH_RESULT.get_variable("K");
        F_local = FF_matched;
        V_local = A_matched;

        Global.F = F_local;
        Global.V = V_local;
        RETURN {F_result: F_local, V_result: V_local};
    ENDIF

    // Rule 4: MATCHE(X,fonction"\O:*FF;[FF.APP.[@LT,@LE,@GT,@GE]]"(\K:**,*A{**{**}}))=>F:=SYMETRIQUE(FF),V:=A
    // Matches X against a function call where FF is a relational operator, A is the second argument.
    // This implies the function needs to be made symmetric (e.g., if X is "greater_than(K, A)", F becomes "less_than_or_equal_to_symmetric").
    // Example: X might be "less_than(some_K_value, myStruct{...})"
    MATCH_RESULT = MATCH(X_local, PATTERN_FUNCTION_RELATIONAL_ARG2_A);
    IF MATCH_RESULT.success THEN
        FF_matched = MATCH_RESULT.get_variable("FF");
        A_matched = MATCH_RESULT.get_variable("A");
        // K_matched = MATCH_RESULT.get_variable("K");
        F_local = GET_SYMMETRIC_OPERATOR(FF_matched); // e.g., @LT becomes @GT, @LE becomes @GE
        V_local = A_matched;

        Global.F = F_local;
        Global.V = V_local;
        RETURN {F_result: F_local, V_result: V_local};
    ENDIF

    // If no rule matched, F and V remain in their initial "unknown" state or last assigned state from globals.
    // The problem description implies these are output, so if no rule matches, they might return unchanged from their global values
    // or a specific "not found" atom.
    RETURN {F_result: F_local, V_result: V_local}; // Or simply {F_result: Global.F, V_result: Global.V} if no match

ENDFUNCTION

// Helper/Pattern Interpretations:
// PATTERN_STRUCTURE_EQUALS_K: A pattern that matches expressions like "*A{**{**}} = \K:**"
//      *A{**{**}} means "a variable A which is a structure (indicated by {**})"
//      \K:** means "a variable K which can be anything"
// PATTERN_FUNCTION_EQM_FP: Matches "fonction '\O:*FF;[FF.APP.[@EQM,@FP]]' (*A{**{**}}, **, **)"
//      '\O:*FF' means "an object/atom FF"
//      ;[FF.APP.[@EQM,@FP]] means "where FF is of type @EQM or @FP"
//      (*A{**{**}}, **, **) means "first argument is a structure A, other arguments anything"
// PATTERN_FUNCTION_RELATIONAL_ARG1_A: Matches relational operator with A as first arg.
// PATTERN_FUNCTION_RELATIONAL_ARG2_A: Matches relational operator with A as second arg.
// MATCH(expression, pattern): Returns a result object indicating success and allowing extraction of matched variables.
// GET_SYMMETRIC_OPERATOR(operator_atom): Returns the symmetric equivalent (e.g., @LT -> @GT).
// @UNKNOWN_FUNCTION, @UNKNOWN_VARIABLE: Placeholder for values if no match occurs.
```

---

## Module: $AJA

**Original Date:** 10-4-2020
**Type:** EXPERTISE DE BASE (Basic Expertise)

**Purpose (Inferred):** The name `$AJA` might be an abbreviation (e.g., "Ajouter A..." - Add To...). This module appears to manage and update collections of typed information associated with an entity identified by `K` (key/object) and `V` (variable number/identifier). It ensures an object `X` (derived from `K` and `V`) exists in a typed collection `ENSTYY(K)`, and then adds various structured data elements to other collections (`ENSX(X)`, `ENSY(X)`, `ENSW(X)`) associated with this `X`. It seems to handle default values for `RL` (relation) and `G` (negation).

**Global Variables Used:** `X`, `RL`, `G`, `K`, `V`, `T`, `AT`, `I`, `P`, `E` (many of these are also input parameters for its interfaces).

**General Logic (based on Interface 0, the most comprehensive):**
The module's behavior seems to be a sequence of operations, some conditional. It appears to always attempt to define/find `X` first. The subsequent `PLUS` or `PLNV` operations depend on the parameters provided to the specific interface.

```pseudocode
// Main function for $AJA, representing the combined logic.
// Specific interfaces (0-7) call this with different subsets of parameters.
// Parameters not provided by a specific interface would be considered "unknown" or use a default.
FUNCTION AJA_main(K_param, V_param, RL_param, T_param, AT_param, P_param, I_param, G_param, E_param):
    // Initialize local variables from params or globals (CAIA's scoping is complex)
    // These variables are also listed as globals, suggesting they might be modified directly.
    K = K_param;
    V = V_param;
    RL = RL_param; // Might be defaulted later if not provided
    T_obj = T_param; // Renamed to avoid conflict with global T if it's different
    AT = AT_param;
    P = P_param;
    I = I_param;   // Numeric index/identifier
    G = G_param;   // Negation flag, might be defaulted
    E = E_param;   // An expression or entity for comparison

    // Rule 1: XX.APP.ENSTYY(K),VARNUM(XX)=V=>X:=XX
    // Find an existing XX in the collection ENSTYY(K) where VARNUM(XX) is V.
    // If found, assign it to global X.
    Global.X = FIND_IN_COLLECTION(GET_ENSTYY_COLLECTION(K),
                                  element -> GET_VARNUM_PROPERTY(element) == V);

    // Rule 2: INCONNU(X)=>PLUS ENSTYY(K) X,X:=(VARNUM:V)
    // If X was not found (is "unknown")
    IF IS_UNKNOWN(Global.X) THEN
        // Create a new structure X with VARNUM property V
        new_X_object = CREATE_STRUCTURE(VARNUM: V);
        // Add this new X to the ENSTYY(K) collection
        ADD_TO_COLLECTION(GET_ENSTYY_COLLECTION(K), new_X_object);
        Global.X = new_X_object; // Assign the new object to global X
    ENDIF

    // The following rules depend on which parameters (AT, P, T_obj, RL, I, G, E) were supplied by the specific interface.
    // If a parameter is "unknown" (not supplied by the interface), the corresponding rule might be skipped.

    // Rule 3: INCONNU(AT),INCONNU(P)=>PLUS ENSX(X) T
    // If AT and P are unknown (not provided by the calling interface)
    IF IS_UNKNOWN(AT) AND IS_UNKNOWN(P) THEN
        // Add T_obj to the ENSX collection of X.
        // ENSX is a property of X, which is a collection.
        IF Global.X IS NOT UNKNOWN AND T_obj IS NOT UNKNOWN THEN
            ADD_TO_COLLECTION(GET_ENSX_COLLECTION(Global.X), T_obj);
        ENDIF
    ENDIF

    // Rule 4: =>PLNV ENSY(X) (O1:T,O2:P)
    // This rule seems to always execute if T_obj and P are known (or perhaps only if T_obj is known, and P can be null/default).
    // PLNV suggests "Plus Nouvelle Valeur" (Add New Value) to a list/set ENSY(X).
    // The structure being added has properties O1 and O2.
    IF Global.X IS NOT UNKNOWN AND T_obj IS NOT UNKNOWN AND P IS NOT UNKNOWN THEN // Strictest interpretation
        new_ensy_element = CREATE_STRUCTURE(O1: T_obj, O2: P);
        ADD_AS_NEW_VALUE(GET_ENSY_COLLECTION(Global.X), new_ensy_element);
    ENDIF

    // Rule 5: =>PLNV ENSW(X) (ATT:AT,REL:RL,NUM:I,NEG:G)
    // Similar to rule 4, for collection ENSW(X).
    // Depends on AT, RL, I, G being known. RL and G might have defaults.
    IF Global.X IS NOT UNKNOWN AND AT IS NOT UNKNOWN AND RL IS NOT UNKNOWN AND I IS NOT UNKNOWN AND G IS NOT UNKNOWN THEN
        new_ensw_element = CREATE_STRUCTURE(ATT: AT, REL: RL, NUM: I, NEG: G);
        ADD_AS_NEW_VALUE(GET_ENSW_COLLECTION(Global.X), new_ensw_element);
    ENDIF

    // Rule 6: NONEX[Q.APP.ENSW(X),ATT(Q)=AT,REL(Q)=RL,IDEXP(O1(Q),E)]=>TJPLUS ENSW(X) (ATT:AT,REL:RL,O1:E)
    // If there's NO element Q in ENSW(X) such that its ATT, REL match AT, RL and its O1 is identical to E_param.
    // Then, TJPLUS (presumably "Toujours Plus" - Always Add, or Add if Unique by these criteria)
    // a new structure to ENSW(X).
    IF Global.X IS NOT UNKNOWN AND AT IS NOT UNKNOWN AND RL IS NOT UNKNOWN AND E IS NOT UNKNOWN THEN
        found_Q = FALSE;
        FOREACH Q_element IN GET_ENSW_COLLECTION(Global.X) DO
            IF GET_ATT_PROPERTY(Q_element) == AT AND GET_REL_PROPERTY(Q_element) == RL AND IS_IDENTICAL_EXPRESSION(GET_O1_PROPERTY(Q_element), E) THEN
                found_Q = TRUE;
                BREAK_FOREACH;
            ENDIF
        ENDFOREACH
        IF NOT found_Q THEN
            new_ensw_element_e = CREATE_STRUCTURE(ATT: AT, REL: RL, O1: E);
            ALWAYS_ADD_TO_COLLECTION(GET_ENSW_COLLECTION(Global.X), new_ensw_element_e);
        ENDIF
    ENDIF

    // Rule 7: =>RL:=@EQ
    // Default assignment for RL if not provided or if execution reaches here.
    // This implies RL_param might be optional and defaults to @EQ.
    IF RL_param IS UNKNOWN OR RL_param IS DEFAULTABLE THEN // Or this executes unconditionally if not overridden by a specific interface's input
        Global.RL = @EQ; // Set global RL
    ENDIF

    // Rule 8: =>PLNV ENSW(X) (ATT:AT,REL:RL,O1:T,NEG:G) (Repeated structure, possibly conditional on different inputs)
    // This is identical in structure to Rule 5. It might be that CAIA rules are processed sequentially,
    // and if parameters for Rule 5 were not set, this one (with RL now defaulted by Rule 7) might apply.
    // Or, it's for a different combination of known/unknown parameters from different interfaces.
    // For simplicity, assuming this is an alternative path if Rule 5 wasn't fully specified.
    IF Global.X IS NOT UNKNOWN AND AT IS NOT UNKNOWN AND Global.RL IS NOT UNKNOWN AND T_obj IS NOT UNKNOWN AND G IS NOT UNKNOWN THEN
        // Check if this specific combination was meant if Rule 5 didn't fire due to RL_param being unknown initially.
        // This re-evaluates with Global.RL which might now be @EQ.
        // To avoid double addition if Rule 5 already ran with an explicit RL:
        // We need a more precise understanding of CAIA's rule execution (e.g., are rules mutually exclusive per pass?)
        // For now, assume it's an alternative if Rule 5 didn't run due to missing RL.
        // A full interpretation would check if an element equivalent to this was already added.
        new_ensw_element_default_rl = CREATE_STRUCTURE(ATT: AT, REL: Global.RL, O1: T_obj, NEG: G);
        ADD_AS_NEW_VALUE(GET_ENSW_COLLECTION(Global.X), new_ensw_element_default_rl);
    ENDIF

    // Rule 9: INCONNU(P)=>PLNV ENSY(X) (O1:T)
    // If P is unknown (not provided by the calling interface)
    IF IS_UNKNOWN(P) THEN
        // Add a structure with only O1 to ENSY(X)
        IF Global.X IS NOT UNKNOWN AND T_obj IS NOT UNKNOWN THEN
            new_ensy_element_t_only = CREATE_STRUCTURE(O1: T_obj);
            ADD_AS_NEW_VALUE(GET_ENSY_COLLECTION(Global.X), new_ensy_element_t_only);
        ENDIF
    ENDIF

    // Rule 10: =>G:=@NON
    // Default assignment for G.
    IF G_param IS UNKNOWN OR G_param IS DEFAULTABLE THEN
        Global.G = @NON; // Set global G
    ENDIF

    RETURN; // All interfaces for $AJA have VIDE as RESULTATS
ENDFUNCTION

// Interface specific wrappers (Illustrative):

FUNCTION AJA_interface_0(K_in, V_in, RL_in, T_in, AT_in): // P, I, G, E are implicitly "unknown"
    AJA_main(K_in, V_in, RL_in, T_in, AT_in, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN);
ENDFUNCTION

FUNCTION AJA_interface_1(K_in, V_in, T_in): // RL, AT, P, I, G, E are implicitly "unknown"
    AJA_main(K_in, V_in, UNKNOWN, T_in, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN, UNKNOWN);
ENDFUNCTION

// ... and so on for interfaces 2 through 7, passing the specified DONNEES and UNKNOWN for others.

// Helper function interpretations:
// GET_ENSTYY_COLLECTION(K_object): Returns the ENSTYY collection associated with K.
// FIND_IN_COLLECTION(collection, predicate): Finds an element satisfying the predicate.
// GET_VARNUM_PROPERTY(object): Gets the VARNUM property.
// IS_UNKNOWN(variable_or_object): Checks if it's in a CAIA "unknown" state.
// CREATE_STRUCTURE(...): Creates a CAIA data structure.
// ADD_TO_COLLECTION(collection, element): Adds an element.
// GET_ENSX_COLLECTION(X_object), GET_ENSY_COLLECTION(X_object), GET_ENSW_COLLECTION(X_object): Get specific sub-collections.
// ADD_AS_NEW_VALUE(collection, element): Specific type of addition (PLNV).
// ALWAYS_ADD_TO_COLLECTION(collection, element): Specific type of addition (TJPLUS).
// GET_ATT_PROPERTY, GET_REL_PROPERTY, GET_O1_PROPERTY: Accessors for structure properties.
// IS_IDENTICAL_EXPRESSION(expr1, expr2): Checks for semantic identity.
// @EQ, @NON: Symbolic atoms.
```

---

## Module: $AJANT

**Original Date:** 10-4-2020
**Type:** EXPERTISE DE BASE (Basic Expertise)

**Purpose (Inferred):** The name `$AJANT` likely stands for "Ajouter Antécédent" (Add Antecedent) or "Ajuster Antécédent" (Adjust Antecedent). This module manages antecedents (conditions or preceding elements) of objects. It either adds a copy of `X` to `YY`'s antecedents if `X` isn't already present, or removes `X` from `F`'s antecedents.

**Global Variables Used:** `YY`, `X`, `F` (these are also input parameters for its interfaces).

**Interface 0:**
*   Called by: `$CREKPROD`, `$CREKPRODA`
*   Input Data: `YY_in`, `X_in`
*   Output Results: None (VIDE) - modifies global state.

```pseudocode
FUNCTION AJANT_interface_0(YY_param, X_param):
    // Initialize local context
    YY_local = YY_param;
    X_local = X_param;
    // F_local is not provided in this interface, so it's "unknown" for the second rule.

    // Rule 1: NONEX[Y.APP.ANT(YY),IDEXP(Y,X)]=>PLUS ANT(YY) COPEXP(X)
    // If there is NO element Y in the antecedents of YY_local (ANT(YY_local))
    // such that Y is identical to X_local (IDEXP(Y,X_local))
    // THEN add a copy of X_local (COPEXP(X_local)) to the antecedents of YY_local.

    is_X_in_YY_antecedents = FALSE;
    FOREACH Y_element IN GET_ANTECEDENTS(YY_local) DO
        IF IS_IDENTICAL_EXPRESSION(Y_element, X_local) THEN
            is_X_in_YY_antecedents = TRUE;
            BREAK_FOREACH;
        ENDIF
    ENDFOREACH

    IF NOT is_X_in_YY_antecedents THEN
        X_copy = COPY_EXPRESSION(X_local);
        ADD_TO_ANTECEDENTS(YY_local, X_copy); // PLUS ANT(YY) COPEXP(X)
    ENDIF

    // Rule 2: =>OTE ANT(F) X
    // This rule has no explicit condition. In CAIA, this often means it executes
    // if the preceding rules with conditions did not fully consume execution,
    // or it executes based on which interface is called.
    // Since F is not an input for Interface 0, this rule effectively becomes a no-op
    // or would operate on an uninitialized/global F, which is less likely for a targeted removal.
    // It's more probable this rule is primarily for Interface 1.
    // IF Global.F IS KNOWN AND X_local IS KNOWN THEN
    //    REMOVE_FROM_ANTECEDENTS(Global.F, X_local); // OTE ANT(F) X
    // ENDIF
    // Given Interface 0, this rule likely doesn't apply meaningfully.

    RETURN; // No explicit results
ENDFUNCTION
```

**Interface 1:**
*   Called by: `$COMPLVAR`, `$COMPLVARTOT`
*   Input Data: `YY_in`, `X_in`, `F_in`
*   Output Results: None (VIDE) - modifies global state.

```pseudocode
FUNCTION AJANT_interface_1(YY_param, X_param, F_param):
    // Initialize local context
    YY_local = YY_param;
    X_local = X_param;
    F_local = F_param;

    // Rule 1: NONEX[Y.APP.ANT(YY),IDEXP(Y,X)]=>PLUS ANT(YY) COPEXP(X)
    // This rule is identical to Interface 0.
    is_X_in_YY_antecedents = FALSE;
    FOREACH Y_element IN GET_ANTECEDENTS(YY_local) DO
        IF IS_IDENTICAL_EXPRESSION(Y_element, X_local) THEN
            is_X_in_YY_antecedents = TRUE;
            BREAK_FOREACH;
        ENDIF
    ENDFOREACH

    IF NOT is_X_in_YY_antecedents THEN
        X_copy = COPY_EXPRESSION(X_local);
        ADD_TO_ANTECEDENTS(YY_local, X_copy);
    ENDIF

    // Rule 2: =>OTE ANT(F) X
    // This rule now has F_local defined from F_param.
    // It removes X_local from the antecedents of F_local.
    // The lack of a condition implies it always attempts this if F_local is valid.
    IF F_local IS NOT UNKNOWN AND X_local IS NOT UNKNOWN THEN
        REMOVE_FROM_ANTECEDENTS(F_local, X_local); // OTE ANT(F) X
    ENDIF

    RETURN; // No explicit results
ENDFUNCTION

// Helper function interpretations:
// GET_ANTECEDENTS(object): Returns the list/set of antecedents for the object.
// IS_IDENTICAL_EXPRESSION(expr1, expr2): Checks if two expressions are semantically identical.
// COPY_EXPRESSION(expression): Creates a deep copy of an expression.
// ADD_TO_ANTECEDENTS(object, antecedent_to_add): Adds to the antecedent list.
// REMOVE_FROM_ANTECEDENTS(object, antecedent_to_remove): Removes from the antecedent list.
```

---

## Module: $AJARR

**Original Date:** 10-4-2020

**Purpose (Inferred):** The name `$AJARR` likely stands for "Ajouter Arrivée" (Add Arrival/Destination) or "Ajuster Arrivée" (Adjust Arrival/Destination). This module appears to find or create an "arrival" node associated with a parent object `N`. An arrival node can be identified either by a numerical value `I` or an object value `O`. If an existing arrival node `RR` matches the criteria, it's used; otherwise, a new arrival node `R` is created and added to `N`'s list of arrivals.

**Global Variables Used:** `R`, `N`, `I`, `O` (these are also input/output parameters for its interfaces).

**Interface 0 (Numerical Arrival):**
*   Called by: `$LIER`, `$METORDRE`, `ATOME108T`, etc.
*   Input Data: `N_in`, `I_in`
*   Output Results: `R_out` (the found or created arrival node)

```pseudocode
FUNCTION AJARR_interface_0(N_param, I_param):
    // Initialize local context
    N_local = N_param;
    I_local = I_param;
    R_local = @UNKNOWN; // Represents an uninitialized state for R

    // Rule 1: RR.APP.ARRIVEE(N),VALNUM(RR)=I=>R:=RR
    // For each RR that is an ARRIVEE of N_local:
    //   If VALNUM(RR) (numerical value of RR) equals I_local,
    //   Then set R_local to RR and stop.
    found_RR = FALSE;
    FOREACH RR_element IN GET_ARRIVALS(N_local) DO
        IF GET_NUMERIC_VALUE(RR_element) == I_local THEN
            R_local = RR_element;
            found_RR = TRUE;
            BREAK_FOREACH;
        ENDIF
    ENDFOREACH

    // Rule 2: INCONNU(R)=>R:=(TP:@ARRIVEE,VALNUM:I,PERE:N,TYY:@NBRE,TYPE:@NBRE),PLUS ARRIVEE(N) R
    // If R_local is still unknown (meaning no existing arrival node was found)
    IF IS_UNKNOWN(R_local) THEN
        // Create a new arrival node R with specified properties
        new_R_node = CREATE_STRUCTURE(
            TP: @ARRIVEE,       // Type property
            VALNUM: I_local,    // Numerical value
            PERE: N_local,      // Parent
            TYY: @NBRE,         // Type category (likely "Number")
            TYPE: @NBRE         // Specific type
        );
        // Add this new R_node to the ARRIVEE collection of N_local
        ADD_TO_ARRIVALS(N_local, new_R_node);
        R_local = new_R_node; // R_local is now the new node
    ENDIF

    // Set global R to the result (or return it)
    Global.R = R_local;
    RETURN R_local;
ENDFUNCTION
```

**Interface 1 (Object Arrival):**
*   Called by: `ATOME154T`
*   Input Data: `N_in`, `O_in`
*   Output Results: `R_out` (the found or created arrival node)

```pseudocode
FUNCTION AJARR_interface_1(N_param, O_param):
    // Initialize local context
    N_local = N_param;
    O_local = O_param;
    R_local = @UNKNOWN; // Represents an uninitialized state for R

    // Rule 3: RR.APP.ARRIVEE(N),IDEXP(VAL(RR),O)=>R:=RR
    // For each RR that is an ARRIVEE of N_local:
    //   If VAL(RR) (object value of RR) is identical to O_local (IDEXP checks for identical expression/object),
    //   Then set R_local to RR and stop.
    found_RR = FALSE;
    FOREACH RR_element IN GET_ARRIVALS(N_local) DO
        IF IS_IDENTICAL_EXPRESSION(GET_OBJECT_VALUE(RR_element), O_local) THEN
            R_local = RR_element;
            found_RR = TRUE;
            BREAK_FOREACH;
        ENDIF
    ENDFOREACH

    // Rule 4: INCONNU(R)=>R:=(TP:@ARRIVEE,VAL:O,PERE:N,TYY:@OBJ,TYPE:@OBJ),PLUS ARRIVEE(N) R
    // If R_local is still unknown
    IF IS_UNKNOWN(R_local) THEN
        // Create a new arrival node R
        new_R_node = CREATE_STRUCTURE(
            TP: @ARRIVEE,       // Type property
            VAL: O_local,       // Object value
            PERE: N_local,      // Parent
            TYY: @OBJ,          // Type category (likely "Object")
            TYPE: @OBJ          // Specific type
        );
        // Add this new R_node to the ARRIVEE collection of N_local
        ADD_TO_ARRIVALS(N_local, new_R_node);
        R_local = new_R_node;
    ENDIF

    // Set global R to the result (or return it)
    Global.R = R_local;
    RETURN R_local;
ENDFUNCTION

// Helper function interpretations:
// GET_ARRIVALS(object_N): Returns the collection of "arrival" nodes associated with N.
// GET_NUMERIC_VALUE(object_RR): Returns the VALNUM property of RR.
// IS_UNKNOWN(variable): Checks if the variable holds the "unknown" or initial default state.
// CREATE_STRUCTURE(...): Creates a CAIA data structure with given properties.
// ADD_TO_ARRIVALS(object_N, arrival_node_R): Adds R to N's arrival collection.
// GET_OBJECT_VALUE(object_RR): Returns the VAL property of RR.
// IS_IDENTICAL_EXPRESSION(expr1, expr2): Checks for semantic identity.
// @ARRIVEE, @NBRE, @OBJ: Symbolic atoms representing types.
```

---

## Module: $AJE

**Original Date:** 10-4-2020
**Type:** EXPERTISE DE BASE (Basic Expertise)

**Purpose (Inferred):** The name `$AJE` might mean "Ajouter Élément" (Add Element) or similar. This module appears to be a generic utility for adding an element `Y` to a dynamically specified collection within an object `X`. The specific collection is determined by the `AT` parameter, and the element `Y` is passed via a variable corresponding to the collection type (e.g., `EO`, `EN`, `EC`, `ES`).

**Global Variables Used:** `EN`, `X`, `AT`, `EC`, `ES`, `EO` (these are also input parameters for its interfaces, where one of `EN`, `EC`, `ES`, `EO` will carry the value of `Y`).

**General Logic:**
The module has four rules, each corresponding to one of the input collection types (`EO`, `EN`, `EC`, `ES`). Only one rule will effectively execute based on which input variable (`EO`, `EN`, `EC`, or `ES`) actually contains the element `Y` to be added. The `AT` variable specifies the name of the attribute/collection within `X` where `Y` should be added.

```pseudocode
// Main function for $AJE. The specific interface (0-3) determines which
// input variable (EO_param, EN_param, EC_param, ES_param) holds the actual 'Y' element.
// AT_param specifies the target collection name within X_param.

FUNCTION AJE_main(X_param, AT_param, Y_element_to_add):
    // X_local: The object to modify.
    // AT_local: The name of the collection attribute within X_local.
    // Y_local: The element to add.
    X_local = X_param;
    AT_local = AT_param;
    Y_local = Y_element_to_add;

    IF X_local IS NOT UNKNOWN AND AT_local IS NOT UNKNOWN AND Y_local IS NOT UNKNOWN THEN
        // Get the specific collection within X_local based on the name in AT_local
        target_collection = GET_COLLECTION_BY_NAME(X_local, AT_local);

        // Add Y_local to this target_collection
        // The 'PLUS {AT}(X) Y' syntax implies adding Y to the collection named by AT in X.
        ADD_TO_COLLECTION(target_collection, Y_local);
    ENDIF

    RETURN; // No explicit results, modifies X_local by side effect.
ENDFUNCTION

// Interface specific wrappers:

// Interface 0: Y.APP.EN=>PLUS {AT}(X) Y
// (Interpreted as: IF Y is in EN_param_collection THEN ADD Y to collection AT of X)
// More directly, the rule means: take Y from the input variable named EN, add it to collection AT of X.
FUNCTION AJE_interface_0(EN_param_as_Y, X_param, AT_param):
    // EN_param_as_Y is the element Y to be added.
    // The rule "Y.APP.EN" is the condition that selects this interface's logic path.
    // In the context of the module, EN is an input variable holding Y.
    AJE_main(X_param, AT_param, EN_param_as_Y);
ENDFUNCTION

// Interface 1: Y.APP.EC=>PLUS {AT}(X) Y
FUNCTION AJE_interface_1(EC_param_as_Y, X_param, AT_param):
    AJE_main(X_param, AT_param, EC_param_as_Y);
ENDFUNCTION

// Interface 2: Y.APP.ES=>PLUS {AT}(X) Y
FUNCTION AJE_interface_2(ES_param_as_Y, X_param, AT_param):
    AJE_main(X_param, AT_param, ES_param_as_Y);
ENDFUNCTION

// Interface 3: Y.APP.EO=>PLUS {AT}(X) Y
FUNCTION AJE_interface_3(EO_param_as_Y, X_param, AT_param):
    AJE_main(X_param, AT_param, EO_param_as_Y);
ENDFUNCTION

// Helper function interpretations:
// GET_COLLECTION_BY_NAME(object, attribute_name_atom): Retrieves a collection property from an object.
// ADD_TO_COLLECTION(collection, element): Adds an element to the collection.
// EO, EN, EC, ES: These are input parameters that, for the specific interface, hold the 'Y' element.
// The rules "Y.APP.EO", "Y.APP.EN", etc. are effectively guards determining which interface's
// input (EO, EN, EC, ES) is treated as the 'Y' to be added.
```

---

## Module: $AJEXP

**Original Date:** 10-4-2020

**Purpose (Inferred):** `$AJEXP` likely manages the process of adding or adjusting "experiences" or problems (`P`) within the CAIA system. It sets properties like importance, classifies problems, adds them to processing queues (e.g., `@ENATTENTE`), and handles logging or editing based on system flags (like `VV(21)`).

**Global Variables Used:** `R`, `H`, `B`, `N`, `P` (these are also input/output parameters for its interfaces).

**Interface 0:**
*   Called by: `$EXPDIAL`, `$POURQUOIPAS`, `$POSTMORTEM`
*   Input Data: `P_in`, `B_in`
*   Output Results: None (VIDE)

**Interface 1:**
*   Called by: `$EXPERIMENTE`, `$SURVEILLE`, `$DEMARRE`, etc.
*   Input Data: `P_in`
*   Output Results: None (VIDE)

**Interface 2:**
*   Called by: `$TROUVESSAI`, `$STOCKAPPROFONDIT`, `$TRAVAILLE`, etc.
*   Input Data: `P_in`
*   Output Results: `R_out`

```pseudocode
// Combined logic for $AJEXP.
// The specific interface (0, 1, or 2) determines the initial values of P_local and B_local.
// R_local is primarily relevant as an output for Interface 2.

FUNCTION AJEXP_main(P_param, B_param_optional):
    // Initialize local context. P_local is central.
    P_local = P_param;
    B_local = B_param_optional; // B might be @BID if not provided by Interface 1 or 2 initially.
    R_local = @UNKNOWN; // For Interface 2 output
    N_local = @UNKNOWN; // Represents local N, distinct from global N if necessary
    H_local = @UNKNOWN; // Represents local H

    // DABORD Rule 1: =>MENAGEPRED P
    // "First, call MENAGEPRED with P_local."
    // MENAGEPRED might mean "clean up predicates" or "manage predecessors."
    MENAGEPRED_module(P_local);

    // DABORD Rule 2: ABSENT(@IMPORTANCE,P),QUOI(P)=@FORCE,NONEX[NSEC(P)>>LIMNORM(@NSEC)],
    // NN=NORD(P)=>IMPORTANCE(P)=COND[NN=1:@TRESELEVE,NN=2:@ELEVE,NN=3:@ASSEZELEVE]
    // "First, if P_local does not have an @IMPORTANCE property, AND its QUOI property is @FORCE,
    // AND its NSEC property is not much larger than the normal limit for NSEC,
    // THEN set P_local's @IMPORTANCE based on its NORD property (NN)."
    IF NOT HAS_PROPERTY(P_local, "@IMPORTANCE") AND GET_QUOI_PROPERTY(P_local) == @FORCE THEN
        IF NOT (GET_NSEC_PROPERTY(P_local) >> GET_LIMIT_NORM("@NSEC")) THEN // ">>" means "much greater than"
            NN_nord = GET_NORD_PROPERTY(P_local);
            IF NN_nord == 1 THEN
                SET_IMPORTANCE_PROPERTY(P_local, @TRESELEVE); // Very high
            ELSE IF NN_nord == 2 THEN
                SET_IMPORTANCE_PROPERTY(P_local, @ELEVE);    // High
            ELSE IF NN_nord == 3 THEN
                SET_IMPORTANCE_PROPERTY(P_local, @ASSEZELEVE); // Quite high
            ENDIF
        ENDIF
    ENDIF

    // Rule 3 (conditional block): DEJAFAIT P B N @NON<-R,NONEX[QUOI(P).APP.ENSPARM(SAUVE)],CONNU(H)=>CLASSE P B N,AJNUM P @ENATTENTE->N NN<-NN,R:=NN, ENDERNIER SOREXP P N
    // This rule is complex. DEJAFAIT seems to be a function that might set R_local.
    // H_local is set by CHERPB(P) before this rule in the sequence.
    // It seems if P_local wasn't "already done" for B_local and N_local, and its parameters are not in SAUVE's parameters, and H_local is known,
    // then classify P_local, add it to @ENATTENTE queue, update R_local, and finally call SOREXP.

    // First part of the sequence before this conditional rule:
    // Rule: =>H:=CHERPB(P)
    H_local = CHERPB_module(P_local); // CHERcher Problème (Search Problem)? Sets H_local.

    // Now, the conditional block:
    R_temp_from_dejafait = DEJAFAIT_module(P_local, B_local, N_local, "@NON"); // Output @NON to R_temp_from_dejafait

    is_param_not_in_sauve = TRUE; // Assuming default
    IF GET_QUOI_PROPERTY(P_local) IS_PART_OF GET_ENSPARM_PROPERTY(@SAUVE) THEN // @SAUVE is a global context/object
        is_param_not_in_sauve = FALSE;
    ENDIF

    IF R_temp_from_dejafait == "@NON" AND is_param_not_in_sauve AND IS_KNOWN(H_local) THEN
        CLASSE_module(P_local, B_local, N_local);
        // AJNUM P @ENATTENTE->N NN<-NN,R:=NN
        // AJNUM likely adds P_local to @ENATTENTE queue, N_local is the queue, NN_out is the new num/state.
        NN_output_from_AJNUM = AJNUM_module(P_local, GET_QUEUE("@ENATTENTE"));
        N_local = GET_QUEUE("@ENATTENTE"); // N_local refers to the queue itself after AJNUM
        R_local = NN_output_from_AJNUM; // R_local gets the output number/state

        // ENDERNIER SOREXP P N (This is nested under the DEJAFAIT condition)
        SOREXP_module(P_local, N_local); // N_local here is the @ENATTENTE queue
    ENDIF

    // Rule 4: INCONNU(H)=>MESSAGE $AJEXP _20 '~' .K @ABSENT BLK(P) [V=VALSYM(P)](V)
    // H_local was set by CHERPB. If it's still unknown:
    IF IS_UNKNOWN(H_local) THEN
        MESSAGE_module("$AJEXP", 20, "~", "@ABSENT", GET_BLK_PROPERTY(P_local), IF HAS_VALSYM_PROPERTY(P_local) THEN GET_VALSYM_PROPERTY(P_local) ELSE "");
    ENDIF

    // Rule 5: =>B:=@BID
    // If B_local wasn't provided (e.g. Interface 1 or 2) or needs reset.
    // This seems to be an unconditional assignment in the sequence if B_local is not already set by Interface 0.
    IF B_local IS UNKNOWN OR B_local IS NOT PROVIDED_BY_INTERFACE_0 THEN
      B_local = @BID; // Default B to @BID
    ENDIF
    // Global.B might be updated here too if B_local represents Global.B

    // Rule 6: Q=QUOI(P),S.APP.[@ENATTENTE,@EXPERIENCES],Q.APP.ENSVALPOS(S)=>N:=S
    // Q is QUOI property of P_local. S is one of @ENATTENTE or @EXPERIENCES.
    // If Q is a "valid positive value" for S (the queue type)...
    Q_prop = GET_QUOI_PROPERTY(P_local);
    FOREACH S_queue_type IN [@ENATTENTE, @EXPERIENCES] DO
        IF IS_VALID_POSITIVE_VALUE_FOR_QUEUE(Q_prop, S_queue_type) THEN
            N_local = S_queue_type; // N_local gets the queue type
            BREAK_FOREACH;
        ENDIF
    ENDFOREACH

    // Rule 7: =>WHERE(P)=N
    // Set WHERE property of P_local to N_local (which might be @ENATTENTE or @EXPERIENCES from previous rule).
    IF N_local IS NOT UNKNOWN THEN
      SET_WHERE_PROPERTY(P_local, N_local);
    ENDIF

    // ENDERNIER Rule 1: VV(21)>0,CONNU(R)=>EDITE '+'->KR ' '->UR
    // "Lastly, if global flag VV(21) is > 0 and R_local (output for Interface 2) is known"
    IF GET_GLOBAL_VV_ARRAY(21) > 0 AND IS_KNOWN(R_local) THEN
        EDITE_module_call("+", " "); // Call EDITE with specific parameters
    ENDIF

    // DABORD Rule 3 (last DABORD means it's evaluated among the first rules, but after the previous DABORDs):
    // NORD(P)=4=> DABORD MESSAGE $AJEXP .K @NORD,DERNIERBLOC CV($AJEXP,@NBRE)->K V(0)->I, ENDERNIER EDITE -1->L
    // "First (among the last group of firsts), if NORD of P_local is 4"
    IF GET_NORD_PROPERTY(P_local) == 4 THEN
        // "First, message..."
        MESSAGE_module("$AJEXP", "@NORD");
        // "DERNIERBLOC CV($AJEXP,@NBRE)->K V(0)->I"
        // DERNIERBLOC seems to be a function call affecting K (local/temp) and I (local/temp).
        // CV($AJEXP, @NBRE) converts the atom $AJEXP to a number.
        K_temp = DERNIERBLOC_module(CONVERT_TO_NUMBER("$AJEXP"), GET_GLOBAL_V_ARRAY(0));
        // I_temp = GET_GLOBAL_V_ARRAY(0); // Or I_temp is an output of DERNIERBLOC

        // "ENDERNIER EDITE -1->L" (nested ENDERNIER)
        EDITE_module_call_L_output(-1); // Call EDITE, L is an output (perhaps a global L modified)
    ENDIF

    // Set global variables based on local computations if interfaces expect output via globals
    Global.P = P_local;
    Global.B = B_local; // B_local might have been set to @BID
    Global.H = H_local;
    Global.N = N_local; // N_local might be a queue type or other value
    Global.R = R_local; // R_local is primarily for Interface 2

    IF Interface_is_2 THEN // Only Interface 2 explicitly returns R
        RETURN R_local;
    ELSE
        RETURN; // Interfaces 0 and 1 have no explicit results
    ENDIF

ENDFUNCTION

// Helper function interpretations:
// MENAGEPRED_module(P): Cleans up/manages predecessors of P.
// HAS_PROPERTY(object, property_name): Checks if object has the property.
// GET_QUOI_PROPERTY(object), GET_NSEC_PROPERTY(object), GET_NORD_PROPERTY(object), GET_BLK_PROPERTY(object), GET_VALSYM_PROPERTY(object): Accessors.
// GET_LIMIT_NORM(property_name_atom): Gets a predefined limit.
// SET_IMPORTANCE_PROPERTY(object, importance_atom): Sets the importance.
// DEJAFAIT_module(P, B, N, default_R): Checks if P,B,N combination is done, returns value for R.
// CHERPB_module(P): Searches for problem P, returns handle H.
// IS_KNOWN(variable): Checks if variable has a known/set value.
// GET_ENSPARM_PROPERTY(object_atom): Gets parameters of an object (like @SAUVE).
// CLASSE_module(P, B, N): Classifies P.
// AJNUM_module(P, queue_atom): Adds P to a queue (e.g., @ENATTENTE), returns a status/number.
// GET_QUEUE(queue_atom): Returns a handle to the queue.
// SOREXP_module(P, N_queue): Sorts/processes experience P in queue N.
// MESSAGE_module(...): Outputs a message.
// IS_VALID_POSITIVE_VALUE_FOR_QUEUE(value, queue_type_atom): Checks validity.
// SET_WHERE_PROPERTY(object, value): Sets the WHERE property.
// GET_GLOBAL_VV_ARRAY(index): Accesses global array VV.
// EDITE_module_call(param1, param2): Calls EDITE.
// DERNIERBLOC_module(param1, param2): Specific CAIA function.
// CONVERT_TO_NUMBER(atom): Converts atom to its numeric representation.
// EDITE_module_call_L_output(param): Calls EDITE, result affects L.
// @TRESELEVE, @ELEVE, @ASSEZELEVE, @FORCE, @ENATTENTE, @EXPERIENCES, @ABSENT, @NORD, @BID: Symbolic atoms.
```

---

## Module: $AJMEM

**Original Date:** 10-4-2020
**Type:** EXPERTISE DE BASE (Basic Expertise)

**Purpose (Inferred):** `$AJMEM` (likely "Ajouter Mémoire" - Add to Memory, or "Ajuster Mémoire" - Adjust Memory) manages a list or data structure, possibly sorted, referred to by the atom `@MEMORESSAIS`. It seems to record "essais" (trials or attempts), identified by a numerical value `A`. The module inserts `A` or updates counts within this memory structure.

**Global Variables Used:** `H`, `AA`, `Y`, `YY`, `A` (these are also input parameters for its interfaces or used internally as local-like globals).

**Interface 0:**
*   Called by: `$AGIR`
*   Input Data: `A_in` (the item to add/process in memory)
*   Output Results: None (VIDE) - modifies global state, specifically the `@MEMORESSAIS` structure.

**Interface 1 (Recursive):**
*   Called by: `$AJMEM` (itself)
*   Input Data: `A_in`, `H_in` (current node/context in the memory structure)
*   Output Results: None (VIDE)

```pseudocode
// Main function for $AJMEM.
// Interface 0 calls this with H_param implicitly being @MEMORESSAIS.
// Interface 1 calls this with an explicit H_param (a node within @MEMORESSAIS).

FUNCTION AJMEM_main(A_param, H_param_optional):
    // Initialize local context
    A_local = A_param;
    H_local = H_param_optional; // Current node in the @MEMORESSAIS structure

    // Rule 1: =>H:=@MEMORESSAIS (This applies if H_param_optional is not provided, i.e., for Interface 0)
    IF H_local IS UNKNOWN OR H_local IS NOT PROVIDED THEN
        H_local = GET_GLOBAL_OBJECT("@MEMORESSAIS");
    ENDIF
    // From now on, H_local refers to the current node being processed in the memory structure.

    // Rule 2: =>AA:=CV(A,@NBRE)
    // Convert A_local to a number, store in AA_local.
    AA_local = CONVERT_TO_NUMBER(A_local);

    // Rule 3: INCONNU(Y)=>SUITE(H)=(ACC:A,NUM:1)
    // Y is a global variable, often used to hold the 'current' or 'found' item.
    // If Y (globally or in a broader context) is unknown, it implies this is the first interaction
    // with this part of the H_local structure OR H_local itself is new/empty.
    // SUITE(H) seems to access or define the "next" or "content" part of H_local.
    // This rule suggests that if H_local has no defined SUITE (content/next pointer),
    // initialize it with a new structure containing A_local and a count of 1.
    Y_node_content = GET_SUITE_PROPERTY(H_local);
    IF IS_UNKNOWN(Y_node_content) THEN // Or more directly, if SUITE(H_local) is undefined
        new_content = CREATE_STRUCTURE(ACC: A_local, NUM: 1);
        SET_SUITE_PROPERTY(H_local, new_content);
        // Global.Y might be set to new_content here, or Y_node_content refers to Global.Y implicitly
        Global.Y = new_content; // Assuming Y is set to this new content
        RETURN; // Processing for this branch might end here.
    ENDIF

    // Rule 4: =>Y:=SUITE(H),YY:=CV(ACC(Y),@NBRE)
    // If Rule 3 didn't fire (meaning SUITE(H_local) was known), then:
    // Y_local_context (or Global.Y) is set to the content/next node of H_local.
    // YY_local is the numerical value of the ACC (accessor/value) property of this Y_local_context.
    // This relies on Global.Y being set if Rule 3 fired, or Y_node_content being the actual Y.
    // Let's assume Y_current refers to the current content node of H_local.
    Y_current = GET_SUITE_PROPERTY(H_local); // This is Global.Y if Rule 3 just ran and set it.
                                          // Or it's what Y_node_content was if Rule 3 didn't fire.
    YY_value_of_Y_current = CONVERT_TO_NUMBER(GET_ACC_PROPERTY(Y_current));

    // Rule 5: AA<YY,Z=(ACC:A,NUM:1)=>SIPOS SUITE(Z)=SUITE(H), ENDERNIER SUITE(H)=Z
    // If AA_local (value of current A_param) is less than YY_value_of_Y_current (value of item in memory)
    IF AA_local < YY_value_of_Y_current THEN
        Z_new_node = CREATE_STRUCTURE(ACC: A_local, NUM: 1);
        // SIPOS SUITE(Z)=SUITE(H) : "If possible, set Z's next to H's current next" (insert Z before current Y_current)
        // ENDERNIER SUITE(H)=Z    : "Then, set H's next to Z"
        // This implements an insertion into a sorted list H_local points to.
        // Z_new_node becomes the new head of the list segment pointed to by H_local.
        SET_SUITE_PROPERTY(Z_new_node, Y_current); // Z_new_node.next = Y_current (old SUITE(H))
        SET_SUITE_PROPERTY(H_local, Z_new_node);  // H_local.next = Z_new_node
        RETURN;
    ENDIF

    // Rule 6: AA=YY=>BT NUM(Y) 1
    // If AA_local is equal to YY_value_of_Y_current (item found)
    IF AA_local == YY_value_of_Y_current THEN
        // BT NUM(Y) 1: Increment the NUM property of Y_current (the found node).
        // BT might mean "augmenter de" (increment by).
        INCREMENT_NUM_PROPERTY(Y_current, 1);
        RETURN;
    ENDIF

    // Rule 7: AA>YY=>AJMEM A Y->H
    // If AA_local is greater than YY_value_of_Y_current
    IF AA_local > YY_value_of_Y_current THEN
        // Recursive call to AJMEM.
        // Pass original A_local, current Y_current (which becomes the H_param for the recursive call),
        // and implicitly the H_local is the parent context (though ->H syntax is a bit ambiguous here).
        // The structure suggests Y_current is the new 'H_local' for the next step down the list.
        AJMEM_main(A_local, Y_current); // Recursive call on the rest of the list (Y_current is SUITE(H_local))
        RETURN;
    ENDIF

    // Note: The global variables H, AA, Y, YY, A are used.
    // H is the current node in the @MEMORESSAIS structure.
    // A is the input value. AA is its numeric form.
    // Y is the current element being compared from the memory structure. YY is its numeric value.
    // The function is recursive via the last rule.

ENDFUNCTION

// Helper function interpretations:
// GET_GLOBAL_OBJECT(atom_name): Retrieves the global object associated with the atom.
// CONVERT_TO_NUMBER(value): Converts a CAIA value to its numerical representation.
// GET_SUITE_PROPERTY(object): Gets the SUITE (next/content) property of an object.
// IS_UNKNOWN(object_or_var): Checks if it's in an uninitialized state.
// SET_SUITE_PROPERTY(object, content_node): Sets the SUITE property.
// GET_ACC_PROPERTY(object): Gets the ACC (value/accessor) property.
// CREATE_STRUCTURE(...): Creates a new CAIA structure.
// INCREMENT_NUM_PROPERTY(object, amount): Increments the NUM property.
// @MEMORESSAIS: A global atom representing the head of the memory of trials.
```

---

## Module: $AJMEMA

**Original Date:** 10-4-2020
**Type:** EXPERTISE DE BASE (Basic Expertise)

**Purpose (Inferred):** `$AJMEMA` (possibly "Ajouter Mémoire Associative" - Add Associative Memory, or a variant of `$AJMEM`) appears to extend `$AJMEM`. It still manages the `@MEMORESSAIS` structure based on a primary key `A`. However, it introduces secondary keys or associated data `B` and `C`. If an entry for `A` is found (or created), this module then checks for or adds/updates a sub-entry related to `B` (and optionally `C`) within a collection `ENSX` associated with the primary entry `A`.

**Global Variables Used:** `H`, `AA`, `Y`, `YY`, `S`, `C`, `A`, `B` (many are also parameters).

**Interface 0:**
*   Called by: `$NOUVCONTRA`, `$CONTRADICTION`, `$VAUT`
*   Input Data: `A_in`, `B_in`
*   Output Results: None (VIDE)

**Interface 1:**
*   Called by: `$LIER`, `$DELIER`
*   Input Data: `A_in`, `B_in`, `C_in`
*   Output Results: None (VIDE)

**Interface 2 (Recursive):**
*   Called by: `$AJMEMA` (itself)
*   Input Data: `A_in`, `H_in`, `B_in`, `C_in`
*   Output Results: None (VIDE)

```pseudocode
// Main function for $AJMEMA.
// Interface 0 calls with A, B (C is implicitly @BID initially).
// Interface 1 calls with A, B, C.
// Interface 2 is the recursive call, passing H explicitly.

FUNCTION AJMEMA_main(A_param, B_param, C_param_optional, H_param_optional):
    // Initialize local context
    A_local = A_param;
    B_local = B_param;
    C_local = C_param_optional; // From Interface 1 or recursive call
    H_current_node = H_param_optional; // Current node in @MEMORESSAIS

    // Local S, used as a flag within the first conditional block.
    S_flag = @UNKNOWN; // Or some non-@STOP initial value

    // Rule 1: =>H:=@MEMORESSAIS (Applies if H_current_node is not provided, i.e., for Interface 0 & 1)
    IF H_current_node IS UNKNOWN OR H_current_node IS NOT PROVIDED THEN
        H_current_node = GET_GLOBAL_OBJECT("@MEMORESSAIS");
    ENDIF

    // Rule 2: =>AA:=CV(A,@NBRE)
    AA_numeric_A = CONVERT_TO_NUMBER(A_local);

    // Rule 3: =>Y:=SUITE(H),YY:=CV(ACC(Y),@NBRE)
    // Y_node is the primary entry in the current memory node H_current_node.
    // YY_value is the numeric key of this primary entry.
    Y_node = GET_SUITE_PROPERTY(H_current_node);
    IF IS_UNKNOWN(Y_node) THEN
        // This case implies H_current_node is an empty leaf or @MEMORESSAIS is empty.
        // $AJMEM handles creation of the primary SUITE(H) if Y is unknown.
        // $AJMEMA seems to assume Y (SUITE(H)) exists if H is not the initial @MEMORESSAIS.
        // If H_current_node is @MEMORESSAIS and it's empty, $AJMEM logic would create the first node.
        // This part of $AJMEMA might only be reached via recursive calls where H_current_node is a Y from a previous step.
        // For now, if Y_node is unknown, it means we can't proceed with sub-entry logic.
        // The original CAIA might implicitly create a shell Y_node via $AJMEM logic path if called from Interface 0/1.
        // Let's assume for Interface 0/1, an equivalent of AJMEM's Rule 3 would have run.
        // If H_current_node is @MEMORESSAIS and Y_node is unknown:
        IF H_current_node == GET_GLOBAL_OBJECT("@MEMORESSAIS") THEN
             // Create primary node for A_local if it doesn't exist (simplified from AJMEM)
             new_Y_node_for_A = CREATE_STRUCTURE(ACC: A_local, NUM: 0); // Initial NUM for A
             SET_SUITE_PROPERTY(H_current_node, new_Y_node_for_A);
             Y_node = new_Y_node_for_A;
        ELSE
             // This implies an issue if a non-head H_current_node has an unknown SUITE
             // For now, we'll assume Y_node is valid if H_current_node is not @MEMORESSAIS
             // or that $AJMEM's logic would have created it.
             // If Y_node is truly unknown here, this path might error or behave unexpectedly.
             // For this pseudocode, let's assume Y_node is valid past initial call.
             IF IS_UNKNOWN(Y_node) THEN RETURN; // Cannot proceed
        ENDIF
    ENDIF
    YY_value_of_Y = CONVERT_TO_NUMBER(GET_ACC_PROPERTY(Y_node));


    // Rule 4: AA=YY,UN[P;P.APP.ENSX(Y),O2(P)=B,OU[C=@BID,O3(P)=C]]=>S:=@STOP,BT NUM(P) 1
    // If current A matches the Y_node's primary key
    IF AA_numeric_A == YY_value_of_Y THEN
        // Search in the sub-collection ENSX of Y_node
        found_P_sub_entry = FALSE;
        FOREACH P_sub_entry IN GET_ENSX_COLLECTION(Y_node) DO
            IF GET_O2_PROPERTY(P_sub_entry) == B_local THEN
                IF C_local == @BID OR GET_O3_PROPERTY(P_sub_entry) == C_local THEN
                    S_flag = "@STOP"; // Found matching sub-entry
                    INCREMENT_NUM_PROPERTY(P_sub_entry, 1); // BT NUM(P) 1
                    found_P_sub_entry = TRUE;
                    BREAK_FOREACH;
                ENDIF
            ENDIF
        ENDFOREACH
    ENDIF

    // Rule 5: AA>YY=>AJMEMA A Y->H B C
    // If current A is greater than Y_node's primary key, recurse on the rest of the list.
    // Y_node (SUITE(H_current_node)) becomes the H_param for the recursive call.
    IF AA_numeric_A > YY_value_of_Y THEN
        AJMEMA_main(A_local, B_local, C_local, Y_node); // Recursive call
        RETURN;
    ENDIF

    // Rule 6: =>C:=@BID (This seems to be a default assignment for C_local if not set)
    // This rule's position is crucial. If C_local wasn't provided (Interface 0), it's set to @BID here.
    // If C_local was provided (Interface 1 or 2), this might override it if not handled carefully,
    // or it's a default if C_local is UNKNOWN. Let's assume it sets C_local if it's currently unknown.
    IF C_local IS UNKNOWN OR C_local IS NOT PROVIDED_BY_INTERFACE_1_OR_2 THEN
        C_local = @BID;
    ENDIF
    // Global.C might be updated here too.

    // Rule 7: AA=YY,INCONNU(S),Z=(O2:B,NUM:1)=>PLUS ENSX(Y) Z,POURTOUS[C#@BID=>O3(Z)=C]
    // If current A matches Y_node's primary key AND S_flag is still unknown (meaning Rule 4 didn't find and set S_flag to "@STOP")
    IF AA_numeric_A == YY_value_of_Y AND IS_UNKNOWN(S_flag) THEN
        // Create a new sub-entry Z
        new_Z_sub_entry = CREATE_STRUCTURE(O2: B_local, NUM: 1);

        // If C_local (which might have been set to @BID by Rule 6) is not @BID, add O3 property to Z.
        IF C_local != @BID THEN
            SET_O3_PROPERTY(new_Z_sub_entry, C_local);
        ENDIF

        ADD_TO_COLLECTION(GET_ENSX_COLLECTION(Y_node), new_Z_sub_entry); // PLUS ENSX(Y) Z
    ENDIF

    // Note: The case AA_local < YY_value_of_Y (which would be analogous to rule 5 in $AJMEM for insertion)
    // is not explicitly handled here for the primary key A. This suggests $AJMEMA relies on
    // the primary keys (based on A) already being present or managed by a call to $AJMEM or similar logic
    // before $AJMEMA attempts to manage the sub-entries with B and C.
    // Or, the recursive structure (Rule 5) handles finding the correct Y_node for AA_local eventually.
    // If AA_local < YY_value_of_Y and H_current_node was the initial @MEMORESSAIS,
    // an $AJMEM-like insertion for A_local should have happened first.

    RETURN; // No explicit results
ENDFUNCTION

// Helper function interpretations (extending those from $AJMEM):
// GET_ENSX_COLLECTION(object_Y): Returns the ENSX sub-collection of Y.
// GET_O2_PROPERTY(sub_entry_P), GET_O3_PROPERTY(sub_entry_P): Accessors for sub-entry properties.
// @BID: A symbolic atom, likely meaning "unspecified" or "don't care" in some contexts.
```
