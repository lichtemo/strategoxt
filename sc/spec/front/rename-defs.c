#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Anno_2;
Symbol sym_ListVar_1;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  init_constant_terms();
}
ATerm term_d_19;
ATerm term_i_18;
ATerm term_u_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_c_17;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_b_15;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_u_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_o_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_a_7;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_e_6;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_r_5;
ATerm term_p_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_x_4;
void init_constant_terms (void)
{
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_m_5);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_n_6);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_6);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_m_5);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_m_5);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_m_5);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__3, term_e_16, term_f_16, (ATerm) ATempty);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_69 (ATerm));
ATerm assert_1 (ATerm, ATerm p_96 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_96 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm w_85 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm t_59 (ATerm));
ATerm Cons_2 (ATerm, ATerm i_57 (ATerm), ATerm j_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm v_59 (ATerm));
ATerm _2 (ATerm, ATerm z_55 (ATerm), ATerm a_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_92 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_90 (ATerm));
ATerm debug_1 (ATerm, ATerm q_89 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_73 (ATerm), ATerm k_73 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_80 (ATerm), ATerm w_80 (ATerm));
ATerm crush_2 (ATerm, ATerm t_79 (ATerm), ATerm u_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_94 (ATerm));
ATerm map_1 (ATerm, ATerm y_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_94 (ATerm));
ATerm Program_1 (ATerm, ATerm i_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_89 (ATerm));
ATerm Undefined_1 (ATerm, ATerm j_63 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_93 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_72 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_94 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_94 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_94 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_91 (ATerm), ATerm i_91 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_91 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  p_1 :
  if(((ATgetType(q_1) == AT_LIST) && ATisEmpty(q_1)))
    {
      {
        ATerm h_2 = NULL,m_2 = NULL;
        ATerm w_4;
        w_4 = t;
        {
          ATerm l_2 = NULL;
          t = SSLgetAnnotations(not_null(q_1));
          {
            l_2 = t;
            if(((h_2 != NULL) && (h_2 != l_2)))
              _fail(l_2);
            else
              h_2 = l_2;
          }
        }
        t = w_4;
        {
          ATerm n_2 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_2));
          {
            n_2 = t;
            if(((m_2 != NULL) && (m_2 != n_2)))
              _fail(n_2);
            else
              m_2 = n_2;
          }
          t = not_null(m_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  x_2 :
  if(match_cons(y_2, sym__2))
    {
      z_2 = ATgetArgument(y_2, 0);
      a_3 = ATgetArgument(y_2, 1);
      {
        ATerm e_3 = NULL;
        ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
        t = not_null(y_2);
        {
          ATerm b_0 (ATerm t)
          {
            t = term_x_4;
            return(t);
          }
          t = rewrite_1(t, b_0);
          {
            f_3 = t;
            v_2 :
            if(match_cons(f_3, sym_Defined_2))
              {
                g_3 = ATgetArgument(f_3, 0);
                h_3 = ATgetArgument(f_3, 1);
                w_2 :
                if(match_string(g_3, "c_0"))
                  {
                    if(((e_3 != NULL) && (e_3 != h_3)))
                      _fail(h_3);
                    else
                      e_3 = h_3;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = not_null(e_3);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameCall_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  q_3 = t;
  o_3 :
  if(match_cons(q_3, sym_Call_2))
    {
      r_3 = ATgetArgument(q_3, 0);
      t_3 = ATgetArgument(q_3, 1);
      p_3 :
      if(match_cons(r_3, sym_SVar_1))
        {
          s_3 = ATgetArgument(r_3, 0);
          {
            ATerm w_3 = NULL,x_3 = NULL;
            ATerm y_3 = NULL;
            t = not_null(t_3);
            {
              t = length_0(t);
              {
                y_3 = t;
                {
                  if(((w_3 != NULL) && (w_3 != y_3)))
                    _fail(y_3);
                  else
                    w_3 = y_3;
                  {
                    ATerm y_4 = t;
                    int z_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_3), not_null(w_3));
                        {
                          t = RenameVar_0(t);
                          {
                            z_3 = t;
                            if(((x_3 != NULL) && (x_3 != z_3)))
                              _fail(z_3);
                            else
                              x_3 = z_3;
                          }
                        }
                        LocalPopChoice(z_4);
                      }
                    else
                      {
                        t = y_4;
                        {
                          ATerm a_4 = NULL;
                          t = not_null(s_3);
                          {
                            t = HoArg_0(t);
                            {
                              a_4 = t;
                              if(((x_3 != NULL) && (x_3 != a_4)))
                                _fail(a_4);
                              else
                                x_3 = a_4;
                            }
                          }
                        }
                      }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_3)), not_null(t_3));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm r_69 (ATerm))
{
  t = r_69(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = topdown_1(t, r_69);
      return(t);
    }
    t = _all(t, f_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_96 (ATerm))
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      {
        ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
        ATerm e_5;
        e_5 = t;
        {
          ATerm s_4 = NULL;
          ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
          t = p_96(t);
          {
            s_4 = t;
            {
              if(((p_4 != NULL) && (p_4 != s_4)))
                _fail(s_4);
              else
                p_4 = s_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_4), not_null(l_4), not_null(m_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm f_5 = t;
                    int g_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_l_5);
                        t = table_get_0(t);
                        LocalPopChoice(g_5);
                      }
                    else
                      {
                        t = f_5;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_4 = t;
                      i_4 :
                      if(((ATgetType(t_4) == AT_LIST) && !(ATisEmpty(t_4))))
                        {
                          u_4 = ATgetFirst((ATermList) t_4);
                          v_4 = (ATerm) ATgetNext((ATermList) t_4);
                          {
                            if(((q_4 != NULL) && (q_4 != u_4)))
                              _fail(u_4);
                            else
                              q_4 = u_4;
                            {
                              if(((r_4 != NULL) && (r_4 != v_4)))
                                _fail(v_4);
                              else
                                r_4 = v_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_4), term_l_5, (ATerm) ATinsert(CheckATermList(not_null(r_4)), (ATerm) ATinsert(CheckATermList(not_null(q_4)), not_null(l_4))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
            }
          }
        }
        t = e_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(((ATgetType(b_5) == AT_LIST) && !(ATisEmpty(b_5))))
    {
      c_5 = ATgetFirst((ATermList) b_5);
      d_5 = (ATerm) ATgetNext((ATermList) b_5);
      t = not_null(c_5);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
  i_5 = t;
  h_5 :
  if(match_cons(i_5, sym__2))
    {
      j_5 = ATgetArgument(i_5, 0);
      k_5 = ATgetArgument(i_5, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), not_null(k_5));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm r_96 (ATerm))
{
  ATerm q_5 = NULL;
  ATerm s_5 = NULL;
  q_5 = t;
  {
    ATerm t_5 = NULL;
    t = term_m_5;
    {
      t = r_96(t);
      {
        t_5 = t;
        if(((s_5 != NULL) && (s_5 != t_5)))
          _fail(t_5);
        else
          s_5 = t_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_5), not_null(q_5));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  {
    ATerm n_5 = t;
    int o_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 = NULL;
        t = not_null(d_6);
        {
          ATerm i_0 (ATerm t)
          {
            t = term_p_5;
            return(t);
          }
          t = rewrite_1(t, i_0);
          {
            g_6 = t;
            z_5 :
            if(match_cons(g_6, sym_Undefined_0))
              {
                _fail(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = term_r_5;
        LocalPopChoice(o_5);
      }
    else
      {
        t = n_5;
        {
          ATerm j_6 = NULL;
          ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
          t = not_null(d_6);
          {
            ATerm k_0 (ATerm t)
            {
              t = term_p_5;
              return(t);
            }
            t = rewrite_1(t, k_0);
            {
              k_6 = t;
              b_6 :
              if(match_cons(k_6, sym_Defined_2))
                {
                  l_6 = ATgetArgument(k_6, 0);
                  m_6 = ATgetArgument(k_6, 1);
                  c_6 :
                  if(match_string(l_6, "g_0"))
                    {
                      if(((j_6 != NULL) && (j_6 != m_6)))
                        _fail(m_6);
                      else
                        j_6 = m_6;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          }
          t = not_null(j_6);
        }
      }
  }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm s_6 = NULL;
  s_6 = t;
  t = SSL_int_to_string(not_null(s_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  b_7 :
  if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
    {
      e_7 = ATgetFirst((ATermList) d_7);
      f_7 = (ATerm) ATgetNext((ATermList) d_7);
      c_7 :
      if(match_int(e_7, 95))
        {
          ATerm h_7 = NULL;
          ATerm i_7 = NULL;
          t = not_null(f_7);
          {
            t = o_0(t);
            {
              i_7 = t;
              if(((h_7 != NULL) && (h_7 != i_7)))
                _fail(i_7);
              else
                h_7 = i_7;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_7)), term_u_5), term_u_5);
        }
      else
        {
          if(match_int(e_7, 45))
            {
              ATerm k_7 = NULL;
              ATerm l_7 = NULL;
              t = not_null(f_7);
              {
                t = o_0(t);
                {
                  l_7 = t;
                  if(((k_7 != NULL) && (k_7 != l_7)))
                    _fail(l_7);
                  else
                    k_7 = l_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_7)), term_u_5);
            }
          else
            {
              if(match_int(e_7, 39))
                {
                  ATerm n_7 = NULL;
                  ATerm o_7 = NULL;
                  t = not_null(f_7);
                  {
                    t = o_0(t);
                    {
                      o_7 = t;
                      if(((n_7 != NULL) && (n_7 != o_7)))
                        _fail(o_7);
                      else
                        n_7 = o_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(n_7)), term_u_5), term_v_5), term_u_5);
                }
              else
                {
                  _fail(t);
                }
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm escape_1 (ATerm t, ATerm w_85 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm v_7 (ATerm t)
    {
      ATerm w_5 = t;
      int x_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_85(t, v_7);
          LocalPopChoice(x_5);
        }
      else
        {
          t = w_5;
          {
            ATerm y_5 = t;
            int a_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, v_7);
                LocalPopChoice(a_6);
              }
            else
              {
                t = y_5;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = v_7(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm NameMod_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym_Mod_2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_8)), term_e_6), not_null(z_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm))
{
  ATerm f_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_80(t);
      LocalPopChoice(h_6);
    }
  else
    {
      t = f_6;
      {
        ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
        i_8 = t;
        h_8 :
        if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
          {
            j_8 = ATgetFirst((ATermList) i_8);
            k_8 = (ATerm) ATgetNext((ATermList) i_8);
            {
              ATerm n_8 = NULL,p_8 = NULL;
              ATerm i_6;
              i_6 = t;
              {
                ATerm o_8 = NULL;
                t = not_null(j_8);
                {
                  t = z_80(t);
                  {
                    o_8 = t;
                    if(((n_8 != NULL) && (n_8 != o_8)))
                      _fail(o_8);
                    else
                      n_8 = o_8;
                  }
                }
              }
              t = i_6;
              {
                ATerm q_8 = NULL;
                t = not_null(k_8);
                {
                  t = foldr_3(t, x_80, y_80, z_80);
                  {
                    q_8 = t;
                    if(((p_8 != NULL) && (p_8 != q_8)))
                      _fail(q_8);
                    else
                      p_8 = q_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_8), not_null(p_8));
                  t = y_80(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = term_n_6;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = term_o_6;
    return(t);
  }
  t = foldr_3(t, p_0, add_0, q_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym_SDef_3))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      d_9 = ATgetArgument(a_9, 2);
      {
        ATerm h_9 = NULL,i_9 = NULL;
        ATerm j_9 = NULL;
        t = not_null(c_9);
        {
          ATerm k_9 = NULL,m_9 = NULL,o_9 = NULL;
          t = length_0(t);
          {
            j_9 = t;
            {
              if(((h_9 != NULL) && (h_9 != j_9)))
                _fail(j_9);
              else
                h_9 = j_9;
              {
                ATerm p_6;
                p_6 = t;
                {
                  ATerm l_9 = NULL;
                  t = not_null(b_9);
                  {
                    ATerm q_6 = t;
                    int r_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = NameMod_0(t);
                        LocalPopChoice(r_6);
                      }
                    else
                      {
                        t = q_6;
                        {
                        }
                      }
                    {
                      t = escape_1(t, Cify_1);
                      {
                        l_9 = t;
                        if(((k_9 != NULL) && (k_9 != l_9)))
                          _fail(l_9);
                        else
                          k_9 = l_9;
                      }
                    }
                  }
                }
                t = p_6;
                {
                  ATerm n_9 = NULL;
                  t = not_null(h_9);
                  {
                    t = int_to_string_0(t);
                    {
                      n_9 = t;
                      if(((m_9 != NULL) && (m_9 != n_9)))
                        _fail(n_9);
                      else
                        m_9 = n_9;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_9)), term_t_6), not_null(k_9));
                    {
                      t = concat_strings_0(t);
                      {
                        o_9 = t;
                        {
                          if(((i_9 != NULL) && (i_9 != o_9)))
                            _fail(o_9);
                          else
                            i_9 = o_9;
                          {
                            ATerm u_6;
                            u_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_9), not_null(h_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_6, not_null(i_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_x_4;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = u_6;
                            {
                              ATerm w_6 = t;
                              int x_6 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(b_9);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm y_6;
                                      y_6 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), term_r_5);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_p_5;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = y_6;
                                    }
                                  }
                                  LocalPopChoice(x_6);
                                }
                              else
                                {
                                  t = w_6;
                                  {
                                    ATerm z_6;
                                    z_6 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), (ATerm) ATmakeAppl(sym_Defined_2, term_a_7, not_null(i_9)));
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          t = term_p_5;
                                          return(t);
                                        }
                                        t = assert_1(t, t_0);
                                      }
                                    }
                                    t = z_6;
                                  }
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_9), not_null(c_9), not_null(d_9));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_sdefs_0 (ATerm t)
{
  t = map_1(t, RenameSDef_0);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        ATerm g_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RenameCall_0(t);
            LocalPopChoice(j_7);
          }
        else
          {
            t = g_7;
            {
            }
          }
        return(t);
      }
      t = topdown_1(t, v_0);
      return(t);
    }
    t = map_1(t, u_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm z_9 = NULL,a_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym_Strategies_1))
    {
      a_10 = ATgetArgument(z_9, 0);
      {
        ATerm d_10 = NULL,f_10 = NULL;
        ATerm e_10 = NULL;
        t = SSLgetAnnotations(not_null(z_9));
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
        {
          t = not_null(a_10);
          {
            ATerm h_10 = NULL;
            t = t_59(t);
            {
              f_10 = t;
              {
                ATerm i_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(f_10)), not_null(d_10));
                {
                  i_10 = t;
                  if(((h_10 != NULL) && (h_10 != i_10)))
                    _fail(i_10);
                  else
                    h_10 = i_10;
                }
                t = not_null(h_10);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_57 (ATerm), ATerm j_57 (ATerm))
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
    {
      u_10 = ATgetFirst((ATermList) t_10);
      v_10 = (ATerm) ATgetNext((ATermList) t_10);
      {
        ATerm z_10 = NULL,b_11 = NULL;
        ATerm a_11 = NULL;
        t = SSLgetAnnotations(not_null(t_10));
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
        {
          t = not_null(u_10);
          {
            ATerm d_11 = NULL;
            t = i_57(t);
            {
              b_11 = t;
              {
                t = not_null(v_10);
                {
                  ATerm f_11 = NULL;
                  t = j_57(t);
                  {
                    d_11 = t;
                    {
                      ATerm g_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_11)), not_null(b_11)), not_null(z_10));
                      {
                        g_11 = t;
                        if(((f_11 != NULL) && (f_11 != g_11)))
                          _fail(g_11);
                        else
                          f_11 = g_11;
                      }
                      t = not_null(f_11);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm r_11 = NULL,s_11 = NULL;
  r_11 = t;
  q_11 :
  if(match_cons(r_11, sym_Specification_1))
    {
      s_11 = ATgetArgument(r_11, 0);
      {
        ATerm v_11 = NULL,x_11 = NULL;
        ATerm w_11 = NULL;
        t = SSLgetAnnotations(not_null(r_11));
        {
          w_11 = t;
          if(((v_11 != NULL) && (v_11 != w_11)))
            _fail(w_11);
          else
            v_11 = w_11;
        }
        {
          t = not_null(s_11);
          {
            ATerm z_11 = NULL;
            t = v_59(t);
            {
              x_11 = t;
              {
                ATerm a_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(x_11)), not_null(v_11));
                {
                  a_12 = t;
                  if(((z_11 != NULL) && (z_11 != a_12)))
                    _fail(a_12);
                  else
                    z_11 = a_12;
                }
                t = not_null(z_11);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm z_55 (ATerm), ATerm a_56 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm r_12 = NULL,t_12 = NULL;
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(l_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
        {
          t = not_null(m_12);
          {
            ATerm v_12 = NULL;
            t = z_55(t);
            {
              t_12 = t;
              {
                t = not_null(n_12);
                {
                  ATerm x_12 = NULL;
                  t = a_56(t);
                  {
                    v_12 = t;
                    {
                      ATerm y_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_12), not_null(v_12)), not_null(r_12));
                      {
                        y_12 = t;
                        if(((x_12 != NULL) && (x_12 != y_12)))
                          _fail(y_12);
                        else
                          x_12 = y_12;
                      }
                      t = not_null(x_12);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm g_13 = NULL;
  ATerm m_7;
  m_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm h_13 = NULL,i_13 = NULL;
      h_13 = t;
      f_13 :
      if(match_cons(h_13, sym_Program_1))
        {
          i_13 = ATgetArgument(h_13, 0);
          if(((g_13 != NULL) && (g_13 != i_13)))
            _fail(i_13);
          else
            g_13 = i_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, w_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_7), not_null(g_13)), term_q_7));
      {
        t = printnl_0(t);
        {
          t = term_o_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      {
        ATerm s_7;
        s_7 = t;
        t = SSL_printnl(not_null(n_13), not_null(o_13));
        t = s_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  t = SSL_implode_string(not_null(t_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
        ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
        y_13 = t;
        x_13 :
        if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
          {
            z_13 = ATgetFirst((ATermList) y_13);
            a_14 = (ATerm) ATgetNext((ATermList) y_13);
            {
              t = not_null(z_13);
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(a_14);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_0);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm k_14 = NULL;
  ATerm m_14 = NULL;
  k_14 = t;
  {
    ATerm n_14 = NULL;
    ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
    t = not_null(k_14);
    {
      n_14 = t;
      {
        t = SSL_explode_term(not_null(n_14));
        {
          p_14 = t;
          i_14 :
          if(match_cons(p_14, sym__2))
            {
              q_14 = ATgetArgument(p_14, 0);
              r_14 = ATgetArgument(p_14, 1);
              j_14 :
              if(match_string(q_14, ""))
                {
                  if(((m_14 != NULL) && (m_14 != r_14)))
                    _fail(r_14);
                  else
                    m_14 = r_14;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm v_14 (ATerm t)
  {
    ATerm w_7 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_14);
        LocalPopChoice(b_8);
      }
    else
      {
        t = w_7;
        {
          t = Nil_0(t);
          t = n_76(t);
        }
      }
    return(t);
  }
  t = v_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym__2))
    {
      z_14 = ATgetArgument(y_14, 0);
      a_15 = ATgetArgument(y_14, 1);
      {
        t = not_null(z_14);
        {
          ATerm y_0 (ATerm t)
          {
            t = not_null(a_15);
            return(t);
          }
          t = at_end_1(t, y_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  t = SSL_explode_string(not_null(f_15));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  t = SSL_is_string(not_null(j_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_8);
    }
  else
    {
      t = g_8;
      {
        ATerm m_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              ATerm s_8 = t;
              int t_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(t_8);
                }
              else
                {
                  t = s_8;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_0);
            LocalPopChoice(r_8);
          }
        else
          {
            t = m_8;
            {
              ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
              s_15 = t;
              r_15 :
              if(match_cons(s_15, sym_Path_1))
                {
                  t_15 = ATgetArgument(s_15, 0);
                  t = not_null(t_15);
                }
              else
                {
                  if(match_cons(s_15, sym_Var_1))
                    {
                      t_15 = ATgetArgument(s_15, 0);
                      {
                        t = not_null(t_15);
                        {
                          ATerm u_8 = t;
                          int v_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_8);
                            }
                          else
                            {
                              t = u_8;
                              {
                                ATerm a_1 (ATerm t)
                                {
                                  t = term_w_8;
                                  return(t);
                                }
                                t = debug_1(t, a_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_15, sym_Prefix_2))
                        {
                          t_15 = ATgetArgument(s_15, 0);
                          u_15 = ATgetArgument(s_15, 1);
                          {
                            ATerm z_15 = NULL,b_16 = NULL;
                            ATerm x_8;
                            x_8 = t;
                            {
                              ATerm a_16 = NULL;
                              t = not_null(t_15);
                              {
                                t = eval_config_0(t);
                                {
                                  a_16 = t;
                                  if(((z_15 != NULL) && (z_15 != a_16)))
                                    _fail(a_16);
                                  else
                                    z_15 = a_16;
                                }
                              }
                            }
                            t = x_8;
                            {
                              ATerm c_16 = NULL;
                              t = not_null(u_15);
                              {
                                t = eval_config_0(t);
                                {
                                  c_16 = t;
                                  if(((b_16 != NULL) && (b_16 != c_16)))
                                    _fail(c_16);
                                  else
                                    b_16 = c_16;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), not_null(b_16));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(k_16));
    {
      t = table_get_0(t);
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm g_9;
              g_9 = t;
              {
                ATerm m_16 = NULL;
                ATerm n_16 = NULL;
                n_16 = t;
                if(((m_16 != NULL) && (m_16 != n_16)))
                  _fail(n_16);
                else
                  m_16 = n_16;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_y_8, not_null(k_16), not_null(m_16));
                  t = table_put_0(t);
                }
              }
              t = g_9;
            }
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_9;
      r_9 = t;
      {
        ATerm r_16 = NULL;
        ATerm s_16 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            s_16 = t;
            if(((r_16 != NULL) && (r_16 != s_16)))
              _fail(s_16);
            else
              r_16 = s_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_t_9);
          t = geq_0(t);
        }
      }
      t = r_9;
      t = n_92(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym__2))
    {
      x_16 = ATgetArgument(w_16, 0);
      y_16 = ATgetArgument(w_16, 1);
      t = SSL_WriteToTextFile(not_null(x_16), not_null(y_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym__2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      t = SSL_WriteToBinaryFile(not_null(f_17), not_null(g_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm o_17 = NULL;
  ATerm u_9;
  u_9 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm p_17 = NULL,q_17 = NULL;
            p_17 = t;
            l_17 :
            if(match_cons(p_17, sym_Output_1))
              {
                q_17 = ATgetArgument(p_17, 0);
                if(((o_17 != NULL) && (o_17 != q_17)))
                  _fail(q_17);
                else
                  o_17 = q_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, c_1);
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm r_17 = NULL;
            t = term_x_9;
            {
              r_17 = t;
              if(((o_17 != NULL) && (o_17 != r_17)))
                _fail(r_17);
              else
                o_17 = r_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_1, _id);
  }
  t = u_9;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        t = not_null(o_17);
        return(t);
      }
      t = split_2(t, e_1, _id);
      return(t);
    }
    t = _2(t, _id, d_1);
    {
      ATerm b_10 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              ATerm s_17 = NULL;
              s_17 = t;
              n_17 :
              if(!(match_cons(s_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, g_1);
            return(t);
          }
          t = _2(t, f_1, WriteToBinaryFile_0);
          LocalPopChoice(c_10);
        }
      else
        {
          t = b_10;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm u_90 (ATerm))
{
  ATerm y_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  ATerm g_10;
  g_10 = t;
  t = dtime_0(t);
  t = g_10;
  {
    t = u_90(t);
    {
      ATerm j_10;
      j_10 = t;
      {
        ATerm z_17 = NULL;
        t = dtime_0(t);
        {
          z_17 = t;
          if(((y_17 != NULL) && (y_17 != z_17)))
            _fail(z_17);
          else
            y_17 = z_17;
        }
      }
      t = j_10;
      {
        a_18 = t;
        x_17 :
        if(match_cons(a_18, sym__2))
          {
            b_18 = ATgetArgument(a_18, 0);
            c_18 = ATgetArgument(a_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_17))), not_null(c_18));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_89 (ATerm))
{
  ATerm k_10;
  k_10 = t;
  {
    ATerm j_18 = NULL,l_18 = NULL;
    ATerm l_10;
    l_10 = t;
    {
      ATerm k_18 = NULL;
      t = q_89(t);
      {
        k_18 = t;
        if(((j_18 != NULL) && (j_18 != k_18)))
          _fail(k_18);
        else
          j_18 = k_18;
      }
    }
    t = l_10;
    {
      ATerm m_18 = NULL;
      m_18 = t;
      if(((l_18 != NULL) && (l_18 != m_18)))
        _fail(m_18);
      else
        l_18 = m_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_18)), not_null(j_18)));
        t = printnl_0(t);
      }
    }
  }
  t = k_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_18 = NULL;
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_18 = NULL;
      r_18 = t;
      {
        if(((q_18 != NULL) && (q_18 != r_18)))
          _fail(r_18);
        else
          q_18 = r_18;
        t = SSL_ReadFromFile(not_null(q_18));
      }
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_o_10;
          return(t);
        }
        t = debug_1(t, h_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_73 (ATerm), ATerm k_73 (ATerm))
{
  ATerm v_18 = NULL,x_18 = NULL;
  ATerm p_10;
  p_10 = t;
  {
    ATerm w_18 = NULL;
    t = j_73(t);
    {
      w_18 = t;
      if(((v_18 != NULL) && (v_18 != w_18)))
        _fail(w_18);
      else
        v_18 = w_18;
    }
  }
  t = p_10;
  {
    ATerm y_18 = NULL;
    t = k_73(t);
    {
      y_18 = t;
      if(((x_18 != NULL) && (x_18 != y_18)))
        _fail(y_18);
      else
        x_18 = y_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), not_null(x_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_19 = NULL;
  ATerm q_10;
  q_10 = t;
  {
    ATerm r_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          ATerm f_19 = NULL,g_19 = NULL;
          f_19 = t;
          c_19 :
          if(match_cons(f_19, sym_Input_1))
            {
              g_19 = ATgetArgument(f_19, 0);
              if(((e_19 != NULL) && (e_19 != g_19)))
                _fail(g_19);
              else
                e_19 = g_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, i_1);
        LocalPopChoice(w_10);
      }
    else
      {
        t = r_10;
        {
          ATerm h_19 = NULL;
          t = term_x_10;
          {
            h_19 = t;
            if(((e_19 != NULL) && (e_19 != h_19)))
              _fail(h_19);
            else
              e_19 = h_19;
          }
        }
      }
  }
  t = q_10;
  {
    ATerm j_1 (ATerm t)
    {
      t = not_null(e_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm l_19 = NULL;
    l_19 = t;
    k_19 :
    if(!(match_string(l_19, "-v")))
      {
        if(!(match_string(l_19, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_c_11;
    t = set_config_0(t);
    t = term_e_11;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_h_11;
    return(t);
  }
  t = Option_3(t, k_1, l_1, m_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm o_19 = NULL;
    o_19 = t;
    m_19 :
    if(!(match_string(o_19, "-k")))
      {
        if(!(match_string(o_19, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm p_19 = NULL;
      ATerm q_19 = NULL;
      t = string_to_int_0(t);
      {
        q_19 = t;
        if(((p_19 != NULL) && (p_19 != q_19)))
          _fail(q_19);
        else
          p_19 = q_19;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_11, not_null(p_19));
        t = set_config_0(t);
      }
    }
    t = i_11;
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  t = ArgOption_3(t, n_1, o_1, r_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  t = SSL_string_to_int(not_null(t_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm b_20 = NULL;
        b_20 = t;
        w_19 :
        if(!(match_string(b_20, "-S")))
          {
            if(!(match_string(b_20, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_n_11;
        t = set_config_0(t);
        t = term_o_11;
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_p_11;
        return(t);
      }
      t = Option_3(t, s_1, t_1, u_1);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              ATerm c_20 = NULL;
              c_20 = t;
              x_19 :
              if(!(match_string(c_20, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              ATerm f_20 = NULL;
              ATerm y_11;
              y_11 = t;
              {
                ATerm d_20 = NULL;
                ATerm e_20 = NULL;
                t = string_to_int_0(t);
                {
                  e_20 = t;
                  if(((d_20 != NULL) && (d_20 != e_20)))
                    _fail(e_20);
                  else
                    d_20 = e_20;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(d_20));
                  t = set_config_0(t);
                }
              }
              t = y_11;
              {
                ATerm g_20 = NULL;
                g_20 = t;
                if(((f_20 != NULL) && (f_20 != g_20)))
                  _fail(g_20);
                else
                  f_20 = g_20;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_20));
              }
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              t = term_b_12;
              return(t);
            }
            t = ArgOption_3(t, v_1, w_1, x_1);
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            {
              ATerm y_1 (ATerm t)
              {
                ATerm h_20 = NULL;
                h_20 = t;
                a_20 :
                if(!(match_string(h_20, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_1 (ATerm t)
              {
                t = term_d_12;
                t = set_config_0(t);
                t = term_e_12;
                return(t);
              }
              ATerm a_2 (ATerm t)
              {
                t = term_f_12;
                return(t);
              }
              t = Option_3(t, y_1, z_1, a_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm n_20 = NULL;
    n_20 = t;
    k_20 :
    if(!(match_string(n_20, "-o")))
      {
        if(!(match_string(n_20, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm q_20 = NULL;
    ATerm o_12;
    o_12 = t;
    {
      ATerm o_20 = NULL;
      ATerm p_20 = NULL;
      p_20 = t;
      if(((o_20 != NULL) && (o_20 != p_20)))
        _fail(p_20);
      else
        o_20 = p_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_12, not_null(o_20));
        t = set_config_0(t);
      }
    }
    t = o_12;
    {
      ATerm r_20 = NULL;
      r_20 = t;
      if(((q_20 != NULL) && (q_20 != r_20)))
        _fail(r_20);
      else
        q_20 = r_20;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_20));
    }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_q_12;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = u_12;
      {
        ATerm e_2 (ATerm t)
        {
          ATerm v_20 = NULL;
          v_20 = t;
          u_20 :
          if(!(match_string(v_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_2 (ATerm t)
        {
          t = term_a_13;
          t = set_config_0(t);
          t = term_b_13;
          return(t);
        }
        ATerm g_2 (ATerm t)
        {
          t = term_c_13;
          return(t);
        }
        t = Option_3(t, e_2, f_2, g_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  b_21 = t;
  z_20 :
  if(match_string(b_21, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
        {
          c_21 = ATgetFirst((ATermList) b_21);
          d_21 = (ATerm) ATgetNext((ATermList) b_21);
          a_21 :
          if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
            {
              e_21 = ATgetFirst((ATermList) d_21);
              f_21 = (ATerm) ATgetNext((ATermList) d_21);
              {
                ATerm j_21 = NULL;
                ATerm d_13;
                d_13 = t;
                {
                  t = not_null(c_21);
                  t = l_0(t);
                }
                t = d_13;
                {
                  ATerm k_21 = NULL;
                  t = not_null(e_21);
                  {
                    t = m_0(t);
                    {
                      k_21 = t;
                      if(((j_21 != NULL) && (j_21 != k_21)))
                        _fail(k_21);
                      else
                        j_21 = k_21;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_21)), not_null(j_21));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm r_21 = NULL;
    r_21 = t;
    o_21 :
    if(!(match_string(r_21, "-i")))
      {
        if(!(match_string(r_21, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm u_21 = NULL;
    ATerm e_13;
    e_13 = t;
    {
      ATerm s_21 = NULL;
      ATerm t_21 = NULL;
      t_21 = t;
      if(((s_21 != NULL) && (s_21 != t_21)))
        _fail(t_21);
      else
        s_21 = t_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(s_21));
        t = set_config_0(t);
      }
    }
    t = e_13;
    {
      ATerm v_21 = NULL;
      v_21 = t;
      if(((u_21 != NULL) && (u_21 != v_21)))
        _fail(v_21);
      else
        u_21 = v_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_21));
    }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_k_13;
    return(t);
  }
  t = ArgOption_3(t, i_2, j_2, k_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATempty, term_u_13));
  {
    t = printnl_0(t);
    {
      t = term_o_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm z_21 = NULL;
  z_21 = t;
  t = SSL_TicksToSeconds(not_null(z_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym__2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_22), not_null(g_22));
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = SSL_addr(not_null(f_22), not_null(g_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_80 (ATerm), ATerm w_80 (ATerm))
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_80(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
        ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
        n_22 = t;
        m_22 :
        if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
          {
            o_22 = ATgetFirst((ATermList) n_22);
            p_22 = (ATerm) ATgetNext((ATermList) n_22);
            {
              ATerm s_22 = NULL;
              ATerm t_22 = NULL;
              t = not_null(p_22);
              {
                t = foldr_2(t, v_80, w_80);
                {
                  t_22 = t;
                  if(((s_22 != NULL) && (s_22 != t_22)))
                    _fail(t_22);
                  else
                    s_22 = t_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), not_null(s_22));
                t = w_80(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm t_79 (ATerm), ATerm u_79 (ATerm))
{
  ATerm a_23 = NULL;
  ATerm c_23 = NULL;
  a_23 = t;
  {
    ATerm d_23 = NULL;
    ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
    t = not_null(a_23);
    {
      d_23 = t;
      {
        t = SSL_explode_term(not_null(d_23));
        {
          f_23 = t;
          z_22 :
          if(match_cons(f_23, sym__2))
            {
              g_23 = ATgetArgument(f_23, 0);
              h_23 = ATgetArgument(f_23, 1);
              if(((c_23 != NULL) && (c_23 != h_23)))
                _fail(h_23);
              else
                c_23 = h_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_23);
      t = foldr_2(t, t_79, u_79);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm o_2 (ATerm t)
    {
      t = term_n_6;
      return(t);
    }
    t = crush_2(t, o_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym__2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      {
        ATerm d_14;
        d_14 = t;
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_23), not_null(p_23));
              LocalPopChoice(f_14);
            }
          else
            {
              t = e_14;
              t = SSL_gtr(not_null(o_23), not_null(p_23));
            }
        }
        t = d_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
      w_23 = t;
      u_23 :
      if(match_cons(w_23, sym__2))
        {
          x_23 = ATgetArgument(w_23, 0);
          y_23 = ATgetArgument(w_23, 1);
          {
            if(((v_23 != NULL) && (v_23 != x_23)))
              _fail(x_23);
            else
              v_23 = x_23;
            if(((v_23 != NULL) && (v_23 != y_23)))
              _fail(y_23);
            else
              v_23 = y_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_92 (ATerm))
{
  ATerm l_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_14;
      s_14 = t;
      {
        ATerm v_24 = NULL;
        ATerm w_24 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            w_24 = t;
            if(((v_24 != NULL) && (v_24 != w_24)))
              _fail(w_24);
            else
              v_24 = w_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), term_o_6);
          t = geq_0(t);
        }
      }
      t = s_14;
      t = m_92(t);
      LocalPopChoice(o_14);
    }
  else
    {
      t = l_14;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm a_25 = NULL,c_25 = NULL;
    ATerm t_14;
    t_14 = t;
    {
      ATerm b_25 = NULL;
      t = run_time_0(t);
      {
        b_25 = t;
        if(((a_25 != NULL) && (a_25 != b_25)))
          _fail(b_25);
        else
          a_25 = b_25;
      }
    }
    t = t_14;
    {
      ATerm d_25 = NULL;
      t = term_u_14;
      {
        t = get_config_0(t);
        {
          d_25 = t;
          if(((c_25 != NULL) && (c_25 != d_25)))
            _fail(d_25);
          else
            c_25 = d_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_15), not_null(a_25)), term_w_14), not_null(c_25)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_2);
  {
    t = term_n_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_Version_0))
    {
      ATerm m_25 = NULL,o_25 = NULL;
      ATerm c_15;
      c_15 = t;
      {
        ATerm n_25 = NULL;
        t = SSLgetAnnotations(not_null(k_25));
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
      }
      t = c_15;
      {
        ATerm p_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_25));
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
        t = not_null(o_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_90 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, q_2);
  t = s_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  t = SSL_table_create(not_null(u_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  {
    ATerm i_15;
    i_15 = t;
    {
      t = term_k_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_15, term_l_15, not_null(y_25));
          t = table_put_0(t);
        }
      }
    }
    t = i_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  t = SSL_table_destroy(not_null(c_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_exit(not_null(g_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  j_26 :
  if(((ATgetType(k_26) == AT_LIST) && ATisEmpty(k_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
        {
          l_26 = ATgetFirst((ATermList) k_26);
          m_26 = (ATerm) ATgetNext((ATermList) k_26);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm m_15;
  m_15 = t;
  {
    ATerm p_26 = NULL;
    ATerm s_26 = NULL;
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          ATerm q_26 = NULL;
          ATerm r_26 = NULL;
          r_26 = t;
          if(((q_26 != NULL) && (q_26 != r_26)))
            _fail(r_26);
          else
            q_26 = r_26;
          t = (ATerm) ATinsert(ATempty, not_null(q_26));
        }
      }
    {
      s_26 = t;
      if(((p_26 != NULL) && (p_26 != s_26)))
        _fail(s_26);
      else
        p_26 = s_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, not_null(p_26));
      t = printnl_0(t);
    }
  }
  t = m_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm v_26 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        t = Cons_2(t, y_75, v_26);
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  e_27 = t;
  b_27 :
  if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
    {
      c_27 = ATgetFirst((ATermList) e_27);
      d_27 = (ATerm) ATgetNext((ATermList) e_27);
      {
        ATerm h_27 = NULL;
        t = not_null(d_27);
        {
          ATerm v_15;
          v_15 = t;
          {
            ATerm i_27 = NULL,k_27 = NULL,m_27 = NULL;
            ATerm w_15;
            w_15 = t;
            {
              ATerm j_27 = NULL;
              t = j_0(t);
              {
                j_27 = t;
                if(((i_27 != NULL) && (i_27 != j_27)))
                  _fail(j_27);
                else
                  i_27 = j_27;
              }
            }
            t = w_15;
            {
              ATerm l_27 = NULL;
              t = not_null(c_27);
              {
                t = h_0(t);
                {
                  l_27 = t;
                  if(((k_27 != NULL) && (k_27 != l_27)))
                    _fail(l_27);
                  else
                    k_27 = l_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_27)), not_null(k_27));
                {
                  m_27 = t;
                  if(((h_27 != NULL) && (h_27 != m_27)))
                    _fail(m_27);
                  else
                    h_27 = m_27;
                }
              }
            }
          }
          t = v_15;
          {
            ATerm r_2 (ATerm t)
            {
              t = not_null(h_27);
              return(t);
            }
            t = reverse_acc_2(t, h_0, r_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_27) == AT_LIST) && ATisEmpty(e_27)))
        {
          {
            t = term_m_5;
            t = j_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym_Program_1))
    {
      y_27 = ATgetArgument(x_27, 0);
      {
        ATerm b_28 = NULL,d_28 = NULL;
        ATerm c_28 = NULL;
        t = SSLgetAnnotations(not_null(x_27));
        {
          c_28 = t;
          if(((b_28 != NULL) && (b_28 != c_28)))
            _fail(c_28);
          else
            b_28 = c_28;
        }
        {
          t = not_null(y_27);
          {
            ATerm f_28 = NULL;
            t = i_63(t);
            {
              d_28 = t;
              {
                ATerm g_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_28)), not_null(b_28));
                {
                  g_28 = t;
                  if(((f_28 != NULL) && (f_28 != g_28)))
                    _fail(g_28);
                  else
                    f_28 = g_28;
                }
                t = not_null(f_28);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm o_28 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_28 = NULL;
      t = term_u_14;
      {
        t = get_config_0(t);
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
      }
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
        ATerm t_2 (ATerm t)
        {
          ATerm u_2 (ATerm t)
          {
            ATerm q_28 = NULL;
            q_28 = t;
            if(((o_28 != NULL) && (o_28 != q_28)))
              _fail(q_28);
            else
              o_28 = q_28;
            return(t);
          }
          t = Program_1(t, u_2);
          return(t);
        }
        t = fetch_1(t, t_2);
      }
    }
  {
    t = term_d_16;
    {
      t = echo_0(t);
      {
        t = term_g_16;
        {
          t = table_get_0(t);
          {
            ATerm b_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, b_3);
            {
              ATerm c_3 (ATerm t)
              {
                ATerm r_28 = NULL;
                ATerm s_28 = NULL;
                s_28 = t;
                if(((r_28 != NULL) && (r_28 != s_28)))
                  _fail(s_28);
                else
                  r_28 = s_28;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_28)), term_h_16);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, c_3);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm i_16;
  i_16 = t;
  {
    ATerm x_28 = NULL;
    ATerm y_28 = NULL;
    y_28 = t;
    if(((x_28 != NULL) && (x_28 != y_28)))
      _fail(y_28);
    else
      x_28 = y_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATempty, not_null(x_28)));
      t = printnl_0(t);
    }
  }
  t = i_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_89 (ATerm))
{
  ATerm j_16;
  j_16 = t;
  {
    t = r_89(t);
    t = debug_0(t);
  }
  t = j_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_63 (ATerm))
{
  ATerm f_29 = NULL,g_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym_Undefined_1))
    {
      g_29 = ATgetArgument(f_29, 0);
      {
        ATerm j_29 = NULL,l_29 = NULL;
        ATerm k_29 = NULL;
        t = SSLgetAnnotations(not_null(f_29));
        {
          k_29 = t;
          if(((j_29 != NULL) && (j_29 != k_29)))
            _fail(k_29);
          else
            j_29 = k_29;
        }
        {
          t = not_null(g_29);
          {
            ATerm n_29 = NULL;
            t = j_63(t);
            {
              l_29 = t;
              {
                ATerm o_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_29)), not_null(j_29));
                {
                  o_29 = t;
                  if(((n_29 != NULL) && (n_29 != o_29)))
                    _fail(o_29);
                  else
                    n_29 = o_29;
                }
                t = not_null(n_29);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_76 (ATerm))
{
  ATerm t_29 (ATerm t)
  {
    ATerm l_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_76, _id);
        LocalPopChoice(o_16);
      }
    else
      {
        t = l_16;
        t = Cons_2(t, _id, t_29);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_93 (ATerm))
{
  t = fetch_1(t, p_93);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym_Help_0))
    {
      ATerm a_30 = NULL,c_30 = NULL;
      ATerm p_16;
      p_16 = t;
      {
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(y_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
      }
      t = p_16;
      {
        ATerm d_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_30));
        {
          d_30 = t;
          if(((c_30 != NULL) && (c_30 != d_30)))
            _fail(d_30);
          else
            c_30 = d_30;
        }
        t = not_null(c_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_72 (ATerm))
{
  ATerm q_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_72(t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = q_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym__2))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      t = SSL_table_get(not_null(k_30), not_null(l_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym__3))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      v_30 = ATgetArgument(s_30, 2);
      {
        ATerm u_16;
        u_16 = t;
        {
          ATerm z_30 = NULL;
          ATerm f_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_30), not_null(u_30));
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                t = (ATerm) ATempty;
              }
            {
              f_31 = t;
              if(((z_30 != NULL) && (z_30 != f_31)))
                _fail(f_31);
              else
                z_30 = f_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_30), not_null(u_30), (ATerm) ATinsert(CheckATermList(not_null(z_30)), not_null(v_30)));
            t = table_put_0(t);
          }
        }
        t = u_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_94 (ATerm))
{
  ATerm j_31 = NULL;
  ATerm k_31 = NULL;
  t = term_m_5;
  {
    t = u_94(t);
    {
      k_31 = t;
      if(((j_31 != NULL) && (j_31 != k_31)))
        _fail(k_31);
      else
        j_31 = k_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_16, term_f_16, not_null(j_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_string(q_31, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
        {
          r_31 = ATgetFirst((ATermList) q_31);
          s_31 = (ATerm) ATgetNext((ATermList) q_31);
          {
            ATerm z_31 = NULL;
            ATerm b_17;
            b_17 = t;
            {
              t = not_null(r_31);
              t = a_0(t);
            }
            t = b_17;
            {
              ATerm a_32 = NULL;
              t = term_m_5;
              {
                t = d_0(t);
                {
                  a_32 = t;
                  if(((z_31 != NULL) && (z_31 != a_32)))
                    _fail(a_32);
                  else
                    z_31 = a_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_31)), not_null(z_31));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm f_32 = NULL;
    f_32 = t;
    e_32 :
    if(!(match_string(f_32, "--help")))
      {
        if(!(match_string(f_32, "-h")))
          {
            if(!(match_string(f_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_h_17;
    {
      t = set_config_0(t);
      t = term_i_17;
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_j_17;
    return(t);
  }
  t = Option_3(t, d_3, i_3, j_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  h_32 :
  if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
    {
      j_32 = ATgetFirst((ATermList) i_32);
      k_32 = (ATerm) ATgetNext((ATermList) i_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym__2))
    {
      r_32 = ATgetArgument(q_32, 0);
      s_32 = ATgetArgument(q_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_8, not_null(r_32), not_null(s_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm k_17;
  k_17 = t;
  {
    ATerm m_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_17;
        t = s_94(t);
        LocalPopChoice(t_17);
      }
    else
      {
        t = m_17;
        {
        }
      }
  }
  t = k_17;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm a_33 = NULL;
      ATerm v_17;
      v_17 = t;
      {
        ATerm y_32 = NULL;
        ATerm z_32 = NULL;
        z_32 = t;
        if(((y_32 != NULL) && (y_32 != z_32)))
          _fail(z_32);
        else
          y_32 = z_32;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_14, not_null(y_32));
          t = set_config_0(t);
        }
      }
      t = v_17;
      {
        ATerm b_33 = NULL;
        b_33 = t;
        if(((a_33 != NULL) && (a_33 != b_33)))
          _fail(b_33);
        else
          a_33 = b_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_33));
      }
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm w_17 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              {
                t = s_94(t);
                t = Cons_2(t, _id, l_3);
              }
            }
          LocalPopChoice(d_18);
        }
      else
        {
          t = w_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_3, l_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  ATerm g_18;
  g_18 = t;
  {
    ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
    l_33 = t;
    h_33 :
    if(match_cons(l_33, sym__3))
      {
        m_33 = ATgetArgument(l_33, 0);
        n_33 = ATgetArgument(l_33, 1);
        o_33 = ATgetArgument(l_33, 2);
        {
          if(((i_33 != NULL) && (i_33 != m_33)))
            _fail(m_33);
          else
            i_33 = m_33;
          {
            if(((j_33 != NULL) && (j_33 != n_33)))
              _fail(n_33);
            else
              j_33 = n_33;
            {
              if(((k_33 != NULL) && (k_33 != o_33)))
                _fail(o_33);
              else
                k_33 = o_33;
              t = SSL_table_put(not_null(i_33), not_null(j_33), not_null(k_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm r_33 = NULL;
  ATerm h_18;
  h_18 = t;
  {
    t = term_i_18;
    t = table_put_0(t);
  }
  t = h_18;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm n_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_94(t);
          LocalPopChoice(o_18);
        }
      else
        {
          t = n_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_3);
    {
      ATerm p_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_18;
          t_18 = t;
          {
            ATerm u_18 = t;
            int z_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_17;
                t = get_config_0(t);
                LocalPopChoice(z_18);
              }
            else
              {
                t = u_18;
                t = fetch_1(t, Help_0);
              }
          }
          t = t_18;
          {
            t = system_usage_0(t);
            {
              t = term_n_6;
              t = exit_0(t);
            }
          }
          LocalPopChoice(s_18);
        }
      else
        {
          t = p_18;
          {
            ATerm a_19 = t;
            int b_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm s_33 = NULL;
                    s_33 = t;
                    if(((r_33 != NULL) && (r_33 != s_33)))
                      _fail(s_33);
                    else
                      r_33 = s_33;
                    return(t);
                  }
                  t = Undefined_1(t, u_3);
                  return(t);
                }
                t = fetch_1(t, n_3);
                {
                  ATerm v_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_33)), term_d_19);
                    return(t);
                  }
                  t = say_1(t, v_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_o_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(b_19);
              }
            else
              {
                t = a_19;
                {
                }
              }
          }
        }
      {
        ATerm i_19;
        i_19 = t;
        {
          t = term_e_16;
          t = table_destroy_0(t);
        }
        t = i_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm))
{
  t = parse_options_1(t, y_90);
  {
    t = store_options_0(t);
    {
      t = a_91(t);
      {
        ATerm j_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_90);
            LocalPopChoice(n_19);
          }
        else
          {
            t = j_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_91(t);
                  t = report_success_0(t);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_91(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, p_91);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, b_4, r_91, s_91, c_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm y_19;
      y_19 = t;
      {
        ATerm v_33 = NULL;
        ATerm w_33 = NULL;
        t = term_u_14;
        {
          t = get_config_0(t);
          {
            w_33 = t;
            if(((v_33 != NULL) && (v_33 != w_33)))
              _fail(w_33);
            else
              v_33 = w_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATempty, not_null(v_33)));
          t = printnl_0(t);
        }
      }
      t = y_19;
      return(t);
    }
    t = if_verbose2_1(t, e_4);
    return(t);
  }
  t = iowrap_4(t, j_91, k_91, l_91, d_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_91 (ATerm), ATerm i_91 (ATerm))
{
  t = iowrap_3(t, h_91, i_91, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_91 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    t = _2(t, _id, e_91);
    return(t);
  }
  t = iowrap_2(t, f_4, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm h_4 (ATerm t)
    {
      ATerm n_4 (ATerm t)
      {
        ATerm o_4 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, o_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, n_4);
      return(t);
    }
    t = Specification_1(t, h_4);
    return(t);
  }
  t = iowrap_1(t, g_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}