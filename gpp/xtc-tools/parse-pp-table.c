#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_q_38;
ATerm term_p_38;
ATerm term_i_38;
ATerm term_z_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_x_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_m_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_r_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_f_27;
ATerm term_w_26;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_x_23;
ATerm term_p_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_q_21;
ATerm term_z_20;
ATerm term_g_20;
ATerm term_r_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_w_18;
ATerm term_n_18;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_s_14;
ATerm term_n_8;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_q_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_z_4;
void init_constant_terms (void)
{
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym__2, term_i_5, term_p_5);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym__2, term_i_5, term_n_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_c_5, term_w_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_r_19, term_g_20);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_e_5, term_d_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_23, term_t_5, term_x_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_24, term_k_24, term_l_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_24, term_q_24, term_r_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_24, term_y_24, term_d_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_25, term_o_25, term_w_26);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_27, term_u_27, term_v_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_28, term_c_28, term_d_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_28, term_s_28, term_t_28);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_28, term_s_5, term_z_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_29, term_c_29, term_d_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_29, term_g_29, term_h_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_29, term_k_29, term_l_29);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_29, term_o_29, term_p_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_29, term_s_29, term_t_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_29, term_w_29, term_x_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_29, term_a_30, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_30, term_e_30, term_f_30);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_30, term_i_30, term_j_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_30, term_m_30, term_n_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_30, term_q_30, term_r_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_30, term_u_30, term_v_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_30, term_g_5, term_y_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_31, term_b_31, term_c_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_31, term_f_31, term_g_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_31, term_j_31, term_k_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_z_31);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_z_4, term_z_33);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_33);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_u_32, term_i_32);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_o_34, term_i_32);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym__2, term_a_36, term_b_36);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__2, term_f_37, term_i_32);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_f_5, term_i_32);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_i_32);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__3, term_a_36, term_b_36, (ATerm) ATempty);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
}
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm xtc_implode_asfix_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm n_0 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm n_85 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm s_71 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm);
ATerm union_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm r_11 (ATerm i_11, ATerm j_11, ATerm);
ATerm s_11 (ATerm m_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm v_70 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm g_90 (ATerm), ATerm);
ATerm assert_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm obsolete_1_0 (ATerm v_71 (ATerm), ATerm);
ATerm d_15 (ATerm t_14, ATerm);
ATerm e_15 (ATerm v_14, ATerm w_14, ATerm x_14, ATerm);
ATerm d_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm q_68 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm xtc_sglr_2_0 (ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm o_86 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm xtc_io_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm);
ATerm crush_2_0 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm need_help_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm q_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm e_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_75 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm g_26 (ATerm p_25, ATerm q_25, ATerm);
ATerm a_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_93 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm w_28 (ATerm p_28, ATerm);
ATerm parse_options_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm);
ATerm xtc_io_wrap_1_0 (ATerm w_89 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm io_parse_pp_table_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_7 != NULL) && (l_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_7 = ATgetArgument(t, 0);
      if(((m_7 != NULL) && (m_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_4 = t;
    int y_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(l_7), not_null(m_7));
        ;
        LocalPopChoice(y_4);
      }
    else
      {
        t = x_4;
        t = SSL_subtr(not_null(l_7), not_null(m_7));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  if(((n_7 != NULL) && (n_7 != t)))
    _fail(t);
  else
    n_7 = t;
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  t = term_z_4;
  {
    ATerm a_5 = t;
    int b_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_5);
      }
    else
      {
        t = a_5;
        t = term_c_5;
      }
    if(((p_7 != NULL) && (p_7 != t)))
      _fail(t);
    else
      p_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_7), term_c_5);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((q_7 != NULL) && (q_7 != t)))
      _fail(t);
    else
      q_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_7)), term_z_4);
  }
  return(t);
}
ATerm c_0 (ATerm t)
{
  t = term_d_5;
  return(t);
}
ATerm xtc_implode_asfix_0_0 (ATerm t)
{
  t = xtc_transform_2_0(c_0, pass_verbose_0_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
    if(((r_7 != NULL) && (r_7 != t)))
      _fail(t);
    else
      r_7 = t;
    if(((s_7 != NULL) && (s_7 != t)))
      _fail(t);
    else
      s_7 = t;
    t = term_z_4;
    t = get_config_0_0(t);
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_7), term_e_5);
    t = geq_0_0(t);
    t = not_null(r_7);
    t = x_87(t);
    return(t);
  }
  t = try_1_0(e_0, t);
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_5);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(n_0, t);
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  if(((u_7 != NULL) && (u_7 != t)))
    _fail(t);
  else
    u_7 = t;
  t = SSL_table_keys(not_null(u_7));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_7 = NULL;
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  t = table_keys_0_0(t);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
      if(((w_7 != NULL) && (w_7 != t)))
        _fail(t);
      else
        w_7 = t;
      if(((x_7 != NULL) && (x_7 != t)))
        _fail(t);
      else
        x_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_7), not_null(w_7));
      t = table_get_0_0(t);
      if(((y_7 != NULL) && (y_7 != t)))
        _fail(t);
      else
        y_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), not_null(y_7));
      return(t);
    }
    t = map_1_0(o_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
    if(((z_7 != NULL) && (z_7 != t)))
      _fail(t);
    else
      z_7 = t;
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = term_z_4;
    t = get_config_0_0(t);
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_8), term_g_5);
    t = geq_0_0(t);
    t = not_null(z_7);
    t = z_87(t);
    return(t);
  }
  t = try_1_0(p_0, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  if(((e_8 != NULL) && (e_8 != t)))
    _fail(t);
  else
    e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_5, not_null(e_8));
  t = printnl_0_0(t);
  t = not_null(c_8);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
  if(((f_8 != NULL) && (f_8 != t)))
    _fail(t);
  else
    f_8 = t;
  if(((g_8 != NULL) && (g_8 != t)))
    _fail(t);
  else
    g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_8)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_5 = ATgetFirst((ATermList) t);
      if(match_cons(j_5, sym__2))
        {
          if(((h_8 != NULL) && (h_8 != ATgetArgument(j_5, 0))))
            _fail(ATgetArgument(j_5, 0));
          else
            h_8 = ATgetArgument(j_5, 0);
          if(((i_8 != NULL) && (i_8 != ATgetArgument(j_5, 1))))
            _fail(ATgetArgument(j_5, 1));
          else
            i_8 = ATgetArgument(j_5, 1);
        }
      else
        _fail(t);
      {
        ATerm k_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(i_8);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_8 != NULL) && (j_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_8 = ATgetArgument(t, 0);
      if(((k_8 != NULL) && (k_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_8)));
  t = table_get_0_0(t);
  {
    ATerm q_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((k_8 != NULL) && (k_8 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_8 = ATgetArgument(t, 0);
          if(((m_8 != NULL) && (m_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
    t = not_null(m_8);
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm l_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(m_5);
    }
  else
    {
      t = l_5;
      {
        ATerm n_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = filter_1_0(t_83, t);
              return(t);
            }
            t = Cons_2_0(t_83, r_0, t);
            ;
            LocalPopChoice(o_5);
          }
        else
          {
            t = n_5;
            {
              ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
              if(((o_8 != NULL) && (o_8 != t)))
                _fail(t);
              else
                o_8 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((p_8 != NULL) && (p_8 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    p_8 = ATgetFirst((ATermList) t);
                  if(((q_8 != NULL) && (q_8 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    q_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(q_8);
              if(((r_8 != NULL) && (r_8 != t)))
                _fail(t);
              else
                r_8 = t;
              t = filter_1_0(t_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = n_85(t);
      t = s_8(t);
      return(t);
    }
    t = try_1_0(s_0, t);
    return(t);
  }
  t = s_8(t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_q_5;
  t = table_get_0_0(t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_5 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_5;
      }
  }
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm t_8 = NULL;
  if(((t_8 != NULL) && (t_8 != t)))
    _fail(t);
  else
    t_8 = t;
  t = repeat_1_0(t_0, t);
  t = not_null(t_8);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  if(((u_8 != NULL) && (u_8 != t)))
    _fail(t);
  else
    u_8 = t;
  if(((v_8 != NULL) && (v_8 != t)))
    _fail(t);
  else
    v_8 = t;
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATinsert(ATempty, not_null(w_8)));
  t = printnl_0_0(t);
  t = not_null(u_8);
  return(t);
}
ATerm say_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm x_8 = NULL;
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  t = s_71(t);
  t = debug_0_0(t);
  t = not_null(x_8);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
    if(((y_8 != NULL) && (y_8 != t)))
      _fail(t);
    else
      y_8 = t;
    if(((z_8 != NULL) && (z_8 != t)))
      _fail(t);
    else
      z_8 = t;
    t = term_z_4;
    t = get_config_0_0(t);
    if(((a_9 != NULL) && (a_9 != t)))
      _fail(t);
    else
      a_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_9), term_s_5);
    t = geq_0_0(t);
    t = not_null(y_8);
    t = y_87(t);
    return(t);
  }
  t = try_1_0(u_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
    if(((b_9 != NULL) && (b_9 != t)))
      _fail(t);
    else
      b_9 = t;
    if(((c_9 != NULL) && (c_9 != t)))
      _fail(t);
    else
      c_9 = t;
    t = term_z_4;
    t = get_config_0_0(t);
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), term_t_5);
    t = geq_0_0(t);
    t = not_null(b_9);
    t = a_88(t);
    return(t);
  }
  t = try_1_0(v_0, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_9 = ATgetArgument(t, 0);
      if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((f_9 != NULL) && (f_9 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        f_9 = ATgetFirst((ATermList) t);
      if(((g_9 != NULL) && (g_9 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        g_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  t = i_80(t);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
      if(((i_9 != NULL) && (i_9 != t)))
        _fail(t);
      else
        i_9 = t;
      if(((j_9 != NULL) && (j_9 != t)))
        _fail(t);
      else
        j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), not_null(i_9));
      t = h_80(t);
      if(((k_9 != NULL) && (k_9 != t)))
        _fail(t);
      else
        k_9 = t;
      return(t);
    }
    t = fetch_1_0(w_0, t);
    t = not_null(g_9);
  }
  return(t);
}
ATerm union_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_9 != NULL) && (l_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_9 = ATgetArgument(t, 0);
      if(((m_9 != NULL) && (m_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((n_9 != NULL) && (n_9 != t)))
    _fail(t);
  else
    n_9 = t;
  t = not_null(l_9);
  {
    ATerm p_9 (ATerm t)
    {
      ATerm u_5 = t;
      int v_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(m_9);
          ;
          LocalPopChoice(v_5);
        }
      else
        {
          t = u_5;
          {
            ATerm w_5 = t;
            int x_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(m_9);
                  return(t);
                }
                t = HdMember_p__2_0(e_80, x_0, t);
                t = p_9(t);
                ;
                LocalPopChoice(x_5);
              }
            else
              {
                t = w_5;
                t = Cons_2_0(_id, p_9, t);
              }
          }
        }
      return(t);
    }
    t = p_9(t);
    if(((o_9 != NULL) && (o_9 != t)))
      _fail(t);
    else
      o_9 = t;
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((q_9 != NULL) && (q_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_9 = ATgetArgument(t, 0);
      if(((r_9 != NULL) && (r_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_9 = ATgetArgument(t, 1);
      if(((s_9 != NULL) && (s_9 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        s_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((t_9 != NULL) && (t_9 != t)))
    _fail(t);
  else
    t_9 = t;
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), not_null(r_9));
  {
    ATerm y_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(z_5);
      }
    else
      {
        t = y_5;
        t = (ATerm) ATempty;
      }
    if(((w_9 != NULL) && (w_9 != t)))
      _fail(t);
    else
      w_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(s_9));
    t = union_0_0(t);
    if(((x_9 != NULL) && (x_9 != t)))
      _fail(t);
    else
      x_9 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(q_9), not_null(r_9), not_null(x_9));
    t = set_0_0(t);
    t = not_null(t_9);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_9 != NULL) && (z_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_9 = ATgetArgument(t, 0);
      if(((y_9 != NULL) && (y_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_9);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm a_10 = NULL,b_10 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((a_10 != NULL) && (a_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_10 = ATgetArgument(t, 0);
          if(((b_10 != NULL) && (b_10 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(z_9), not_null(a_10), not_null(b_10));
      t = c_88(t);
      return(t);
    }
    t = map_1_0(y_0, t);
  }
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL;
  if(((c_10 != NULL) && (c_10 != t)))
    _fail(t);
  else
    c_10 = t;
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), (ATerm) ATinsert(ATempty, term_a_6));
  t = access_0_0(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_b_6;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_c_6;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(e_6);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_6;
      {
        ATerm f_6 = t;
        int g_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_6;
              }
            t = debug_1_0(z_0, t);
            ;
            LocalPopChoice(g_6);
          }
        else
          {
            t = f_6;
            t = debug_1_0(a_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = debug_1_0(c_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = debug_1_0(e_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = say_1_0(g_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = say_1_0(i_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_l_6;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = say_1_0(k_1, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  t = if_verbose5_1_0(b_1, t);
  {
    ATerm m_6 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_10)));
        t = table_get_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_6;
      }
    if(((f_10 != NULL) && (f_10 != t)))
      _fail(t);
    else
      f_10 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_i_5, term_n_6, (ATerm) ATinsert(ATempty, not_null(e_10)));
    t = table_put_0_0(t);
    t = not_null(f_10);
    t = if_verbose4_1_0(d_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(f_1, t);
    if(((g_10 != NULL) && (g_10 != t)))
      _fail(t);
    else
      g_10 = t;
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_5, not_null(h_10));
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(h_1, t);
    t = (ATerm) ATmakeAppl(sym__3, term_i_5, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_10)), (ATerm) ATempty);
    t = table_put_0_0(t);
    t = if_verbose4_1_0(j_1, t);
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  t = SSL_getenv(not_null(i_10));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_6;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
        ATerm r_6 = t;
        int s_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_6;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(s_6);
          }
        else
          {
            t = r_6;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_u_6;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  t = if_verbose5_1_0(l_1, t);
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_6;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(j_10);
    t = if_verbose5_1_0(n_1, t);
  }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_i_5;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(p_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm d_7 = t;
        int e_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(e_7);
          }
        else
          {
            t = d_7;
            t = xtc_find_loc_0_0(t);
          }
        t = if_verbose5_1_0(r_1, t);
      }
      ;
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
        if(((k_10 != NULL) && (k_10 != t)))
          _fail(t);
        else
          k_10 = t;
        if(((l_10 != NULL) && (l_10 != t)))
          _fail(t);
        else
          l_10 = t;
        t = not_null(k_10);
        if(((m_10 != NULL) && (m_10 != t)))
          _fail(t);
        else
          m_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(m_10)), term_f_7);
        t = error_0_0(t);
        t = if_verbose5_1_0(t_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm n_10 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((n_10 != NULL) && (n_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(n_10));
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_h_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
      if(((o_10 != NULL) && (o_10 != t)))
        _fail(t);
      else
        o_10 = t;
      if(((p_10 != NULL) && (p_10 != t)))
        _fail(t);
      else
        p_10 = t;
      t = not_null(o_10);
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), term_k_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      t = debug_1_0(v_1, t);
      _fail(t);
    }
  if(((r_10 != NULL) && (r_10 != t)))
    _fail(t);
  else
    r_10 = t;
  t = read_from_stream_0_0(t);
  if(((s_10 != NULL) && (s_10 != t)))
    _fail(t);
  else
    s_10 = t;
  t = not_null(r_10);
  t = fclose_0_0(t);
  t = not_null(s_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  if(((u_10 != NULL) && (u_10 != t)))
    _fail(t);
  else
    u_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_10 = NULL,x_10 = NULL;
      t = not_null(u_10);
      if(((w_10 != NULL) && (w_10 != t)))
        _fail(t);
      else
        w_10 = t;
      t = term_n_8;
      t = ReadFromFile_0_0(t);
      if(((x_10 != NULL) && (x_10 != t)))
        _fail(t);
      else
        x_10 = t;
    }
  else
    {
      ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((v_10 != NULL) && (v_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(v_10);
      if(((y_10 != NULL) && (y_10 != t)))
        _fail(t);
      else
        y_10 = t;
      t = not_null(u_10);
      if(((z_10 != NULL) && (z_10 != t)))
        _fail(t);
      else
        z_10 = t;
      t = not_null(y_10);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((a_11 != NULL) && (a_11 != t)))
        _fail(t);
      else
        a_11 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if(match_cons(t_10, sym_Stream_1))
        {
          if(((b_11 != NULL) && (b_11 != ATgetArgument(t_10, 0))))
            _fail(ATgetArgument(t_10, 0));
          else
            b_11 = ATgetArgument(t_10, 0);
        }
      else
        _fail(t);
      if(((c_11 != NULL) && (c_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(b_11), not_null(c_11));
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_11));
  return(t);
}
ATerm r_11 (ATerm i_11, ATerm j_11, ATerm t)
{
  ATerm k_11 = NULL;
  t = not_null(i_11);
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  t = SSL_fclose(not_null(k_11));
  return(t);
}
ATerm s_11 (ATerm m_11, ATerm t)
{
  ATerm o_11 = NULL;
  t = not_null(m_11);
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  t = SSL_fclose(not_null(o_11));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_11 = ATgetArgument(t, 0);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_11(not_null(p_11), not_null(q_11), t);
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            t = s_11(not_null(q_11), t);
          }
      }
    }
  else
    {
      t = s_11(not_null(q_11), t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_11 != NULL) && (t_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_11 = ATgetArgument(t, 0);
      if(((u_11 != NULL) && (u_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(t_11), not_null(u_11));
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_11));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  t = SSL_stdin_stream();
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_11));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  t = SSL_stdout_stream();
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_12));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  t = SSL_stderr_stream();
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_12));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(e_12);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(e_12);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(e_12);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = not_null(f_12);
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = SSL_explode_term(not_null(h_12));
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
          {
            if(((j_12 != NULL) && (j_12 != ATgetFirst((ATermList) l_11))))
              _fail(ATgetFirst((ATermList) l_11));
            else
              j_12 = ATgetFirst((ATermList) l_11);
            if(((i_12 != NULL) && (i_12 != (ATerm) ATgetNext((ATermList) l_11))))
              _fail((ATerm) ATgetNext((ATermList) l_11));
            else
              i_12 = (ATerm) ATgetNext((ATermList) l_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(j_12);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm k_12 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((k_12 != NULL) && (k_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(k_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      ATerm d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_12 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = y_12;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(w_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_12 != NULL) && (l_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_12 = ATgetArgument(t, 0);
      if(((m_12 != NULL) && (m_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_12);
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), term_s_14);
  t = open_stream_0_0(t);
  if(((p_12 != NULL) && (p_12 != t)))
    _fail(t);
  else
    p_12 = t;
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), not_null(m_12));
  t = g_72(t);
  t = fclose_0_0(t);
  t = not_null(m_12);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(((r_12 != NULL) && (r_12 != t)))
    _fail(t);
  else
    r_12 = t;
  if(((s_12 != NULL) && (s_12 != t)))
    _fail(t);
  else
    s_12 = t;
  t = xtc_new_file_0_0(t);
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), not_null(r_12));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(t_12);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_12));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(p_90, q_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm u_12 = NULL;
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  t = SSL_close_file(not_null(u_12));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_12 != NULL) && (v_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_12 = ATgetArgument(t, 0);
      if(((w_12 != NULL) && (w_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(v_12), not_null(w_12));
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm x_12 = NULL;
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  t = SSL_int_to_string(not_null(x_12));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  if(((z_12 != NULL) && (z_12 != t)))
    _fail(t);
  else
    z_12 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_13 = ATgetArgument(t, 0);
      {
        ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
        t = not_null(a_13);
        if(((d_13 != NULL) && (d_13 != t)))
          _fail(t);
        else
          d_13 = t;
        t = not_null(z_12);
        if(((e_13 != NULL) && (e_13 != t)))
          _fail(t);
        else
          e_13 = t;
        if(((f_13 != NULL) && (f_13 != t)))
          _fail(t);
        else
          f_13 = t;
        t = not_null(d_13);
        t = int_to_string_0_0(t);
        if(((g_13 != NULL) && (g_13 != t)))
          _fail(t);
        else
          g_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_15), not_null(g_13)), term_l_15);
        t = concat_strings_0_0(t);
        if(((h_13 != NULL) && (h_13 != t)))
          _fail(t);
        else
          h_13 = t;
      }
    }
  else
    {
      ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((a_13 != NULL) && (a_13 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_13 = ATgetArgument(t, 0);
          if(((b_13 != NULL) && (b_13 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_13 = ATgetArgument(t, 1);
          if(((c_13 != NULL) && (c_13 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            c_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(a_13);
      if(((i_13 != NULL) && (i_13 != t)))
        _fail(t);
      else
        i_13 = t;
      t = not_null(b_13);
      if(((j_13 != NULL) && (j_13 != t)))
        _fail(t);
      else
        j_13 = t;
      t = not_null(c_13);
      if(((k_13 != NULL) && (k_13 != t)))
        _fail(t);
      else
        k_13 = t;
      t = not_null(z_12);
      if(((l_13 != NULL) && (l_13 != t)))
        _fail(t);
      else
        l_13 = t;
      if(((m_13 != NULL) && (m_13 != t)))
        _fail(t);
      else
        m_13 = t;
      t = not_null(j_13);
      t = int_to_string_0_0(t);
      if(((n_13 != NULL) && (n_13 != t)))
        _fail(t);
      else
        n_13 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_13)), term_q_16), not_null(n_13)), term_p_16), not_null(i_13));
      t = concat_strings_0_0(t);
      if(((o_13 != NULL) && (o_13 != t)))
        _fail(t);
      else
        o_13 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm p_13 = NULL;
  ATerm x_1 (ATerm t)
  {
    t = m_76(t);
    if(((p_13 != NULL) && (p_13 != t)))
      _fail(t);
    else
      p_13 = t;
    return(t);
  }
  t = fetch_1_0(x_1, t);
  t = not_null(p_13);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm q_13 = NULL;
  if(((q_13 != NULL) && (q_13 != t)))
    _fail(t);
  else
    q_13 = t;
  {
    ATerm r_16 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_31), term_h_31), term_d_31), term_z_30), term_w_30), term_s_30), term_o_30), term_k_30), term_g_30), term_c_30), term_y_29), term_u_29), term_q_29), term_m_29), term_i_29), term_e_29), term_a_29), term_x_28), term_h_28), term_w_27), term_f_27), term_e_25), term_s_24), term_m_24), term_e_24), term_e_23), term_z_20), term_e_19);
        {
          ATerm y_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm m_31 = ATgetArgument(t, 0);
                if(((q_13 != NULL) && (q_13 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_13 = ATgetArgument(t, 1);
                {
                  ATerm n_31 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(y_1, t);
        }
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = r_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(q_13));
      }
  }
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      if(((s_13 != NULL) && (s_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_13 = ATgetArgument(t, 1);
      {
        ATerm p_31 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(s_13);
  {
    ATerm q_31 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_31;
      }
    t = signal_from_number_0_0(t);
    t = signal_to_descr_0_0(t);
    if(((t_13 != NULL) && (t_13 != t)))
      _fail(t);
    else
      t_13 = t;
    if(((u_13 != NULL) && (u_13 != t)))
      _fail(t);
    else
      u_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_13)), term_r_31));
    t = printnl_0_0(t);
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm r_13 = NULL;
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  t = try_1_0(z_1, t);
  t = not_null(r_13);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm v_13 = NULL;
  if(((v_13 != NULL) && (v_13 != t)))
    _fail(t);
  else
    v_13 = t;
  t = SSL_waitpid(not_null(v_13));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL;
  if(((x_13 != NULL) && (x_13 != t)))
    _fail(t);
  else
    x_13 = t;
  t = fork_0_0(t);
  if(((y_13 != NULL) && (y_13 != t)))
    _fail(t);
  else
    y_13 = t;
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL;
        if(((z_13 != NULL) && (z_13 != t)))
          _fail(t);
        else
          z_13 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(x_13);
        t = t_70(t);
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), not_null(x_13));
        t = u_70(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_70 (ATerm), ATerm t)
{
  ATerm a_14 = NULL;
  ATerm a_2 (ATerm t)
  {
    ATerm b_14 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((b_14 != NULL) && (b_14 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          b_14 = ATgetArgument(t, 0);
        if(((a_14 != NULL) && (a_14 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          a_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(b_14);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm u_31 = ATgetArgument(t, 0);
        if(((ATgetType(u_31) != AT_INT) || (ATgetInt((ATermInt) u_31) != 0)))
          _fail(t);
        {
          ATerm v_31 = ATgetArgument(t, 1);
        }
        {
          ATerm w_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(a_14);
    return(t);
  }
  t = fork_2_0(v_70, a_2, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_14 != NULL) && (c_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_14 = ATgetArgument(t, 0);
      if(((d_14 != NULL) && (d_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), not_null(d_14));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(b_2, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  t = g_90(t);
  t = xtc_find_warning_0_0(t);
  if(((f_14 != NULL) && (f_14 != t)))
    _fail(t);
  else
    f_14 = t;
  t = not_null(e_14);
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  if(((h_14 != NULL) && (h_14 != t)))
    _fail(t);
  else
    h_14 = t;
  if(((i_14 != NULL) && (i_14 != t)))
    _fail(t);
  else
    i_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), not_null(i_14));
  t = call_0_0(t);
  t = not_null(g_14);
  return(t);
}
ATerm assert_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_14 != NULL) && (j_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_14 = ATgetArgument(t, 0);
      if(((k_14 != NULL) && (k_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_14 != NULL) && (l_14 != t)))
    _fail(t);
  else
    l_14 = t;
  t = r_86(t);
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(m_14), not_null(j_14), not_null(k_14));
  t = table_push_0_0(t);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), term_z_31);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_14 != NULL) && (n_14 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_14 = ATgetFirst((ATermList) t);
        if(((o_14 != NULL) && (o_14 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          o_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(m_14), term_z_31, (ATerm) ATinsert(CheckATermList(not_null(o_14)), (ATerm) ATinsert(CheckATermList(not_null(n_14)), not_null(j_14))));
    t = table_put_0_0(t);
    t = not_null(l_14);
  }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm obsolete_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  ATerm p_14 = NULL;
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  t = v_71(t);
  t = debug_1_0(c_2, t);
  t = not_null(p_14);
  return(t);
}
ATerm d_15 (ATerm t_14, ATerm t)
{
  ATerm u_14 = NULL;
  t = not_null(t_14);
  if(((u_14 != NULL) && (u_14 != t)))
    _fail(t);
  else
    u_14 = t;
  t = not_null(t_14);
  {
    ATerm b_32 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_32 = ATgetArgument(t, 0);
            ATerm d_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_32;
      }
    t = obsolete_1_0(d_2, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_14), term_s_14);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm e_15 (ATerm v_14, ATerm w_14, ATerm x_14, ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  t = not_null(v_14);
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  t = not_null(w_14);
  if(((z_14 != NULL) && (z_14 != t)))
    _fail(t);
  else
    z_14 = t;
  t = SSL_open_file(not_null(y_14), not_null(z_14));
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  if(((a_15 != NULL) && (a_15 != t)))
    _fail(t);
  else
    a_15 = t;
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
      {
        ATerm f_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_15(not_null(a_15), t);
            ;
            LocalPopChoice(g_32);
          }
        else
          {
            t = f_32;
            t = e_15(not_null(b_15), not_null(c_15), not_null(a_15), t);
          }
      }
    }
  else
    {
      t = d_15(not_null(a_15), t);
    }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_15 != NULL) && (f_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_15 = ATgetArgument(t, 0);
      if(((g_15 != NULL) && (g_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(f_15), not_null(g_15));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), (ATerm) ATinsert(ATempty, term_h_32));
  t = access_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = file_exists_0_0(t);
  t = new_file_0_0(t);
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  if(((j_15 != NULL) && (j_15 != t)))
    _fail(t);
  else
    j_15 = t;
  t = term_i_32;
  t = new_0_0(t);
  if(((k_15 != NULL) && (k_15 != t)))
    _fail(t);
  else
    k_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), term_j_32);
  t = conc_strings_0_0(t);
  t = try_1_0(e_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  t = new_file_0_0(t);
  if(((m_15 != NULL) && (m_15 != t)))
    _fail(t);
  else
    m_15 = t;
  if(((n_15 != NULL) && (n_15 != t)))
    _fail(t);
  else
    n_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_15), term_s_14);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_15), term_i_32);
  t = assert_1_0(f_2, t);
  t = not_null(n_15);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  if(((p_15 != NULL) && (p_15 != t)))
    _fail(t);
  else
    p_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
      t = not_null(p_15);
      if(((r_15 != NULL) && (r_15 != t)))
        _fail(t);
      else
        r_15 = t;
      t = xtc_new_file_0_0(t);
      if(((s_15 != NULL) && (s_15 != t)))
        _fail(t);
      else
        s_15 = t;
      if(((t_15 != NULL) && (t_15 != t)))
        _fail(t);
      else
        t_15 = t;
      t = m_0(t);
      if(((u_15 != NULL) && (u_15 != t)))
        _fail(t);
      else
        u_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_15)), term_l_32));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(s_15);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_15));
    }
  else
    {
      ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((q_15 != NULL) && (q_15 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(q_15);
      if(((v_15 != NULL) && (v_15 != t)))
        _fail(t);
      else
        v_15 = t;
      t = not_null(p_15);
      if(((w_15 != NULL) && (w_15 != t)))
        _fail(t);
      else
        w_15 = t;
      t = not_null(v_15);
      t = xtc_new_file_0_0(t);
      if(((x_15 != NULL) && (x_15 != t)))
        _fail(t);
      else
        x_15 = t;
      if(((y_15 != NULL) && (y_15 != t)))
        _fail(t);
      else
        y_15 = t;
      t = m_0(t);
      if(((z_15 != NULL) && (z_15 != t)))
        _fail(t);
      else
        z_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_15)), term_l_32), not_null(v_15)), term_m_32));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(x_15);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_15));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm q_68 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((b_16 != NULL) && (b_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((e_16 != NULL) && (e_16 != t)))
    _fail(t);
  else
    e_16 = t;
  t = SSLgetAnnotations(not_null(d_16));
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  t = not_null(b_16);
  t = q_68(t);
  if(((c_16 != NULL) && (c_16 != t)))
    _fail(t);
  else
    c_16 = t;
  if(((g_16 != NULL) && (g_16 != t)))
    _fail(t);
  else
    g_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(c_16)), not_null(a_16));
  if(((f_16 != NULL) && (f_16 != t)))
    _fail(t);
  else
    f_16 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_32 = t;
      int q_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(q_32);
        }
      else
        {
          t = p_32;
          t = stdin_0_0(t);
        }
      LocalPopChoice(o_32);
      t = xtc_transform_file_2_0(i_90, j_90, t);
    }
  else
    {
      t = n_32;
      t = xtc_transform_term_2_0(i_90, j_90, t);
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
    if(((h_16 != NULL) && (h_16 != t)))
      _fail(t);
    else
      h_16 = t;
    t = term_i_32;
    t = e_100(t);
    t = xtc_find_0_0(t);
    if(((i_16 != NULL) && (i_16 != t)))
      _fail(t);
    else
      i_16 = t;
    t = not_null(h_16);
    if(((j_16 != NULL) && (j_16 != t)))
      _fail(t);
    else
      j_16 = t;
    t = term_i_32;
    t = f_100(t);
    if(((k_16 != NULL) && (k_16 != t)))
      _fail(t);
    else
      k_16 = t;
    t = not_null(j_16);
    if(((l_16 != NULL) && (l_16 != t)))
      _fail(t);
    else
      l_16 = t;
    t = term_i_32;
    t = pass_v_verbose_0_0(t);
    if(((m_16 != NULL) && (m_16 != t)))
      _fail(t);
    else
      m_16 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_16)), not_null(k_16)), term_u_32), not_null(i_16)), term_t_32), term_s_32);
    return(t);
  }
  t = xtc_transform_2_0(g_2, h_2, t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_16 != NULL) && (n_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_16 = ATgetArgument(t, 0);
      if(((o_16 != NULL) && (o_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(n_16), not_null(o_16));
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stderr_0)))
    _fail(t);
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdout_0)))
    _fail(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm h_17 (ATerm s_16, ATerm t_16, ATerm t)
  {
    ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
    t = not_null(s_16);
    if(((u_16 != NULL) && (u_16 != t)))
      _fail(t);
    else
      u_16 = t;
    t = not_null(t_16);
    if(((v_16 != NULL) && (v_16 != t)))
      _fail(t);
    else
      v_16 = t;
    t = k_0(t);
    if(((w_16 != NULL) && (w_16 != t)))
      _fail(t);
    else
      w_16 = t;
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), not_null(w_16));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_16));
    }
    return(t);
  }
  ATerm i_17 (ATerm x_16, ATerm y_16, ATerm t)
  {
    ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
    t = not_null(x_16);
    if(((z_16 != NULL) && (z_16 != t)))
      _fail(t);
    else
      z_16 = t;
    t = not_null(y_16);
    if(((a_17 != NULL) && (a_17 != t)))
      _fail(t);
    else
      a_17 = t;
    t = k_0(t);
    if(((b_17 != NULL) && (b_17 != t)))
      _fail(t);
    else
      b_17 = t;
    {
      ATerm x_32 = t;
      if((PushChoice() == 0))
        {
          ATerm y_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(z_32);
            }
          else
            {
              t = y_32;
              {
                ATerm a_33 = t;
                int b_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(b_33);
                  }
                else
                  {
                    t = a_33;
                    {
                      ATerm c_17 = NULL;
                      if(((c_17 != NULL) && (c_17 != t)))
                        _fail(t);
                      else
                        c_17 = t;
                      if(((z_16 != NULL) && (z_16 != t)))
                        _fail(t);
                      else
                        z_16 = t;
                      t = not_null(c_17);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_32;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_16), not_null(b_17));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_16));
    }
    return(t);
  }
  ATerm d_17 = NULL,e_17 = NULL;
  if(((d_17 != NULL) && (d_17 != t)))
    _fail(t);
  else
    d_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((e_17 != NULL) && (e_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_17(not_null(e_17), not_null(d_17), t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        {
          ATerm e_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_17(not_null(e_17), not_null(d_17), t);
              ;
              LocalPopChoice(f_33);
            }
          else
            {
              t = e_33;
              {
                ATerm f_17 = NULL,g_17 = NULL;
                t = not_null(e_17);
                if(((f_17 != NULL) && (f_17 != t)))
                  _fail(t);
                else
                  f_17 = t;
                t = not_null(d_17);
                if(((g_17 != NULL) && (g_17 != t)))
                  _fail(t);
                else
                  g_17 = t;
                t = k_0(t);
                if(((f_17 != NULL) && (f_17 != t)))
                  _fail(t);
                else
                  f_17 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_17));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm j_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_33 = ATgetFirst((ATermList) t);
      if(((j_17 != NULL) && (j_17 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        j_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(j_17);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_17 = ATgetArgument(t, 0);
      if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_17 != NULL) && (m_17 != t)))
    _fail(t);
  else
    m_17 = t;
  if(((n_17 != NULL) && (n_17 != t)))
    _fail(t);
  else
    n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(l_17));
  {
    ATerm h_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(i_33);
      }
    else
      {
        t = h_33;
        t = (ATerm) ATempty;
      }
    if(((o_17 != NULL) && (o_17 != t)))
      _fail(t);
    else
      o_17 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(k_17), not_null(l_17), not_null(o_17));
    t = table_put_0_0(t);
    t = not_null(m_17);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  if(((p_17 != NULL) && (p_17 != t)))
    _fail(t);
  else
    p_17 = t;
  t = o_86(t);
  if(((q_17 != NULL) && (q_17 != t)))
    _fail(t);
  else
    q_17 = t;
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), term_z_31);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_17 != NULL) && (s_17 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_17 = ATgetFirst((ATermList) t);
        if(((r_17 != NULL) && (r_17 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(q_17), term_z_31, not_null(r_17));
    t = table_put_0_0(t);
    t = not_null(s_17);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
        if(((t_17 != NULL) && (t_17 != t)))
          _fail(t);
        else
          t_17 = t;
        if(((u_17 != NULL) && (u_17 != t)))
          _fail(t);
        else
          u_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), not_null(t_17));
        t = table_pop_0_0(t);
        if(((v_17 != NULL) && (v_17 != t)))
          _fail(t);
        else
          v_17 = t;
        return(t);
      }
      t = map_1_0(i_2, t);
      t = not_null(p_17);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm w_17 = NULL;
  if(((w_17 != NULL) && (w_17 != t)))
    _fail(t);
  else
    w_17 = t;
  t = SSL_remove(not_null(w_17));
  return(t);
}
ATerm restore_always_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t)
{
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_87(t);
      t = k_87(t);
      ;
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      t = k_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  t = n_86(t);
  if(((y_17 != NULL) && (y_17 != t)))
    _fail(t);
  else
    y_17 = t;
  if(((z_17 != NULL) && (z_17 != t)))
    _fail(t);
  else
    z_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), term_z_31);
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        t = (ATerm) ATempty;
      }
    if(((a_18 != NULL) && (a_18 != t)))
      _fail(t);
    else
      a_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(y_17), term_z_31, (ATerm) ATinsert(CheckATermList(not_null(a_18)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(x_17);
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  t = begin_scope_1_0(j_2, t);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm d_18 = NULL;
      if(((d_18 != NULL) && (d_18 != t)))
        _fail(t);
      else
        d_18 = t;
      {
        ATerm p_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_33;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_18 != NULL) && (c_18 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_18 = ATgetFirst((ATermList) t);
            if(((b_18 != NULL) && (b_18 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              b_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(c_18);
        t = map_1_0(l_2, t);
        t = not_null(d_18);
        t = end_scope_1_0(m_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(s_89, k_2, t);
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      t = term_u_33;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
        if(((e_18 != NULL) && (e_18 != t)))
          _fail(t);
        else
          e_18 = t;
        if(((f_18 != NULL) && (f_18 != t)))
          _fail(t);
        else
          f_18 = t;
        t = term_m_32;
        t = get_config_0_0(t);
        if(((g_18 != NULL) && (g_18 != t)))
          _fail(t);
        else
          g_18 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_18));
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = term_n_8;
      }
    t = t_89(t);
    t = copy_to_1_0(o_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(n_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm i_18 = NULL;
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(i_18);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(i_18);
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  if(((j_18 != NULL) && (j_18 != t)))
    _fail(t);
  else
    j_18 = t;
  if(((k_18 != NULL) && (k_18 != t)))
    _fail(t);
  else
    k_18 = t;
  t = string_to_int_0_0(t);
  if(((l_18 != NULL) && (l_18 != t)))
    _fail(t);
  else
    l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_33, not_null(l_18));
  t = set_config_0_0(t);
  t = not_null(j_18);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_y_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm m_18 = NULL;
  if(((m_18 != NULL) && (m_18 != t)))
    _fail(t);
  else
    m_18 = t;
  t = SSL_string_to_int(not_null(m_18));
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm o_18 = NULL;
  if(((o_18 != NULL) && (o_18 != t)))
    _fail(t);
  else
    o_18 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(o_18);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(o_18);
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm p_18 = NULL;
  if(((p_18 != NULL) && (p_18 != t)))
    _fail(t);
  else
    p_18 = t;
  t = term_a_34;
  t = set_config_0_0(t);
  t = term_b_34;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  if(((r_18 != NULL) && (r_18 != t)))
    _fail(t);
  else
    r_18 = t;
  t = string_to_int_0_0(t);
  if(((s_18 != NULL) && (s_18 != t)))
    _fail(t);
  else
    s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_4, not_null(s_18));
  t = set_config_0_0(t);
  t = not_null(q_18);
  if(((t_18 != NULL) && (t_18 != t)))
    _fail(t);
  else
    t_18 = t;
  if(((u_18 != NULL) && (u_18 != t)))
    _fail(t);
  else
    u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_18));
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm v_18 = NULL;
  if(((v_18 != NULL) && (v_18 != t)))
    _fail(t);
  else
    v_18 = t;
  t = term_e_34;
  t = set_config_0_0(t);
  t = term_f_34;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_2, t_2, u_2, t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_2, w_2, x_2, t);
            ;
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
            t = Option_3_0(y_2, z_2, a_3, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm x_18 = NULL;
  if(((x_18 != NULL) && (x_18 != t)))
    _fail(t);
  else
    x_18 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(x_18);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(x_18);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  if(((y_18 != NULL) && (y_18 != t)))
    _fail(t);
  else
    y_18 = t;
  if(((z_18 != NULL) && (z_18 != t)))
    _fail(t);
  else
    z_18 = t;
  if(((a_19 != NULL) && (a_19 != t)))
    _fail(t);
  else
    a_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, not_null(a_19));
  t = set_config_0_0(t);
  t = not_null(y_18);
  if(((b_19 != NULL) && (b_19 != t)))
    _fail(t);
  else
    b_19 = t;
  if(((c_19 != NULL) && (c_19 != t)))
    _fail(t);
  else
    c_19 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_19));
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm d_19 = NULL;
  if(((d_19 != NULL) && (d_19 != t)))
    _fail(t);
  else
    d_19 = t;
  t = term_p_34;
  t = set_config_0_0(t);
  t = term_q_34;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      t = Option_3_0(e_3, f_3, g_3, t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  if(((g_19 != NULL) && (g_19 != t)))
    _fail(t);
  else
    g_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(g_19);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((h_19 != NULL) && (h_19 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            h_19 = ATgetFirst((ATermList) t);
          if(((i_19 != NULL) && (i_19 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(i_19);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_19 != NULL) && (j_19 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_19 = ATgetFirst((ATermList) t);
          if(((k_19 != NULL) && (k_19 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(h_19);
      if(((l_19 != NULL) && (l_19 != t)))
        _fail(t);
      else
        l_19 = t;
      t = not_null(j_19);
      if(((m_19 != NULL) && (m_19 != t)))
        _fail(t);
      else
        m_19 = t;
      t = not_null(k_19);
      if(((n_19 != NULL) && (n_19 != t)))
        _fail(t);
      else
        n_19 = t;
      t = not_null(g_19);
      if(((o_19 != NULL) && (o_19 != t)))
        _fail(t);
      else
        o_19 = t;
      t = not_null(l_19);
      t = h_0(t);
      t = not_null(o_19);
      if(((p_19 != NULL) && (p_19 != t)))
        _fail(t);
      else
        p_19 = t;
      t = not_null(m_19);
      t = i_0(t);
      if(((q_19 != NULL) && (q_19 != t)))
        _fail(t);
      else
        q_19 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(n_19)), not_null(q_19));
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm s_19 = NULL;
  if(((s_19 != NULL) && (s_19 != t)))
    _fail(t);
  else
    s_19 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(s_19);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(s_19);
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  if(((t_19 != NULL) && (t_19 != t)))
    _fail(t);
  else
    t_19 = t;
  if(((u_19 != NULL) && (u_19 != t)))
    _fail(t);
  else
    u_19 = t;
  if(((v_19 != NULL) && (v_19 != t)))
    _fail(t);
  else
    v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_32, not_null(v_19));
  t = set_config_0_0(t);
  t = not_null(t_19);
  if(((w_19 != NULL) && (w_19 != t)))
    _fail(t);
  else
    w_19 = t;
  if(((x_19 != NULL) && (x_19 != t)))
    _fail(t);
  else
    x_19 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_19));
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, i_3, j_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  if(((y_19 != NULL) && (y_19 != t)))
    _fail(t);
  else
    y_19 = t;
  if(((z_19 != NULL) && (z_19 != t)))
    _fail(t);
  else
    z_19 = t;
  t = term_i_32;
  t = whoami_0_0(t);
  if(((a_20 != NULL) && (a_20 != t)))
    _fail(t);
  else
    a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_35), not_null(a_20)), term_z_34));
  t = printnl_0_0(t);
  t = term_c_5;
  t = exit_0_0(t);
  t = not_null(y_19);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  t = report_run_time_0_0(t);
  if(((b_20 != NULL) && (b_20 != t)))
    _fail(t);
  else
    b_20 = t;
  t = term_i_32;
  t = whoami_0_0(t);
  if(((c_20 != NULL) && (c_20 != t)))
    _fail(t);
  else
    c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATinsert(ATinsert(ATempty, term_b_35), not_null(c_20)));
  t = printnl_0_0(t);
  t = term_c_5;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_35;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm d_20 = NULL;
  if(((d_20 != NULL) && (d_20 != t)))
    _fail(t);
  else
    d_20 = t;
  t = SSL_TicksToSeconds(not_null(d_20));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_20 = ATgetArgument(t, 0);
      if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(e_20), not_null(f_20));
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = SSL_addr(not_null(e_20), not_null(f_20));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = q_82(t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
        if(((h_20 != NULL) && (h_20 != t)))
          _fail(t);
        else
          h_20 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((i_20 != NULL) && (i_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              i_20 = ATgetFirst((ATermList) t);
            if(((j_20 != NULL) && (j_20 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              j_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(i_20);
        if(((k_20 != NULL) && (k_20 != t)))
          _fail(t);
        else
          k_20 = t;
        t = not_null(j_20);
        if(((l_20 != NULL) && (l_20 != t)))
          _fail(t);
        else
          l_20 = t;
        t = not_null(h_20);
        if(((m_20 != NULL) && (m_20 != t)))
          _fail(t);
        else
          m_20 = t;
        if(((n_20 != NULL) && (n_20 != t)))
          _fail(t);
        else
          n_20 = t;
        t = not_null(l_20);
        t = foldr_2_0(q_82, r_82, t);
        if(((o_20 != NULL) && (o_20 != t)))
          _fail(t);
        else
          o_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), not_null(o_20));
        t = r_82(t);
        if(((p_20 != NULL) && (p_20 != t)))
          _fail(t);
        else
          p_20 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(((q_20 != NULL) && (q_20 != t)))
    _fail(t);
  else
    q_20 = t;
  if(((r_20 != NULL) && (r_20 != t)))
    _fail(t);
  else
    r_20 = t;
  t = not_null(q_20);
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = SSL_explode_term(not_null(s_20));
  if(match_cons(t, sym__2))
    {
      ATerm h_35 = ATgetArgument(t, 0);
      if(((t_20 != NULL) && (t_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(r_20);
  if(((u_20 != NULL) && (u_20 != t)))
    _fail(t);
  else
    u_20 = t;
  t = not_null(t_20);
  t = foldr_2_0(o_80, p_80, t);
  if(((v_20 != NULL) && (v_20 != t)))
    _fail(t);
  else
    v_20 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(k_3, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_20 = ATgetArgument(t, 0);
      if(((x_20 != NULL) && (x_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_20 != NULL) && (y_20 != t)))
    _fail(t);
  else
    y_20 = t;
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(w_20), not_null(x_20));
        ;
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = SSL_gtr(not_null(w_20), not_null(x_20));
      }
    t = not_null(y_20);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
      if(((b_21 != NULL) && (b_21 != t)))
        _fail(t);
      else
        b_21 = t;
      if(match_cons(t, sym__2))
        {
          if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_21 = ATgetArgument(t, 0);
          if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(c_21);
      if(((a_21 != NULL) && (a_21 != t)))
        _fail(t);
      else
        a_21 = t;
      t = not_null(d_21);
      if(((a_21 != NULL) && (a_21 != t)))
        _fail(t);
      else
        a_21 = t;
      t = not_null(b_21);
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
    if(((e_21 != NULL) && (e_21 != t)))
      _fail(t);
    else
      e_21 = t;
    if(((f_21 != NULL) && (f_21 != t)))
      _fail(t);
    else
      f_21 = t;
    t = term_z_4;
    t = get_config_0_0(t);
    if(((g_21 != NULL) && (g_21 != t)))
      _fail(t);
    else
      g_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), term_c_5);
    t = geq_0_0(t);
    t = not_null(e_21);
    t = v_87(t);
    return(t);
  }
  t = try_1_0(l_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  if(((h_21 != NULL) && (h_21 != t)))
    _fail(t);
  else
    h_21 = t;
  t = run_time_0_0(t);
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  t = not_null(h_21);
  if(((j_21 != NULL) && (j_21 != t)))
    _fail(t);
  else
    j_21 = t;
  t = term_i_32;
  t = whoami_0_0(t);
  if(((k_21 != NULL) && (k_21 != t)))
    _fail(t);
  else
    k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_35), not_null(i_21)), term_p_16), not_null(k_21)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_z_33;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Help_0_0(t);
      ;
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            t = Version_0_0(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      t = option_defined_1_0(n_3, t);
    }
  t = u_91(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  if(((l_21 != NULL) && (l_21 != t)))
    _fail(t);
  else
    l_21 = t;
  t = SSL_table_create(not_null(l_21));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  t = term_u_35;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_35, term_v_35, not_null(m_21));
  t = table_put_0_0(t);
  t = not_null(n_21);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_21 = NULL;
  if(((o_21 != NULL) && (o_21 != t)))
    _fail(t);
  else
    o_21 = t;
  t = SSL_table_destroy(not_null(o_21));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm p_21 = NULL;
  if(((p_21 != NULL) && (p_21 != t)))
    _fail(t);
  else
    p_21 = t;
  t = SSL_exit(not_null(p_21));
  return(t);
}
ATerm long_description_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  if(((t_21 != NULL) && (t_21 != t)))
    _fail(t);
  else
    t_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_21 = ATgetFirst((ATermList) t);
      s_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
        t = not_null(r_21);
        if(((u_21 != NULL) && (u_21 != t)))
          _fail(t);
        else
          u_21 = t;
        t = not_null(s_21);
        if(((v_21 != NULL) && (v_21 != t)))
          _fail(t);
        else
          v_21 = t;
        t = not_null(t_21);
        if(((w_21 != NULL) && (w_21 != t)))
          _fail(t);
        else
          w_21 = t;
        t = not_null(v_21);
        if(((x_21 != NULL) && (x_21 != t)))
          _fail(t);
        else
          x_21 = t;
        if(((y_21 != NULL) && (y_21 != t)))
          _fail(t);
        else
          y_21 = t;
        t = g_0(t);
        if(((z_21 != NULL) && (z_21 != t)))
          _fail(t);
        else
          z_21 = t;
        t = not_null(y_21);
        if(((a_22 != NULL) && (a_22 != t)))
          _fail(t);
        else
          a_22 = t;
        t = not_null(u_21);
        t = f_0(t);
        if(((b_22 != NULL) && (b_22 != t)))
          _fail(t);
        else
          b_22 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(z_21)), not_null(b_22));
        if(((c_22 != NULL) && (c_22 != t)))
          _fail(t);
        else
          c_22 = t;
        t = not_null(x_21);
        {
          ATerm o_3 (ATerm t)
          {
            t = not_null(c_22);
            return(t);
          }
          t = reverse_acc_2_0(f_0, o_3, t);
          if(((d_22 != NULL) && (d_22 != t)))
            _fail(t);
          else
            d_22 = t;
        }
      }
    }
  else
    {
      ATerm e_22 = NULL,f_22 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(t_21);
      if(((e_22 != NULL) && (e_22 != t)))
        _fail(t);
      else
        e_22 = t;
      t = term_i_32;
      t = g_0(t);
      if(((f_22 != NULL) && (f_22 != t)))
        _fail(t);
      else
        f_22 = t;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(_id, p_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((h_22 != NULL) && (h_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((k_22 != NULL) && (k_22 != t)))
    _fail(t);
  else
    k_22 = t;
  t = SSLgetAnnotations(not_null(j_22));
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = not_null(h_22);
  t = x_68(t);
  if(((i_22 != NULL) && (i_22 != t)))
    _fail(t);
  else
    i_22 = t;
  if(((m_22 != NULL) && (m_22 != t)))
    _fail(t);
  else
    m_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_22)), not_null(g_22));
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  if(((o_22 != NULL) && (o_22 != t)))
    _fail(t);
  else
    o_22 = t;
  if(((p_22 != NULL) && (p_22 != t)))
    _fail(t);
  else
    p_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_22)), term_w_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_22 = NULL;
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_35;
      t = get_config_0_0(t);
      if(((n_22 != NULL) && (n_22 != t)))
        _fail(t);
      else
        n_22 = t;
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm r_3 (ATerm t)
          {
            if(((n_22 != NULL) && (n_22 != t)))
              _fail(t);
            else
              n_22 = t;
            return(t);
          }
          t = Program_1_0(r_3, t);
          return(t);
        }
        t = option_defined_1_0(q_3, t);
      }
    }
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(n_22);
        return(t);
      }
      t = short_description_1_0(t_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(s_3, t);
    t = term_z_35;
    t = echo_0_0(t);
    t = term_c_36;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    t = map_1_0(u_3, t);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm q_22 = NULL,r_22 = NULL;
        if(((q_22 != NULL) && (q_22 != t)))
          _fail(t);
        else
          q_22 = t;
        {
          ATerm w_3 (ATerm t)
          {
            t = not_null(n_22);
            return(t);
          }
          t = long_description_1_0(w_3, t);
          if(((r_22 != NULL) && (r_22 != t)))
            _fail(t);
          else
            r_22 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(r_22)), term_d_36);
          t = echo_0_0(t);
        }
        return(t);
      }
      t = try_1_0(v_3, t);
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_22 != NULL) && (s_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_22 = ATgetArgument(t, 0);
      if(((t_22 != NULL) && (t_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  t = SSL_printnl(not_null(s_22), not_null(t_22));
  t = not_null(u_22);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((w_22 != NULL) && (w_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  t = SSLgetAnnotations(not_null(y_22));
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = not_null(w_22);
  t = y_68(t);
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_22)), not_null(v_22));
  if(((a_23 != NULL) && (a_23 != t)))
    _fail(t);
  else
    a_23 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm c_23 (ATerm t)
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_76, _id, t);
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = Cons_2_0(_id, c_23, t);
      }
    return(t);
  }
  t = c_23(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  t = fetch_1_0(p_92, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  if(((f_23 != NULL) && (f_23 != t)))
    _fail(t);
  else
    f_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(f_23);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_23 != NULL) && (g_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_23 = ATgetFirst((ATermList) t);
          if(((h_23 != NULL) && (h_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_23);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,n_23 = NULL;
  if(((i_23 != NULL) && (i_23 != t)))
    _fail(t);
  else
    i_23 = t;
  if(((j_23 != NULL) && (j_23 != t)))
    _fail(t);
  else
    j_23 = t;
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        {
          ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
          if(((k_23 != NULL) && (k_23 != t)))
            _fail(t);
          else
            k_23 = t;
          if(((l_23 != NULL) && (l_23 != t)))
            _fail(t);
          else
            l_23 = t;
          t = not_null(k_23);
          if(((m_23 != NULL) && (m_23 != t)))
            _fail(t);
          else
            m_23 = t;
          t = (ATerm) ATinsert(ATempty, not_null(m_23));
        }
      }
    if(((n_23 != NULL) && (n_23 != t)))
      _fail(t);
    else
      n_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_33, not_null(n_23));
    t = printnl_0_0(t);
    t = not_null(i_23);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_35;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm o_23 = NULL;
  if(((o_23 != NULL) && (o_23 != t)))
    _fail(t);
  else
    o_23 = t;
  t = SSL_implode_string(not_null(o_23));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(n_36);
    }
  else
    {
      t = m_36;
      {
        ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
        if(((q_23 != NULL) && (q_23 != t)))
          _fail(t);
        else
          q_23 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_23 != NULL) && (r_23 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_23 = ATgetFirst((ATermList) t);
            if(((s_23 != NULL) && (s_23 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              s_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(r_23);
        if(((t_23 != NULL) && (t_23 != t)))
          _fail(t);
        else
          t_23 = t;
        t = not_null(s_23);
        if(((u_23 != NULL) && (u_23 != t)))
          _fail(t);
        else
          u_23 = t;
        t = not_null(q_23);
        if(((v_23 != NULL) && (v_23 != t)))
          _fail(t);
        else
          v_23 = t;
        t = not_null(t_23);
        {
          ATerm x_3 (ATerm t)
          {
            t = not_null(u_23);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_3, t);
          if(((w_23 != NULL) && (w_23 != t)))
            _fail(t);
          else
            w_23 = t;
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  if(((y_23 != NULL) && (y_23 != t)))
    _fail(t);
  else
    y_23 = t;
  if(((z_23 != NULL) && (z_23 != t)))
    _fail(t);
  else
    z_23 = t;
  t = not_null(y_23);
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  t = SSL_explode_term(not_null(a_24));
  if(match_cons(t, sym__2))
    {
      ATerm o_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_23);
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  t = not_null(b_24);
  t = concat_0_0(t);
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm g_24 (ATerm t)
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_24, t);
        ;
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        t = Nil_0_0(t);
        t = q_76(t);
      }
    return(t);
  }
  t = g_24(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_24 != NULL) && (h_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_24 = ATgetArgument(t, 0);
      if(((i_24 != NULL) && (i_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  t = not_null(h_24);
  {
    ATerm y_3 (ATerm t)
    {
      t = not_null(i_24);
      return(t);
    }
    t = at_end_1_0(y_3, t);
    if(((n_24 != NULL) && (n_24 != t)))
      _fail(t);
    else
      n_24 = t;
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm o_24 = NULL;
  if(((o_24 != NULL) && (o_24 != t)))
    _fail(t);
  else
    o_24 = t;
  t = SSL_explode_string(not_null(o_24));
  return(t);
}
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,f_25 = NULL;
  if(((a_25 != NULL) && (a_25 != t)))
    _fail(t);
  else
    a_25 = t;
  if(match_cons(t, sym__2))
    {
      if(((u_24 != NULL) && (u_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_24 = ATgetArgument(t, 0);
      if(((v_24 != NULL) && (v_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_25 != NULL) && (b_25 != t)))
    _fail(t);
  else
    b_25 = t;
  t = SSLgetAnnotations(not_null(a_25));
  if(((t_24 != NULL) && (t_24 != t)))
    _fail(t);
  else
    t_24 = t;
  t = not_null(u_24);
  t = c_59(t);
  if(((w_24 != NULL) && (w_24 != t)))
    _fail(t);
  else
    w_24 = t;
  t = not_null(v_24);
  t = d_59(t);
  if(((z_24 != NULL) && (z_24 != t)))
    _fail(t);
  else
    z_24 = t;
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_24), not_null(z_24)), not_null(t_24));
  if(((c_25 != NULL) && (c_25 != t)))
    _fail(t);
  else
    c_25 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  if(((g_25 != NULL) && (g_25 != t)))
    _fail(t);
  else
    g_25 = t;
  if(((h_25 != NULL) && (h_25 != t)))
    _fail(t);
  else
    h_25 = t;
  t = e_72(t);
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  t = not_null(h_25);
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  if(((k_25 != NULL) && (k_25 != t)))
    _fail(t);
  else
    k_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_25)), not_null(i_25)));
  t = printnl_0_0(t);
  t = not_null(g_25);
  return(t);
}
ATerm map_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  ATerm l_25 (ATerm t)
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        t = Cons_2_0(z_75, l_25, t);
      }
    return(t);
  }
  t = l_25(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm m_25 = NULL;
  if(((m_25 != NULL) && (m_25 != t)))
    _fail(t);
  else
    m_25 = t;
  t = SSL_is_string(not_null(m_25));
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = try_1_0(eval_config_0_0, t);
  return(t);
}
ATerm g_26 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  t = not_null(p_25);
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  t = not_null(q_25);
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  t = not_null(r_25);
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
        t = debug_1_0(a_4, t);
        _fail(t);
      }
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_x_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_3, t);
            ;
            LocalPopChoice(b_37);
          }
        else
          {
            t = a_37;
            {
              ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
              if(((u_25 != NULL) && (u_25 != t)))
                _fail(t);
              else
                u_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_25 = ATgetArgument(t, 0);
                  {
                    ATerm x_25 = NULL;
                    t = not_null(v_25);
                    if(((x_25 != NULL) && (x_25 != t)))
                      _fail(t);
                    else
                      x_25 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_25 = ATgetArgument(t, 0);
                      t = g_26(not_null(v_25), not_null(u_25), t);
                    }
                  else
                    {
                      ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((v_25 != NULL) && (v_25 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            v_25 = ATgetArgument(t, 0);
                          if(((w_25 != NULL) && (w_25 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            w_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(v_25);
                      if(((y_25 != NULL) && (y_25 != t)))
                        _fail(t);
                      else
                        y_25 = t;
                      t = not_null(w_25);
                      if(((z_25 != NULL) && (z_25 != t)))
                        _fail(t);
                      else
                        z_25 = t;
                      t = not_null(u_25);
                      if(((a_26 != NULL) && (a_26 != t)))
                        _fail(t);
                      else
                        a_26 = t;
                      if(((b_26 != NULL) && (b_26 != t)))
                        _fail(t);
                      else
                        b_26 = t;
                      t = not_null(y_25);
                      t = eval_config_0_0(t);
                      if(((c_26 != NULL) && (c_26 != t)))
                        _fail(t);
                      else
                        c_26 = t;
                      t = not_null(b_26);
                      if(((d_26 != NULL) && (d_26 != t)))
                        _fail(t);
                      else
                        d_26 = t;
                      t = not_null(z_25);
                      t = eval_config_0_0(t);
                      if(((e_26 != NULL) && (e_26 != t)))
                        _fail(t);
                      else
                        e_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_26), not_null(e_26));
                      t = conc_strings_0_0(t);
                      if(((f_26 != NULL) && (f_26 != t)))
                        _fail(t);
                      else
                        f_26 = t;
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_26 = NULL;
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_37, not_null(h_26));
  t = table_get_0_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
      t = eval_config_0_0(t);
      if(((i_26 != NULL) && (i_26 != t)))
        _fail(t);
      else
        i_26 = t;
      if(((j_26 != NULL) && (j_26 != t)))
        _fail(t);
      else
        j_26 = t;
      if(((k_26 != NULL) && (k_26 != t)))
        _fail(t);
      else
        k_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_37, not_null(h_26), not_null(k_26));
      t = table_put_0_0(t);
      t = not_null(i_26);
      return(t);
    }
    t = try_1_0(b_4, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_86(t);
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_g_37;
  t = set_config_0_0(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm l_26 = NULL;
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  t = term_g_37;
  t = set_config_0_0(t);
  t = term_i_37;
  t = set_config_0_0(t);
  t = term_j_37;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_k_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, e_4, t);
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      t = Option_3_0(f_4, g_4, h_4, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_26 = ATgetArgument(t, 0);
      if(((n_26 != NULL) && (n_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(m_26), not_null(n_26));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_26 = ATgetArgument(t, 0);
      if(((p_26 != NULL) && (p_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_26 = ATgetArgument(t, 1);
      if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((r_26 != NULL) && (r_26 != t)))
    _fail(t);
  else
    r_26 = t;
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), not_null(p_26));
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        t = (ATerm) ATempty;
      }
    if(((t_26 != NULL) && (t_26 != t)))
      _fail(t);
    else
      t_26 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_26), not_null(p_26), (ATerm) ATinsert(CheckATermList(not_null(t_26)), not_null(q_26)));
    t = table_put_0_0(t);
    t = not_null(r_26);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  t = term_i_32;
  t = u_93(t);
  if(((v_26 != NULL) && (v_26 != t)))
    _fail(t);
  else
    v_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_36, term_b_36, not_null(v_26));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(x_26);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_26 != NULL) && (y_26 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_26 = ATgetFirst((ATermList) t);
          if(((z_26 != NULL) && (z_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(y_26);
      if(((a_27 != NULL) && (a_27 != t)))
        _fail(t);
      else
        a_27 = t;
      t = not_null(z_26);
      if(((b_27 != NULL) && (b_27 != t)))
        _fail(t);
      else
        b_27 = t;
      t = not_null(x_26);
      if(((c_27 != NULL) && (c_27 != t)))
        _fail(t);
      else
        c_27 = t;
      t = not_null(a_27);
      t = a_0(t);
      t = not_null(c_27);
      if(((d_27 != NULL) && (d_27 != t)))
        _fail(t);
      else
        d_27 = t;
      t = term_i_32;
      t = b_0(t);
      if(((e_27 != NULL) && (e_27 != t)))
        _fail(t);
      else
        e_27 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(b_27)), not_null(e_27));
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm g_27 = NULL;
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(g_27);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(g_27);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(g_27);
        }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_p_37;
  t = set_config_0_0(t);
  t = term_q_37;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_r_37;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(i_4, j_4, k_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((h_27 != NULL) && (h_27 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        h_27 = ATgetFirst((ATermList) t);
      if(((i_27 != NULL) && (i_27 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        i_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(i_27)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_27)));
  return(t);
}
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  if(((o_27 != NULL) && (o_27 != t)))
    _fail(t);
  else
    o_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((k_27 != NULL) && (k_27 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        k_27 = ATgetFirst((ATermList) t);
      if(((l_27 != NULL) && (l_27 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        l_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((p_27 != NULL) && (p_27 != t)))
    _fail(t);
  else
    p_27 = t;
  t = SSLgetAnnotations(not_null(o_27));
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  t = not_null(k_27);
  t = r_63(t);
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = not_null(l_27);
  t = s_63(t);
  if(((n_27 != NULL) && (n_27 != t)))
    _fail(t);
  else
    n_27 = t;
  if(((r_27 != NULL) && (r_27 != t)))
    _fail(t);
  else
    r_27 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_27)), not_null(m_27)), not_null(j_27));
  if(((q_27 != NULL) && (q_27 != t)))
    _fail(t);
  else
    q_27 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm s_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_27 != NULL) && (s_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_27 = ATgetArgument(t, 0);
      if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_37, not_null(s_27), not_null(x_27));
  t = table_put_0_0(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  if(((z_27 != NULL) && (z_27 != t)))
    _fail(t);
  else
    z_27 = t;
  if(((a_28 != NULL) && (a_28 != t)))
    _fail(t);
  else
    a_28 = t;
  if(((e_28 != NULL) && (e_28 != t)))
    _fail(t);
  else
    e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_35, not_null(e_28));
  t = set_config_0_0(t);
  t = not_null(z_27);
  if(((f_28 != NULL) && (f_28 != t)))
    _fail(t);
  else
    f_28 = t;
  if(((g_28 != NULL) && (g_28 != t)))
    _fail(t);
  else
    g_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_28));
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm y_27 = NULL;
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  {
    ATerm l_4 (ATerm t)
    {
      t = term_s_37;
      t = s_93(t);
      return(t);
    }
    t = try_1_0(l_4, t);
    t = not_null(y_27);
    {
      ATerm n_4 (ATerm t)
      {
        ATerm t_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_37 = t;
            int w_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(w_37);
              }
            else
              {
                t = v_37;
                t = s_93(t);
                t = Cons_2_0(_id, n_4, t);
              }
            ;
            LocalPopChoice(u_37);
          }
        else
          {
            t = t_37;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(m_4, n_4, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  if(((i_28 != NULL) && (i_28 != t)))
    _fail(t);
  else
    i_28 = t;
  if(match_cons(t, sym__3))
    {
      if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_28 = ATgetArgument(t, 0);
      if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_28 = ATgetArgument(t, 1);
      if(((l_28 != NULL) && (l_28 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        l_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(j_28), not_null(k_28), not_null(l_28));
  t = not_null(i_28);
  return(t);
}
ATerm w_28 (ATerm p_28, ATerm t)
{
  ATerm q_28 = NULL;
  t = not_null(p_28);
  if(((q_28 != NULL) && (q_28 != t)))
    _fail(t);
  else
    q_28 = t;
  t = not_null(p_28);
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_35;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        t = option_defined_1_0(Help_0_0, t);
      }
    t = not_null(q_28);
    t = system_usage_0_0(t);
    t = term_z_33;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,v_28 = NULL;
  if(((n_28 != NULL) && (n_28 != t)))
    _fail(t);
  else
    n_28 = t;
  t = term_z_37;
  t = table_put_0_0(t);
  t = not_null(n_28);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm a_38 = t;
      int b_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_93(t);
          ;
          LocalPopChoice(b_38);
        }
      else
        {
          t = a_38;
          {
            ATerm c_38 = t;
            int d_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(d_38);
              }
            else
              {
                t = c_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_28 = NULL;
            if(((r_28 != NULL) && (r_28 != t)))
              _fail(t);
            else
              r_28 = t;
            {
              ATerm g_38 = t;
              int h_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_28(not_null(r_28), t);
                  ;
                  LocalPopChoice(h_38);
                }
              else
                {
                  t = g_38;
                  {
                    ATerm u_28 = NULL;
                    t = not_null(r_28);
                    if(((u_28 != NULL) && (u_28 != t)))
                      _fail(t);
                    else
                      u_28 = t;
                    t = term_f_37;
                    t = get_config_0_0(t);
                    t = not_null(u_28);
                    t = system_about_0_0(t);
                    t = term_z_33;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            {
              ATerm q_4 (ATerm t)
              {
                ATerm r_4 (ATerm t)
                {
                  if(((o_28 != NULL) && (o_28 != t)))
                    _fail(t);
                  else
                    o_28 = t;
                  return(t);
                }
                t = Undefined_1_0(r_4, t);
                return(t);
              }
              t = option_defined_1_0(q_4, t);
              t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_28)), term_i_38));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_c_5;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(p_4, t);
      if(((v_28 != NULL) && (v_28 != t)))
        _fail(t);
      else
        v_28 = t;
      t = term_a_36;
      t = table_destroy_0_0(t);
      t = not_null(v_28);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm t)
{
  t = parse_options_1_0(w_91, t);
  t = store_options_0_0(t);
  t = y_91(t);
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_91, t);
        ;
        LocalPopChoice(k_38);
      }
    else
      {
        t = j_38;
        {
          ATerm l_38 = t;
          int m_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_38);
            }
          else
            {
              t = l_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm t)
{
  t = option_wrap_4_0(a_92, default_usage_0_0, _id, b_92, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_89(t);
        ;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = xtc_io_1_0(y_89, t);
    return(t);
  }
  t = option_wrap_2_0(s_4, t_4, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, w_89, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = xtc_sglr_2_0(v_4, w_4, t);
  t = xtc_implode_asfix_0_0(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm io_parse_pp_table_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(u_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_parse_pp_table_0_0(t);
  return(t);
}
