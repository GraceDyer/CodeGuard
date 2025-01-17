// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2019 Makai Mann
// SPDX-FileCopyrightText: 2022 The SV-Benchmarks Community
//
// SPDX-License-Identifier: BSD-3-Clause

// This C program is converted from Btor2 by Btor2C version sha1:a0fa249
//   with arguments: { architecture=64, lazy_modulo=true, use_memmove=false, unroll_inner_loops=false, shortest_type=true, diff_type=true, decimal_constant=true, zero_init=false, sra_extend_sign=true }
// Comments from the original Btor2 file:
// ; source: https://github.com/makaimann/btor-benchmarks/tree/d9a2792dcee39f17607c889500ac76ad3df35a50
// ; BTOR description generated by Yosys 0.8+612 (git sha1 d6a289d3, g++ 9.1.1 -Os) for module shift_register_top.
extern unsigned char __VERIFIER_nondet_uchar();
extern unsigned short __VERIFIER_nondet_ushort();
extern unsigned int __VERIFIER_nondet_uint();
extern unsigned long __VERIFIER_nondet_ulong();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
void reach_error() { __assert_fail("0", "shift_register_top_w8_d8_e0.c", 0, "reach_error"); }
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: { reach_error(); abort(); } } }
void assume_abort_if_not(int cond) { if (!cond) { abort(); } }
int main() {
  // Defining sorts ...
  typedef unsigned char SORT_1;  // BV with 1 bits
  const SORT_1 mask_SORT_1 = (SORT_1)-1 >> (sizeof(SORT_1) * 8 - 1);
  const SORT_1 msb_SORT_1 = (SORT_1)1 << (1 - 1);
  typedef unsigned char SORT_3;  // BV with 8 bits
  const SORT_3 mask_SORT_3 = (SORT_3)-1 >> (sizeof(SORT_3) * 8 - 8);
  const SORT_3 msb_SORT_3 = (SORT_3)1 << (8 - 1);
  typedef unsigned char SORT_12;  // BV with 4 bits
  const SORT_12 mask_SORT_12 = (SORT_12)-1 >> (sizeof(SORT_12) * 8 - 4);
  const SORT_12 msb_SORT_12 = (SORT_12)1 << (4 - 1);
  typedef unsigned int SORT_104;  // BV with 32 bits
  const SORT_104 mask_SORT_104 = (SORT_104)-1 >> (sizeof(SORT_104) * 8 - 32);
  const SORT_104 msb_SORT_104 = (SORT_104)1 << (32 - 1);
  typedef unsigned char SORT_120;  // BV with 2 bits
  const SORT_120 mask_SORT_120 = (SORT_120)-1 >> (sizeof(SORT_120) * 8 - 2);
  const SORT_120 msb_SORT_120 = (SORT_120)1 << (2 - 1);
  typedef unsigned char SORT_135;  // BV with 3 bits
  const SORT_135 mask_SORT_135 = (SORT_135)-1 >> (sizeof(SORT_135) * 8 - 3);
  const SORT_135 msb_SORT_135 = (SORT_135)1 << (3 - 1);
  typedef unsigned char SORT_193;  // BV with 5 bits
  const SORT_193 mask_SORT_193 = (SORT_193)-1 >> (sizeof(SORT_193) * 8 - 5);
  const SORT_193 msb_SORT_193 = (SORT_193)1 << (5 - 1);
  typedef unsigned char SORT_195;  // BV with 6 bits
  const SORT_195 mask_SORT_195 = (SORT_195)-1 >> (sizeof(SORT_195) * 8 - 6);
  const SORT_195 msb_SORT_195 = (SORT_195)1 << (6 - 1);
  typedef unsigned char SORT_197;  // BV with 7 bits
  const SORT_197 mask_SORT_197 = (SORT_197)-1 >> (sizeof(SORT_197) * 8 - 7);
  const SORT_197 msb_SORT_197 = (SORT_197)1 << (7 - 1);
  // Initializing constants ...
  const SORT_12 var_17 = 8;
  const SORT_12 var_33 = 0;
  const SORT_1 var_46 = 1;
  const SORT_1 var_76 = 0;
  const SORT_3 var_102 = 0;
  const SORT_120 var_121 = 2;
  const SORT_120 var_128 = 3;
  const SORT_135 var_136 = 4;
  const SORT_135 var_143 = 5;
  const SORT_135 var_150 = 6;
  const SORT_135 var_185 = 7;
  // Collecting input declarations ...
  SORT_1 input_2;
  SORT_3 input_4;
  SORT_3 input_5;
  SORT_1 input_6;
  SORT_1 input_7;
  SORT_1 input_8;
  SORT_1 input_9;
  SORT_1 input_74;
  // Collecting state declarations ...
  SORT_3 state_10 = __VERIFIER_nondet_uchar() & mask_SORT_3;
  SORT_12 state_13 = __VERIFIER_nondet_uchar() & mask_SORT_12;
  SORT_1 state_20 = __VERIFIER_nondet_uchar() & mask_SORT_1;
  SORT_1 state_21 = __VERIFIER_nondet_uchar() & mask_SORT_1;
  SORT_12 state_24 = __VERIFIER_nondet_uchar() & mask_SORT_12;
  SORT_3 state_39 = __VERIFIER_nondet_uchar() & mask_SORT_3;
  SORT_1 state_56 = __VERIFIER_nondet_uchar() & mask_SORT_1;
  SORT_3 state_87 = __VERIFIER_nondet_uchar() & mask_SORT_3;
  SORT_3 state_89 = __VERIFIER_nondet_uchar() & mask_SORT_3;
  SORT_3 state_91 = __VERIFIER_nondet_uchar() & mask_SORT_3;
  SORT_3 state_93 = __VERIFIER_nondet_uchar() & mask_SORT_3;
  SORT_3 state_95 = __VERIFIER_nondet_uchar() & mask_SORT_3;
  SORT_3 state_97 = __VERIFIER_nondet_uchar() & mask_SORT_3;
  SORT_3 state_99 = __VERIFIER_nondet_uchar() & mask_SORT_3;
  // Initializing states ...
  SORT_1 init_57_arg_1 = var_46;
  state_56 = init_57_arg_1;
  for (;;) {
    // Getting external input values ...
    input_2 = __VERIFIER_nondet_uchar();
    input_4 = __VERIFIER_nondet_uchar();
    input_5 = __VERIFIER_nondet_uchar();
    input_6 = __VERIFIER_nondet_uchar();
    input_6 = input_6 & mask_SORT_1;
    input_7 = __VERIFIER_nondet_uchar();
    input_8 = __VERIFIER_nondet_uchar();
    input_8 = input_8 & mask_SORT_1;
    input_9 = __VERIFIER_nondet_uchar();
    input_74 = __VERIFIER_nondet_uchar();
    // Assuming invariants ...
    SORT_12 var_14_arg_0 = state_13;
    SORT_1 var_14 = var_14_arg_0 != 0;
    SORT_1 var_15_arg_0 = var_14;
    SORT_1 var_15 = ~var_15_arg_0;
    SORT_1 var_43_arg_0 = var_15;
    SORT_1 var_43 = ~var_43_arg_0;
    SORT_1 var_44_arg_0 = input_6;
    SORT_1 var_44 = ~var_44_arg_0;
    SORT_1 var_45_arg_0 = var_43;
    SORT_1 var_45_arg_1 = var_44;
    SORT_1 var_45 = var_45_arg_0 | var_45_arg_1;
    SORT_1 var_47_arg_0 = var_46;
    SORT_1 var_47 = ~var_47_arg_0;
    SORT_1 var_48_arg_0 = var_45;
    SORT_1 var_48_arg_1 = var_47;
    SORT_1 var_48 = var_48_arg_0 | var_48_arg_1;
    var_48 = var_48 & mask_SORT_1;
    SORT_1 constr_49_arg_0 = var_48;
    assume_abort_if_not(constr_49_arg_0);
    SORT_12 var_18_arg_0 = state_13;
    SORT_12 var_18_arg_1 = var_17;
    SORT_1 var_18 = var_18_arg_0 >= var_18_arg_1;
    SORT_1 var_50_arg_0 = var_18;
    SORT_1 var_50 = ~var_50_arg_0;
    SORT_1 var_51_arg_0 = input_7;
    SORT_1 var_51 = ~var_51_arg_0;
    SORT_1 var_52_arg_0 = var_50;
    SORT_1 var_52_arg_1 = var_51;
    SORT_1 var_52 = var_52_arg_0 | var_52_arg_1;
    SORT_1 var_53_arg_0 = var_46;
    SORT_1 var_53 = ~var_53_arg_0;
    SORT_1 var_54_arg_0 = var_52;
    SORT_1 var_54_arg_1 = var_53;
    SORT_1 var_54 = var_54_arg_0 | var_54_arg_1;
    var_54 = var_54 & mask_SORT_1;
    SORT_1 constr_55_arg_0 = var_54;
    assume_abort_if_not(constr_55_arg_0);
    SORT_1 var_58_arg_0 = input_8;
    SORT_1 var_58_arg_1 = state_56;
    SORT_1 var_58 = var_58_arg_0 == var_58_arg_1;
    SORT_1 var_59_arg_0 = var_46;
    SORT_1 var_59 = ~var_59_arg_0;
    SORT_1 var_60_arg_0 = var_58;
    SORT_1 var_60_arg_1 = var_59;
    SORT_1 var_60 = var_60_arg_0 | var_60_arg_1;
    var_60 = var_60 & mask_SORT_1;
    SORT_1 constr_61_arg_0 = var_60;
    assume_abort_if_not(constr_61_arg_0);
    SORT_1 var_62_arg_0 = var_18;
    SORT_1 var_62 = ~var_62_arg_0;
    SORT_1 var_63_arg_0 = input_7;
    SORT_1 var_63 = ~var_63_arg_0;
    SORT_1 var_64_arg_0 = var_62;
    SORT_1 var_64_arg_1 = var_63;
    SORT_1 var_64 = var_64_arg_0 | var_64_arg_1;
    SORT_1 var_65_arg_0 = var_46;
    SORT_1 var_65 = ~var_65_arg_0;
    SORT_1 var_66_arg_0 = var_64;
    SORT_1 var_66_arg_1 = var_65;
    SORT_1 var_66 = var_66_arg_0 | var_66_arg_1;
    var_66 = var_66 & mask_SORT_1;
    SORT_1 constr_67_arg_0 = var_66;
    assume_abort_if_not(constr_67_arg_0);
    SORT_1 var_68_arg_0 = var_15;
    SORT_1 var_68 = ~var_68_arg_0;
    SORT_1 var_69_arg_0 = input_6;
    SORT_1 var_69 = ~var_69_arg_0;
    SORT_1 var_70_arg_0 = var_68;
    SORT_1 var_70_arg_1 = var_69;
    SORT_1 var_70 = var_70_arg_0 | var_70_arg_1;
    SORT_1 var_71_arg_0 = var_46;
    SORT_1 var_71 = ~var_71_arg_0;
    SORT_1 var_72_arg_0 = var_70;
    SORT_1 var_72_arg_1 = var_71;
    SORT_1 var_72 = var_72_arg_0 | var_72_arg_1;
    var_72 = var_72 & mask_SORT_1;
    SORT_1 constr_73_arg_0 = var_72;
    assume_abort_if_not(constr_73_arg_0);
    // Asserting properties ...
    SORT_1 var_77_arg_0 = state_56;
    SORT_1 var_77_arg_1 = var_76;
    SORT_1 var_77_arg_2 = var_46;
    SORT_1 var_77 = var_77_arg_0 ? var_77_arg_1 : var_77_arg_2;
    SORT_1 var_22_arg_0 = state_21;
    SORT_1 var_22 = ~var_22_arg_0;
    SORT_1 var_23_arg_0 = state_20;
    SORT_1 var_23_arg_1 = var_22;
    SORT_1 var_23 = var_23_arg_0 & var_23_arg_1;
    SORT_12 var_25_arg_0 = state_24;
    SORT_1 var_25 = var_25_arg_0 != 0;
    SORT_1 var_26_arg_0 = var_23;
    SORT_1 var_26_arg_1 = var_25;
    SORT_1 var_26 = var_26_arg_0 & var_26_arg_1;
    SORT_1 var_27_arg_0 = state_20;
    SORT_1 var_27 = ~var_27_arg_0;
    SORT_1 var_28_arg_0 = input_7;
    SORT_1 var_28_arg_1 = var_27;
    SORT_1 var_28 = var_28_arg_0 & var_28_arg_1;
    SORT_1 var_29_arg_0 = var_28;
    var_29_arg_0 = var_29_arg_0 & mask_SORT_1;
    SORT_12 var_29 = var_29_arg_0;
    SORT_12 var_30_arg_0 = state_24;
    SORT_12 var_30_arg_1 = var_29;
    SORT_12 var_30 = var_30_arg_0 + var_30_arg_1;
    SORT_1 var_31_arg_0 = input_6;
    var_31_arg_0 = var_31_arg_0 & mask_SORT_1;
    SORT_12 var_31 = var_31_arg_0;
    SORT_12 var_32_arg_0 = var_30;
    SORT_12 var_32_arg_1 = var_31;
    SORT_12 var_32 = var_32_arg_0 - var_32_arg_1;
    SORT_1 var_34_arg_0 = input_8;
    SORT_12 var_34_arg_1 = var_33;
    SORT_12 var_34_arg_2 = var_32;
    SORT_12 var_34 = var_34_arg_0 ? var_34_arg_1 : var_34_arg_2;
    var_34 = var_34 & mask_SORT_12;
    SORT_12 var_35_arg_0 = var_34;
    SORT_1 var_35 = var_35_arg_0 != 0;
    SORT_1 var_36_arg_0 = var_35;
    SORT_1 var_36 = ~var_36_arg_0;
    SORT_1 var_37_arg_0 = var_26;
    SORT_1 var_37_arg_1 = var_36;
    SORT_1 var_37 = var_37_arg_0 & var_37_arg_1;
    SORT_1 var_38_arg_0 = var_37;
    SORT_1 var_38 = ~var_38_arg_0;
    SORT_3 var_40_arg_0 = state_39;
    SORT_3 var_40_arg_1 = state_10;
    SORT_1 var_40 = var_40_arg_0 == var_40_arg_1;
    SORT_1 var_41_arg_0 = var_38;
    SORT_1 var_41_arg_1 = var_40;
    SORT_1 var_41 = var_41_arg_0 | var_41_arg_1;
    SORT_1 var_75_arg_0 = state_56;
    SORT_1 var_75_arg_1 = input_74;
    SORT_1 var_75_arg_2 = var_41;
    SORT_1 var_75 = var_75_arg_0 ? var_75_arg_1 : var_75_arg_2;
    SORT_1 var_78_arg_0 = var_75;
    SORT_1 var_78 = ~var_78_arg_0;
    SORT_1 var_79_arg_0 = var_77;
    SORT_1 var_79_arg_1 = var_78;
    SORT_1 var_79 = var_79_arg_0 & var_79_arg_1;
    var_79 = var_79 & mask_SORT_1;
    SORT_1 bad_80_arg_0 = var_79;
    __VERIFIER_assert(!(bad_80_arg_0));
    // Computing next states ...
    SORT_1 var_159_arg_0 = input_7;
    SORT_1 var_159_arg_1 = var_15;
    SORT_1 var_159 = var_159_arg_0 & var_159_arg_1;
    SORT_1 var_160_arg_0 = input_6;
    SORT_1 var_160_arg_1 = var_159;
    SORT_1 var_160 = var_160_arg_0 | var_160_arg_1;
    var_160 = var_160 & mask_SORT_1;
    SORT_12 var_105_arg_0 = state_13;
    var_105_arg_0 = var_105_arg_0 & mask_SORT_12;
    SORT_104 var_105 = var_105_arg_0;
    SORT_1 var_106_arg_0 = input_6;
    var_106_arg_0 = var_106_arg_0 & mask_SORT_1;
    SORT_104 var_106 = var_106_arg_0;
    SORT_104 var_107_arg_0 = var_105;
    SORT_104 var_107_arg_1 = var_106;
    SORT_104 var_107 = var_107_arg_0 - var_107_arg_1;
    var_107 = var_107 & mask_SORT_104;
    SORT_104 var_108_arg_0 = var_107;
    SORT_1 var_108 = var_108_arg_0 != 0;
    SORT_1 var_109_arg_0 = var_108;
    SORT_1 var_109 = ~var_109_arg_0;
    SORT_1 var_110_arg_0 = input_7;
    SORT_1 var_110_arg_1 = var_109;
    SORT_1 var_110 = var_110_arg_0 & var_110_arg_1;
    var_110 = var_110 & mask_SORT_1;
    SORT_1 var_103_arg_0 = input_6;
    SORT_3 var_103_arg_1 = state_87;
    SORT_3 var_103_arg_2 = var_102;
    SORT_3 var_103 = var_103_arg_0 ? var_103_arg_1 : var_103_arg_2;
    SORT_1 var_111_arg_0 = var_110;
    SORT_3 var_111_arg_1 = input_4;
    SORT_3 var_111_arg_2 = var_103;
    SORT_3 var_111 = var_111_arg_0 ? var_111_arg_1 : var_111_arg_2;
    SORT_1 var_283_arg_0 = var_160;
    SORT_3 var_283_arg_1 = var_111;
    SORT_3 var_283_arg_2 = state_10;
    SORT_3 var_283 = var_283_arg_0 ? var_283_arg_1 : var_283_arg_2;
    SORT_1 var_284_arg_0 = input_8;
    SORT_3 var_284_arg_1 = var_102;
    SORT_3 var_284_arg_2 = var_283;
    SORT_3 var_284 = var_284_arg_0 ? var_284_arg_1 : var_284_arg_2;
    var_284 = var_284 & mask_SORT_3;
    SORT_3 next_285_arg_1 = var_284;
    SORT_1 var_286_arg_0 = input_7;
    var_286_arg_0 = var_286_arg_0 & mask_SORT_1;
    SORT_12 var_286 = var_286_arg_0;
    SORT_12 var_287_arg_0 = state_13;
    SORT_12 var_287_arg_1 = var_286;
    SORT_12 var_287 = var_287_arg_0 + var_287_arg_1;
    SORT_1 var_288_arg_0 = input_6;
    var_288_arg_0 = var_288_arg_0 & mask_SORT_1;
    SORT_12 var_288 = var_288_arg_0;
    SORT_12 var_289_arg_0 = var_287;
    SORT_12 var_289_arg_1 = var_288;
    SORT_12 var_289 = var_289_arg_0 - var_289_arg_1;
    SORT_1 var_290_arg_0 = input_8;
    SORT_12 var_290_arg_1 = var_33;
    SORT_12 var_290_arg_2 = var_289;
    SORT_12 var_290 = var_290_arg_0 ? var_290_arg_1 : var_290_arg_2;
    var_290 = var_290 & mask_SORT_12;
    SORT_12 next_291_arg_1 = var_290;
    SORT_1 var_244_arg_0 = state_20;
    SORT_1 var_244 = ~var_244_arg_0;
    var_244 = var_244 & mask_SORT_1;
    SORT_1 var_240_arg_0 = input_9;
    SORT_1 var_240_arg_1 = input_7;
    SORT_1 var_240 = var_240_arg_0 & var_240_arg_1;
    SORT_1 var_241_arg_0 = state_20;
    SORT_1 var_241_arg_1 = var_240;
    SORT_1 var_241 = var_241_arg_0 | var_241_arg_1;
    SORT_1 var_292_arg_0 = var_244;
    SORT_1 var_292_arg_1 = var_241;
    SORT_1 var_292_arg_2 = state_20;
    SORT_1 var_292 = var_292_arg_0 ? var_292_arg_1 : var_292_arg_2;
    SORT_1 var_293_arg_0 = input_8;
    SORT_1 var_293_arg_1 = var_76;
    SORT_1 var_293_arg_2 = var_292;
    SORT_1 var_293 = var_293_arg_0 ? var_293_arg_1 : var_293_arg_2;
    SORT_1 next_294_arg_1 = var_293;
    SORT_1 var_252_arg_0 = var_37;
    SORT_1 var_252_arg_1 = state_21;
    SORT_1 var_252 = var_252_arg_0 | var_252_arg_1;
    SORT_1 var_295_arg_0 = var_46;
    SORT_1 var_295_arg_1 = var_252;
    SORT_1 var_295_arg_2 = state_21;
    SORT_1 var_295 = var_295_arg_0 ? var_295_arg_1 : var_295_arg_2;
    SORT_1 var_296_arg_0 = input_8;
    SORT_1 var_296_arg_1 = var_76;
    SORT_1 var_296_arg_2 = var_295;
    SORT_1 var_296 = var_296_arg_0 ? var_296_arg_1 : var_296_arg_2;
    SORT_1 next_297_arg_1 = var_296;
    SORT_1 var_264_arg_0 = input_7;
    SORT_1 var_264_arg_1 = input_6;
    SORT_1 var_264 = var_264_arg_0 | var_264_arg_1;
    SORT_1 var_265_arg_0 = var_264;
    SORT_1 var_265_arg_1 = input_8;
    SORT_1 var_265 = var_265_arg_0 | var_265_arg_1;
    SORT_1 var_266_arg_0 = var_265;
    SORT_1 var_266_arg_1 = state_20;
    SORT_1 var_266 = var_266_arg_0 | var_266_arg_1;
    var_266 = var_266 & mask_SORT_1;
    SORT_1 var_298_arg_0 = var_266;
    SORT_12 var_298_arg_1 = var_34;
    SORT_12 var_298_arg_2 = state_24;
    SORT_12 var_298 = var_298_arg_0 ? var_298_arg_1 : var_298_arg_2;
    SORT_1 var_299_arg_0 = input_8;
    SORT_12 var_299_arg_1 = var_33;
    SORT_12 var_299_arg_2 = var_298;
    SORT_12 var_299 = var_299_arg_0 ? var_299_arg_1 : var_299_arg_2;
    var_299 = var_299 & mask_SORT_12;
    SORT_12 next_300_arg_1 = var_299;
    SORT_1 var_249_arg_0 = var_240;
    SORT_1 var_249_arg_1 = var_244;
    SORT_1 var_249 = var_249_arg_0 & var_249_arg_1;
    var_249 = var_249 & mask_SORT_1;
    SORT_1 var_301_arg_0 = var_249;
    SORT_3 var_301_arg_1 = input_4;
    SORT_3 var_301_arg_2 = state_39;
    SORT_3 var_301 = var_301_arg_0 ? var_301_arg_1 : var_301_arg_2;
    SORT_1 var_302_arg_0 = input_8;
    SORT_3 var_302_arg_1 = var_102;
    SORT_3 var_302_arg_2 = var_301;
    SORT_3 var_302 = var_302_arg_0 ? var_302_arg_1 : var_302_arg_2;
    var_302 = var_302 & mask_SORT_3;
    SORT_3 next_303_arg_1 = var_302;
    SORT_1 next_304_arg_1 = var_76;
    SORT_1 var_161_arg_0 = var_46;
    var_161_arg_0 = var_161_arg_0 & mask_SORT_1;
    SORT_12 var_161 = var_161_arg_0;
    SORT_12 var_162_arg_0 = state_13;
    SORT_12 var_162_arg_1 = var_161;
    SORT_1 var_162 = var_162_arg_0 == var_162_arg_1;
    SORT_1 var_163_arg_0 = input_7;
    SORT_1 var_163_arg_1 = var_162;
    SORT_1 var_163 = var_163_arg_0 & var_163_arg_1;
    SORT_1 var_164_arg_0 = input_6;
    SORT_1 var_164_arg_1 = var_163;
    SORT_1 var_164 = var_164_arg_0 | var_164_arg_1;
    var_164 = var_164 & mask_SORT_1;
    SORT_1 var_114_arg_0 = var_46;
    var_114_arg_0 = var_114_arg_0 & mask_SORT_1;
    SORT_104 var_114 = var_114_arg_0;
    SORT_104 var_115_arg_0 = var_107;
    SORT_104 var_115_arg_1 = var_114;
    SORT_1 var_115 = var_115_arg_0 == var_115_arg_1;
    SORT_1 var_116_arg_0 = input_7;
    SORT_1 var_116_arg_1 = var_115;
    SORT_1 var_116 = var_116_arg_0 & var_116_arg_1;
    var_116 = var_116 & mask_SORT_1;
    SORT_1 var_113_arg_0 = input_6;
    SORT_3 var_113_arg_1 = state_89;
    SORT_3 var_113_arg_2 = var_102;
    SORT_3 var_113 = var_113_arg_0 ? var_113_arg_1 : var_113_arg_2;
    SORT_1 var_117_arg_0 = var_116;
    SORT_3 var_117_arg_1 = input_4;
    SORT_3 var_117_arg_2 = var_113;
    SORT_3 var_117 = var_117_arg_0 ? var_117_arg_1 : var_117_arg_2;
    SORT_1 var_305_arg_0 = var_164;
    SORT_3 var_305_arg_1 = var_117;
    SORT_3 var_305_arg_2 = state_87;
    SORT_3 var_305 = var_305_arg_0 ? var_305_arg_1 : var_305_arg_2;
    SORT_1 var_306_arg_0 = input_8;
    SORT_3 var_306_arg_1 = var_102;
    SORT_3 var_306_arg_2 = var_305;
    SORT_3 var_306 = var_306_arg_0 ? var_306_arg_1 : var_306_arg_2;
    SORT_3 next_307_arg_1 = var_306;
    SORT_120 var_165_arg_0 = var_121;
    var_165_arg_0 = var_165_arg_0 & mask_SORT_120;
    SORT_12 var_165 = var_165_arg_0;
    SORT_12 var_166_arg_0 = state_13;
    SORT_12 var_166_arg_1 = var_165;
    SORT_1 var_166 = var_166_arg_0 == var_166_arg_1;
    SORT_1 var_167_arg_0 = input_7;
    SORT_1 var_167_arg_1 = var_166;
    SORT_1 var_167 = var_167_arg_0 & var_167_arg_1;
    SORT_1 var_168_arg_0 = input_6;
    SORT_1 var_168_arg_1 = var_167;
    SORT_1 var_168 = var_168_arg_0 | var_168_arg_1;
    var_168 = var_168 & mask_SORT_1;
    SORT_120 var_122_arg_0 = var_121;
    var_122_arg_0 = var_122_arg_0 & mask_SORT_120;
    SORT_104 var_122 = var_122_arg_0;
    SORT_104 var_123_arg_0 = var_107;
    SORT_104 var_123_arg_1 = var_122;
    SORT_1 var_123 = var_123_arg_0 == var_123_arg_1;
    SORT_1 var_124_arg_0 = input_7;
    SORT_1 var_124_arg_1 = var_123;
    SORT_1 var_124 = var_124_arg_0 & var_124_arg_1;
    var_124 = var_124 & mask_SORT_1;
    SORT_1 var_119_arg_0 = input_6;
    SORT_3 var_119_arg_1 = state_91;
    SORT_3 var_119_arg_2 = var_102;
    SORT_3 var_119 = var_119_arg_0 ? var_119_arg_1 : var_119_arg_2;
    SORT_1 var_125_arg_0 = var_124;
    SORT_3 var_125_arg_1 = input_4;
    SORT_3 var_125_arg_2 = var_119;
    SORT_3 var_125 = var_125_arg_0 ? var_125_arg_1 : var_125_arg_2;
    SORT_1 var_308_arg_0 = var_168;
    SORT_3 var_308_arg_1 = var_125;
    SORT_3 var_308_arg_2 = state_89;
    SORT_3 var_308 = var_308_arg_0 ? var_308_arg_1 : var_308_arg_2;
    SORT_1 var_309_arg_0 = input_8;
    SORT_3 var_309_arg_1 = var_102;
    SORT_3 var_309_arg_2 = var_308;
    SORT_3 var_309 = var_309_arg_0 ? var_309_arg_1 : var_309_arg_2;
    SORT_3 next_310_arg_1 = var_309;
    SORT_120 var_169_arg_0 = var_128;
    var_169_arg_0 = var_169_arg_0 & mask_SORT_120;
    SORT_12 var_169 = var_169_arg_0;
    SORT_12 var_170_arg_0 = state_13;
    SORT_12 var_170_arg_1 = var_169;
    SORT_1 var_170 = var_170_arg_0 == var_170_arg_1;
    SORT_1 var_171_arg_0 = input_7;
    SORT_1 var_171_arg_1 = var_170;
    SORT_1 var_171 = var_171_arg_0 & var_171_arg_1;
    SORT_1 var_172_arg_0 = input_6;
    SORT_1 var_172_arg_1 = var_171;
    SORT_1 var_172 = var_172_arg_0 | var_172_arg_1;
    var_172 = var_172 & mask_SORT_1;
    SORT_120 var_129_arg_0 = var_128;
    var_129_arg_0 = var_129_arg_0 & mask_SORT_120;
    SORT_104 var_129 = var_129_arg_0;
    SORT_104 var_130_arg_0 = var_107;
    SORT_104 var_130_arg_1 = var_129;
    SORT_1 var_130 = var_130_arg_0 == var_130_arg_1;
    SORT_1 var_131_arg_0 = input_7;
    SORT_1 var_131_arg_1 = var_130;
    SORT_1 var_131 = var_131_arg_0 & var_131_arg_1;
    var_131 = var_131 & mask_SORT_1;
    SORT_1 var_127_arg_0 = input_6;
    SORT_3 var_127_arg_1 = state_93;
    SORT_3 var_127_arg_2 = var_102;
    SORT_3 var_127 = var_127_arg_0 ? var_127_arg_1 : var_127_arg_2;
    SORT_1 var_132_arg_0 = var_131;
    SORT_3 var_132_arg_1 = input_4;
    SORT_3 var_132_arg_2 = var_127;
    SORT_3 var_132 = var_132_arg_0 ? var_132_arg_1 : var_132_arg_2;
    SORT_1 var_311_arg_0 = var_172;
    SORT_3 var_311_arg_1 = var_132;
    SORT_3 var_311_arg_2 = state_91;
    SORT_3 var_311 = var_311_arg_0 ? var_311_arg_1 : var_311_arg_2;
    SORT_1 var_312_arg_0 = input_8;
    SORT_3 var_312_arg_1 = var_102;
    SORT_3 var_312_arg_2 = var_311;
    SORT_3 var_312 = var_312_arg_0 ? var_312_arg_1 : var_312_arg_2;
    SORT_3 next_313_arg_1 = var_312;
    SORT_135 var_173_arg_0 = var_136;
    var_173_arg_0 = var_173_arg_0 & mask_SORT_135;
    SORT_12 var_173 = var_173_arg_0;
    SORT_12 var_174_arg_0 = state_13;
    SORT_12 var_174_arg_1 = var_173;
    SORT_1 var_174 = var_174_arg_0 == var_174_arg_1;
    SORT_1 var_175_arg_0 = input_7;
    SORT_1 var_175_arg_1 = var_174;
    SORT_1 var_175 = var_175_arg_0 & var_175_arg_1;
    SORT_1 var_176_arg_0 = input_6;
    SORT_1 var_176_arg_1 = var_175;
    SORT_1 var_176 = var_176_arg_0 | var_176_arg_1;
    var_176 = var_176 & mask_SORT_1;
    SORT_135 var_137_arg_0 = var_136;
    var_137_arg_0 = var_137_arg_0 & mask_SORT_135;
    SORT_104 var_137 = var_137_arg_0;
    SORT_104 var_138_arg_0 = var_107;
    SORT_104 var_138_arg_1 = var_137;
    SORT_1 var_138 = var_138_arg_0 == var_138_arg_1;
    SORT_1 var_139_arg_0 = input_7;
    SORT_1 var_139_arg_1 = var_138;
    SORT_1 var_139 = var_139_arg_0 & var_139_arg_1;
    var_139 = var_139 & mask_SORT_1;
    SORT_1 var_134_arg_0 = input_6;
    SORT_3 var_134_arg_1 = state_95;
    SORT_3 var_134_arg_2 = var_102;
    SORT_3 var_134 = var_134_arg_0 ? var_134_arg_1 : var_134_arg_2;
    SORT_1 var_140_arg_0 = var_139;
    SORT_3 var_140_arg_1 = input_4;
    SORT_3 var_140_arg_2 = var_134;
    SORT_3 var_140 = var_140_arg_0 ? var_140_arg_1 : var_140_arg_2;
    SORT_1 var_314_arg_0 = var_176;
    SORT_3 var_314_arg_1 = var_140;
    SORT_3 var_314_arg_2 = state_93;
    SORT_3 var_314 = var_314_arg_0 ? var_314_arg_1 : var_314_arg_2;
    SORT_1 var_315_arg_0 = input_8;
    SORT_3 var_315_arg_1 = var_102;
    SORT_3 var_315_arg_2 = var_314;
    SORT_3 var_315 = var_315_arg_0 ? var_315_arg_1 : var_315_arg_2;
    SORT_3 next_316_arg_1 = var_315;
    SORT_135 var_177_arg_0 = var_143;
    var_177_arg_0 = var_177_arg_0 & mask_SORT_135;
    SORT_12 var_177 = var_177_arg_0;
    SORT_12 var_178_arg_0 = state_13;
    SORT_12 var_178_arg_1 = var_177;
    SORT_1 var_178 = var_178_arg_0 == var_178_arg_1;
    SORT_1 var_179_arg_0 = input_7;
    SORT_1 var_179_arg_1 = var_178;
    SORT_1 var_179 = var_179_arg_0 & var_179_arg_1;
    SORT_1 var_180_arg_0 = input_6;
    SORT_1 var_180_arg_1 = var_179;
    SORT_1 var_180 = var_180_arg_0 | var_180_arg_1;
    var_180 = var_180 & mask_SORT_1;
    SORT_135 var_144_arg_0 = var_143;
    var_144_arg_0 = var_144_arg_0 & mask_SORT_135;
    SORT_104 var_144 = var_144_arg_0;
    SORT_104 var_145_arg_0 = var_107;
    SORT_104 var_145_arg_1 = var_144;
    SORT_1 var_145 = var_145_arg_0 == var_145_arg_1;
    SORT_1 var_146_arg_0 = input_7;
    SORT_1 var_146_arg_1 = var_145;
    SORT_1 var_146 = var_146_arg_0 & var_146_arg_1;
    var_146 = var_146 & mask_SORT_1;
    SORT_1 var_142_arg_0 = input_6;
    SORT_3 var_142_arg_1 = state_97;
    SORT_3 var_142_arg_2 = var_102;
    SORT_3 var_142 = var_142_arg_0 ? var_142_arg_1 : var_142_arg_2;
    SORT_1 var_147_arg_0 = var_146;
    SORT_3 var_147_arg_1 = input_4;
    SORT_3 var_147_arg_2 = var_142;
    SORT_3 var_147 = var_147_arg_0 ? var_147_arg_1 : var_147_arg_2;
    SORT_1 var_317_arg_0 = var_180;
    SORT_3 var_317_arg_1 = var_147;
    SORT_3 var_317_arg_2 = state_95;
    SORT_3 var_317 = var_317_arg_0 ? var_317_arg_1 : var_317_arg_2;
    SORT_1 var_318_arg_0 = input_8;
    SORT_3 var_318_arg_1 = var_102;
    SORT_3 var_318_arg_2 = var_317;
    SORT_3 var_318 = var_318_arg_0 ? var_318_arg_1 : var_318_arg_2;
    SORT_3 next_319_arg_1 = var_318;
    SORT_135 var_181_arg_0 = var_150;
    var_181_arg_0 = var_181_arg_0 & mask_SORT_135;
    SORT_12 var_181 = var_181_arg_0;
    SORT_12 var_182_arg_0 = state_13;
    SORT_12 var_182_arg_1 = var_181;
    SORT_1 var_182 = var_182_arg_0 == var_182_arg_1;
    SORT_1 var_183_arg_0 = input_7;
    SORT_1 var_183_arg_1 = var_182;
    SORT_1 var_183 = var_183_arg_0 & var_183_arg_1;
    SORT_1 var_184_arg_0 = input_6;
    SORT_1 var_184_arg_1 = var_183;
    SORT_1 var_184 = var_184_arg_0 | var_184_arg_1;
    var_184 = var_184 & mask_SORT_1;
    SORT_135 var_151_arg_0 = var_150;
    var_151_arg_0 = var_151_arg_0 & mask_SORT_135;
    SORT_104 var_151 = var_151_arg_0;
    SORT_104 var_152_arg_0 = var_107;
    SORT_104 var_152_arg_1 = var_151;
    SORT_1 var_152 = var_152_arg_0 == var_152_arg_1;
    SORT_1 var_153_arg_0 = input_7;
    SORT_1 var_153_arg_1 = var_152;
    SORT_1 var_153 = var_153_arg_0 & var_153_arg_1;
    var_153 = var_153 & mask_SORT_1;
    SORT_1 var_149_arg_0 = input_6;
    SORT_3 var_149_arg_1 = state_99;
    SORT_3 var_149_arg_2 = var_102;
    SORT_3 var_149 = var_149_arg_0 ? var_149_arg_1 : var_149_arg_2;
    SORT_1 var_154_arg_0 = var_153;
    SORT_3 var_154_arg_1 = input_4;
    SORT_3 var_154_arg_2 = var_149;
    SORT_3 var_154 = var_154_arg_0 ? var_154_arg_1 : var_154_arg_2;
    SORT_1 var_320_arg_0 = var_184;
    SORT_3 var_320_arg_1 = var_154;
    SORT_3 var_320_arg_2 = state_97;
    SORT_3 var_320 = var_320_arg_0 ? var_320_arg_1 : var_320_arg_2;
    SORT_1 var_321_arg_0 = input_8;
    SORT_3 var_321_arg_1 = var_102;
    SORT_3 var_321_arg_2 = var_320;
    SORT_3 var_321 = var_321_arg_0 ? var_321_arg_1 : var_321_arg_2;
    SORT_3 next_322_arg_1 = var_321;
    SORT_135 var_186_arg_0 = var_185;
    var_186_arg_0 = var_186_arg_0 & mask_SORT_135;
    SORT_12 var_186 = var_186_arg_0;
    SORT_12 var_187_arg_0 = state_13;
    SORT_12 var_187_arg_1 = var_186;
    SORT_1 var_187 = var_187_arg_0 == var_187_arg_1;
    SORT_1 var_188_arg_0 = input_7;
    SORT_1 var_188_arg_1 = var_187;
    SORT_1 var_188 = var_188_arg_0 & var_188_arg_1;
    SORT_1 var_189_arg_0 = input_6;
    SORT_1 var_189_arg_1 = var_188;
    SORT_1 var_189 = var_189_arg_0 | var_189_arg_1;
    var_189 = var_189 & mask_SORT_1;
    SORT_1 var_323_arg_0 = var_189;
    SORT_3 var_323_arg_1 = input_5;
    SORT_3 var_323_arg_2 = state_99;
    SORT_3 var_323 = var_323_arg_0 ? var_323_arg_1 : var_323_arg_2;
    SORT_1 var_324_arg_0 = input_8;
    SORT_3 var_324_arg_1 = var_102;
    SORT_3 var_324_arg_2 = var_323;
    SORT_3 var_324 = var_324_arg_0 ? var_324_arg_1 : var_324_arg_2;
    SORT_3 next_325_arg_1 = var_324;
    // Assigning next states ...
    state_10 = next_285_arg_1;
    state_13 = next_291_arg_1;
    state_20 = next_294_arg_1;
    state_21 = next_297_arg_1;
    state_24 = next_300_arg_1;
    state_39 = next_303_arg_1;
    state_56 = next_304_arg_1;
    state_87 = next_307_arg_1;
    state_89 = next_310_arg_1;
    state_91 = next_313_arg_1;
    state_93 = next_316_arg_1;
    state_95 = next_319_arg_1;
    state_97 = next_322_arg_1;
    state_99 = next_325_arg_1;
  }
  return 0;
}
