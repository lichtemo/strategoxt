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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Scopes_0;
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
Symbol sym_PointerOf_1;
Symbol sym_Pointer_2;
Symbol sym_ParamListVarArgs_1;
Symbol sym_ParamList_1;
Symbol sym_ArrayDecl_2;
Symbol sym_DeclBracket_1;
Symbol sym_DeclBracket1_1;
Symbol sym_DeclBracket2_1;
Symbol sym_FunType_2;
Symbol sym_ParamDecl_2;
Symbol sym_ParamDecl2_2;
Symbol sym_TypeName_2;
Symbol sym_Enum_2;
Symbol sym_EnumId_1;
Symbol sym_Enumerator_2;
Symbol sym_EnumVal_1;
Symbol sym_Struct_2;
Symbol sym_StructId_1;
Symbol sym_Union_2;
Symbol sym_UnionId_1;
Symbol sym_MemDecl_2;
Symbol sym_MemDecl1_2;
Symbol sym_BitFieldSize_2;
Symbol sym_IntConst_1;
Symbol sym_FloatConst_1;
Symbol sym_OctConst_1;
Symbol sym_HexConst_1;
Symbol sym_CharConst_1;
Symbol sym_StringLit_1;
Symbol sym_ArrayIndex_2;
Symbol sym_FunCall_2;
Symbol sym_Field_2;
Symbol sym_DerefMember_2;
Symbol sym_PostIncr_1;
Symbol sym_PostDecr_1;
Symbol sym_PreIncr_1;
Symbol sym_PreDecr_1;
Symbol sym_SizeofExp_1;
Symbol sym_SizeofType_1;
Symbol sym_Address_1;
Symbol sym_Deref_1;
Symbol sym_Positive_1;
Symbol sym_Negative_1;
Symbol sym_Tilde_1;
Symbol sym_Negation_1;
Symbol sym_TypeCast_2;
Symbol sym_Mul_2;
Symbol sym_Div_2;
Symbol sym_Mod_2;
Symbol sym_Add_2;
Symbol sym_Subt_2;
Symbol sym_ShiftLeft_2;
Symbol sym_ShiftRight_2;
Symbol sym_Lt_2;
Symbol sym_Gt_2;
Symbol sym_Le_2;
Symbol sym_Ge_2;
Symbol sym_Equal_2;
Symbol sym_NotEqual_2;
Symbol sym_And_2;
Symbol sym_ExOr_2;
Symbol sym_IncOr_2;
Symbol sym_LAnd_2;
Symbol sym_LOr_2;
Symbol sym_IfExp_3;
Symbol sym_Assign_3;
Symbol sym_AssignEq_0;
Symbol sym_AssignMul_0;
Symbol sym_AssignDiv_0;
Symbol sym_AssignMod_0;
Symbol sym_AssignPlus_0;
Symbol sym_AssignMin_0;
Symbol sym_AssignSL_0;
Symbol sym_AssignSR_0;
Symbol sym_AssignAnd_0;
Symbol sym_AssignExp_0;
Symbol sym_AssignOr_0;
Symbol sym_Comma_2;
Symbol sym_EmptyExp_0;
Symbol sym_Typedef_0;
Symbol sym_Extern_0;
Symbol sym_Static_0;
Symbol sym_Auto_0;
Symbol sym_Register_0;
Symbol sym_Int_0;
Symbol sym_Char_0;
Symbol sym_Short_0;
Symbol sym_Long_0;
Symbol sym_Float_0;
Symbol sym_Double_0;
Symbol sym_Signed_0;
Symbol sym_Unsigned_0;
Symbol sym_Void_0;
Symbol sym_Const_0;
Symbol sym_Volatile_0;
Symbol sym_Declaration_2;
Symbol sym_Declaration2_2;
Symbol sym_IdDeclInit_2;
Symbol sym_DeclInit_2;
Symbol sym_ArrayInit_1;
Symbol sym_ArrayInitIncomplete_1;
Symbol sym_AssignInit_1;
Symbol sym_TypeSpec_3;
Symbol sym_DQualifiers_3;
Symbol sym_DeclSpec_5;
Symbol sym_Id_1;
Symbol sym_TypeId_1;
Symbol sym_Label_2;
Symbol sym_Case_2;
Symbol sym_Default_1;
Symbol sym_Compound_2;
Symbol sym_Stat_1;
Symbol sym_If_2;
Symbol sym_IfElse_3;
Symbol sym_Switch_2;
Symbol sym_While_2;
Symbol sym_DoWhile_2;
Symbol sym_For_4;
Symbol sym_Goto_1;
Symbol sym_Continue_0;
Symbol sym_Break_0;
Symbol sym_Return_1;
Symbol sym_Exit_1;
Symbol sym_FunDef_3;
Symbol sym_NoTypeSpecifier_0;
Symbol sym_TranslationUnit_1;
Symbol sym_Include_1;
Symbol sym_IdDecl_3;
Symbol sym_FunDecl_3;
Symbol sym_TypedefDeclarator1_3;
Symbol sym_TypedefDeclarator2_3;
Symbol sym_OldFunction1_3;
Symbol sym_OldFunction2_3;
Symbol sym_PpIf_4;
Symbol sym_return_0;
Symbol sym_exit_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
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
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
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
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_TraceAll_0;
Symbol sym_Trace_1;
Symbol sym_Include_1;
Symbol sym_InitCachedTerms_0;
Symbol sym_Match_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_PointerOf_1 = ATmakeSymbol("PointerOf", 1, ATfalse);
  ATprotectSymbol(sym_PointerOf_1);
  sym_Pointer_2 = ATmakeSymbol("Pointer", 2, ATfalse);
  ATprotectSymbol(sym_Pointer_2);
  sym_ParamListVarArgs_1 = ATmakeSymbol("ParamListVarArgs", 1, ATfalse);
  ATprotectSymbol(sym_ParamListVarArgs_1);
  sym_ParamList_1 = ATmakeSymbol("ParamList", 1, ATfalse);
  ATprotectSymbol(sym_ParamList_1);
  sym_ArrayDecl_2 = ATmakeSymbol("ArrayDecl", 2, ATfalse);
  ATprotectSymbol(sym_ArrayDecl_2);
  sym_DeclBracket_1 = ATmakeSymbol("DeclBracket", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket_1);
  sym_DeclBracket1_1 = ATmakeSymbol("DeclBracket1", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket1_1);
  sym_DeclBracket2_1 = ATmakeSymbol("DeclBracket2", 1, ATfalse);
  ATprotectSymbol(sym_DeclBracket2_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ParamDecl_2 = ATmakeSymbol("ParamDecl", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl_2);
  sym_ParamDecl2_2 = ATmakeSymbol("ParamDecl2", 2, ATfalse);
  ATprotectSymbol(sym_ParamDecl2_2);
  sym_TypeName_2 = ATmakeSymbol("TypeName", 2, ATfalse);
  ATprotectSymbol(sym_TypeName_2);
  sym_Enum_2 = ATmakeSymbol("Enum", 2, ATfalse);
  ATprotectSymbol(sym_Enum_2);
  sym_EnumId_1 = ATmakeSymbol("EnumId", 1, ATfalse);
  ATprotectSymbol(sym_EnumId_1);
  sym_Enumerator_2 = ATmakeSymbol("Enumerator", 2, ATfalse);
  ATprotectSymbol(sym_Enumerator_2);
  sym_EnumVal_1 = ATmakeSymbol("EnumVal", 1, ATfalse);
  ATprotectSymbol(sym_EnumVal_1);
  sym_Struct_2 = ATmakeSymbol("Struct", 2, ATfalse);
  ATprotectSymbol(sym_Struct_2);
  sym_StructId_1 = ATmakeSymbol("StructId", 1, ATfalse);
  ATprotectSymbol(sym_StructId_1);
  sym_Union_2 = ATmakeSymbol("Union", 2, ATfalse);
  ATprotectSymbol(sym_Union_2);
  sym_UnionId_1 = ATmakeSymbol("UnionId", 1, ATfalse);
  ATprotectSymbol(sym_UnionId_1);
  sym_MemDecl_2 = ATmakeSymbol("MemDecl", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl_2);
  sym_MemDecl1_2 = ATmakeSymbol("MemDecl1", 2, ATfalse);
  ATprotectSymbol(sym_MemDecl1_2);
  sym_BitFieldSize_2 = ATmakeSymbol("BitFieldSize", 2, ATfalse);
  ATprotectSymbol(sym_BitFieldSize_2);
  sym_IntConst_1 = ATmakeSymbol("IntConst", 1, ATfalse);
  ATprotectSymbol(sym_IntConst_1);
  sym_FloatConst_1 = ATmakeSymbol("FloatConst", 1, ATfalse);
  ATprotectSymbol(sym_FloatConst_1);
  sym_OctConst_1 = ATmakeSymbol("OctConst", 1, ATfalse);
  ATprotectSymbol(sym_OctConst_1);
  sym_HexConst_1 = ATmakeSymbol("HexConst", 1, ATfalse);
  ATprotectSymbol(sym_HexConst_1);
  sym_CharConst_1 = ATmakeSymbol("CharConst", 1, ATfalse);
  ATprotectSymbol(sym_CharConst_1);
  sym_StringLit_1 = ATmakeSymbol("StringLit", 1, ATfalse);
  ATprotectSymbol(sym_StringLit_1);
  sym_ArrayIndex_2 = ATmakeSymbol("ArrayIndex", 2, ATfalse);
  ATprotectSymbol(sym_ArrayIndex_2);
  sym_FunCall_2 = ATmakeSymbol("FunCall", 2, ATfalse);
  ATprotectSymbol(sym_FunCall_2);
  sym_Field_2 = ATmakeSymbol("Field", 2, ATfalse);
  ATprotectSymbol(sym_Field_2);
  sym_DerefMember_2 = ATmakeSymbol("DerefMember", 2, ATfalse);
  ATprotectSymbol(sym_DerefMember_2);
  sym_PostIncr_1 = ATmakeSymbol("PostIncr", 1, ATfalse);
  ATprotectSymbol(sym_PostIncr_1);
  sym_PostDecr_1 = ATmakeSymbol("PostDecr", 1, ATfalse);
  ATprotectSymbol(sym_PostDecr_1);
  sym_PreIncr_1 = ATmakeSymbol("PreIncr", 1, ATfalse);
  ATprotectSymbol(sym_PreIncr_1);
  sym_PreDecr_1 = ATmakeSymbol("PreDecr", 1, ATfalse);
  ATprotectSymbol(sym_PreDecr_1);
  sym_SizeofExp_1 = ATmakeSymbol("SizeofExp", 1, ATfalse);
  ATprotectSymbol(sym_SizeofExp_1);
  sym_SizeofType_1 = ATmakeSymbol("SizeofType", 1, ATfalse);
  ATprotectSymbol(sym_SizeofType_1);
  sym_Address_1 = ATmakeSymbol("Address", 1, ATfalse);
  ATprotectSymbol(sym_Address_1);
  sym_Deref_1 = ATmakeSymbol("Deref", 1, ATfalse);
  ATprotectSymbol(sym_Deref_1);
  sym_Positive_1 = ATmakeSymbol("Positive", 1, ATfalse);
  ATprotectSymbol(sym_Positive_1);
  sym_Negative_1 = ATmakeSymbol("Negative", 1, ATfalse);
  ATprotectSymbol(sym_Negative_1);
  sym_Tilde_1 = ATmakeSymbol("Tilde", 1, ATfalse);
  ATprotectSymbol(sym_Tilde_1);
  sym_Negation_1 = ATmakeSymbol("Negation", 1, ATfalse);
  ATprotectSymbol(sym_Negation_1);
  sym_TypeCast_2 = ATmakeSymbol("TypeCast", 2, ATfalse);
  ATprotectSymbol(sym_TypeCast_2);
  sym_Mul_2 = ATmakeSymbol("Mul", 2, ATfalse);
  ATprotectSymbol(sym_Mul_2);
  sym_Div_2 = ATmakeSymbol("Div", 2, ATfalse);
  ATprotectSymbol(sym_Div_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Add_2 = ATmakeSymbol("Add", 2, ATfalse);
  ATprotectSymbol(sym_Add_2);
  sym_Subt_2 = ATmakeSymbol("Subt", 2, ATfalse);
  ATprotectSymbol(sym_Subt_2);
  sym_ShiftLeft_2 = ATmakeSymbol("ShiftLeft", 2, ATfalse);
  ATprotectSymbol(sym_ShiftLeft_2);
  sym_ShiftRight_2 = ATmakeSymbol("ShiftRight", 2, ATfalse);
  ATprotectSymbol(sym_ShiftRight_2);
  sym_Lt_2 = ATmakeSymbol("Lt", 2, ATfalse);
  ATprotectSymbol(sym_Lt_2);
  sym_Gt_2 = ATmakeSymbol("Gt", 2, ATfalse);
  ATprotectSymbol(sym_Gt_2);
  sym_Le_2 = ATmakeSymbol("Le", 2, ATfalse);
  ATprotectSymbol(sym_Le_2);
  sym_Ge_2 = ATmakeSymbol("Ge", 2, ATfalse);
  ATprotectSymbol(sym_Ge_2);
  sym_Equal_2 = ATmakeSymbol("Equal", 2, ATfalse);
  ATprotectSymbol(sym_Equal_2);
  sym_NotEqual_2 = ATmakeSymbol("NotEqual", 2, ATfalse);
  ATprotectSymbol(sym_NotEqual_2);
  sym_And_2 = ATmakeSymbol("And", 2, ATfalse);
  ATprotectSymbol(sym_And_2);
  sym_ExOr_2 = ATmakeSymbol("ExOr", 2, ATfalse);
  ATprotectSymbol(sym_ExOr_2);
  sym_IncOr_2 = ATmakeSymbol("IncOr", 2, ATfalse);
  ATprotectSymbol(sym_IncOr_2);
  sym_LAnd_2 = ATmakeSymbol("LAnd", 2, ATfalse);
  ATprotectSymbol(sym_LAnd_2);
  sym_LOr_2 = ATmakeSymbol("LOr", 2, ATfalse);
  ATprotectSymbol(sym_LOr_2);
  sym_IfExp_3 = ATmakeSymbol("IfExp", 3, ATfalse);
  ATprotectSymbol(sym_IfExp_3);
  sym_Assign_3 = ATmakeSymbol("Assign", 3, ATfalse);
  ATprotectSymbol(sym_Assign_3);
  sym_AssignEq_0 = ATmakeSymbol("AssignEq", 0, ATfalse);
  ATprotectSymbol(sym_AssignEq_0);
  sym_AssignMul_0 = ATmakeSymbol("AssignMul", 0, ATfalse);
  ATprotectSymbol(sym_AssignMul_0);
  sym_AssignDiv_0 = ATmakeSymbol("AssignDiv", 0, ATfalse);
  ATprotectSymbol(sym_AssignDiv_0);
  sym_AssignMod_0 = ATmakeSymbol("AssignMod", 0, ATfalse);
  ATprotectSymbol(sym_AssignMod_0);
  sym_AssignPlus_0 = ATmakeSymbol("AssignPlus", 0, ATfalse);
  ATprotectSymbol(sym_AssignPlus_0);
  sym_AssignMin_0 = ATmakeSymbol("AssignMin", 0, ATfalse);
  ATprotectSymbol(sym_AssignMin_0);
  sym_AssignSL_0 = ATmakeSymbol("AssignSL", 0, ATfalse);
  ATprotectSymbol(sym_AssignSL_0);
  sym_AssignSR_0 = ATmakeSymbol("AssignSR", 0, ATfalse);
  ATprotectSymbol(sym_AssignSR_0);
  sym_AssignAnd_0 = ATmakeSymbol("AssignAnd", 0, ATfalse);
  ATprotectSymbol(sym_AssignAnd_0);
  sym_AssignExp_0 = ATmakeSymbol("AssignExp", 0, ATfalse);
  ATprotectSymbol(sym_AssignExp_0);
  sym_AssignOr_0 = ATmakeSymbol("AssignOr", 0, ATfalse);
  ATprotectSymbol(sym_AssignOr_0);
  sym_Comma_2 = ATmakeSymbol("Comma", 2, ATfalse);
  ATprotectSymbol(sym_Comma_2);
  sym_EmptyExp_0 = ATmakeSymbol("EmptyExp", 0, ATfalse);
  ATprotectSymbol(sym_EmptyExp_0);
  sym_Typedef_0 = ATmakeSymbol("Typedef", 0, ATfalse);
  ATprotectSymbol(sym_Typedef_0);
  sym_Extern_0 = ATmakeSymbol("Extern", 0, ATfalse);
  ATprotectSymbol(sym_Extern_0);
  sym_Static_0 = ATmakeSymbol("Static", 0, ATfalse);
  ATprotectSymbol(sym_Static_0);
  sym_Auto_0 = ATmakeSymbol("Auto", 0, ATfalse);
  ATprotectSymbol(sym_Auto_0);
  sym_Register_0 = ATmakeSymbol("Register", 0, ATfalse);
  ATprotectSymbol(sym_Register_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Char_0 = ATmakeSymbol("Char", 0, ATfalse);
  ATprotectSymbol(sym_Char_0);
  sym_Short_0 = ATmakeSymbol("Short", 0, ATfalse);
  ATprotectSymbol(sym_Short_0);
  sym_Long_0 = ATmakeSymbol("Long", 0, ATfalse);
  ATprotectSymbol(sym_Long_0);
  sym_Float_0 = ATmakeSymbol("Float", 0, ATfalse);
  ATprotectSymbol(sym_Float_0);
  sym_Double_0 = ATmakeSymbol("Double", 0, ATfalse);
  ATprotectSymbol(sym_Double_0);
  sym_Signed_0 = ATmakeSymbol("Signed", 0, ATfalse);
  ATprotectSymbol(sym_Signed_0);
  sym_Unsigned_0 = ATmakeSymbol("Unsigned", 0, ATfalse);
  ATprotectSymbol(sym_Unsigned_0);
  sym_Void_0 = ATmakeSymbol("Void", 0, ATfalse);
  ATprotectSymbol(sym_Void_0);
  sym_Const_0 = ATmakeSymbol("Const", 0, ATfalse);
  ATprotectSymbol(sym_Const_0);
  sym_Volatile_0 = ATmakeSymbol("Volatile", 0, ATfalse);
  ATprotectSymbol(sym_Volatile_0);
  sym_Declaration_2 = ATmakeSymbol("Declaration", 2, ATfalse);
  ATprotectSymbol(sym_Declaration_2);
  sym_Declaration2_2 = ATmakeSymbol("Declaration2", 2, ATfalse);
  ATprotectSymbol(sym_Declaration2_2);
  sym_IdDeclInit_2 = ATmakeSymbol("IdDeclInit", 2, ATfalse);
  ATprotectSymbol(sym_IdDeclInit_2);
  sym_DeclInit_2 = ATmakeSymbol("DeclInit", 2, ATfalse);
  ATprotectSymbol(sym_DeclInit_2);
  sym_ArrayInit_1 = ATmakeSymbol("ArrayInit", 1, ATfalse);
  ATprotectSymbol(sym_ArrayInit_1);
  sym_ArrayInitIncomplete_1 = ATmakeSymbol("ArrayInitIncomplete", 1, ATfalse);
  ATprotectSymbol(sym_ArrayInitIncomplete_1);
  sym_AssignInit_1 = ATmakeSymbol("AssignInit", 1, ATfalse);
  ATprotectSymbol(sym_AssignInit_1);
  sym_TypeSpec_3 = ATmakeSymbol("TypeSpec", 3, ATfalse);
  ATprotectSymbol(sym_TypeSpec_3);
  sym_DQualifiers_3 = ATmakeSymbol("DQualifiers", 3, ATfalse);
  ATprotectSymbol(sym_DQualifiers_3);
  sym_DeclSpec_5 = ATmakeSymbol("DeclSpec", 5, ATfalse);
  ATprotectSymbol(sym_DeclSpec_5);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_TypeId_1 = ATmakeSymbol("TypeId", 1, ATfalse);
  ATprotectSymbol(sym_TypeId_1);
  sym_Label_2 = ATmakeSymbol("Label", 2, ATfalse);
  ATprotectSymbol(sym_Label_2);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Default_1 = ATmakeSymbol("Default", 1, ATfalse);
  ATprotectSymbol(sym_Default_1);
  sym_Compound_2 = ATmakeSymbol("Compound", 2, ATfalse);
  ATprotectSymbol(sym_Compound_2);
  sym_Stat_1 = ATmakeSymbol("Stat", 1, ATfalse);
  ATprotectSymbol(sym_Stat_1);
  sym_If_2 = ATmakeSymbol("If", 2, ATfalse);
  ATprotectSymbol(sym_If_2);
  sym_IfElse_3 = ATmakeSymbol("IfElse", 3, ATfalse);
  ATprotectSymbol(sym_IfElse_3);
  sym_Switch_2 = ATmakeSymbol("Switch", 2, ATfalse);
  ATprotectSymbol(sym_Switch_2);
  sym_While_2 = ATmakeSymbol("While", 2, ATfalse);
  ATprotectSymbol(sym_While_2);
  sym_DoWhile_2 = ATmakeSymbol("DoWhile", 2, ATfalse);
  ATprotectSymbol(sym_DoWhile_2);
  sym_For_4 = ATmakeSymbol("For", 4, ATfalse);
  ATprotectSymbol(sym_For_4);
  sym_Goto_1 = ATmakeSymbol("Goto", 1, ATfalse);
  ATprotectSymbol(sym_Goto_1);
  sym_Continue_0 = ATmakeSymbol("Continue", 0, ATfalse);
  ATprotectSymbol(sym_Continue_0);
  sym_Break_0 = ATmakeSymbol("Break", 0, ATfalse);
  ATprotectSymbol(sym_Break_0);
  sym_Return_1 = ATmakeSymbol("Return", 1, ATfalse);
  ATprotectSymbol(sym_Return_1);
  sym_Exit_1 = ATmakeSymbol("Exit", 1, ATfalse);
  ATprotectSymbol(sym_Exit_1);
  sym_FunDef_3 = ATmakeSymbol("FunDef", 3, ATfalse);
  ATprotectSymbol(sym_FunDef_3);
  sym_NoTypeSpecifier_0 = ATmakeSymbol("NoTypeSpecifier", 0, ATfalse);
  ATprotectSymbol(sym_NoTypeSpecifier_0);
  sym_TranslationUnit_1 = ATmakeSymbol("TranslationUnit", 1, ATfalse);
  ATprotectSymbol(sym_TranslationUnit_1);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_IdDecl_3 = ATmakeSymbol("IdDecl", 3, ATfalse);
  ATprotectSymbol(sym_IdDecl_3);
  sym_FunDecl_3 = ATmakeSymbol("FunDecl", 3, ATfalse);
  ATprotectSymbol(sym_FunDecl_3);
  sym_TypedefDeclarator1_3 = ATmakeSymbol("TypedefDeclarator1", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator1_3);
  sym_TypedefDeclarator2_3 = ATmakeSymbol("TypedefDeclarator2", 3, ATfalse);
  ATprotectSymbol(sym_TypedefDeclarator2_3);
  sym_OldFunction1_3 = ATmakeSymbol("OldFunction1", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction1_3);
  sym_OldFunction2_3 = ATmakeSymbol("OldFunction2", 3, ATfalse);
  ATprotectSymbol(sym_OldFunction2_3);
  sym_PpIf_4 = ATmakeSymbol("PpIf", 4, ATfalse);
  ATprotectSymbol(sym_PpIf_4);
  sym_return_0 = ATmakeSymbol("return", 0, ATfalse);
  ATprotectSymbol(sym_return_0);
  sym_exit_0 = ATmakeSymbol("exit", 0, ATfalse);
  ATprotectSymbol(sym_exit_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
  ATprotectSymbol(sym_TraceAll_0);
  sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
  ATprotectSymbol(sym_Trace_1);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_InitCachedTerms_0 = ATmakeSymbol("InitCachedTerms", 0, ATfalse);
  ATprotectSymbol(sym_InitCachedTerms_0);
  sym_Match_2 = ATmakeSymbol("Match", 2, ATfalse);
  ATprotectSymbol(sym_Match_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_x_38;
ATerm term_h_38;
ATerm term_s_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_y_36;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_g_33;
ATerm term_c_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_b_32;
ATerm term_p_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_g_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_n_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_t_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_c_29;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_b_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_b_27;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_e_26;
ATerm term_a_26;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_w_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_f_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_q_6;
ATerm term_p_6;
void init_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("tracing all functions: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym__2, term_z_6, term_g_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f            trace strategy operator f", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h   include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_AssignEq_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotect", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_Id_1, term_z_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Void_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_b_8, (ATerm) ATempty);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constant_terms", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Id_1, term_d_8);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_9, (ATerm) ATempty);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Initialized", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("NULL", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CachedTerms", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("term_", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cache", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_TypeName_2, term_q_9, term_r_9);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Id_1, term_x_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeAppl", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Id_1, term_e_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not_null", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Id_1, term_j_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeSymbol", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Id_1, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_IntConst_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATtrue", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Id_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeReal", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Id_1, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATmakeInt", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Id_1, term_v_14);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckATermList", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Id_1, term_r_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATinsert", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Id_1, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATempty", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Id_1, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_13, term_c_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetArgument", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Id_1, term_a_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_cons", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Id_1, term_j_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_real", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Id_1, term_n_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_int", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Id_1, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("match_string", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Id_1, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Id_1, term_u_10);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Id_1, term_z_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Id_1, term_c_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetFirst", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Id_1, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermList", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_TypeId_1, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_h_18, (ATerm) ATempty);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_TypeName_2, term_i_18, term_r_9);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetNext", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Id_1, term_n_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetType", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Id_1, term_w_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_LIST", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Id_1, term_d_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_REAL", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Id_1, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetReal", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Id_1, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermReal", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_TypeId_1, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_p_19, (ATerm) ATempty);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_TypeName_2, term_q_19, term_r_9);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("AT_INT", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Id_1, term_s_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetInt", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_1, term_x_19);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermInt", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_e_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_f_20, (ATerm) ATempty);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_j_20, term_r_9);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetSymbol", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Id_1, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATermAppl", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_20, (ATerm) ATempty);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_TypeName_2, term_r_20, term_r_9);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_18);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PushChoice", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Id_1, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_c_21, (ATerm) ATempty);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_d_21, term_q_14);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PopChoice", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Id_1, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_k_21, (ATerm) ATempty);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_l_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, term_d_18);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Stat_1, term_r_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("GlobalPushChoice", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Id_1, term_v_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_FunCall_2, term_w_21, (ATerm) ATempty);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Equal_2, term_x_21, term_q_14);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("int", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_TypeId_1, term_z_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_a_22, (ATerm) ATempty);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("stack_ptr", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Id_1, term_c_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_d_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("LocalPopChoice", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Id_1, term_j_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_AssignInit_1, term_y_17);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Return_1, term_d_18);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(%t)\n", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": %t\n", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfprintf", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("stderr", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Id_1, term_k_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_d_18, term_r_9);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_q_9, term_q_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorName", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATfalse", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Id_1, term_w_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATprotectSymbol", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Id_1, term_y_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_FunCall_2, term_e_8, (ATerm) ATempty);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Stat_1, term_d_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("init_constructors", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Id_1, term_i_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sym_", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Symbol", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_TypeId_1, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_l_26, (ATerm) ATempty);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("#include ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("void", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_TypeId_1, term_p_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_TypeSpec_3, (ATerm)ATempty, term_q_27, (ATerm) ATempty);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATempty);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Some_1, term_f_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_8, term_g_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_InitCachedTerms_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Op_2, term_q_29, (ATerm) ATempty);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_x_16);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_16);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__2, term_j_33, term_t_24);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_t_24);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_t_24);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym__2, term_a_37, term_b_37);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__3, term_a_37, term_b_37, (ATerm) ATempty);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm post_extend_config_0 (ATerm);
ATerm Option_2 (ATerm, ATerm e_92 (ATerm), ATerm f_92 (ATerm));
ATerm s2c_options_0 (ATerm);
ATerm InitTermId_0 (ATerm);
ATerm InitTermIds_0 (ATerm);
ATerm DeclareTermId_0 (ATerm);
ATerm init_cached_terms_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm e_110 (ATerm));
ATerm Csimplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm v_111 (ATerm), ATerm w_111 (ATerm));
ATerm repeat_1 (ATerm, ATerm y_111 (ATerm));
ATerm new_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm p_108 (ATerm));
ATerm construct_term_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_108 (ATerm));
ATerm real_to_string_0 (ATerm);
ATerm MatchArg2_0 (ATerm);
ATerm Initialized_0 (ATerm);
ATerm MatchArg1_0 (ATerm);
ATerm Nil_T_0 (ATerm);
ATerm Cons_T_2 (ATerm, ATerm b_1 (ATerm), ATerm e_1 (ATerm));
ATerm thread_map_1 (ATerm, ATerm d_99 (ATerm));
ATerm Var_1 (ATerm, ATerm x_0 (ATerm));
ATerm Snd_0 (ATerm);
ATerm CachedTerms_0 (ATerm);
ATerm BuildDefault_1 (ATerm, ATerm a_82 (ATerm));
ATerm Real_1 (ATerm, ATerm w_0 (ATerm));
ATerm Str_1 (ATerm, ATerm v_0 (ATerm));
ATerm Int_1 (ATerm, ATerm u_0 (ATerm));
ATerm proper_list_0 (ATerm);
ATerm Op_2 (ATerm, ATerm j_84 (ATerm), ATerm k_84 (ATerm));
ATerm CacheConstant_0 (ATerm);
ATerm ConstructTerm_0 (ATerm);
ATerm Id_1 (ATerm, ATerm c_78 (ATerm));
ATerm FunCall_2 (ATerm, ATerm u_74 (ATerm), ATerm v_74 (ATerm));
ATerm ConstructList_0 (ATerm);
ATerm Cache_0 (ATerm);
ATerm construct_term_caching_0 (ATerm);
ATerm TranslateStrat_0 (ATerm);
ATerm PlainBody_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm TracedBody_0 (ATerm);
ATerm TraceAllFuns_0 (ATerm);
ATerm TraceFun_0 (ATerm);
ATerm TranslateDef_0 (ATerm);
ATerm quote_1 (ATerm, ATerm n_96 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm a_88 (ATerm));
ATerm ConstructorName_0 (ATerm);
ATerm InitConstructor_0 (ATerm);
ATerm InitConstructors_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm t_0 (ATerm));
ATerm escape_1 (ATerm, ATerm z_95 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm));
ATerm length_0 (ATerm);
ATerm Arity_0 (ATerm);
ATerm DeclareConstructor_0 (ATerm);
ATerm TranslateSig_0 (ATerm);
ATerm TranslateType_0 (ATerm);
ATerm TranslateVarDec_0 (ATerm);
ATerm SDefToDeclaration_0 (ATerm);
ATerm TranslateSpec_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_87 (ATerm));
ATerm restore_always_2 (ATerm, ATerm f_113 (ATerm), ATerm g_113 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_87 (ATerm));
ATerm scope_2 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm));
ATerm assert_1 (ATerm, ATerm y_87 (ATerm));
ATerm init_term_caching_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_94 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_92 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_98 (ATerm), ATerm o_98 (ATerm));
ATerm crush_2 (ATerm, ATerm c_100 (ATerm), ATerm d_100 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm j_67 (ATerm), ATerm k_67 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_94 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_97 (ATerm), ATerm c_97 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_94 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_104 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_91 (ATerm));
ATerm map_1 (ATerm, ATerm z_103 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_91 (ATerm));
ATerm Program_1 (ATerm, ATerm k_80 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_80 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_104 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_112 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_92 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm n_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_91 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_91 (ATerm));
ATerm iowrap_4 (ATerm, ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_93 (ATerm), ATerm o_93 (ATerm));
ATerm s2c_0 (ATerm);
ATerm main_0 (ATerm);
ATerm post_extend_config_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,t_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      t_4 = ATgetArgument(e_4, 1);
      {
        ATerm g_5 = NULL;
        ATerm h_5 = NULL,m_5 = NULL;
        ATerm i_5 = NULL;
        t = not_null(f_4);
        {
          ATerm i_6 = t;
          int o_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(o_6);
            }
          else
            {
              t = i_6;
              t = (ATerm) ATempty;
            }
          {
            i_5 = t;
            if(((h_5 != NULL) && (h_5 != i_5)))
              _fail(i_5);
            else
              h_5 = i_5;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), not_null(t_4));
          {
            t = conc_0(t);
            {
              m_5 = t;
              if(((g_5 != NULL) && (g_5 != m_5)))
                _fail(m_5);
              else
                g_5 = m_5;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_6, not_null(f_4), not_null(g_5));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Option_2 (ATerm t, ATerm e_92 (ATerm), ATerm f_92 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = term_q_6;
    return(t);
  }
  t = Option_3(t, e_92, f_92, a_0);
  return(t);
}
ATerm s2c_options_0 (ATerm t)
{
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        ATerm w_5 = NULL;
        w_5 = t;
        q_5 :
        if(!(match_string(w_5, "--trace-all   trace all strategies")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_t_6;
        {
          ATerm f_0 (ATerm t)
          {
            t = term_v_6;
            return(t);
          }
          t = debug_1(t, f_0);
          {
            ATerm y_6;
            y_6 = t;
            {
              t = term_h_7;
              {
                ATerm y_0 (ATerm t)
                {
                  t = term_i_7;
                  return(t);
                }
                t = assert_1(t, y_0);
              }
            }
            t = y_6;
          }
        }
        return(t);
      }
      t = Option_2(t, b_0, e_0);
      LocalPopChoice(s_6);
    }
  else
    {
      t = r_6;
      {
        ATerm j_7 = t;
        int k_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              ATerm x_5 = NULL;
              x_5 = t;
              r_5 :
              if(!(match_string(x_5, "-t")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_1 (ATerm t)
            {
              ATerm y_5 = NULL;
              y_5 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(y_5)), (ATerm) ATmakeAppl(sym_Defined_2, term_l_7, not_null(y_5)));
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = term_m_7;
                    return(t);
                  }
                  t = assert_1(t, d_1);
                }
                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(y_5));
              }
              return(t);
            }
            ATerm c_1 (ATerm t)
            {
              t = term_t_7;
              return(t);
            }
            t = ArgOption_3(t, z_0, a_1, c_1);
            LocalPopChoice(k_7);
          }
        else
          {
            t = j_7;
            {
              ATerm f_1 (ATerm t)
              {
                ATerm a_6 = NULL;
                a_6 = t;
                t_5 :
                if(!(match_string(a_6, "--C-include")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm g_1 (ATerm t)
              {
                ATerm d_6 = NULL;
                ATerm u_7;
                u_7 = t;
                {
                  ATerm b_6 = NULL;
                  ATerm c_6 = NULL;
                  c_6 = t;
                  if(((b_6 != NULL) && (b_6 != c_6)))
                    _fail(c_6);
                  else
                    b_6 = c_6;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATempty, not_null(b_6)));
                    t = post_extend_config_0(t);
                  }
                }
                t = u_7;
                {
                  ATerm e_6 = NULL;
                  e_6 = t;
                  if(((d_6 != NULL) && (d_6 != e_6)))
                    _fail(e_6);
                  else
                    d_6 = e_6;
                  t = (ATerm) ATmakeAppl(sym_Include_1, not_null(d_6));
                }
                return(t);
              }
              ATerm h_1 (ATerm t)
              {
                t = term_x_7;
                return(t);
              }
              t = ArgOption_3(t, f_1, g_1, h_1);
            }
          }
      }
    }
  return(t);
}
ATerm InitTermId_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym__3))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      n_6 = ATgetArgument(k_6, 2);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Address_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(m_6))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(m_6)), term_y_7, not_null(n_6))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitTermIds_0 (ATerm t)
{
  ATerm u_6 = NULL;
  ATerm w_6 = NULL;
  u_6 = t;
  {
    ATerm x_6 = NULL;
    t = not_null(u_6);
    {
      t = map_1(t, InitTermId_0);
      {
        t = concat_0(t);
        {
          t = reverse_0(t);
          {
            x_6 = t;
            if(((w_6 != NULL) && (w_6 != x_6)))
              _fail(x_6);
            else
              w_6 = x_6;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_c_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_e_8, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_c_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(w_6)));
  }
  return(t);
}
ATerm DeclareTermId_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__3))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      f_7 = ATgetArgument(c_7, 2);
      t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(e_7)), term_r_9)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_cached_terms_0 (ATerm t)
{
  ATerm n_7 = NULL;
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CachedTerms_0(t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      t = (ATerm) ATempty;
    }
  {
    ATerm o_7 = NULL,q_7 = NULL,s_7 = NULL;
    ATerm u_9;
    u_9 = t;
    {
      ATerm p_7 = NULL;
      t = map_1(t, DeclareTermId_0);
      {
        p_7 = t;
        if(((o_7 != NULL) && (o_7 != p_7)))
          _fail(p_7);
        else
          o_7 = p_7;
      }
    }
    t = u_9;
    {
      ATerm r_7 = NULL;
      t = InitTermIds_0(t);
      {
        r_7 = t;
        if(((q_7 != NULL) && (q_7 != r_7)))
          _fail(r_7);
        else
          q_7 = r_7;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_7), (ATerm) ATinsert(ATempty, not_null(q_7)));
        {
          t = conc_0(t);
          {
            s_7 = t;
            if(((n_7 != NULL) && (n_7 != s_7)))
              _fail(s_7);
            else
              n_7 = s_7;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(n_7));
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm e_110 (ATerm))
{
  ATerm w_7 (ATerm t)
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_110(t);
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
        t = _one(t, w_7);
      }
    return(t);
  }
  t = w_7(t);
  return(t);
}
ATerm Csimplify_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
  ATerm h_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_Negation_1, not_null(i_9)), not_null(c_9));
    return(t);
  }
  ATerm i_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, not_null(i_9), not_null(j_9));
    return(t);
  }
  ATerm j_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_9), not_null(j_9));
    t = conc_0(t);
    return(t);
  }
  ATerm k_10 (ATerm t)
  {
    ATerm x_9 = NULL;
    ATerm y_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(l_9));
    {
      t = conc_0(t);
      {
        y_9 = t;
        if(((x_9 != NULL) && (x_9 != y_9)))
          _fail(y_9);
        else
          x_9 = y_9;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(x_9), not_null(m_9));
    return(t);
  }
  ATerm l_10 (ATerm t)
  {
    ATerm d_10 = NULL,f_10 = NULL;
    ATerm z_9;
    z_9 = t;
    {
      ATerm e_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(l_9));
      {
        t = conc_0(t);
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
      }
    }
    t = z_9;
    {
      ATerm g_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(n_9));
      {
        t = conc_0(t);
        {
          g_10 = t;
          if(((f_10 != NULL) && (f_10 != g_10)))
            _fail(g_10);
          else
            f_10 = g_10;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(d_10), not_null(f_10));
    }
    return(t);
  }
  h_9 = t;
  f_8 :
  if(match_cons(h_9, sym_IfElse_3))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      c_9 = ATgetArgument(h_9, 2);
      g_8 :
      if(match_cons(c_9, sym_Compound_2))
        {
          d_9 = ATgetArgument(c_9, 0);
          e_9 = ATgetArgument(c_9, 1);
          h_8 :
          if(((ATermList) e_9 == ATempty))
            {
              i_8 :
              if(((ATermList) d_9 == ATempty))
                {
                  j_8 :
                  if(match_cons(j_9, sym_Compound_2))
                    {
                      k_9 = ATgetArgument(j_9, 0);
                      n_9 = ATgetArgument(j_9, 1);
                      k_8 :
                      if(((ATermList) n_9 == ATempty))
                        {
                          l_8 :
                          if(((ATermList) k_9 == ATempty))
                            {
                              {
                                ATerm a_10 = t;
                                int b_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = h_10(t);
                                    LocalPopChoice(b_10);
                                  }
                                else
                                  {
                                    t = a_10;
                                    t = i_10(t);
                                  }
                              }
                            }
                          else
                            {
                              t = i_10(t);
                            }
                        }
                      else
                        {
                          m_8 :
                          t = i_10(t);
                        }
                    }
                  else
                    {
                      t = i_10(t);
                    }
                }
              else
                {
                  n_8 :
                  if(match_cons(j_9, sym_Compound_2))
                    {
                      k_9 = ATgetArgument(j_9, 0);
                      n_9 = ATgetArgument(j_9, 1);
                      o_8 :
                      if(((ATermList) k_9 == ATempty))
                        {
                          p_8 :
                          if(((ATermList) n_9 == ATempty))
                            {
                              t = h_10(t);
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
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              q_8 :
              r_8 :
              if(match_cons(j_9, sym_Compound_2))
                {
                  k_9 = ATgetArgument(j_9, 0);
                  n_9 = ATgetArgument(j_9, 1);
                  s_8 :
                  if(((ATermList) k_9 == ATempty))
                    {
                      t_8 :
                      if(((ATermList) n_9 == ATempty))
                        {
                          t = h_10(t);
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
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          u_8 :
          if(match_cons(j_9, sym_Compound_2))
            {
              k_9 = ATgetArgument(j_9, 0);
              n_9 = ATgetArgument(j_9, 1);
              v_8 :
              if(((ATermList) k_9 == ATempty))
                {
                  w_8 :
                  if(((ATermList) n_9 == ATempty))
                    {
                      t = h_10(t);
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
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATgetType(h_9) == AT_LIST) && ((ATermList) h_9 != ATempty)))
        {
          i_9 = ATgetFirst((ATermList) h_9);
          j_9 = (ATerm) ATgetNext((ATermList) h_9);
          x_8 :
          if(match_cons(i_9, sym_Compound_2))
            {
              f_9 = ATgetArgument(i_9, 0);
              g_9 = ATgetArgument(i_9, 1);
              y_8 :
              if(((ATermList) f_9 == ATempty))
                {
                  t = j_10(t);
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
      else
        {
          if(match_cons(h_9, sym_Compound_2))
            {
              i_9 = ATgetArgument(h_9, 0);
              j_9 = ATgetArgument(h_9, 1);
              z_8 :
              if(((ATgetType(j_9) == AT_LIST) && ((ATermList) j_9 != ATempty)))
                {
                  k_9 = ATgetFirst((ATermList) j_9);
                  n_9 = (ATerm) ATgetNext((ATermList) j_9);
                  a_9 :
                  if(match_cons(k_9, sym_Compound_2))
                    {
                      l_9 = ATgetArgument(k_9, 0);
                      m_9 = ATgetArgument(k_9, 1);
                      b_9 :
                      if(((ATermList) n_9 == ATempty))
                        {
                          {
                            ATerm c_10 = t;
                            int m_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_10(t);
                                LocalPopChoice(m_10);
                              }
                            else
                              {
                                t = c_10;
                                t = l_10(t);
                              }
                          }
                        }
                      else
                        {
                          t = l_10(t);
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
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm v_111 (ATerm), ATerm w_111 (ATerm))
{
  ATerm p_10 (ATerm t)
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_111(t);
        t = p_10(t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = w_111(t);
      }
    return(t);
  }
  t = p_10(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_111 (ATerm))
{
  t = repeat_2(t, y_111, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm p_108 (ATerm))
{
  ATerm i_1 (ATerm t)
  {
    t = bottomup_1(t, p_108);
    return(t);
  }
  t = _all(t, i_1);
  t = p_108(t);
  return(t);
}
ATerm construct_term_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm k_1 (ATerm t)
    {
      ATerm q_10 = t;
      int s_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ConstructList_0(t);
          LocalPopChoice(s_10);
        }
      else
        {
          t = q_10;
          t = ConstructTerm_0(t);
        }
      return(t);
    }
    t = try_1(t, k_1);
    return(t);
  }
  t = bottomup_1(t, j_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm o_108 (ATerm))
{
  t = o_108(t);
  {
    ATerm l_1 (ATerm t)
    {
      t = topdown_1(t, o_108);
      return(t);
    }
    t = _all(t, l_1);
  }
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  t = SSL_real_to_string(not_null(r_10));
  return(t);
}
ATerm MatchArg2_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  w_10 :
  if(match_cons(x_10, sym__2))
    {
      y_10 = ATgetArgument(x_10, 0);
      z_10 = ATgetArgument(x_10, 1);
      {
        ATerm c_11 = NULL;
        ATerm d_11 = NULL;
        t = new_0(t);
        {
          d_11 = t;
          if(((c_11 != NULL) && (c_11 != d_11)))
            _fail(d_11);
          else
            c_11 = d_11;
        }
        t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_9, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_11)), term_r_9), (ATerm) ATmakeAppl(sym_AssignInit_1, not_null(z_10))))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(y_10), (ATerm) ATmakeAppl(sym_Id_1, not_null(c_11)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Initialized_0 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm l_11 = NULL,m_11 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_11));
    {
      ATerm m_1 (ATerm t)
      {
        t = term_t_10;
        return(t);
      }
      t = rewrite_1(t, m_1);
      {
        l_11 = t;
        h_11 :
        if(match_cons(l_11, sym_Defined_1))
          {
            m_11 = ATgetArgument(l_11, 0);
            i_11 :
            if(!(match_string(m_11, "j_0")))
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
    t = term_u_10;
  }
  return(t);
}
ATerm MatchArg1_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  s_11 = t;
  q_11 :
  if(match_cons(s_11, sym__2))
    {
      t_11 = ATgetArgument(s_11, 0);
      v_11 = ATgetArgument(s_11, 1);
      r_11 :
      if(match_cons(t_11, sym_Var_1))
        {
          u_11 = ATgetArgument(t_11, 0);
          {
            ATerm y_11 = NULL;
            t = not_null(u_11);
            {
              t = Initialized_0(t);
              {
                y_11 = t;
                p_11 :
                if(!(match_string(y_11, "NULL")))
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Match_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_11)), not_null(v_11));
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
ATerm Nil_T_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  b_12 :
  if(match_cons(d_12, sym__2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      c_12 :
      if(((ATermList) e_12 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_12));
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
ATerm Cons_T_2 (ATerm t, ATerm b_1 (ATerm), ATerm e_1 (ATerm))
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  p_12 = t;
  n_12 :
  if(match_cons(p_12, sym__2))
    {
      q_12 = ATgetArgument(p_12, 0);
      t_12 = ATgetArgument(p_12, 1);
      o_12 :
      if(((ATgetType(q_12) == AT_LIST) && ((ATermList) q_12 != ATempty)))
        {
          r_12 = ATgetFirst((ATermList) q_12);
          s_12 = (ATerm) ATgetNext((ATermList) q_12);
          {
            ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
            ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), not_null(t_12));
            {
              t = b_1(t);
              {
                b_13 = t;
                m_12 :
                if(match_cons(b_13, sym__2))
                  {
                    c_13 = ATgetArgument(b_13, 0);
                    d_13 = ATgetArgument(b_13, 1);
                    {
                      ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
                      if(((z_12 != NULL) && (z_12 != c_13)))
                        _fail(c_13);
                      else
                        z_12 = c_13;
                      {
                        if(((x_12 != NULL) && (x_12 != d_13)))
                          _fail(d_13);
                        else
                          x_12 = d_13;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_12), not_null(x_12));
                          {
                            t = e_1(t);
                            {
                              e_13 = t;
                              l_12 :
                              if(match_cons(e_13, sym__2))
                                {
                                  f_13 = ATgetArgument(e_13, 0);
                                  g_13 = ATgetArgument(e_13, 1);
                                  {
                                    if(((a_13 != NULL) && (a_13 != f_13)))
                                      _fail(f_13);
                                    else
                                      a_13 = f_13;
                                    if(((y_12 != NULL) && (y_12 != g_13)))
                                      _fail(g_13);
                                    else
                                      y_12 = g_13;
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
                else
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_13)), not_null(z_12)), not_null(y_12));
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
ATerm thread_map_1 (ATerm t, ATerm d_99 (ATerm))
{
  ATerm k_13 (ATerm t)
  {
    ATerm v_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_T_2(t, d_99, k_13);
        LocalPopChoice(a_11);
      }
    else
      {
        t = v_10;
        t = Nil_T_0(t);
      }
    return(t);
  }
  t = k_13(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm x_0 (ATerm))
{
  ATerm u_13 = NULL,v_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_Var_1))
    {
      v_13 = ATgetArgument(u_13, 0);
      {
        ATerm b_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_13 = NULL,a_14 = NULL;
            ATerm z_13 = NULL;
            t = SSLgetAnnotations(not_null(u_13));
            {
              z_13 = t;
              if(((y_13 != NULL) && (y_13 != z_13)))
                _fail(z_13);
              else
                y_13 = z_13;
            }
            {
              t = not_null(v_13);
              {
                ATerm c_14 = NULL;
                t = x_0(t);
                {
                  a_14 = t;
                  {
                    ATerm d_14 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_14)), not_null(y_13));
                    {
                      d_14 = t;
                      if(((c_14 != NULL) && (c_14 != d_14)))
                        _fail(d_14);
                      else
                        c_14 = d_14;
                    }
                    t = not_null(c_14);
                  }
                }
              }
            }
            LocalPopChoice(e_11);
          }
        else
          {
            t = b_11;
            {
              ATerm g_14 = NULL,i_14 = NULL;
              ATerm h_14 = NULL;
              t = SSLgetAnnotations(not_null(u_13));
              {
                h_14 = t;
                if(((g_14 != NULL) && (g_14 != h_14)))
                  _fail(h_14);
                else
                  g_14 = h_14;
              }
              {
                t = not_null(v_13);
                {
                  ATerm k_14 = NULL;
                  t = x_0(t);
                  {
                    i_14 = t;
                    {
                      ATerm l_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_14)), not_null(g_14));
                      {
                        l_14 = t;
                        if(((k_14 != NULL) && (k_14 != l_14)))
                          _fail(l_14);
                        else
                          k_14 = l_14;
                      }
                      t = not_null(k_14);
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
ATerm Snd_0 (ATerm t)
{
  ATerm b_15 = NULL;
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  b_15 = t;
  {
    ATerm g_15 = NULL;
    ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
    t = not_null(b_15);
    {
      g_15 = t;
      {
        t = SSL_explode_term(not_null(g_15));
        {
          i_15 = t;
          x_14 :
          if(match_cons(i_15, sym__2))
            {
              j_15 = ATgetArgument(i_15, 0);
              k_15 = ATgetArgument(i_15, 1);
              y_14 :
              if(match_string(j_15, ""))
                {
                  z_14 :
                  if(((ATgetType(k_15) == AT_LIST) && ((ATermList) k_15 != ATempty)))
                    {
                      l_15 = ATgetFirst((ATermList) k_15);
                      m_15 = (ATerm) ATgetNext((ATermList) k_15);
                      a_15 :
                      if(((ATgetType(m_15) == AT_LIST) && ((ATermList) m_15 != ATempty)))
                        {
                          n_15 = ATgetFirst((ATermList) m_15);
                          o_15 = (ATerm) ATgetNext((ATermList) m_15);
                          {
                            if(((d_15 != NULL) && (d_15 != l_15)))
                              _fail(l_15);
                            else
                              d_15 = l_15;
                            {
                              if(((f_15 != NULL) && (f_15 != n_15)))
                                _fail(n_15);
                              else
                                f_15 = n_15;
                              if(((e_15 != NULL) && (e_15 != o_15)))
                                _fail(o_15);
                              else
                                e_15 = o_15;
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
    t = not_null(f_15);
  }
  return(t);
}
ATerm CachedTerms_0 (ATerm t)
{
  ATerm v_15 = NULL;
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  t = term_z_6;
  {
    ATerm n_1 (ATerm t)
    {
      t = term_f_11;
      return(t);
    }
    t = rewrite_1(t, n_1);
    {
      w_15 = t;
      t_15 :
      if(match_cons(w_15, sym_Defined_2))
        {
          x_15 = ATgetArgument(w_15, 0);
          y_15 = ATgetArgument(w_15, 1);
          u_15 :
          if(match_string(x_15, "m_0"))
            {
              if(((v_15 != NULL) && (v_15 != y_15)))
                _fail(y_15);
              else
                v_15 = y_15;
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
  t = not_null(v_15);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm a_82 (ATerm))
{
  ATerm f_16 = NULL,g_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym_BuildDefault_1))
    {
      g_16 = ATgetArgument(f_16, 0);
      {
        ATerm j_16 = NULL,l_16 = NULL;
        ATerm k_16 = NULL;
        t = SSLgetAnnotations(not_null(f_16));
        {
          k_16 = t;
          if(((j_16 != NULL) && (j_16 != k_16)))
            _fail(k_16);
          else
            j_16 = k_16;
        }
        {
          t = not_null(g_16);
          {
            ATerm n_16 = NULL;
            t = a_82(t);
            {
              l_16 = t;
              {
                ATerm o_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(l_16)), not_null(j_16));
                {
                  o_16 = t;
                  if(((n_16 != NULL) && (n_16 != o_16)))
                    _fail(o_16);
                  else
                    n_16 = o_16;
                }
                t = not_null(n_16);
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
ATerm Real_1 (ATerm t, ATerm w_0 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym_Real_1))
    {
      d_17 = ATgetArgument(c_17, 0);
      {
        ATerm g_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_17 = NULL,i_17 = NULL;
            ATerm h_17 = NULL;
            t = SSLgetAnnotations(not_null(c_17));
            {
              h_17 = t;
              if(((g_17 != NULL) && (g_17 != h_17)))
                _fail(h_17);
              else
                g_17 = h_17;
            }
            {
              t = not_null(d_17);
              {
                ATerm k_17 = NULL;
                t = w_0(t);
                {
                  i_17 = t;
                  {
                    ATerm l_17 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(i_17)), not_null(g_17));
                    {
                      l_17 = t;
                      if(((k_17 != NULL) && (k_17 != l_17)))
                        _fail(l_17);
                      else
                        k_17 = l_17;
                    }
                    t = not_null(k_17);
                  }
                }
              }
            }
            LocalPopChoice(k_11);
          }
        else
          {
            t = g_11;
            {
              ATerm o_17 = NULL,q_17 = NULL;
              ATerm p_17 = NULL;
              t = SSLgetAnnotations(not_null(c_17));
              {
                p_17 = t;
                if(((o_17 != NULL) && (o_17 != p_17)))
                  _fail(p_17);
                else
                  o_17 = p_17;
              }
              {
                t = not_null(d_17);
                {
                  ATerm s_17 = NULL;
                  t = w_0(t);
                  {
                    q_17 = t;
                    {
                      ATerm t_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(q_17)), not_null(o_17));
                      {
                        t_17 = t;
                        if(((s_17 != NULL) && (s_17 != t_17)))
                          _fail(t_17);
                        else
                          s_17 = t_17;
                      }
                      t = not_null(s_17);
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
ATerm Str_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym_Str_1))
    {
      m_18 = ATgetArgument(l_18, 0);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_18 = NULL,r_18 = NULL;
            ATerm q_18 = NULL;
            t = SSLgetAnnotations(not_null(l_18));
            {
              q_18 = t;
              if(((p_18 != NULL) && (p_18 != q_18)))
                _fail(q_18);
              else
                p_18 = q_18;
            }
            {
              t = not_null(m_18);
              {
                ATerm t_18 = NULL;
                t = v_0(t);
                {
                  r_18 = t;
                  {
                    ATerm u_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(r_18)), not_null(p_18));
                    {
                      u_18 = t;
                      if(((t_18 != NULL) && (t_18 != u_18)))
                        _fail(u_18);
                      else
                        t_18 = u_18;
                    }
                    t = not_null(t_18);
                  }
                }
              }
            }
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm x_18 = NULL,z_18 = NULL;
              ATerm y_18 = NULL;
              t = SSLgetAnnotations(not_null(l_18));
              {
                y_18 = t;
                if(((x_18 != NULL) && (x_18 != y_18)))
                  _fail(y_18);
                else
                  x_18 = y_18;
              }
              {
                t = not_null(m_18);
                {
                  ATerm b_19 = NULL;
                  t = v_0(t);
                  {
                    z_18 = t;
                    {
                      ATerm c_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(z_18)), not_null(x_18));
                      {
                        c_19 = t;
                        if(((b_19 != NULL) && (b_19 != c_19)))
                          _fail(c_19);
                        else
                          b_19 = c_19;
                      }
                      t = not_null(b_19);
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
ATerm Int_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_Int_1))
    {
      v_19 = ATgetArgument(u_19, 0);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_19 = NULL,a_20 = NULL;
            ATerm z_19 = NULL;
            t = SSLgetAnnotations(not_null(u_19));
            {
              z_19 = t;
              if(((y_19 != NULL) && (y_19 != z_19)))
                _fail(z_19);
              else
                y_19 = z_19;
            }
            {
              t = not_null(v_19);
              {
                ATerm c_20 = NULL;
                t = u_0(t);
                {
                  a_20 = t;
                  {
                    ATerm d_20 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(a_20)), not_null(y_19));
                    {
                      d_20 = t;
                      if(((c_20 != NULL) && (c_20 != d_20)))
                        _fail(d_20);
                      else
                        c_20 = d_20;
                    }
                    t = not_null(c_20);
                  }
                }
              }
            }
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm g_20 = NULL,i_20 = NULL;
              ATerm h_20 = NULL;
              t = SSLgetAnnotations(not_null(u_19));
              {
                h_20 = t;
                if(((g_20 != NULL) && (g_20 != h_20)))
                  _fail(h_20);
                else
                  g_20 = h_20;
              }
              {
                t = not_null(v_19);
                {
                  ATerm k_20 = NULL;
                  t = u_0(t);
                  {
                    i_20 = t;
                    {
                      ATerm l_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(i_20)), not_null(g_20));
                      {
                        l_20 = t;
                        if(((k_20 != NULL) && (k_20 != l_20)))
                          _fail(l_20);
                        else
                          k_20 = l_20;
                      }
                      t = not_null(k_20);
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
ATerm proper_list_0 (ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm x_20 = NULL;
        x_20 = t;
        u_20 :
        if(!(match_string(x_20, "Nil")))
          {
            _fail(t);
          }
        return(t);
      }
      t = Op_2(t, o_1, Nil_0);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm y_20 = NULL;
              y_20 = t;
              v_20 :
              if(!(match_string(y_20, "Cons")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = Cons_2(t, proper_list_0, Nil_0);
                return(t);
              }
              t = Cons_2(t, _id, r_1);
              return(t);
            }
            t = Op_2(t, p_1, q_1);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm s_1 (ATerm t)
              {
                ATerm i_12 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_20 = NULL;
                    z_20 = t;
                    w_20 :
                    if(!(match_string(z_20, "Nil")))
                      {
                        if(!(match_string(z_20, "Cons")))
                          {
                            _fail(t);
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_12;
                  }
                return(t);
              }
              t = Op_2(t, s_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm j_84 (ATerm), ATerm k_84 (ATerm))
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym_Op_2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      {
        ATerm m_21 = NULL,o_21 = NULL;
        ATerm n_21 = NULL;
        t = SSLgetAnnotations(not_null(g_21));
        {
          n_21 = t;
          if(((m_21 != NULL) && (m_21 != n_21)))
            _fail(n_21);
          else
            m_21 = n_21;
        }
        {
          t = not_null(h_21);
          {
            ATerm q_21 = NULL;
            t = j_84(t);
            {
              o_21 = t;
              {
                t = not_null(i_21);
                {
                  ATerm s_21 = NULL;
                  t = k_84(t);
                  {
                    q_21 = t;
                    {
                      ATerm t_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(o_21), not_null(q_21)), not_null(m_21));
                      {
                        t_21 = t;
                        if(((s_21 != NULL) && (s_21 != t_21)))
                          _fail(t_21);
                        else
                          s_21 = t_21;
                      }
                      t = not_null(s_21);
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
ATerm CacheConstant_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_cons(g_22, sym__2))
    {
      h_22 = ATgetArgument(g_22, 0);
      i_22 = ATgetArgument(g_22, 1);
      {
        ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
        ATerm o_22 = NULL;
        t = not_null(h_22);
        {
          ATerm j_12 = t;
          int k_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_1 (ATerm t)
              {
                t = map_1(t, Cache_0);
                return(t);
              }
              t = Op_2(t, _id, t_1);
              t = proper_list_0(t);
              LocalPopChoice(k_12);
            }
          else
            {
              t = j_12;
              {
                ATerm u_12 = t;
                int v_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Int_1(t, _id);
                    LocalPopChoice(v_12);
                  }
                else
                  {
                    t = u_12;
                    {
                      ATerm w_12 = t;
                      int h_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Str_1(t, _id);
                          LocalPopChoice(h_13);
                        }
                      else
                        {
                          t = w_12;
                          {
                            ATerm i_13 = t;
                            int j_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Real_1(t, _id);
                                LocalPopChoice(j_13);
                              }
                            else
                              {
                                t = i_13;
                                t = BuildDefault_1(t, _id);
                              }
                          }
                        }
                    }
                  }
              }
            }
          {
            ATerm p_22 = NULL,r_22 = NULL;
            t = new_0(t);
            {
              o_22 = t;
              {
                if(((l_22 != NULL) && (l_22 != o_22)))
                  _fail(o_22);
                else
                  l_22 = o_22;
                {
                  ATerm q_22 = NULL;
                  q_22 = t;
                  if(((p_22 != NULL) && (p_22 != q_22)))
                    _fail(q_22);
                  else
                    p_22 = q_22;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_l_13, not_null(p_22));
                    {
                      ATerm s_22 = NULL,u_22 = NULL;
                      t = conc_strings_0(t);
                      {
                        r_22 = t;
                        {
                          if(((m_22 != NULL) && (m_22 != r_22)))
                            _fail(r_22);
                          else
                            m_22 = r_22;
                          {
                            ATerm m_13;
                            m_13 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_22)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_13, not_null(m_22)));
                              {
                                ATerm u_1 (ATerm t)
                                {
                                  t = term_o_13;
                                  return(t);
                                }
                                t = assert_1(t, u_1);
                              }
                            }
                            t = m_13;
                            {
                              ATerm t_22 = NULL;
                              ATerm p_13 = t;
                              int q_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = CachedTerms_0(t);
                                  LocalPopChoice(q_13);
                                }
                              else
                                {
                                  t = p_13;
                                  t = (ATerm) ATempty;
                                }
                              {
                                t_22 = t;
                                if(((s_22 != NULL) && (s_22 != t_22)))
                                  _fail(t_22);
                                else
                                  s_22 = t_22;
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(s_22)), (ATerm) ATmakeAppl(sym__3, not_null(l_22), not_null(m_22), not_null(i_22)));
                                {
                                  u_22 = t;
                                  {
                                    if(((n_22 != NULL) && (n_22 != u_22)))
                                      _fail(u_22);
                                    else
                                      n_22 = u_22;
                                    {
                                      ATerm r_13;
                                      r_13 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATmakeAppl(sym_Defined_2, term_s_13, not_null(n_22)));
                                        {
                                          ATerm v_1 (ATerm t)
                                          {
                                            t = term_f_11;
                                            return(t);
                                          }
                                          t = assert_1(t, v_1);
                                        }
                                      }
                                      t = r_13;
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
          }
        }
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(m_22));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ConstructTerm_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  p_23 = t;
  n_23 :
  if(match_cons(p_23, sym_Anno_2))
    {
      q_23 = ATgetArgument(p_23, 0);
      o_23 = ATgetArgument(p_23, 1);
      t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_b_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_23)), not_null(q_23))));
    }
  else
    {
      if(match_cons(p_23, sym_Op_2))
        {
          q_23 = ATgetArgument(p_23, 0);
          o_23 = ATgetArgument(p_23, 1);
          {
            ATerm v_23 = NULL;
            ATerm w_23 = NULL,y_23 = NULL;
            ATerm x_23 = NULL;
            t = not_null(o_23);
            {
              t = length_0(t);
              {
                x_23 = t;
                if(((w_23 != NULL) && (w_23 != x_23)))
                  _fail(x_23);
                else
                  w_23 = x_23;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(w_23));
              {
                t = ConstructorName_0(t);
                {
                  y_23 = t;
                  if(((v_23 != NULL) && (v_23 != y_23)))
                    _fail(y_23);
                  else
                    v_23 = y_23;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_14, (ATerm) ATinsert(CheckATermList(not_null(o_23)), (ATerm) ATmakeAppl(sym_Id_1, not_null(v_23)))));
          }
        }
      else
        {
          if(match_cons(p_23, sym_BuildDefault_1))
            {
              q_23 = ATgetArgument(p_23, 0);
              t = not_null(q_23);
            }
          else
            {
              if(match_cons(p_23, sym_Var_1))
                {
                  q_23 = ATgetArgument(p_23, 0);
                  t = (ATerm) ATmakeAppl(sym_FunCall_2, term_m_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(q_23))));
                }
              else
                {
                  if(match_cons(p_23, sym_Str_1))
                    {
                      q_23 = ATgetArgument(p_23, 0);
                      {
                        ATerm c_24 = NULL;
                        ATerm d_24 = NULL;
                        t = not_null(q_23);
                        {
                          t = escape_0(t);
                          {
                            t = double_quote_0(t);
                            {
                              d_24 = t;
                              if(((c_24 != NULL) && (c_24 != d_24)))
                                _fail(d_24);
                              else
                                c_24 = d_24;
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_14), term_q_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(c_24))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(p_23, sym_Real_1))
                        {
                          q_23 = ATgetArgument(p_23, 0);
                          {
                            ATerm f_24 = NULL;
                            ATerm g_24 = NULL;
                            t = not_null(q_23);
                            {
                              t = real_to_string_0(t);
                              {
                                g_24 = t;
                                if(((f_24 != NULL) && (f_24 != g_24)))
                                  _fail(g_24);
                                else
                                  f_24 = g_24;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_u_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(f_24)))));
                          }
                        }
                      else
                        {
                          if(match_cons(p_23, sym_Int_1))
                            {
                              q_23 = ATgetArgument(p_23, 0);
                              {
                                ATerm i_24 = NULL;
                                ATerm j_24 = NULL;
                                t = not_null(q_23);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    j_24 = t;
                                    if(((i_24 != NULL) && (i_24 != j_24)))
                                      _fail(j_24);
                                    else
                                      i_24 = j_24;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_w_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(i_24)))));
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
ATerm Id_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm b_25 = NULL,c_25 = NULL;
  b_25 = t;
  a_25 :
  if(match_cons(b_25, sym_Id_1))
    {
      c_25 = ATgetArgument(b_25, 0);
      {
        ATerm f_25 = NULL,h_25 = NULL;
        ATerm g_25 = NULL;
        t = SSLgetAnnotations(not_null(b_25));
        {
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
        }
        {
          t = not_null(c_25);
          {
            ATerm j_25 = NULL;
            t = c_78(t);
            {
              h_25 = t;
              {
                ATerm k_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_1, not_null(h_25)), not_null(f_25));
                {
                  k_25 = t;
                  if(((j_25 != NULL) && (j_25 != k_25)))
                    _fail(k_25);
                  else
                    j_25 = k_25;
                }
                t = not_null(j_25);
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
ATerm FunCall_2 (ATerm t, ATerm u_74 (ATerm), ATerm v_74 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_FunCall_2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      {
        ATerm b_26 = NULL,d_26 = NULL;
        ATerm c_26 = NULL;
        t = SSLgetAnnotations(not_null(v_25));
        {
          c_26 = t;
          if(((b_26 != NULL) && (b_26 != c_26)))
            _fail(c_26);
          else
            b_26 = c_26;
        }
        {
          t = not_null(w_25);
          {
            ATerm f_26 = NULL;
            t = u_74(t);
            {
              d_26 = t;
              {
                t = not_null(x_25);
                {
                  ATerm h_26 = NULL;
                  t = v_74(t);
                  {
                    f_26 = t;
                    {
                      ATerm i_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunCall_2, not_null(d_26), not_null(f_26)), not_null(b_26));
                      {
                        i_26 = t;
                        if(((h_26 != NULL) && (h_26 != i_26)))
                          _fail(i_26);
                        else
                          h_26 = i_26;
                      }
                      t = not_null(h_26);
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
ATerm ConstructList_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  c_27 :
  if(match_cons(m_27, sym_Op_2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      d_27 :
      if(match_string(n_27, "Cons"))
        {
          e_27 :
          if(((ATgetType(o_27) == AT_LIST) && ((ATermList) o_27 != ATempty)))
            {
              i_27 = ATgetFirst((ATermList) o_27);
              j_27 = (ATerm) ATgetNext((ATermList) o_27);
              f_27 :
              if(((ATgetType(j_27) == AT_LIST) && ((ATermList) j_27 != ATempty)))
                {
                  k_27 = ATgetFirst((ATermList) j_27);
                  l_27 = (ATerm) ATgetNext((ATermList) j_27);
                  g_27 :
                  if(((ATermList) l_27 == ATempty))
                    {
                      {
                        ATerm r_27 = NULL;
                        ATerm e_28 = NULL;
                        t = not_null(k_27);
                        {
                          ATerm c_15 = t;
                          int h_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
                              s_27 = t;
                              t_26 :
                              if(match_cons(s_27, sym_TypeCast_2))
                                {
                                  t_27 = ATgetArgument(s_27, 0);
                                  a_28 = ATgetArgument(s_27, 1);
                                  u_26 :
                                  if(match_cons(t_27, sym_TypeName_2))
                                    {
                                      u_27 = ATgetArgument(t_27, 0);
                                      z_27 = ATgetArgument(t_27, 1);
                                      v_26 :
                                      if(match_cons(u_27, sym_TypeSpec_3))
                                        {
                                          v_27 = ATgetArgument(u_27, 0);
                                          w_27 = ATgetArgument(u_27, 1);
                                          y_27 = ATgetArgument(u_27, 2);
                                          w_26 :
                                          if(((ATermList) v_27 == ATempty))
                                            {
                                              x_26 :
                                              if(match_cons(w_27, sym_TypeId_1))
                                                {
                                                  x_27 = ATgetArgument(w_27, 0);
                                                  y_26 :
                                                  if(match_string(x_27, "ATerm"))
                                                    {
                                                      z_26 :
                                                      if(((ATermList) y_27 == ATempty))
                                                        {
                                                          a_27 :
                                                          if(match_cons(z_27, sym_None_0))
                                                            {
                                                              t = not_null(a_28);
                                                              {
                                                                ATerm p_15 = t;
                                                                int q_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm w_1 (ATerm t)
                                                                    {
                                                                      ATerm c_28 = NULL;
                                                                      c_28 = t;
                                                                      r_26 :
                                                                      if(!(match_string(c_28, "ATempty")))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = Id_1(t, w_1);
                                                                    LocalPopChoice(q_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_15;
                                                                    {
                                                                      ATerm x_1 (ATerm t)
                                                                      {
                                                                        ATerm z_1 (ATerm t)
                                                                        {
                                                                          ATerm d_28 = NULL;
                                                                          d_28 = t;
                                                                          s_26 :
                                                                          if(!(match_string(d_28, "ATinsert")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = Id_1(t, z_1);
                                                                        return(t);
                                                                      }
                                                                      ATerm y_1 (ATerm t)
                                                                      {
                                                                        ATerm a_2 (ATerm t)
                                                                        {
                                                                          t = Cons_2(t, _id, Nil_0);
                                                                          return(t);
                                                                        }
                                                                        t = Cons_2(t, _id, a_2);
                                                                        return(t);
                                                                      }
                                                                      t = FunCall_2(t, x_1, y_1);
                                                                    }
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
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              LocalPopChoice(h_15);
                            }
                          else
                            {
                              t = c_15;
                              t = (ATerm) ATmakeAppl(sym_FunCall_2, term_s_15, (ATerm) ATinsert(ATempty, not_null(k_27)));
                            }
                          {
                            e_28 = t;
                            if(((r_27 != NULL) && (r_27 != e_28)))
                              _fail(e_28);
                            else
                              r_27 = e_28;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_27)), not_null(r_27))));
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
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_string(n_27, "Nil"))
            {
              h_27 :
              if(((ATermList) o_27 == ATempty))
                {
                  t = term_d_16;
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cache_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_28 = NULL;
        ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_28));
        {
          ATerm b_2 (ATerm t)
          {
            t = term_o_13;
            return(t);
          }
          t = rewrite_1(t, b_2);
          {
            u_28 = t;
            m_28 :
            if(match_cons(u_28, sym_Defined_2))
              {
                v_28 = ATgetArgument(u_28, 0);
                w_28 = ATgetArgument(u_28, 1);
                n_28 :
                if(match_string(v_28, "l_0"))
                  {
                    if(((t_28 != NULL) && (t_28 != w_28)))
                      _fail(w_28);
                    else
                      t_28 = w_28;
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
        t = (ATerm) ATmakeAppl(sym_Id_1, not_null(t_28));
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        {
          ATerm y_28 = NULL;
          ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_28));
          {
            ATerm c_2 (ATerm t)
            {
              t = term_o_13;
              return(t);
            }
            t = rewrite_1(t, c_2);
            {
              z_28 = t;
              p_28 :
              if(match_cons(z_28, sym_Defined_2))
                {
                  a_29 = ATgetArgument(z_28, 0);
                  b_29 = ATgetArgument(z_28, 1);
                  q_28 :
                  if(match_string(a_29, "k_0"))
                    {
                      if(((y_28 != NULL) && (y_28 != b_29)))
                        _fail(b_29);
                      else
                        y_28 = b_29;
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
          t = not_null(y_28);
        }
      }
  }
  return(t);
}
ATerm construct_term_caching_0 (ATerm t)
{
  ATerm m_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cache_0(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = m_16;
      {
        ATerm i_29 = NULL,k_29 = NULL;
        ATerm q_16;
        q_16 = t;
        {
          ATerm j_29 = NULL;
          j_29 = t;
          if(((i_29 != NULL) && (i_29 != j_29)))
            _fail(j_29);
          else
            i_29 = j_29;
        }
        t = q_16;
        {
          ATerm l_29 = NULL;
          t = _all(t, construct_term_caching_0);
          {
            ATerm d_2 (ATerm t)
            {
              ATerm r_16 = t;
              int s_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ConstructList_0(t);
                  LocalPopChoice(s_16);
                }
              else
                {
                  t = r_16;
                  t = ConstructTerm_0(t);
                }
              return(t);
            }
            t = try_1(t, d_2);
            {
              l_29 = t;
              if(((k_29 != NULL) && (k_29 != l_29)))
                _fail(l_29);
              else
                k_29 = l_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(k_29));
            {
              ATerm t_16 = t;
              int u_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CacheConstant_0(t);
                  LocalPopChoice(u_16);
                }
              else
                {
                  t = t_16;
                  t = Snd_0(t);
                }
            }
          }
        }
      }
    }
  return(t);
}
ATerm TranslateStrat_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
  ATerm l_45 (ATerm t)
  {
    ATerm y_37 = NULL,o_38 = NULL,q_38 = NULL;
    ATerm v_16;
    v_16 = t;
    {
      ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
      t = not_null(a_36);
      {
        ATerm w_16 = t;
        if((PushChoice() == 0))
          {
            ATerm z_37 = NULL;
            z_37 = t;
            d_31 :
            if(!(match_string(z_37, "Nil")))
              {
                if(!(match_string(z_37, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_16;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), term_x_16);
          {
            ATerm e_2 (ATerm t)
            {
              ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
              a_38 = t;
              h_31 :
              if(match_cons(a_38, sym__2))
                {
                  b_38 = ATgetArgument(a_38, 0);
                  d_38 = ATgetArgument(a_38, 1);
                  i_31 :
                  if(match_cons(b_38, sym_Var_1))
                    {
                      c_38 = ATgetArgument(b_38, 0);
                      {
                        ATerm g_38 = NULL,j_38 = NULL;
                        ATerm y_16;
                        y_16 = t;
                        {
                          ATerm i_38 = NULL;
                          t = not_null(d_38);
                          {
                            t = int_to_string_0(t);
                            {
                              i_38 = t;
                              if(((g_38 != NULL) && (g_38 != i_38)))
                                _fail(i_38);
                              else
                                g_38 = i_38;
                            }
                          }
                        }
                        t = y_16;
                        {
                          ATerm k_38 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_38), term_z_16);
                          {
                            t = add_0(t);
                            {
                              k_38 = t;
                              if(((j_38 != NULL) && (j_38 != k_38)))
                                _fail(k_38);
                              else
                                j_38 = k_38;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_38)), term_y_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(g_38))), (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36)))))), not_null(j_38));
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
              return(t);
            }
            t = thread_map_1(t, e_2);
            {
              l_38 = t;
              k_31 :
              if(match_cons(l_38, sym__2))
                {
                  m_38 = ATgetArgument(l_38, 0);
                  n_38 = ATgetArgument(l_38, 1);
                  if(((y_37 != NULL) && (y_37 != m_38)))
                    _fail(m_38);
                  else
                    y_37 = m_38;
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
    t = v_16;
    {
      ATerm f_17;
      f_17 = t;
      {
        ATerm p_38 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_36), not_null(y_35));
        {
          t = ConstructorName_0(t);
          {
            p_38 = t;
            if(((o_38 != NULL) && (o_38 != p_38)))
              _fail(p_38);
            else
              o_38 = p_38;
          }
        }
      }
      t = f_17;
      {
        ATerm r_38 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_37), (ATerm) ATinsert(ATempty, not_null(c_36)));
        {
          t = conc_0(t);
          {
            r_38 = t;
            if(((q_38 != NULL) && (q_38 != r_38)))
              _fail(r_38);
            else
              q_38 = r_38;
          }
        }
        t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_38))), (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(q_38)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_36)), not_null(d_36), not_null(m_36)))));
      }
    }
    return(t);
  }
  ATerm m_45 (ATerm t)
  {
    ATerm y_38 = NULL;
    ATerm z_38 = NULL;
    t = not_null(a_36);
    {
      t = real_to_string_0(t);
      {
        z_38 = t;
        if(((y_38 != NULL) && (y_38 != z_38)))
          _fail(z_38);
        else
          y_38 = z_38;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_r_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(y_38))), (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(c_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_36)), not_null(d_36), not_null(m_36)))));
    return(t);
  }
  ATerm n_45 (ATerm t)
  {
    ATerm g_39 = NULL;
    ATerm h_39 = NULL;
    t = not_null(a_36);
    {
      t = int_to_string_0(t);
      {
        h_39 = t;
        if(((g_39 != NULL) && (g_39 != h_39)))
          _fail(h_39);
        else
          g_39 = h_39;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_v_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(g_39))), (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(c_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_36)), not_null(d_36), not_null(m_36)))));
    return(t);
  }
  ATerm o_45 (ATerm t)
  {
    ATerm o_39 = NULL;
    ATerm p_39 = NULL;
    t = not_null(a_36);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          p_39 = t;
          if(((o_39 != NULL) && (o_39 != p_39)))
            _fail(p_39);
          else
            o_39 = p_39;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(o_39)))), (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36)))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(c_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_36)), not_null(d_36), not_null(m_36)))));
    return(t);
  }
  ATerm p_45 (ATerm t)
  {
    t = not_null(m_36);
    return(t);
  }
  ATerm q_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Label_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_36)), (ATerm) ATmakeAppl(sym_Case_3, not_null(o_36), not_null(m_36), not_null(e_36)));
    return(t);
  }
  ATerm r_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Goto_1, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_36)));
    return(t);
  }
  ATerm s_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_36)), term_y_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_36)), (ATerm) ATmakeAppl(sym_Id_1, not_null(f_36)))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_36))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_36)), term_y_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(f_36)))));
    return(t);
  }
  ATerm t_45 (ATerm t)
  {
    t = not_null(o_36);
    {
      ATerm b_18 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_18;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_36)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_36))));
    return(t);
  }
  ATerm u_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_36)), term_y_7, term_d_18));
    return(t);
  }
  ATerm v_45 (ATerm t)
  {
    ATerm w_40 = NULL;
    ATerm x_40 = NULL;
    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(i_36), (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_18, not_null(o_36))))))), (ATerm) ATmakeAppl(sym__2, not_null(g_36), (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_18, not_null(o_36))))));
    {
      ATerm f_2 (ATerm t)
      {
        ATerm s_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatchArg1_0(t);
            LocalPopChoice(v_18);
          }
        else
          {
            t = s_18;
            t = MatchArg2_0(t);
          }
        return(t);
      }
      t = map_1(t, f_2);
      {
        x_40 = t;
        if(((w_40 != NULL) && (w_40 != x_40)))
          _fail(x_40);
        else
          w_40 = x_40;
      }
    }
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, not_null(o_36))), term_e_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_j_18, not_null(o_36)), term_c_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(w_40)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_d_18))));
    return(t);
  }
  ATerm w_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_j_18, not_null(o_36)), term_c_16), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_d_18))));
    return(t);
  }
  ATerm x_45 (ATerm t)
  {
    ATerm d_41 = NULL,t_41 = NULL;
    ATerm f_19;
    f_19 = t;
    {
      ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
      t = not_null(l_36);
      {
        ATerm g_19 = t;
        if((PushChoice() == 0))
          {
            ATerm e_41 = NULL;
            e_41 = t;
            r_31 :
            if(!(match_string(e_41, "Nil")))
              {
                if(!(match_string(e_41, "Cons")))
                  {
                    _fail(t);
                  }
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_19;
          }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_36), term_x_16);
          {
            ATerm g_2 (ATerm t)
            {
              ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
              f_41 = t;
              w_31 :
              if(match_cons(f_41, sym__2))
                {
                  g_41 = ATgetArgument(f_41, 0);
                  h_41 = ATgetArgument(f_41, 1);
                  {
                    ATerm k_41 = NULL,o_41 = NULL;
                    ATerm h_19;
                    h_19 = t;
                    {
                      ATerm l_41 = NULL,n_41 = NULL;
                      ATerm m_41 = NULL;
                      t = not_null(h_41);
                      {
                        t = int_to_string_0(t);
                        {
                          m_41 = t;
                          if(((l_41 != NULL) && (l_41 != m_41)))
                            _fail(m_41);
                          else
                            l_41 = m_41;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_41), (ATerm) ATmakeAppl(sym_FunCall_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IntConst_1, not_null(l_41))), not_null(o_36))));
                        {
                          ATerm i_19 = t;
                          int j_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = MatchArg1_0(t);
                              LocalPopChoice(j_19);
                            }
                          else
                            {
                              t = i_19;
                              t = MatchArg2_0(t);
                            }
                          {
                            n_41 = t;
                            if(((k_41 != NULL) && (k_41 != n_41)))
                              _fail(n_41);
                            else
                              k_41 = n_41;
                          }
                        }
                      }
                    }
                    t = h_19;
                    {
                      ATerm p_41 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_41), term_z_16);
                      {
                        t = add_0(t);
                        {
                          p_41 = t;
                          if(((o_41 != NULL) && (o_41 != p_41)))
                            _fail(p_41);
                          else
                            o_41 = p_41;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_41), not_null(o_41));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = thread_map_1(t, g_2);
            {
              q_41 = t;
              y_31 :
              if(match_cons(q_41, sym__2))
                {
                  r_41 = ATgetArgument(q_41, 0);
                  s_41 = ATgetArgument(q_41, 1);
                  if(((d_41 != NULL) && (d_41 != r_41)))
                    _fail(r_41);
                  else
                    d_41 = r_41;
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
    t = f_19;
    {
      ATerm u_41 = NULL,w_41 = NULL;
      ATerm v_41 = NULL;
      t = not_null(k_36);
      {
        t = length_0(t);
        {
          v_41 = t;
          if(((u_41 != NULL) && (u_41 != v_41)))
            _fail(v_41);
          else
            u_41 = v_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_36), not_null(u_41));
        {
          t = ConstructorName_0(t);
          {
            w_41 = t;
            if(((t_41 != NULL) && (t_41 != w_41)))
              _fail(w_41);
            else
              t_41 = w_41;
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_FunCall_2, term_m_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_41))), not_null(o_36))), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(d_41)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_d_18))));
    }
    return(t);
  }
  ATerm y_45 (ATerm t)
  {
    ATerm z_41 = NULL;
    ATerm a_42 = NULL;
    t = not_null(l_36);
    {
      t = real_to_string_0(t);
      {
        a_42 = t;
        if(((z_41 != NULL) && (z_41 != a_42)))
          _fail(a_42);
        else
          z_41 = a_42;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, not_null(o_36))), term_l_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_n_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_r_19, not_null(o_36)))), (ATerm) ATmakeAppl(sym_FloatConst_1, not_null(z_41)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_d_18))));
    return(t);
  }
  ATerm z_45 (ATerm t)
  {
    ATerm d_42 = NULL;
    ATerm e_42 = NULL;
    t = not_null(l_36);
    {
      t = int_to_string_0(t);
      {
        e_42 = t;
        if(((d_42 != NULL) && (d_42 != e_42)))
          _fail(e_42);
        else
          d_42 = e_42;
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_LOr_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, not_null(o_36))), term_w_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_b_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_m_20, not_null(o_36)))), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(d_42)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_d_18))));
    return(t);
  }
  ATerm a_46 (ATerm t)
  {
    ATerm h_42 = NULL;
    ATerm i_42 = NULL;
    t = not_null(l_36);
    {
      t = escape_0(t);
      {
        t = double_quote_0(t);
        {
          i_42 = t;
          if(((h_42 != NULL) && (h_42 != i_42)))
            _fail(i_42);
          else
            h_42 = i_42;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_If_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_o_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_s_20, not_null(o_36)))), (ATerm) ATmakeAppl(sym_FunCall_2, term_o_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_14), term_q_14), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(h_42)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_d_18))));
    return(t);
  }
  ATerm b_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_36)), term_y_17), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_36)), not_null(o_36))), (ATerm)ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, not_null(o_36)))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_36)), term_y_7, not_null(o_36))));
    return(t);
  }
  ATerm c_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_2, not_null(k_36), not_null(o_36))), (ATerm) ATmakeAppl(sym_Match_2, not_null(l_36), not_null(o_36))));
    return(t);
  }
  ATerm d_46 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  ATerm e_46 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  ATerm f_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_2, not_null(n_36), term_d_18);
    return(t);
  }
  ATerm g_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, not_null(n_36), (ATerm) ATinsert(ATempty, not_null(o_36)));
    return(t);
  }
  ATerm h_46 (ATerm t)
  {
    ATerm v_42 = NULL;
    ATerm w_42 = NULL;
    t = new_0(t);
    {
      w_42 = t;
      if(((v_42 != NULL) && (v_42 != w_42)))
        _fail(w_42);
      else
        v_42 = w_42;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_42)), term_r_9))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_y_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(v_42))))), not_null(n_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(v_42)), term_y_7, term_d_18))));
    return(t);
  }
  ATerm i_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Where_1, not_null(n_36));
    return(t);
  }
  ATerm j_46 (ATerm t)
  {
    ATerm a_43 = NULL;
    ATerm n_43 = NULL;
    t = not_null(o_36);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm b_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
        b_43 = t;
        i_32 :
        if(match_cons(b_43, sym_Call_2))
          {
            e_43 = ATgetArgument(b_43, 0);
            g_43 = ATgetArgument(b_43, 1);
            a_33 :
            if(match_cons(e_43, sym_SVar_1))
              {
                f_43 = ATgetArgument(e_43, 0);
                b_33 :
                if(((ATermList) g_43 == ATempty))
                  {
                    t = (ATerm) ATmakeAppl(sym_Id_1, not_null(f_43));
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
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1(t, h_2);
      {
        n_43 = t;
        if(((a_43 != NULL) && (a_43 != n_43)))
          _fail(n_43);
        else
          a_43 = n_43;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_y_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(l_36)), (ATerm) ATinsert(CheckATermList(not_null(a_43)), term_d_18))));
    return(t);
  }
  ATerm k_46 (ATerm t)
  {
    ATerm q_43 = NULL;
    ATerm r_43 = NULL;
    t = not_null(o_36);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = try_1(t, construct_term_0);
          return(t);
        }
        t = topdown_1(t, j_2);
        return(t);
      }
      t = map_1(t, i_2);
      {
        r_43 = t;
        if(((q_43 != NULL) && (q_43 != r_43)))
          _fail(r_43);
        else
          q_43 = r_43;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_y_7, (ATerm) ATmakeAppl(sym_FunCall_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_36)), not_null(q_43))));
    return(t);
  }
  ATerm l_46 (ATerm t)
  {
    ATerm t_43 = NULL;
    ATerm v_43 = NULL;
    t = new_0(t);
    {
      v_43 = t;
      if(((t_43 != NULL) && (t_43 != v_43)))
        _fail(v_43);
      else
        t_43 = v_43;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_43)), term_r_9), term_a_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_e_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_21), term_p_21), not_null(n_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_y_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(t_43)))))))));
    return(t);
  }
  ATerm m_46 (ATerm t)
  {
    ATerm a_44 = NULL;
    ATerm b_44 = NULL;
    t = new_0(t);
    {
      b_44 = t;
      if(((a_44 != NULL) && (a_44 != b_44)))
        _fail(b_44);
      else
        a_44 = b_44;
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_44)), term_r_9), term_a_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_y_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(n_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_y_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(a_44)))))))));
    return(t);
  }
  ATerm n_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(n_36), not_null(o_36));
    return(t);
  }
  ATerm o_46 (ATerm t)
  {
    ATerm h_44 = NULL,i_44 = NULL;
    ATerm j_44 = NULL;
    ATerm k_44 = NULL;
    t = new_0(t);
    {
      j_44 = t;
      {
        if(((h_44 != NULL) && (h_44 != j_44)))
          _fail(j_44);
        else
          h_44 = j_44;
        {
          t = new_0(t);
          {
            k_44 = t;
            if(((i_44 != NULL) && (i_44 != k_44)))
              _fail(k_44);
            else
              i_44 = k_44;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(i_44)), term_r_9), term_e_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_44)), term_r_9), term_a_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_e_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(i_44)))))), not_null(n_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_y_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_44)))))))));
    return(t);
  }
  ATerm p_46 (ATerm t)
  {
    ATerm n_44 = NULL,o_44 = NULL;
    ATerm p_44 = NULL;
    ATerm q_44 = NULL;
    t = new_0(t);
    {
      p_44 = t;
      {
        if(((n_44 != NULL) && (n_44 != p_44)))
          _fail(p_44);
        else
          n_44 = p_44;
        {
          t = new_0(t);
          {
            q_44 = t;
            if(((o_44 != NULL) && (o_44 != q_44)))
              _fail(q_44);
            else
              o_44 = q_44;
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_44)), term_r_9), term_e_22)))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_44)), term_r_9), term_a_21)))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IfElse_3, term_e_21, (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_k_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(o_44)))))), not_null(n_36))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_y_7, (ATerm) ATmakeAppl(sym_Id_1, not_null(n_44)))))))));
    return(t);
  }
  ATerm q_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_36), not_null(o_36));
    return(t);
  }
  ATerm r_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_36)), not_null(n_36)));
    return(t);
  }
  ATerm s_46 (ATerm t)
  {
    ATerm b_45 = NULL;
    ATerm v_22;
    v_22 = t;
    {
      t = not_null(n_36);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm x_44 = NULL;
          x_44 = t;
          {
            ATerm w_22;
            w_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(x_44)), term_y_22);
              {
                ATerm l_2 (ATerm t)
                {
                  t = term_t_10;
                  return(t);
                }
                t = assert_1(t, l_2);
              }
            }
            t = w_22;
          }
          return(t);
        }
        t = map_1(t, k_2);
      }
    }
    t = v_22;
    {
      ATerm f_45 = NULL;
      t = not_null(n_36);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm c_45 = NULL;
          c_45 = t;
          t = (ATerm) ATmakeAppl(sym_DeclInit_2, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_45)), term_r_9), term_z_22);
          return(t);
        }
        t = map_1(t, m_2);
        {
          f_45 = t;
          if(((b_45 != NULL) && (b_45 != f_45)))
            _fail(f_45);
          else
            b_45 = f_45;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_9, not_null(b_45))), (ATerm) ATinsert(ATempty, not_null(o_36)));
    }
    return(t);
  }
  ATerm t_46 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_a_18, (ATerm) ATinsert(ATempty, term_d_18)));
    return(t);
  }
  ATerm x_46 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  p_36 = t;
  b_34 :
  if(match_cons(p_36, sym_Build_1))
    {
      n_36 = ATgetArgument(p_36, 0);
      {
        ATerm r_36 = NULL;
        ATerm z_36 = NULL;
        t = not_null(n_36);
        {
          t = construct_term_caching_0(t);
          {
            z_36 = t;
            if(((r_36 != NULL) && (r_36 != z_36)))
              _fail(z_36);
            else
              r_36 = z_36;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, term_d_18, term_y_7, not_null(r_36)));
      }
    }
  else
    {
      if(match_cons(p_36, sym_Case_3))
        {
          n_36 = ATgetArgument(p_36, 0);
          o_36 = ATgetArgument(p_36, 1);
          m_36 = ATgetArgument(p_36, 2);
          c_34 :
          if(match_cons(n_36, sym_Var_1))
            {
              l_36 = ATgetArgument(n_36, 0);
              d_34 :
              if(((ATgetType(o_36) == AT_LIST) && ((ATermList) o_36 != ATempty)))
                {
                  f_36 = ATgetFirst((ATermList) o_36);
                  d_36 = (ATerm) ATgetNext((ATermList) o_36);
                  e_34 :
                  if(match_cons(f_36, sym_Alt_3))
                    {
                      z_35 = ATgetArgument(f_36, 0);
                      b_36 = ATgetArgument(f_36, 1);
                      c_36 = ATgetArgument(f_36, 2);
                      f_34 :
                      if(match_cons(z_35, sym_Fun_2))
                        {
                          a_36 = ATgetArgument(z_35, 0);
                          y_35 = ATgetArgument(z_35, 1);
                          g_34 :
                          if(((ATgetType(b_36) == AT_LIST) && ((ATermList) b_36 != ATempty)))
                            {
                              s_35 = ATgetFirst((ATermList) b_36);
                              u_35 = (ATerm) ATgetNext((ATermList) b_36);
                              h_34 :
                              if(((ATgetType(u_35) == AT_LIST) && ((ATermList) u_35 != ATempty)))
                                {
                                  v_35 = ATgetFirst((ATermList) u_35);
                                  x_35 = (ATerm) ATgetNext((ATermList) u_35);
                                  i_34 :
                                  if(((ATermList) x_35 == ATempty))
                                    {
                                      j_34 :
                                      if(match_cons(v_35, sym_Var_1))
                                        {
                                          w_35 = ATgetArgument(v_35, 0);
                                          k_34 :
                                          if(match_cons(s_35, sym_Var_1))
                                            {
                                              t_35 = ATgetArgument(s_35, 0);
                                              l_34 :
                                              if(match_int(y_35, 2))
                                                {
                                                  m_34 :
                                                  if(match_string(a_36, "Cons"))
                                                    {
                                                      ATerm a_23 = t;
                                                      int b_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_LAnd_2, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_FunCall_2, term_a_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36)))), term_e_19), (ATerm) ATmakeAppl(sym_NotEqual_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_j_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36))), term_c_16)), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_36)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(w_35)), term_y_7, (ATerm) ATmakeAppl(sym_TypeCast_2, term_w_13, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36))))))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(t_35)), term_y_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_f_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TypeCast_2, term_j_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36))))))))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_36)), not_null(d_36), not_null(m_36)))));
                                                          LocalPopChoice(b_23);
                                                        }
                                                      else
                                                        {
                                                          t = a_23;
                                                          t = l_45(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = l_45(t);
                                                    }
                                                }
                                              else
                                                {
                                                  n_34 :
                                                  t = l_45(t);
                                                }
                                            }
                                          else
                                            {
                                              o_34 :
                                              p_34 :
                                              t = l_45(t);
                                            }
                                        }
                                      else
                                        {
                                          q_34 :
                                          r_34 :
                                          s_34 :
                                          t = l_45(t);
                                        }
                                    }
                                  else
                                    {
                                      t_34 :
                                      u_34 :
                                      v_34 :
                                      w_34 :
                                      t = l_45(t);
                                    }
                                }
                              else
                                {
                                  x_34 :
                                  y_34 :
                                  z_34 :
                                  t = l_45(t);
                                }
                            }
                          else
                            {
                              if(((ATermList) b_36 == ATempty))
                                {
                                  a_35 :
                                  if(match_int(y_35, 0))
                                    {
                                      b_35 :
                                      if(match_string(a_36, "Nil"))
                                        {
                                          ATerm c_23 = t;
                                          int d_23 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_IfElse_3, (ATerm)ATmakeAppl(sym_Equal_2, (ATerm)ATmakeAppl(sym_TypeCast_2, term_j_18, (ATerm) ATmakeAppl(sym_Id_1, not_null(l_36))), term_c_16), (ATerm)ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(c_36)), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Case_3, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_36)), not_null(d_36), not_null(m_36)))));
                                              LocalPopChoice(d_23);
                                            }
                                          else
                                            {
                                              t = c_23;
                                              t = l_45(t);
                                            }
                                        }
                                      else
                                        {
                                          t = l_45(t);
                                        }
                                    }
                                  else
                                    {
                                      c_35 :
                                      t = l_45(t);
                                    }
                                }
                              else
                                {
                                  d_35 :
                                  e_35 :
                                  t = l_45(t);
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(z_35, sym_Real_1))
                            {
                              a_36 = ATgetArgument(z_35, 0);
                              t = m_45(t);
                            }
                          else
                            {
                              if(match_cons(z_35, sym_Int_1))
                                {
                                  a_36 = ATgetArgument(z_35, 0);
                                  t = n_45(t);
                                }
                              else
                                {
                                  if(match_cons(z_35, sym_Str_1))
                                    {
                                      a_36 = ATgetArgument(z_35, 0);
                                      t = o_45(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
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
                  if(((ATermList) o_36 == ATempty))
                    {
                      t = p_45(t);
                    }
                  else
                    {
                      _fail(t);
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
          if(match_cons(p_36, sym_Case_4))
            {
              n_36 = ATgetArgument(p_36, 0);
              o_36 = ATgetArgument(p_36, 1);
              m_36 = ATgetArgument(p_36, 2);
              e_36 = ATgetArgument(p_36, 3);
              t = q_45(t);
            }
          else
            {
              if(match_cons(p_36, sym_Continue_1))
                {
                  n_36 = ATgetArgument(p_36, 0);
                  t = r_45(t);
                }
              else
                {
                  if(match_cons(p_36, sym_Assign_2))
                    {
                      n_36 = ATgetArgument(p_36, 0);
                      o_36 = ATgetArgument(p_36, 1);
                      f_35 :
                      if(match_cons(n_36, sym_Var_1))
                        {
                          l_36 = ATgetArgument(n_36, 0);
                          g_35 :
                          if(match_cons(o_36, sym_Var_1))
                            {
                              f_36 = ATgetArgument(o_36, 0);
                              {
                                ATerm e_23 = t;
                                int f_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = s_45(t);
                                    LocalPopChoice(f_23);
                                  }
                                else
                                  {
                                    t = e_23;
                                    t = t_45(t);
                                  }
                              }
                            }
                          else
                            {
                              t = t_45(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(p_36, sym_Assign_1))
                        {
                          n_36 = ATgetArgument(p_36, 0);
                          h_35 :
                          if(match_cons(n_36, sym_Var_1))
                            {
                              l_36 = ATgetArgument(n_36, 0);
                              t = u_45(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(p_36, sym_Match_2))
                            {
                              n_36 = ATgetArgument(p_36, 0);
                              o_36 = ATgetArgument(p_36, 1);
                              i_35 :
                              if(match_cons(n_36, sym_Op_2))
                                {
                                  l_36 = ATgetArgument(n_36, 0);
                                  k_36 = ATgetArgument(n_36, 1);
                                  j_35 :
                                  if(((ATgetType(k_36) == AT_LIST) && ((ATermList) k_36 != ATempty)))
                                    {
                                      g_36 = ATgetFirst((ATermList) k_36);
                                      h_36 = (ATerm) ATgetNext((ATermList) k_36);
                                      k_35 :
                                      if(((ATgetType(h_36) == AT_LIST) && ((ATermList) h_36 != ATempty)))
                                        {
                                          i_36 = ATgetFirst((ATermList) h_36);
                                          j_36 = (ATerm) ATgetNext((ATermList) h_36);
                                          l_35 :
                                          if(((ATermList) j_36 == ATempty))
                                            {
                                              m_35 :
                                              if(match_string(l_36, "Cons"))
                                                {
                                                  ATerm g_23 = t;
                                                  int h_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = v_45(t);
                                                      LocalPopChoice(h_23);
                                                    }
                                                  else
                                                    {
                                                      t = g_23;
                                                      t = x_45(t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = x_45(t);
                                                }
                                            }
                                          else
                                            {
                                              n_35 :
                                              t = x_45(t);
                                            }
                                        }
                                      else
                                        {
                                          o_35 :
                                          t = x_45(t);
                                        }
                                    }
                                  else
                                    {
                                      if(((ATermList) k_36 == ATempty))
                                        {
                                          p_35 :
                                          if(match_string(l_36, "Nil"))
                                            {
                                              ATerm i_23 = t;
                                              int j_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = w_45(t);
                                                  LocalPopChoice(j_23);
                                                }
                                              else
                                                {
                                                  t = i_23;
                                                  t = x_45(t);
                                                }
                                            }
                                          else
                                            {
                                              t = x_45(t);
                                            }
                                        }
                                      else
                                        {
                                          q_35 :
                                          t = x_45(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(n_36, sym_Real_1))
                                    {
                                      l_36 = ATgetArgument(n_36, 0);
                                      t = y_45(t);
                                    }
                                  else
                                    {
                                      if(match_cons(n_36, sym_Int_1))
                                        {
                                          l_36 = ATgetArgument(n_36, 0);
                                          t = z_45(t);
                                        }
                                      else
                                        {
                                          if(match_cons(n_36, sym_Str_1))
                                            {
                                              l_36 = ATgetArgument(n_36, 0);
                                              t = a_46(t);
                                            }
                                          else
                                            {
                                              if(match_cons(n_36, sym_Var_1))
                                                {
                                                  l_36 = ATgetArgument(n_36, 0);
                                                  t = b_46(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(n_36, sym_As_2))
                                                    {
                                                      l_36 = ATgetArgument(n_36, 0);
                                                      k_36 = ATgetArgument(n_36, 1);
                                                      t = c_46(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(n_36, sym_BuildDefault_1))
                                                        {
                                                          l_36 = ATgetArgument(n_36, 0);
                                                          t = d_46(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(n_36, sym_Wld_0))
                                                            {
                                                              t = e_46(t);
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
                            }
                          else
                            {
                              if(match_cons(p_36, sym_Match_1))
                                {
                                  n_36 = ATgetArgument(p_36, 0);
                                  t = f_46(t);
                                }
                              else
                                {
                                  if(match_cons(p_36, sym_Let_2))
                                    {
                                      n_36 = ATgetArgument(p_36, 0);
                                      o_36 = ATgetArgument(p_36, 1);
                                      t = g_46(t);
                                    }
                                  else
                                    {
                                      if(match_cons(p_36, sym_Where_1))
                                        {
                                          n_36 = ATgetArgument(p_36, 0);
                                          t = h_46(t);
                                        }
                                      else
                                        {
                                          if(match_cons(p_36, sym_Test_1))
                                            {
                                              n_36 = ATgetArgument(p_36, 0);
                                              t = i_46(t);
                                            }
                                          else
                                            {
                                              if(match_cons(p_36, sym_Call_2))
                                                {
                                                  n_36 = ATgetArgument(p_36, 0);
                                                  o_36 = ATgetArgument(p_36, 1);
                                                  r_35 :
                                                  if(match_cons(n_36, sym_SVar_1))
                                                    {
                                                      l_36 = ATgetArgument(n_36, 0);
                                                      t = j_46(t);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(p_36, sym_Prim_2))
                                                    {
                                                      n_36 = ATgetArgument(p_36, 0);
                                                      o_36 = ATgetArgument(p_36, 1);
                                                      t = k_46(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(p_36, sym_Not_1))
                                                        {
                                                          n_36 = ATgetArgument(p_36, 0);
                                                          t = l_46(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(p_36, sym_LGChoice_2))
                                                            {
                                                              n_36 = ATgetArgument(p_36, 0);
                                                              o_36 = ATgetArgument(p_36, 1);
                                                              t = m_46(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(p_36, sym_GChoice_2))
                                                                {
                                                                  n_36 = ATgetArgument(p_36, 0);
                                                                  o_36 = ATgetArgument(p_36, 1);
                                                                  t = n_46(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(p_36, sym_GuardedLChoice_3))
                                                                    {
                                                                      n_36 = ATgetArgument(p_36, 0);
                                                                      o_36 = ATgetArgument(p_36, 1);
                                                                      m_36 = ATgetArgument(p_36, 2);
                                                                      t = o_46(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(p_36, sym_LChoice_2))
                                                                        {
                                                                          n_36 = ATgetArgument(p_36, 0);
                                                                          o_36 = ATgetArgument(p_36, 1);
                                                                          t = p_46(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(p_36, sym_Choice_2))
                                                                            {
                                                                              n_36 = ATgetArgument(p_36, 0);
                                                                              o_36 = ATgetArgument(p_36, 1);
                                                                              t = q_46(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(p_36, sym_Seq_2))
                                                                                {
                                                                                  n_36 = ATgetArgument(p_36, 0);
                                                                                  o_36 = ATgetArgument(p_36, 1);
                                                                                  t = r_46(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(p_36, sym_Scope_2))
                                                                                    {
                                                                                      n_36 = ATgetArgument(p_36, 0);
                                                                                      o_36 = ATgetArgument(p_36, 1);
                                                                                      t = s_46(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(p_36, sym_Fail_0))
                                                                                        {
                                                                                          t = t_46(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(p_36, sym_Id_0))
                                                                                            {
                                                                                              t = x_46(t);
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
        }
    }
  return(t);
}
ATerm PlainBody_0 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
  q_48 = t;
  p_48 :
  if(match_cons(q_48, sym__2))
    {
      r_48 = ATgetArgument(q_48, 0);
      s_48 = ATgetArgument(q_48, 1);
      t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_k_23), not_null(s_48)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  z_48 :
  if(((ATgetType(b_49) == AT_LIST) && ((ATermList) b_49 != ATempty)))
    {
      c_49 = ATgetFirst((ATermList) b_49);
      d_49 = (ATerm) ATgetNext((ATermList) b_49);
      a_49 :
      if(match_int(c_49, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_49)), term_m_23), term_l_23);
        }
      else
        {
          if(match_int(c_49, 92))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_49)), term_l_23), term_l_23);
            }
          else
            {
              if(match_int(c_49, 34))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_49)), term_r_23), term_l_23);
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
ATerm escape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm k_49 (ATerm t)
    {
      ATerm s_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Escape_0(t);
          {
            ATerm n_2 (ATerm t)
            {
              t = Cons_2(t, _id, k_49);
              return(t);
            }
            t = Cons_2(t, _id, n_2);
          }
          LocalPopChoice(t_23);
        }
      else
        {
          t = s_23;
          {
            ATerm u_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, k_49);
                LocalPopChoice(z_23);
              }
            else
              {
                t = u_23;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = k_49(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm TracedBody_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  o_49 :
  if(match_cons(p_49, sym__2))
    {
      q_49 = ATgetArgument(p_49, 0);
      r_49 = ATgetArgument(p_49, 1);
      {
        ATerm u_49 = NULL,w_49 = NULL;
        ATerm a_24;
        a_24 = t;
        {
          ATerm v_49 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_b_24), not_null(q_49));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  v_49 = t;
                  if(((u_49 != NULL) && (u_49 != v_49)))
                    _fail(v_49);
                  else
                    u_49 = v_49;
                }
              }
            }
          }
        }
        t = a_24;
        {
          ATerm x_49 = NULL;
          t = (ATerm) ATinsert(ATinsert(ATempty, term_e_24), not_null(q_49));
          {
            t = concat_strings_0(t);
            {
              t = escape_0(t);
              {
                t = double_quote_0(t);
                {
                  x_49 = t;
                  if(((w_49 != NULL) && (w_49 != x_49)))
                    _fail(x_49);
                  else
                    w_49 = x_49;
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_23), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(w_49))), term_l_24)))), not_null(r_49)), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_h_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_18), (ATerm) ATmakeAppl(sym_StringLit_1, not_null(u_49))), term_l_24)))));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm e_50 = NULL;
  e_50 = t;
  {
    ATerm g_50 = NULL,h_50 = NULL;
    t = term_z_6;
    {
      ATerm o_2 (ATerm t)
      {
        t = term_i_7;
        return(t);
      }
      t = rewrite_1(t, o_2);
      {
        g_50 = t;
        c_50 :
        if(match_cons(g_50, sym_Defined_1))
          {
            h_50 = ATgetArgument(g_50, 0);
            d_50 :
            if(!(match_string(h_50, "g_0")))
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
    t = not_null(e_50);
  }
  return(t);
}
ATerm TraceFun_0 (ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  {
    ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(n_50));
    {
      ATerm p_2 (ATerm t)
      {
        t = term_m_7;
        return(t);
      }
      t = rewrite_1(t, p_2);
      {
        s_50 = t;
        l_50 :
        if(match_cons(s_50, sym_Defined_2))
          {
            t_50 = ATgetArgument(s_50, 0);
            u_50 = ATgetArgument(s_50, 1);
            m_50 :
            if(match_string(t_50, "h_0"))
              {
                if(((n_50 != NULL) && (n_50 != u_50)))
                  _fail(u_50);
                else
                  n_50 = u_50;
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
    t = not_null(n_50);
  }
  return(t);
}
ATerm TranslateDef_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL;
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym_SDef_3))
    {
      c_51 = ATgetArgument(b_51, 0);
      d_51 = ATgetArgument(b_51, 1);
      e_51 = ATgetArgument(b_51, 2);
      {
        ATerm i_51 = NULL,j_51 = NULL;
        ATerm k_51 = NULL;
        t = not_null(d_51);
        {
          ATerm l_51 = NULL;
          t = map_1(t, TranslateVarDec_0);
          {
            k_51 = t;
            {
              if(((i_51 != NULL) && (i_51 != k_51)))
                _fail(k_51);
              else
                i_51 = k_51;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_51), not_null(e_51));
                {
                  ATerm m_24 = t;
                  int n_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_2 (ATerm t)
                      {
                        ATerm o_24 = t;
                        int p_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = TraceFun_0(t);
                            LocalPopChoice(p_24);
                          }
                        else
                          {
                            t = o_24;
                            t = TraceAllFuns_0(t);
                          }
                        return(t);
                      }
                      t = _2(t, q_2, _id);
                      t = TracedBody_0(t);
                      LocalPopChoice(n_24);
                    }
                  else
                    {
                      t = m_24;
                      t = PlainBody_0(t);
                    }
                  {
                    l_51 = t;
                    if(((j_51 != NULL) && (j_51 != l_51)))
                      _fail(l_51);
                    else
                      j_51 = l_51;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FunDef_3, term_q_9, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(c_51)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(i_51)), term_r_24)))), not_null(j_51));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm quote_1 (ATerm t, ATerm n_96 (ATerm))
{
  ATerm w_51 = NULL;
  ATerm y_51 = NULL,a_52 = NULL;
  w_51 = t;
  {
    ATerm s_24;
    s_24 = t;
    {
      ATerm z_51 = NULL;
      t = n_96(t);
      {
        z_51 = t;
        if(((y_51 != NULL) && (y_51 != z_51)))
          _fail(z_51);
        else
          y_51 = z_51;
      }
    }
    t = s_24;
    {
      ATerm b_52 = NULL;
      t = not_null(w_51);
      {
        t = explode_string_0(t);
        {
          b_52 = t;
          if(((a_52 != NULL) && (a_52 != b_52)))
            _fail(b_52);
          else
            a_52 = b_52;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, not_null(y_51))), not_null(a_52)), (ATerm) ATinsert(ATempty, not_null(y_51)));
        {
          t = concat_0(t);
          t = implode_string_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_r_23;
    return(t);
  }
  t = quote_1(t, r_2);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  g_52 :
  if(((ATgetType(h_52) == AT_LIST) && ((ATermList) h_52 != ATempty)))
    {
      i_52 = ATgetFirst((ATermList) h_52);
      j_52 = (ATerm) ATgetNext((ATermList) h_52);
      t = not_null(i_52);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  p_52 = t;
  o_52 :
  if(match_cons(p_52, sym__2))
    {
      q_52 = ATgetArgument(p_52, 0);
      r_52 = ATgetArgument(p_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_52), not_null(r_52));
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
ATerm rewrite_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm x_52 = NULL;
  ATerm z_52 = NULL;
  x_52 = t;
  {
    ATerm a_53 = NULL;
    t = term_t_24;
    {
      t = a_88(t);
      {
        a_53 = t;
        if(((z_52 != NULL) && (z_52 != a_53)))
          _fail(a_53);
        else
          z_52 = a_53;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_52), not_null(x_52));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm ConstructorName_0 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,l_53 = NULL;
  i_53 = t;
  h_53 :
  if(match_cons(i_53, sym__2))
    {
      j_53 = ATgetArgument(i_53, 0);
      l_53 = ATgetArgument(i_53, 1);
      {
        ATerm o_53 = NULL;
        ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(j_53), not_null(l_53));
        {
          ATerm s_2 (ATerm t)
          {
            t = term_u_24;
            return(t);
          }
          t = rewrite_1(t, s_2);
          {
            p_53 = t;
            f_53 :
            if(match_cons(p_53, sym_Defined_2))
              {
                q_53 = ATgetArgument(p_53, 0);
                r_53 = ATgetArgument(p_53, 1);
                g_53 :
                if(match_string(q_53, "i_0"))
                  {
                    if(((o_53 != NULL) && (o_53 != r_53)))
                      _fail(r_53);
                    else
                      o_53 = r_53;
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
        t = not_null(o_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructor_0 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
  a_54 = t;
  z_53 :
  if(match_cons(a_54, sym_OpDecl_2))
    {
      b_54 = ATgetArgument(a_54, 0);
      c_54 = ATgetArgument(a_54, 1);
      {
        ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,l_54 = NULL;
        ATerm v_24;
        v_24 = t;
        {
          ATerm i_54 = NULL;
          t = not_null(c_54);
          {
            ATerm j_54 = NULL;
            t = Arity_0(t);
            {
              i_54 = t;
              {
                if(((g_54 != NULL) && (g_54 != i_54)))
                  _fail(i_54);
                else
                  g_54 = i_54;
                {
                  ATerm k_54 = NULL;
                  t = int_to_string_0(t);
                  {
                    j_54 = t;
                    {
                      if(((f_54 != NULL) && (f_54 != j_54)))
                        _fail(j_54);
                      else
                        f_54 = j_54;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_54), not_null(g_54));
                        {
                          t = ConstructorName_0(t);
                          {
                            k_54 = t;
                            if(((h_54 != NULL) && (h_54 != k_54)))
                              _fail(k_54);
                            else
                              h_54 = k_54;
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
        t = v_24;
        {
          ATerm m_54 = NULL;
          t = not_null(b_54);
          {
            t = double_quote_0(t);
            {
              m_54 = t;
              if(((l_54 != NULL) && (l_54 != m_54)))
                _fail(m_54);
              else
                l_54 = m_54;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_FunCall_2, term_z_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Id_1, not_null(h_54)))))), (ATerm) ATmakeAppl(sym_Stat_1, (ATerm) ATmakeAppl(sym_Assign_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(h_54)), term_y_7, (ATerm) ATmakeAppl(sym_FunCall_2, term_o_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), (ATerm) ATmakeAppl(sym_IntConst_1, not_null(f_54))), (ATerm) ATmakeAppl(sym_StringLit_1, (ATerm) ATinsert(ATempty, not_null(l_54))))))));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InitConstructors_0 (ATerm t)
{
  ATerm v_54 = NULL;
  ATerm x_54 = NULL;
  v_54 = t;
  {
    ATerm y_54 = NULL,a_55 = NULL;
    ATerm z_54 = NULL;
    t = not_null(v_54);
    {
      t = map_1(t, InitConstructor_0);
      {
        t = concat_0(t);
        {
          z_54 = t;
          if(((y_54 != NULL) && (y_54 != z_54)))
            _fail(z_54);
          else
            y_54 = z_54;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_54), (ATerm) ATinsert(ATempty, term_e_25));
      {
        t = conc_0(t);
        {
          a_55 = t;
          if(((x_54 != NULL) && (x_54 != a_55)))
            _fail(a_55);
          else
            x_54 = a_55;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FunDef_3, term_c_8, (ATerm)ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, term_l_25, (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(ATempty, term_c_8)))), (ATerm) ATmakeAppl(sym_Compound_2, (ATerm)ATempty, not_null(x_54)));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm f_55 = NULL;
  f_55 = t;
  t = SSL_int_to_string(not_null(f_55));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  o_55 :
  if(((ATgetType(q_55) == AT_LIST) && ((ATermList) q_55 != ATempty)))
    {
      r_55 = ATgetFirst((ATermList) q_55);
      s_55 = (ATerm) ATgetNext((ATermList) q_55);
      p_55 :
      if(match_int(r_55, 95))
        {
          ATerm u_55 = NULL;
          ATerm v_55 = NULL;
          t = not_null(s_55);
          {
            t = t_0(t);
            {
              v_55 = t;
              if(((u_55 != NULL) && (u_55 != v_55)))
                _fail(v_55);
              else
                u_55 = v_55;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(u_55)), term_m_25), term_m_25);
        }
      else
        {
          if(match_int(r_55, 45))
            {
              ATerm x_55 = NULL;
              ATerm y_55 = NULL;
              t = not_null(s_55);
              {
                t = t_0(t);
                {
                  y_55 = t;
                  if(((x_55 != NULL) && (x_55 != y_55)))
                    _fail(y_55);
                  else
                    x_55 = y_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_55)), term_m_25);
            }
          else
            {
              if(match_int(r_55, 39))
                {
                  ATerm a_56 = NULL;
                  ATerm b_56 = NULL;
                  t = not_null(s_55);
                  {
                    t = t_0(t);
                    {
                      b_56 = t;
                      if(((a_56 != NULL) && (a_56 != b_56)))
                        _fail(b_56);
                      else
                        a_56 = b_56;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_56)), term_m_25), term_n_25), term_m_25);
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
ATerm escape_1 (ATerm t, ATerm z_95 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm i_56 (ATerm t)
    {
      ATerm o_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_95(t, i_56);
          LocalPopChoice(p_25);
        }
      else
        {
          t = o_25;
          {
            ATerm q_25 = t;
            int r_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, i_56);
                LocalPopChoice(r_25);
              }
            else
              {
                t = q_25;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = i_56(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm))
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_98(t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
        n_56 = t;
        m_56 :
        if(((ATgetType(n_56) == AT_LIST) && ((ATermList) n_56 != ATempty)))
          {
            o_56 = ATgetFirst((ATermList) n_56);
            p_56 = (ATerm) ATgetNext((ATermList) n_56);
            {
              ATerm s_56 = NULL,u_56 = NULL;
              ATerm y_25;
              y_25 = t;
              {
                ATerm t_56 = NULL;
                t = not_null(o_56);
                {
                  t = r_98(t);
                  {
                    t_56 = t;
                    if(((s_56 != NULL) && (s_56 != t_56)))
                      _fail(t_56);
                    else
                      s_56 = t_56;
                  }
                }
              }
              t = y_25;
              {
                ATerm v_56 = NULL;
                t = not_null(p_56);
                {
                  t = foldr_3(t, p_98, q_98, r_98);
                  {
                    v_56 = t;
                    if(((u_56 != NULL) && (u_56 != v_56)))
                      _fail(v_56);
                    else
                      u_56 = v_56;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_56), not_null(u_56));
                  t = q_98(t);
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
  ATerm t_2 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_z_16;
    return(t);
  }
  t = foldr_3(t, t_2, add_0, u_2);
  return(t);
}
ATerm Arity_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL;
  d_57 = t;
  b_57 :
  if(match_cons(d_57, sym_FunType_2))
    {
      e_57 = ATgetArgument(d_57, 0);
      c_57 = ATgetArgument(d_57, 1);
      {
        t = not_null(e_57);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(d_57, sym_ConstType_1))
        {
          e_57 = ATgetArgument(d_57, 0);
          t = term_x_16;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DeclareConstructor_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
  u_57 = t;
  t_57 :
  if(match_cons(u_57, sym_OpDecl_2))
    {
      v_57 = ATgetArgument(u_57, 0);
      w_57 = ATgetArgument(u_57, 1);
      {
        ATerm z_57 = NULL,a_58 = NULL;
        ATerm b_58 = NULL;
        t = not_null(w_57);
        {
          ATerm c_58 = NULL,h_58 = NULL,j_58 = NULL;
          t = Arity_0(t);
          {
            b_58 = t;
            {
              if(((z_57 != NULL) && (z_57 != b_58)))
                _fail(b_58);
              else
                z_57 = b_58;
              {
                ATerm z_25;
                z_25 = t;
                {
                  ATerm g_58 = NULL;
                  t = not_null(v_57);
                  {
                    t = cify_0(t);
                    {
                      g_58 = t;
                      if(((c_58 != NULL) && (c_58 != g_58)))
                        _fail(g_58);
                      else
                        c_58 = g_58;
                    }
                  }
                }
                t = z_25;
                {
                  ATerm i_58 = NULL;
                  t = not_null(z_57);
                  {
                    t = int_to_string_0(t);
                    {
                      i_58 = t;
                      if(((h_58 != NULL) && (h_58 != i_58)))
                        _fail(i_58);
                      else
                        h_58 = i_58;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_58)), term_e_26), not_null(c_58)), term_a_26);
                    {
                      t = concat_strings_0(t);
                      {
                        j_58 = t;
                        {
                          if(((a_58 != NULL) && (a_58 != j_58)))
                            _fail(j_58);
                          else
                            a_58 = j_58;
                          {
                            ATerm g_26;
                            g_26 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(v_57), not_null(z_57)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_26, not_null(a_58)));
                              {
                                ATerm v_2 (ATerm t)
                                {
                                  t = term_u_24;
                                  return(t);
                                }
                                t = assert_1(t, v_2);
                              }
                            }
                            t = g_26;
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
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_m_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(a_58)), term_r_9)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TranslateSig_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  b_59 = t;
  x_58 :
  if(match_cons(b_59, sym_Signature_1))
    {
      c_59 = ATgetArgument(b_59, 0);
      y_58 :
      if(((ATgetType(c_59) == AT_LIST) && ((ATermList) c_59 != ATempty)))
        {
          d_59 = ATgetFirst((ATermList) c_59);
          f_59 = (ATerm) ATgetNext((ATermList) c_59);
          z_58 :
          if(match_cons(d_59, sym_Constructors_1))
            {
              e_59 = ATgetArgument(d_59, 0);
              a_59 :
              if(((ATermList) f_59 == ATempty))
                {
                  {
                    ATerm h_59 = NULL,i_59 = NULL,l_59 = NULL;
                    ATerm n_26;
                    n_26 = t;
                    {
                      ATerm j_59 = NULL;
                      t = not_null(e_59);
                      {
                        ATerm k_59 = NULL;
                        t = map_1(t, DeclareConstructor_0);
                        {
                          j_59 = t;
                          {
                            if(((h_59 != NULL) && (h_59 != j_59)))
                              _fail(j_59);
                            else
                              h_59 = j_59;
                            {
                              t = not_null(e_59);
                              {
                                t = InitConstructors_0(t);
                                {
                                  k_59 = t;
                                  if(((i_59 != NULL) && (i_59 != k_59)))
                                    _fail(k_59);
                                  else
                                    i_59 = k_59;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    t = n_26;
                    {
                      ATerm m_59 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_59), (ATerm) ATinsert(ATempty, not_null(i_59)));
                      {
                        t = conc_0(t);
                        {
                          m_59 = t;
                          if(((l_59 != NULL) && (l_59 != m_59)))
                            _fail(m_59);
                          else
                            l_59 = m_59;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(l_59));
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
ATerm TranslateType_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,i_67 = NULL;
  o_66 = t;
  m_66 :
  if(match_cons(o_66, sym_FunType_2))
    {
      i_67 = ATgetArgument(o_66, 0);
      n_66 = ATgetArgument(o_66, 1);
      {
        ATerm m_67 = NULL;
        ATerm n_67 = NULL;
        t = not_null(i_67);
        {
          t = map_1(t, TranslateType_0);
          {
            n_67 = t;
            if(((m_67 != NULL) && (m_67 != n_67)))
              _fail(n_67);
            else
              m_67 = n_67;
          }
        }
        t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_q_9, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(m_67)));
      }
    }
  else
    {
      if(match_cons(o_66, sym_ConstType_1))
        {
          i_67 = ATgetArgument(o_66, 0);
          t = term_q_9;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm TranslateVarDec_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
  x_67 = t;
  u_67 :
  if(match_cons(x_67, sym_VarDec_2))
    {
      y_67 = ATgetArgument(x_67, 0);
      z_67 = ATgetArgument(x_67, 1);
      v_67 :
      if(match_cons(z_67, sym_FunType_2))
        {
          a_68 = ATgetArgument(z_67, 0);
          w_67 = ATgetArgument(z_67, 1);
          {
            ATerm d_68 = NULL;
            ATerm e_68 = NULL;
            t = not_null(a_68);
            {
              t = map_1(t, TranslateType_0);
              {
                e_68 = t;
                if(((d_68 != NULL) && (d_68 != e_68)))
                  _fail(e_68);
                else
                  d_68 = e_68;
              }
            }
            t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_q_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_67)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, not_null(d_68)))));
          }
        }
      else
        {
          if(match_cons(z_67, sym_ConstType_1))
            {
              a_68 = ATgetArgument(z_67, 0);
              t = (ATerm) ATmakeAppl(sym_ParamDecl_2, term_q_9, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(y_67)), term_r_9));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefToDeclaration_0 (ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
  m_68 = t;
  l_68 :
  if(match_cons(m_68, sym_SDef_3))
    {
      n_68 = ATgetArgument(m_68, 0);
      o_68 = ATgetArgument(m_68, 1);
      p_68 = ATgetArgument(m_68, 2);
      {
        ATerm t_68 = NULL;
        ATerm u_68 = NULL;
        t = not_null(o_68);
        {
          t = map_1(t, TranslateVarDec_0);
          {
            u_68 = t;
            if(((t_68 != NULL) && (t_68 != u_68)))
              _fail(u_68);
            else
              t_68 = u_68;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Declaration2_2, term_q_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_IdDecl_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_Id_1, not_null(n_68)), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_ParamList_1, (ATerm) ATinsert(CheckATermList(not_null(t_68)), term_q_9))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TranslateSpec_0 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  j_69 = t;
  d_69 :
  if(match_cons(j_69, sym_Specification_1))
    {
      k_69 = ATgetArgument(j_69, 0);
      e_69 :
      if(((ATgetType(k_69) == AT_LIST) && ((ATermList) k_69 != ATempty)))
        {
          l_69 = ATgetFirst((ATermList) k_69);
          n_69 = (ATerm) ATgetNext((ATermList) k_69);
          f_69 :
          if(match_cons(l_69, sym_Signature_1))
            {
              m_69 = ATgetArgument(l_69, 0);
              g_69 :
              if(((ATgetType(n_69) == AT_LIST) && ((ATermList) n_69 != ATempty)))
                {
                  o_69 = ATgetFirst((ATermList) n_69);
                  q_69 = (ATerm) ATgetNext((ATermList) n_69);
                  h_69 :
                  if(match_cons(o_69, sym_Strategies_1))
                    {
                      p_69 = ATgetArgument(o_69, 0);
                      i_69 :
                      if(((ATermList) q_69 == ATempty))
                        {
                          {
                            ATerm t_69 = NULL,u_69 = NULL,b_70 = NULL;
                            ATerm o_26;
                            o_26 = t;
                            {
                              ATerm v_69 = NULL;
                              t = not_null(p_69);
                              {
                                ATerm a_70 = NULL;
                                t = map_1(t, SDefToDeclaration_0);
                                {
                                  v_69 = t;
                                  {
                                    if(((t_69 != NULL) && (t_69 != v_69)))
                                      _fail(v_69);
                                    else
                                      t_69 = v_69;
                                    {
                                      t = term_v_7;
                                      {
                                        ATerm p_26 = t;
                                        int q_26 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = get_config_0(t);
                                            {
                                              ATerm w_2 (ATerm t)
                                              {
                                                ATerm w_69 = NULL;
                                                ATerm x_69 = NULL,z_69 = NULL;
                                                ATerm y_69 = NULL;
                                                y_69 = t;
                                                if(((x_69 != NULL) && (x_69 != y_69)))
                                                  _fail(y_69);
                                                else
                                                  x_69 = y_69;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_b_27, not_null(x_69));
                                                  {
                                                    t = conc_strings_0(t);
                                                    {
                                                      z_69 = t;
                                                      if(((w_69 != NULL) && (w_69 != z_69)))
                                                        _fail(z_69);
                                                      else
                                                        w_69 = z_69;
                                                    }
                                                  }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(w_69));
                                                return(t);
                                              }
                                              t = map_1(t, w_2);
                                            }
                                            LocalPopChoice(q_26);
                                          }
                                        else
                                          {
                                            t = p_26;
                                            t = (ATerm) ATempty;
                                          }
                                        {
                                          a_70 = t;
                                          if(((u_69 != NULL) && (u_69 != a_70)))
                                            _fail(a_70);
                                          else
                                            u_69 = a_70;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = o_26;
                            {
                              ATerm c_70 = NULL;
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_69)), not_null(t_69)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_28), (ATerm) ATmakeAppl(sym_Signature_1, not_null(m_69))), (ATerm) ATmakeAppl(sym_Declaration2_2, term_b_28, (ATerm) ATinsert(ATempty, term_h_28)))), not_null(u_69));
                              {
                                t = concat_0(t);
                                {
                                  c_70 = t;
                                  if(((b_70 != NULL) && (b_70 != c_70)))
                                    _fail(c_70);
                                  else
                                    b_70 = c_70;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_TranslationUnit_1, not_null(b_70));
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
ATerm Tl_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  l_70 = t;
  k_70 :
  if(((ATgetType(l_70) == AT_LIST) && ((ATermList) l_70 != ATempty)))
    {
      m_70 = ATgetFirst((ATermList) l_70);
      n_70 = (ATerm) ATgetNext((ATermList) l_70);
      t = not_null(n_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
  u_70 = t;
  t_70 :
  if(match_cons(u_70, sym__2))
    {
      v_70 = ATgetArgument(u_70, 0);
      w_70 = ATgetArgument(u_70, 1);
      {
        ATerm j_28;
        j_28 = t;
        {
          ATerm z_70 = NULL;
          ATerm a_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_70), not_null(w_70));
          {
            ATerm k_28 = t;
            int l_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(l_28);
              }
            else
              {
                t = k_28;
                t = (ATerm) ATempty;
              }
            {
              a_71 = t;
              if(((z_70 != NULL) && (z_70 != a_71)))
                _fail(a_71);
              else
                z_70 = a_71;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_70), not_null(w_70), not_null(z_70));
            t = table_put_0(t);
          }
        }
        t = j_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm v_87 (ATerm))
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  ATerm o_28;
  o_28 = t;
  {
    ATerm k_71 = NULL;
    ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
    t = v_87(t);
    {
      k_71 = t;
      {
        if(((i_71 != NULL) && (i_71 != k_71)))
          _fail(k_71);
        else
          i_71 = k_71;
        {
          ATerm s_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_71), term_c_29);
              t = table_get_0(t);
              LocalPopChoice(x_28);
            }
          else
            {
              t = s_28;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            l_71 = t;
            g_71 :
            if(((ATgetType(l_71) == AT_LIST) && ((ATermList) l_71 != ATempty)))
              {
                m_71 = ATgetFirst((ATermList) l_71);
                n_71 = (ATerm) ATgetNext((ATermList) l_71);
                {
                  if(((j_71 != NULL) && (j_71 != m_71)))
                    _fail(m_71);
                  else
                    j_71 = m_71;
                  {
                    if(((h_71 != NULL) && (h_71 != n_71)))
                      _fail(n_71);
                    else
                      h_71 = n_71;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_71), term_c_29, not_null(h_71));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(j_71);
                          {
                            ATerm x_2 (ATerm t)
                            {
                              ATerm o_71 = NULL;
                              o_71 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_71), not_null(o_71));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, x_2);
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
          }
        }
      }
    }
  }
  t = o_28;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm f_113 (ATerm), ATerm g_113 (ATerm))
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_113(t);
      t = g_113(t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        t = g_113(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_87 (ATerm))
{
  ATerm v_71 = NULL;
  ATerm f_29;
  f_29 = t;
  {
    ATerm w_71 = NULL;
    ATerm x_71 = NULL;
    t = u_87(t);
    {
      w_71 = t;
      {
        if(((v_71 != NULL) && (v_71 != w_71)))
          _fail(w_71);
        else
          v_71 = w_71;
        {
          ATerm y_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_71), term_c_29);
          {
            ATerm g_29 = t;
            int h_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_29);
              }
            else
              {
                t = g_29;
                t = (ATerm) ATempty;
              }
            {
              y_71 = t;
              if(((x_71 != NULL) && (x_71 != y_71)))
                _fail(y_71);
              else
                x_71 = y_71;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_71), term_c_29, (ATerm) ATinsert(CheckATermList(not_null(x_71)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = f_29;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm))
{
  t = begin_scope_1(t, w_87);
  {
    ATerm y_2 (ATerm t)
    {
      t = end_scope_1(t, w_87);
      return(t);
    }
    t = restore_always_2(t, x_87, y_2);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  f_72 :
  if(match_cons(g_72, sym__2))
    {
      h_72 = ATgetArgument(g_72, 0);
      i_72 = ATgetArgument(g_72, 1);
      {
        ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL;
        ATerm m_29;
        m_29 = t;
        {
          ATerm o_72 = NULL;
          ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
          t = y_87(t);
          {
            o_72 = t;
            {
              if(((l_72 != NULL) && (l_72 != o_72)))
                _fail(o_72);
              else
                l_72 = o_72;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_72), not_null(h_72), not_null(i_72));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_29 = t;
                    int o_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_72), term_c_29);
                        t = table_get_0(t);
                        LocalPopChoice(o_29);
                      }
                    else
                      {
                        t = n_29;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_72 = t;
                      e_72 :
                      if(((ATgetType(p_72) == AT_LIST) && ((ATermList) p_72 != ATempty)))
                        {
                          q_72 = ATgetFirst((ATermList) p_72);
                          r_72 = (ATerm) ATgetNext((ATermList) p_72);
                          {
                            if(((m_72 != NULL) && (m_72 != q_72)))
                              _fail(q_72);
                            else
                              m_72 = q_72;
                            {
                              if(((n_72 != NULL) && (n_72 != r_72)))
                                _fail(r_72);
                              else
                                n_72 = r_72;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_72), term_c_29, (ATerm) ATinsert(CheckATermList(not_null(n_72)), (ATerm) ATinsert(CheckATermList(not_null(m_72)), not_null(h_72))));
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
        t = m_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm init_term_caching_0 (ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL;
  ATerm p_29;
  p_29 = t;
  {
    ATerm z_72 = NULL;
    ATerm a_73 = NULL;
    t = term_r_29;
    {
      z_72 = t;
      {
        if(((x_72 != NULL) && (x_72 != z_72)))
          _fail(z_72);
        else
          x_72 = z_72;
        {
          t = term_d_16;
          {
            a_73 = t;
            if(((y_72 != NULL) && (y_72 != a_73)))
              _fail(a_73);
            else
              y_72 = a_73;
          }
        }
      }
    }
  }
  t = p_29;
  {
    ATerm s_29;
    s_29 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(x_72)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_29, not_null(y_72)));
      {
        ATerm z_2 (ATerm t)
        {
          t = term_o_13;
          return(t);
        }
        t = assert_1(t, z_2);
      }
    }
    t = s_29;
  }
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = init_term_caching_0(t);
  {
    ATerm g_73 (ATerm t)
    {
      ATerm a_3 (ATerm t)
      {
        t = term_t_10;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        ATerm c_3 (ATerm t)
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = TranslateSpec_0(t);
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              {
                ATerm w_29 = t;
                int x_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TranslateSig_0(t);
                    LocalPopChoice(x_29);
                  }
                else
                  {
                    t = w_29;
                    {
                      ATerm y_29 = t;
                      int z_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = TranslateDef_0(t);
                          LocalPopChoice(z_29);
                        }
                      else
                        {
                          t = y_29;
                          t = TranslateStrat_0(t);
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1(t, c_3);
        {
          t = _all(t, g_73);
          t = repeat_1(t, Csimplify_0);
        }
        return(t);
      }
      t = scope_2(t, a_3, b_3);
      return(t);
    }
    t = g_73(t);
    {
      ATerm d_3 (ATerm t)
      {
        ATerm e_3 (ATerm t)
        {
          ATerm f_73 = NULL;
          f_73 = t;
          e_73 :
          if(match_cons(f_73, sym_InitCachedTerms_0))
            {
              t = init_cached_terms_0(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = oncetd_1(t, e_3);
        return(t);
      }
      t = try_1(t, d_3);
    }
  }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_73 = NULL;
  ATerm a_30;
  a_30 = t;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm l_73 = NULL,m_73 = NULL;
      l_73 = t;
      j_73 :
      if(match_cons(l_73, sym_Program_1))
        {
          m_73 = ATgetArgument(l_73, 0);
          if(((k_73 != NULL) && (k_73 != m_73)))
            _fail(m_73);
          else
            k_73 = m_73;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_30), not_null(k_73)), term_c_30));
      {
        t = printnl_0(t);
        {
          t = term_z_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  q_73 = t;
  p_73 :
  if(match_cons(q_73, sym__2))
    {
      r_73 = ATgetArgument(q_73, 0);
      s_73 = ATgetArgument(q_73, 1);
      {
        ATerm e_30;
        e_30 = t;
        t = SSL_printnl(not_null(r_73), not_null(s_73));
        t = e_30;
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
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  y_73 = t;
  x_73 :
  if(match_cons(y_73, sym__2))
    {
      z_73 = ATgetArgument(y_73, 0);
      a_74 = ATgetArgument(y_73, 1);
      {
        t = not_null(z_73);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(a_74);
            return(t);
          }
          t = at_end_1(t, g_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_94 (ATerm))
{
  ATerm f_30;
  f_30 = t;
  {
    ATerm g_74 = NULL,i_74 = NULL;
    ATerm g_30;
    g_30 = t;
    {
      ATerm h_74 = NULL;
      t = z_94(t);
      {
        h_74 = t;
        if(((g_74 != NULL) && (g_74 != h_74)))
          _fail(h_74);
        else
          g_74 = h_74;
      }
    }
    t = g_30;
    {
      ATerm j_74 = NULL;
      j_74 = t;
      if(((i_74 != NULL) && (i_74 != j_74)))
        _fail(j_74);
      else
        i_74 = j_74;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_74)), not_null(g_74)));
        t = printnl_0(t);
      }
    }
  }
  t = f_30;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_74 = NULL;
  n_74 = t;
  t = SSL_is_string(not_null(n_74));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_3);
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            {
              ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL;
              y_74 = t;
              x_74 :
              if(match_cons(y_74, sym_Path_1))
                {
                  z_74 = ATgetArgument(y_74, 0);
                  t = not_null(z_74);
                }
              else
                {
                  if(match_cons(y_74, sym_Var_1))
                    {
                      z_74 = ATgetArgument(y_74, 0);
                      {
                        t = not_null(z_74);
                        {
                          ATerm l_30 = t;
                          int m_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(m_30);
                            }
                          else
                            {
                              t = l_30;
                              {
                                ATerm i_3 (ATerm t)
                                {
                                  t = term_n_30;
                                  return(t);
                                }
                                t = debug_1(t, i_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_74, sym_Prefix_2))
                        {
                          z_74 = ATgetArgument(y_74, 0);
                          a_75 = ATgetArgument(y_74, 1);
                          {
                            ATerm f_75 = NULL,h_75 = NULL;
                            ATerm o_30;
                            o_30 = t;
                            {
                              ATerm g_75 = NULL;
                              t = not_null(z_74);
                              {
                                t = eval_config_0(t);
                                {
                                  g_75 = t;
                                  if(((f_75 != NULL) && (f_75 != g_75)))
                                    _fail(g_75);
                                  else
                                    f_75 = g_75;
                                }
                              }
                            }
                            t = o_30;
                            {
                              ATerm i_75 = NULL;
                              t = not_null(a_75);
                              {
                                t = eval_config_0(t);
                                {
                                  i_75 = t;
                                  if(((h_75 != NULL) && (h_75 != i_75)))
                                    _fail(i_75);
                                  else
                                    h_75 = i_75;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_75), not_null(h_75));
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
  ATerm q_75 = NULL;
  q_75 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_6, not_null(q_75));
    {
      t = table_get_0(t);
      {
        ATerm j_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_30;
            p_30 = t;
            {
              ATerm s_75 = NULL;
              ATerm t_75 = NULL;
              t_75 = t;
              if(((s_75 != NULL) && (s_75 != t_75)))
                _fail(t_75);
              else
                s_75 = t_75;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_6, not_null(q_75), not_null(s_75));
                t = table_put_0(t);
              }
            }
            t = p_30;
          }
          return(t);
        }
        t = try_1(t, j_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm x_92 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm q_30;
    q_30 = t;
    {
      ATerm x_75 = NULL;
      ATerm y_75 = NULL;
      t = term_r_30;
      {
        t = get_config_0(t);
        {
          y_75 = t;
          if(((x_75 != NULL) && (x_75 != y_75)))
            _fail(y_75);
          else
            x_75 = y_75;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_75), term_s_30);
        t = geq_0(t);
      }
    }
    t = q_30;
    t = x_92(t);
    return(t);
  }
  t = try_1(t, k_3);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATempty, term_t_30));
  {
    t = printnl_0(t);
    {
      t = term_z_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_76 = NULL;
  b_76 = t;
  t = SSL_TicksToSeconds(not_null(b_76));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  f_76 :
  if(match_cons(g_76, sym__2))
    {
      h_76 = ATgetArgument(g_76, 0);
      i_76 = ATgetArgument(g_76, 1);
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_76), not_null(i_76));
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            t = SSL_addr(not_null(h_76), not_null(i_76));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_98 (ATerm), ATerm o_98 (ATerm))
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_98(t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL;
        p_76 = t;
        o_76 :
        if(((ATgetType(p_76) == AT_LIST) && ((ATermList) p_76 != ATempty)))
          {
            q_76 = ATgetFirst((ATermList) p_76);
            r_76 = (ATerm) ATgetNext((ATermList) p_76);
            {
              ATerm u_76 = NULL;
              ATerm v_76 = NULL;
              t = not_null(r_76);
              {
                t = foldr_2(t, n_98, o_98);
                {
                  v_76 = t;
                  if(((u_76 != NULL) && (u_76 != v_76)))
                    _fail(v_76);
                  else
                    u_76 = v_76;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_76), not_null(u_76));
                t = o_98(t);
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
ATerm crush_2 (ATerm t, ATerm c_100 (ATerm), ATerm d_100 (ATerm))
{
  ATerm c_77 = NULL;
  ATerm e_77 = NULL;
  c_77 = t;
  {
    ATerm f_77 = NULL;
    ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
    t = not_null(c_77);
    {
      f_77 = t;
      {
        t = SSL_explode_term(not_null(f_77));
        {
          h_77 = t;
          b_77 :
          if(match_cons(h_77, sym__2))
            {
              i_77 = ATgetArgument(h_77, 0);
              j_77 = ATgetArgument(h_77, 1);
              if(((e_77 != NULL) && (e_77 != j_77)))
                _fail(j_77);
              else
                e_77 = j_77;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_77);
      t = foldr_2(t, c_100, d_100);
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
    ATerm l_3 (ATerm t)
    {
      t = term_x_16;
      return(t);
    }
    t = crush_2(t, l_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
  p_77 = t;
  o_77 :
  if(match_cons(p_77, sym__2))
    {
      q_77 = ATgetArgument(p_77, 0);
      r_77 = ATgetArgument(p_77, 1);
      {
        ATerm y_30;
        y_30 = t;
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_77), not_null(r_77));
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              t = SSL_gtr(not_null(q_77), not_null(r_77));
            }
        }
        t = y_30;
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
  ATerm x_77 = NULL;
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL;
      y_77 = t;
      w_77 :
      if(match_cons(y_77, sym__2))
        {
          z_77 = ATgetArgument(y_77, 0);
          a_78 = ATgetArgument(y_77, 1);
          {
            if(((x_77 != NULL) && (x_77 != z_77)))
              _fail(z_77);
            else
              x_77 = z_77;
            if(((x_77 != NULL) && (x_77 != a_78)))
              _fail(a_78);
            else
              x_77 = a_78;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_92 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm e_31;
    e_31 = t;
    {
      ATerm e_78 = NULL;
      ATerm f_78 = NULL;
      t = term_r_30;
      {
        t = get_config_0(t);
        {
          f_78 = t;
          if(((e_78 != NULL) && (e_78 != f_78)))
            _fail(f_78);
          else
            e_78 = f_78;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_78), term_z_16);
        t = geq_0(t);
      }
    }
    t = e_31;
    t = w_92(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm j_78 = NULL,l_78 = NULL;
    ATerm f_31;
    f_31 = t;
    {
      ATerm k_78 = NULL;
      t = run_time_0(t);
      {
        k_78 = t;
        if(((j_78 != NULL) && (j_78 != k_78)))
          _fail(k_78);
        else
          j_78 = k_78;
      }
    }
    t = f_31;
    {
      ATerm m_78 = NULL;
      t = term_g_31;
      {
        t = get_config_0(t);
        {
          m_78 = t;
          if(((l_78 != NULL) && (l_78 != m_78)))
            _fail(m_78);
          else
            l_78 = m_78;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_31), not_null(j_78)), term_j_31), not_null(l_78)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_3);
  {
    t = term_x_16;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
  r_78 = t;
  q_78 :
  if(match_cons(r_78, sym__2))
    {
      s_78 = ATgetArgument(r_78, 0);
      t_78 = ATgetArgument(r_78, 1);
      t = SSL_WriteToTextFile(not_null(s_78), not_null(t_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm j_67 (ATerm), ATerm k_67 (ATerm))
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  d_79 = t;
  c_79 :
  if(match_cons(d_79, sym__2))
    {
      e_79 = ATgetArgument(d_79, 0);
      f_79 = ATgetArgument(d_79, 1);
      {
        ATerm j_79 = NULL,l_79 = NULL;
        ATerm k_79 = NULL;
        t = SSLgetAnnotations(not_null(d_79));
        {
          k_79 = t;
          if(((j_79 != NULL) && (j_79 != k_79)))
            _fail(k_79);
          else
            j_79 = k_79;
        }
        {
          t = not_null(e_79);
          {
            ATerm n_79 = NULL;
            t = j_67(t);
            {
              l_79 = t;
              {
                t = not_null(f_79);
                {
                  ATerm p_79 = NULL;
                  t = k_67(t);
                  {
                    n_79 = t;
                    {
                      ATerm q_79 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_79), not_null(n_79)), not_null(j_79));
                      {
                        q_79 = t;
                        if(((p_79 != NULL) && (p_79 != q_79)))
                          _fail(q_79);
                        else
                          p_79 = q_79;
                      }
                      t = not_null(p_79);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL;
  y_79 = t;
  x_79 :
  if(match_cons(y_79, sym__2))
    {
      z_79 = ATgetArgument(y_79, 0);
      a_80 = ATgetArgument(y_79, 1);
      t = SSL_WriteToBinaryFile(not_null(z_79), not_null(a_80));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_80 = NULL;
  ATerm m_31;
  m_31 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm n_31 = t;
      int o_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm j_80 = NULL,m_80 = NULL;
            j_80 = t;
            f_80 :
            if(match_cons(j_80, sym_Output_1))
              {
                m_80 = ATgetArgument(j_80, 0);
                if(((i_80 != NULL) && (i_80 != m_80)))
                  _fail(m_80);
                else
                  i_80 = m_80;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          LocalPopChoice(o_31);
        }
      else
        {
          t = n_31;
          {
            ATerm n_80 = NULL;
            t = term_p_31;
            {
              n_80 = t;
              if(((i_80 != NULL) && (i_80 != n_80)))
                _fail(n_80);
              else
                i_80 = n_80;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = m_31;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(i_80);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm q_31 = t;
      int s_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm o_80 = NULL;
              o_80 = t;
              h_80 :
              if(!(match_cons(o_80, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_3);
            return(t);
          }
          t = _2(t, s_3, WriteToBinaryFile_0);
          LocalPopChoice(s_31);
        }
      else
        {
          t = q_31;
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
ATerm apply_strategy_1 (ATerm t, ATerm j_94 (ATerm))
{
  ATerm u_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
  ATerm t_31;
  t_31 = t;
  t = dtime_0(t);
  t = t_31;
  {
    t = j_94(t);
    {
      ATerm u_31;
      u_31 = t;
      {
        ATerm v_80 = NULL;
        t = dtime_0(t);
        {
          v_80 = t;
          if(((u_80 != NULL) && (u_80 != v_80)))
            _fail(v_80);
          else
            u_80 = v_80;
        }
      }
      t = u_31;
      {
        w_80 = t;
        t_80 :
        if(match_cons(w_80, sym__2))
          {
            x_80 = ATgetArgument(w_80, 0);
            y_80 = ATgetArgument(w_80, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_80)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_80))), not_null(y_80));
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm e_81 = NULL;
  e_81 = t;
  t = SSL_ReadFromFile(not_null(e_81));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_97 (ATerm), ATerm c_97 (ATerm))
{
  ATerm j_81 = NULL,l_81 = NULL;
  ATerm v_31;
  v_31 = t;
  {
    ATerm k_81 = NULL;
    t = b_97(t);
    {
      k_81 = t;
      if(((j_81 != NULL) && (j_81 != k_81)))
        _fail(k_81);
      else
        j_81 = k_81;
    }
  }
  t = v_31;
  {
    ATerm m_81 = NULL;
    t = c_97(t);
    {
      m_81 = t;
      if(((l_81 != NULL) && (l_81 != m_81)))
        _fail(m_81);
      else
        l_81 = m_81;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_81), not_null(l_81));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_81 = NULL;
  ATerm x_31;
  x_31 = t;
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 (ATerm t)
        {
          ATerm t_81 = NULL,u_81 = NULL;
          t_81 = t;
          q_81 :
          if(match_cons(t_81, sym_Input_1))
            {
              u_81 = ATgetArgument(t_81, 0);
              if(((s_81 != NULL) && (s_81 != u_81)))
                _fail(u_81);
              else
                s_81 = u_81;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, u_3);
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        {
          ATerm v_81 = NULL;
          t = term_b_32;
          {
            v_81 = t;
            if(((s_81 != NULL) && (s_81 != v_81)))
              _fail(v_81);
            else
              s_81 = v_81;
          }
        }
      }
  }
  t = x_31;
  {
    ATerm v_3 (ATerm t)
    {
      t = not_null(s_81);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_82 = NULL;
  d_82 = t;
  c_82 :
  if(match_cons(d_82, sym_Version_0))
    {
      ATerm f_82 = NULL,h_82 = NULL;
      ATerm c_32;
      c_32 = t;
      {
        ATerm g_82 = NULL;
        t = SSLgetAnnotations(not_null(d_82));
        {
          g_82 = t;
          if(((f_82 != NULL) && (f_82 != g_82)))
            _fail(g_82);
          else
            f_82 = g_82;
        }
      }
      t = c_32;
      {
        ATerm i_82 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_82));
        {
          i_82 = t;
          if(((h_82 != NULL) && (h_82 != i_82)))
            _fail(i_82);
          else
            h_82 = i_82;
        }
        t = not_null(h_82);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_94 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        {
          ATerm f_32 = t;
          int g_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_32);
            }
          else
            {
              t = f_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_3);
  t = h_94(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_82 = NULL;
  n_82 = t;
  t = SSL_table_create(not_null(n_82));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_82 = NULL;
  r_82 = t;
  {
    ATerm h_32;
    h_32 = t;
    {
      t = term_j_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_32, term_k_32, not_null(r_82));
          t = table_put_0(t);
        }
      }
    }
    t = h_32;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_82 = NULL;
  v_82 = t;
  t = SSL_string_to_int(not_null(v_82));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL;
  d_83 = t;
  b_83 :
  if(match_string(d_83, "register-usage-info"))
    {
      t = register_usage_1(t, s_0);
    }
  else
    {
      if(((ATgetType(d_83) == AT_LIST) && ((ATermList) d_83 != ATempty)))
        {
          e_83 = ATgetFirst((ATermList) d_83);
          f_83 = (ATerm) ATgetNext((ATermList) d_83);
          c_83 :
          if(((ATgetType(f_83) == AT_LIST) && ((ATermList) f_83 != ATempty)))
            {
              g_83 = ATgetFirst((ATermList) f_83);
              h_83 = (ATerm) ATgetNext((ATermList) f_83);
              {
                ATerm l_83 = NULL;
                ATerm l_32;
                l_32 = t;
                {
                  t = not_null(e_83);
                  t = q_0(t);
                }
                t = l_32;
                {
                  ATerm m_83 = NULL;
                  t = not_null(g_83);
                  {
                    t = r_0(t);
                    {
                      m_83 = t;
                      if(((l_83 != NULL) && (l_83 != m_83)))
                        _fail(m_83);
                      else
                        l_83 = m_83;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_83)), not_null(l_83));
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
ATerm io_options_0 (ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm d_84 = NULL;
        d_84 = t;
        q_83 :
        if(!(match_string(d_84, "-i")))
          {
            if(!(match_string(d_84, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        ATerm g_84 = NULL;
        ATerm o_32;
        o_32 = t;
        {
          ATerm e_84 = NULL;
          ATerm f_84 = NULL;
          f_84 = t;
          if(((e_84 != NULL) && (e_84 != f_84)))
            _fail(f_84);
          else
            e_84 = f_84;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_p_32, not_null(e_84));
            t = set_config_0(t);
          }
        }
        t = o_32;
        {
          ATerm h_84 = NULL;
          h_84 = t;
          if(((g_84 != NULL) && (g_84 != h_84)))
            _fail(h_84);
          else
            g_84 = h_84;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_84));
        }
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_q_32;
        return(t);
      }
      t = ArgOption_3(t, x_3, y_3, z_3);
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              ATerm i_84 = NULL;
              i_84 = t;
              t_83 :
              if(!(match_string(i_84, "-o")))
                {
                  if(!(match_string(i_84, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm n_84 = NULL;
              ATerm t_32;
              t_32 = t;
              {
                ATerm l_84 = NULL;
                ATerm m_84 = NULL;
                m_84 = t;
                if(((l_84 != NULL) && (l_84 != m_84)))
                  _fail(m_84);
                else
                  l_84 = m_84;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_32, not_null(l_84));
                  t = set_config_0(t);
                }
              }
              t = t_32;
              {
                ATerm o_84 = NULL;
                o_84 = t;
                if(((n_84 != NULL) && (n_84 != o_84)))
                  _fail(o_84);
                else
                  n_84 = o_84;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_84));
              }
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_v_32;
              return(t);
            }
            t = ArgOption_3(t, a_4, b_4, c_4);
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            {
              ATerm w_32 = t;
              int x_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_4 (ATerm t)
                  {
                    ATerm p_84 = NULL;
                    p_84 = t;
                    w_83 :
                    if(!(match_string(p_84, "-S")))
                      {
                        if(!(match_string(p_84, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm h_4 (ATerm t)
                  {
                    t = term_y_32;
                    t = set_config_0(t);
                    t = term_z_32;
                    return(t);
                  }
                  ATerm i_4 (ATerm t)
                  {
                    t = term_c_33;
                    return(t);
                  }
                  t = Option_3(t, g_4, h_4, i_4);
                  LocalPopChoice(x_32);
                }
              else
                {
                  t = w_32;
                  {
                    ATerm d_33 = t;
                    int e_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_4 (ATerm t)
                        {
                          ATerm q_84 = NULL;
                          q_84 = t;
                          x_83 :
                          if(!(match_string(q_84, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm k_4 (ATerm t)
                        {
                          ATerm t_84 = NULL;
                          ATerm f_33;
                          f_33 = t;
                          {
                            ATerm r_84 = NULL;
                            ATerm s_84 = NULL;
                            t = string_to_int_0(t);
                            {
                              s_84 = t;
                              if(((r_84 != NULL) && (r_84 != s_84)))
                                _fail(s_84);
                              else
                                r_84 = s_84;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_30, not_null(r_84));
                              t = set_config_0(t);
                            }
                          }
                          t = f_33;
                          {
                            ATerm u_84 = NULL;
                            u_84 = t;
                            if(((t_84 != NULL) && (t_84 != u_84)))
                              _fail(u_84);
                            else
                              t_84 = u_84;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_84));
                          }
                          return(t);
                        }
                        ATerm l_4 (ATerm t)
                        {
                          t = term_g_33;
                          return(t);
                        }
                        t = ArgOption_3(t, j_4, k_4, l_4);
                        LocalPopChoice(e_33);
                      }
                    else
                      {
                        t = d_33;
                        {
                          ATerm h_33 = t;
                          int i_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_4 (ATerm t)
                              {
                                ATerm v_84 = NULL;
                                v_84 = t;
                                a_84 :
                                if(!(match_string(v_84, "-v")))
                                  {
                                    if(!(match_string(v_84, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm n_4 (ATerm t)
                              {
                                t = term_k_33;
                                t = set_config_0(t);
                                t = term_l_33;
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                t = term_m_33;
                                return(t);
                              }
                              t = Option_3(t, m_4, n_4, o_4);
                              LocalPopChoice(i_33);
                            }
                          else
                            {
                              t = h_33;
                              {
                                ATerm n_33 = t;
                                int o_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm w_84 = NULL;
                                      w_84 = t;
                                      b_84 :
                                      if(!(match_string(w_84, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm q_4 (ATerm t)
                                    {
                                      t = term_q_33;
                                      t = set_config_0(t);
                                      t = term_r_33;
                                      return(t);
                                    }
                                    ATerm r_4 (ATerm t)
                                    {
                                      t = term_s_33;
                                      return(t);
                                    }
                                    t = Option_3(t, p_4, q_4, r_4);
                                    LocalPopChoice(o_33);
                                  }
                                else
                                  {
                                    t = n_33;
                                    {
                                      ATerm s_4 (ATerm t)
                                      {
                                        ATerm x_84 = NULL;
                                        x_84 = t;
                                        c_84 :
                                        if(!(match_string(x_84, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm u_4 (ATerm t)
                                      {
                                        t = term_u_33;
                                        t = set_config_0(t);
                                        t = term_v_33;
                                        return(t);
                                      }
                                      ATerm v_4 (ATerm t)
                                      {
                                        t = term_w_33;
                                        return(t);
                                      }
                                      t = Option_3(t, s_4, u_4, v_4);
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
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_85 = NULL;
  f_85 = t;
  t = SSL_table_destroy(not_null(f_85));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_85 = NULL;
  ATerm u_85 (ATerm t)
  {
    t = SSL_exit(not_null(n_85));
    return(t);
  }
  ATerm v_85 (ATerm t)
  {
    ATerm q_85 = NULL,s_85 = NULL;
    ATerm x_33;
    x_33 = t;
    {
      ATerm r_85 = NULL;
      t = SSLgetAnnotations(not_null(n_85));
      {
        r_85 = t;
        if(((q_85 != NULL) && (q_85 != r_85)))
          _fail(r_85);
        else
          q_85 = r_85;
      }
    }
    t = x_33;
    {
      ATerm t_85 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_exit_0), not_null(q_85));
      {
        t_85 = t;
        if(((s_85 != NULL) && (s_85 != t_85)))
          _fail(t_85);
        else
          s_85 = t_85;
      }
      t = not_null(s_85);
    }
    return(t);
  }
  n_85 = t;
  m_85 :
  if(match_cons(n_85, sym_exit_0))
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_85(t);
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          t = v_85(t);
        }
    }
  else
    {
      t = u_85(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm z_85 = NULL;
  z_85 = t;
  t = SSL_implode_string(not_null(z_85));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_104 (ATerm))
{
  ATerm c_86 (ATerm t)
  {
    ATerm a_34 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_86);
        LocalPopChoice(q_36);
      }
    else
      {
        t = a_34;
        {
          t = Nil_0(t);
          t = n_104(t);
        }
      }
    return(t);
  }
  t = c_86(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      {
        ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
        f_86 = t;
        e_86 :
        if(((ATgetType(f_86) == AT_LIST) && ((ATermList) f_86 != ATempty)))
          {
            g_86 = ATgetFirst((ATermList) f_86);
            h_86 = (ATerm) ATgetNext((ATermList) f_86);
            {
              t = not_null(g_86);
              {
                ATerm w_4 (ATerm t)
                {
                  t = not_null(h_86);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_4);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm n_86 = NULL;
  n_86 = t;
  t = SSL_explode_string(not_null(n_86));
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
ATerm long_description_1 (ATerm t, ATerm w_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_103 (ATerm))
{
  ATerm s_86 (ATerm t)
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_36);
      }
    else
      {
        t = u_36;
        t = Cons_2(t, z_103, s_86);
      }
    return(t);
  }
  t = s_86(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
  b_87 = t;
  y_86 :
  if(((ATgetType(b_87) == AT_LIST) && ((ATermList) b_87 != ATempty)))
    {
      z_86 = ATgetFirst((ATermList) b_87);
      a_87 = (ATerm) ATgetNext((ATermList) b_87);
      {
        ATerm e_87 = NULL;
        t = not_null(a_87);
        {
          ATerm w_36;
          w_36 = t;
          {
            ATerm f_87 = NULL,h_87 = NULL,j_87 = NULL;
            ATerm x_36;
            x_36 = t;
            {
              ATerm g_87 = NULL;
              t = p_0(t);
              {
                g_87 = t;
                if(((f_87 != NULL) && (f_87 != g_87)))
                  _fail(g_87);
                else
                  f_87 = g_87;
              }
            }
            t = x_36;
            {
              ATerm i_87 = NULL;
              t = not_null(z_86);
              {
                t = o_0(t);
                {
                  i_87 = t;
                  if(((h_87 != NULL) && (h_87 != i_87)))
                    _fail(i_87);
                  else
                    h_87 = i_87;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_87)), not_null(h_87));
                {
                  j_87 = t;
                  if(((e_87 != NULL) && (e_87 != j_87)))
                    _fail(j_87);
                  else
                    e_87 = j_87;
                }
              }
            }
          }
          t = w_36;
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(e_87);
              return(t);
            }
            t = reverse_acc_2(t, o_0, x_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) b_87 == ATempty))
        {
          {
            t = term_t_24;
            t = p_0(t);
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
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm z_87 = NULL,b_88 = NULL;
  z_87 = t;
  t_87 :
  if(match_cons(z_87, sym_Program_1))
    {
      b_88 = ATgetArgument(z_87, 0);
      {
        ATerm e_88 = NULL,g_88 = NULL;
        ATerm f_88 = NULL;
        t = SSLgetAnnotations(not_null(z_87));
        {
          f_88 = t;
          if(((e_88 != NULL) && (e_88 != f_88)))
            _fail(f_88);
          else
            e_88 = f_88;
        }
        {
          t = not_null(b_88);
          {
            ATerm i_88 = NULL;
            t = k_80(t);
            {
              g_88 = t;
              {
                ATerm j_88 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_88)), not_null(e_88));
                {
                  j_88 = t;
                  if(((i_88 != NULL) && (i_88 != j_88)))
                    _fail(j_88);
                  else
                    i_88 = j_88;
                }
                t = not_null(i_88);
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
  ATerm s_88 = NULL;
  ATerm z_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm t_88 = NULL;
      t_88 = t;
      if(((s_88 != NULL) && (s_88 != t_88)))
        _fail(t_88);
      else
        s_88 = t_88;
      return(t);
    }
    t = Program_1(t, a_5);
    return(t);
  }
  t = option_defined_1(t, z_4);
  {
    ATerm b_5 (ATerm t)
    {
      ATerm u_88 = NULL;
      ATerm v_88 = NULL;
      t = term_t_24;
      {
        ATerm c_5 (ATerm t)
        {
          t = not_null(s_88);
          return(t);
        }
        t = short_description_1(t, c_5);
        {
          t = concat_strings_0(t);
          {
            v_88 = t;
            if(((u_88 != NULL) && (u_88 != v_88)))
              _fail(v_88);
            else
              u_88 = v_88;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATempty, not_null(u_88)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATempty, term_y_36));
      {
        t = printnl_0(t);
        {
          t = term_c_37;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm w_88 = NULL;
                  w_88 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_88)), term_d_37));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_5);
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm y_88 = NULL;
                    ATerm z_88 = NULL;
                    t = term_t_24;
                    {
                      ATerm f_5 (ATerm t)
                      {
                        t = not_null(s_88);
                        return(t);
                      }
                      t = long_description_1(t, f_5);
                      {
                        t = concat_strings_0(t);
                        {
                          z_88 = t;
                          if(((y_88 != NULL) && (y_88 != z_88)))
                            _fail(z_88);
                          else
                            y_88 = z_88;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_88)), term_e_37));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_5);
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm j_89 = NULL,k_89 = NULL;
  j_89 = t;
  i_89 :
  if(match_cons(j_89, sym_Undefined_1))
    {
      k_89 = ATgetArgument(j_89, 0);
      {
        ATerm n_89 = NULL,p_89 = NULL;
        ATerm o_89 = NULL;
        t = SSLgetAnnotations(not_null(j_89));
        {
          o_89 = t;
          if(((n_89 != NULL) && (n_89 != o_89)))
            _fail(o_89);
          else
            n_89 = o_89;
        }
        {
          t = not_null(k_89);
          {
            ATerm r_89 = NULL;
            t = l_80(t);
            {
              p_89 = t;
              {
                ATerm s_89 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_89)), not_null(n_89));
                {
                  s_89 = t;
                  if(((r_89 != NULL) && (r_89 != s_89)))
                    _fail(s_89);
                  else
                    r_89 = s_89;
                }
                t = not_null(r_89);
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
ATerm fetch_1 (ATerm t, ATerm h_104 (ATerm))
{
  ATerm x_89 (ATerm t)
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_104, _id);
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        t = Cons_2(t, _id, x_89);
      }
    return(t);
  }
  t = x_89(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_92 (ATerm))
{
  t = fetch_1(t, u_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_90 = NULL;
  c_90 = t;
  b_90 :
  if(match_cons(c_90, sym_Help_0))
    {
      ATerm e_90 = NULL,g_90 = NULL;
      ATerm h_37;
      h_37 = t;
      {
        ATerm f_90 = NULL;
        t = SSLgetAnnotations(not_null(c_90));
        {
          f_90 = t;
          if(((e_90 != NULL) && (e_90 != f_90)))
            _fail(f_90);
          else
            e_90 = f_90;
        }
      }
      t = h_37;
      {
        ATerm h_90 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_90));
        {
          h_90 = t;
          if(((g_90 != NULL) && (g_90 != h_90)))
            _fail(h_90);
          else
            g_90 = h_90;
        }
        t = not_null(g_90);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_112 (ATerm))
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_112(t);
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
  n_90 = t;
  m_90 :
  if(match_cons(n_90, sym__2))
    {
      o_90 = ATgetArgument(n_90, 0);
      p_90 = ATgetArgument(n_90, 1);
      t = SSL_table_get(not_null(o_90), not_null(p_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL;
  w_90 = t;
  v_90 :
  if(match_cons(w_90, sym__3))
    {
      x_90 = ATgetArgument(w_90, 0);
      y_90 = ATgetArgument(w_90, 1);
      z_90 = ATgetArgument(w_90, 2);
      {
        ATerm k_37;
        k_37 = t;
        {
          ATerm d_91 = NULL;
          ATerm e_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_90), not_null(y_90));
          {
            ATerm l_37 = t;
            int m_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_37);
              }
            else
              {
                t = l_37;
                t = (ATerm) ATempty;
              }
            {
              e_91 = t;
              if(((d_91 != NULL) && (d_91 != e_91)))
                _fail(e_91);
              else
                d_91 = e_91;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_90), not_null(y_90), (ATerm) ATinsert(CheckATermList(not_null(d_91)), not_null(z_90)));
            t = table_put_0(t);
          }
        }
        t = k_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_92 (ATerm))
{
  ATerm i_91 = NULL;
  ATerm j_91 = NULL;
  t = term_t_24;
  {
    t = a_92(t);
    {
      j_91 = t;
      if(((i_91 != NULL) && (i_91 != j_91)))
        _fail(j_91);
      else
        i_91 = j_91;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_37, term_b_37, not_null(i_91));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL;
  p_91 = t;
  o_91 :
  if(match_string(p_91, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(p_91) == AT_LIST) && ((ATermList) p_91 != ATempty)))
        {
          q_91 = ATgetFirst((ATermList) p_91);
          r_91 = (ATerm) ATgetNext((ATermList) p_91);
          {
            ATerm u_91 = NULL;
            ATerm n_37;
            n_37 = t;
            {
              t = not_null(q_91);
              t = c_0(t);
            }
            t = n_37;
            {
              ATerm b_92 = NULL;
              t = term_t_24;
              {
                t = d_0(t);
                {
                  b_92 = t;
                  if(((u_91 != NULL) && (u_91 != b_92)))
                    _fail(b_92);
                  else
                    u_91 = b_92;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_91)), not_null(u_91));
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
  ATerm j_5 (ATerm t)
  {
    ATerm i_92 = NULL;
    i_92 = t;
    h_92 :
    if(!(match_string(i_92, "--help")))
      {
        if(!(match_string(i_92, "-h")))
          {
            if(!(match_string(i_92, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_o_37;
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_p_37;
    return(t);
  }
  t = Option_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
  l_92 = t;
  k_92 :
  if(((ATgetType(l_92) == AT_LIST) && ((ATermList) l_92 != ATempty)))
    {
      m_92 = ATgetFirst((ATermList) l_92);
      n_92 = (ATerm) ATgetNext((ATermList) l_92);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_92)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_92)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL;
  a_93 = t;
  z_92 :
  if(((ATgetType(a_93) == AT_LIST) && ((ATermList) a_93 != ATempty)))
    {
      b_93 = ATgetFirst((ATermList) a_93);
      c_93 = (ATerm) ATgetNext((ATermList) a_93);
      {
        ATerm g_93 = NULL,i_93 = NULL;
        ATerm h_93 = NULL;
        t = SSLgetAnnotations(not_null(a_93));
        {
          h_93 = t;
          if(((g_93 != NULL) && (g_93 != h_93)))
            _fail(h_93);
          else
            g_93 = h_93;
        }
        {
          t = not_null(b_93);
          {
            ATerm k_93 = NULL;
            t = p_86(t);
            {
              i_93 = t;
              {
                t = not_null(c_93);
                {
                  ATerm m_93 = NULL;
                  t = q_86(t);
                  {
                    k_93 = t;
                    {
                      ATerm s_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_93)), not_null(i_93)), not_null(g_93));
                      {
                        s_93 = t;
                        if(((m_93 != NULL) && (m_93 != s_93)))
                          _fail(s_93);
                        else
                          m_93 = s_93;
                      }
                      t = not_null(m_93);
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
ATerm Nil_0 (ATerm t)
{
  ATerm g_94 = NULL;
  g_94 = t;
  f_94 :
  if(((ATermList) g_94 == ATempty))
    {
      {
        ATerm k_94 = NULL,m_94 = NULL;
        ATerm q_37;
        q_37 = t;
        {
          ATerm l_94 = NULL;
          t = SSLgetAnnotations(not_null(g_94));
          {
            l_94 = t;
            if(((k_94 != NULL) && (k_94 != l_94)))
              _fail(l_94);
            else
              k_94 = l_94;
          }
        }
        t = q_37;
        {
          ATerm n_94 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_94));
          {
            n_94 = t;
            if(((m_94 != NULL) && (m_94 != n_94)))
              _fail(n_94);
            else
              m_94 = n_94;
          }
          t = not_null(m_94);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  s_94 :
  if(match_cons(t_94, sym__2))
    {
      u_94 = ATgetArgument(t_94, 0);
      v_94 = ATgetArgument(t_94, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_6, not_null(u_94), not_null(v_94));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_91 (ATerm))
{
  ATerm r_37;
  r_37 = t;
  {
    ATerm n_5 (ATerm t)
    {
      t = term_s_37;
      t = y_91(t);
      return(t);
    }
    t = try_1(t, n_5);
  }
  t = r_37;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm e_95 = NULL;
      ATerm t_37;
      t_37 = t;
      {
        ATerm c_95 = NULL;
        ATerm d_95 = NULL;
        d_95 = t;
        if(((c_95 != NULL) && (c_95 != d_95)))
          _fail(d_95);
        else
          c_95 = d_95;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_31, not_null(c_95));
          t = set_config_0(t);
        }
      }
      t = t_37;
      {
        ATerm f_95 = NULL;
        f_95 = t;
        if(((e_95 != NULL) && (e_95 != f_95)))
          _fail(f_95);
        else
          e_95 = f_95;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_95));
      }
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm u_37 = t;
      int v_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_37 = t;
          int x_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_37);
            }
          else
            {
              t = w_37;
              {
                t = y_91(t);
                t = Cons_2(t, _id, p_5);
              }
            }
          LocalPopChoice(v_37);
        }
      else
        {
          t = u_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_5, p_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL;
  ATerm e_38;
  e_38 = t;
  {
    ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL;
    o_95 = t;
    k_95 :
    if(match_cons(o_95, sym__3))
      {
        p_95 = ATgetArgument(o_95, 0);
        q_95 = ATgetArgument(o_95, 1);
        r_95 = ATgetArgument(o_95, 2);
        {
          if(((l_95 != NULL) && (l_95 != p_95)))
            _fail(p_95);
          else
            l_95 = p_95;
          {
            if(((m_95 != NULL) && (m_95 != q_95)))
              _fail(q_95);
            else
              m_95 = q_95;
            {
              if(((n_95 != NULL) && (n_95 != r_95)))
                _fail(r_95);
              else
                n_95 = r_95;
              t = SSL_table_put(not_null(l_95), not_null(m_95), not_null(n_95));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_38;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_91 (ATerm))
{
  ATerm u_95 = NULL;
  ATerm f_38;
  f_38 = t;
  {
    t = term_h_38;
    t = table_put_0(t);
  }
  t = f_38;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm s_38 = t;
      int t_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_91(t);
          LocalPopChoice(t_38);
        }
      else
        {
          t = s_38;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm u_5 (ATerm t)
      {
        ATerm u_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_x_16;
                t = exit_0(t);
              }
            }
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            {
              ATerm v_5 (ATerm t)
              {
                ATerm z_5 (ATerm t)
                {
                  ATerm v_95 = NULL;
                  v_95 = t;
                  if(((u_95 != NULL) && (u_95 != v_95)))
                    _fail(v_95);
                  else
                    u_95 = v_95;
                  return(t);
                }
                t = Undefined_1(t, z_5);
                return(t);
              }
              t = option_defined_1(t, v_5);
              {
                ATerm w_38;
                w_38 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_95)), term_x_38));
                  t = printnl_0(t);
                }
                t = w_38;
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_16;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, u_5);
      {
        ATerm a_39;
        a_39 = t;
        {
          t = term_a_37;
          t = table_destroy_0(t);
        }
        t = a_39;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_93(t);
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_6);
  {
    t = store_options_0(t);
    {
      t = y_93(t);
      {
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_93);
            LocalPopChoice(e_39);
          }
        else
          {
            t = d_39;
            {
              ATerm f_39 = t;
              int i_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, v_93);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(i_39);
                }
              else
                {
                  t = f_39;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm))
{
  ATerm g_6 (ATerm t)
  {
    ATerm h_6 (ATerm t)
    {
      ATerm j_39;
      j_39 = t;
      {
        ATerm y_95 = NULL;
        ATerm c_96 = NULL;
        t = term_g_31;
        {
          t = get_config_0(t);
          {
            c_96 = t;
            if(((y_95 != NULL) && (y_95 != c_96)))
              _fail(c_96);
            else
              y_95 = c_96;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_30, (ATerm) ATinsert(ATempty, not_null(y_95)));
          t = printnl_0(t);
        }
      }
      t = j_39;
      return(t);
    }
    t = if_verbose2_1(t, h_6);
    return(t);
  }
  t = iowrap_4(t, p_93, q_93, r_93, g_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_93 (ATerm), ATerm o_93 (ATerm))
{
  t = iowrap_3(t, n_93, o_93, default_usage_0);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  t = iowrap_2(t, compile_0, s2c_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = s2c_0(t);
  return(t);
}
