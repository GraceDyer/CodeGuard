// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch45PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -256;
unsigned char var_1_2 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = -10;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 57653;
unsigned short int var_1_9 = 4;
signed char var_1_10 = -4;
signed char var_1_11 = 2;
signed char var_1_12 = 64;
signed char var_1_13 = 100;
signed short int var_1_14 = -1;
signed char var_1_15 = 32;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 1;
unsigned long int var_1_18 = 50;
float var_1_19 = 100.875;
unsigned char var_1_20 = 1;
float var_1_21 = 24.5;
float var_1_22 = 499.8;
float var_1_23 = 8.25;
float var_1_24 = 100.75;
double var_1_25 = 32.15;
signed short int var_1_26 = 0;
signed long int var_1_27 = -16;
double var_1_28 = 31.56;
double var_1_29 = 0.9;
unsigned short int var_1_30 = 2;
unsigned short int var_1_31 = 128;
unsigned short int var_1_32 = 128;
signed char var_1_33 = 25;
signed char var_1_34 = 25;
signed short int var_1_35 = -1;
signed long int var_1_36 = -256;
signed char var_1_37 = -32;
signed char var_1_38 = -32;
signed char var_1_39 = -8;
signed char var_1_40 = -10;
double var_1_41 = 49.3;
double var_1_42 = 0.5;
double var_1_43 = 4.8;
unsigned char var_1_44 = 1;
signed char var_1_45 = 100;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned short int var_1_50 = 60724;
unsigned short int var_1_51 = 50;
unsigned short int var_1_52 = 5;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 1;
signed short int var_1_55 = -500;
float var_1_56 = 256.4;
signed short int var_1_57 = 10000;
signed short int var_1_58 = 100;
signed long int var_1_59 = -128;
signed char var_1_60 = 32;
signed char var_1_61 = 4;
signed char var_1_62 = 16;
double var_1_63 = 499.25;
unsigned short int var_1_64 = 16;
unsigned short int var_1_65 = 0;
signed long int var_1_66 = 0;
double var_1_67 = 4.5;
float var_1_68 = 0.25;
signed long int var_1_69 = 10;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 50;
unsigned short int var_1_72 = 64;
unsigned char var_1_73 = 32;
unsigned char var_1_74 = 1;
unsigned char var_1_75 = 4;
unsigned char var_1_76 = 1;
signed char var_1_77 = -5;
signed char var_1_78 = -16;
signed char var_1_79 = 5;
unsigned long int var_1_80 = 128;
signed short int var_1_81 = -256;
unsigned long int var_1_82 = 10;
double var_1_83 = 2.2;
double var_1_84 = 24.4;
unsigned long int var_1_85 = 2963179297;
signed long int var_1_86 = -5;
unsigned long int var_1_87 = 256;
float var_1_88 = 64.8;
unsigned char var_1_89 = 4;
unsigned char var_1_90 = 128;
signed long int var_1_91 = -5;
signed long int var_1_92 = -500;
signed long int var_1_93 = 64;
unsigned char var_1_94 = 16;
unsigned char var_1_95 = 10;
unsigned char var_1_96 = 16;
unsigned char var_1_97 = 4;
signed short int var_1_98 = -64;
signed short int var_1_99 = 18014;
double var_1_100 = 32.875;
signed long int var_1_101 = 1;
float var_1_102 = 8.25;
unsigned long int var_1_103 = 100;
double var_1_104 = 4.4;
unsigned char var_1_105 = 1;
unsigned char var_1_106 = 0;
unsigned char var_1_107 = 1;
double var_1_108 = 4.1;
unsigned long int var_1_109 = 25;
unsigned short int var_1_110 = 10;
float var_1_111 = 5.3;
float var_1_112 = 4.45;
float var_1_113 = 99.8;
float var_1_114 = 32.4;
signed char var_1_115 = -1;
double var_1_116 = 0.8;
unsigned char var_1_117 = 4;
unsigned char var_1_118 = 1;
signed short int var_1_119 = -32;
signed short int var_1_120 = 18780;
signed short int var_1_121 = -256;
unsigned char var_1_122 = 64;
signed long int var_1_123 = 1000000000;
unsigned char var_1_124 = 5;
float var_1_125 = 3.2;
unsigned char var_1_126 = 5;
unsigned char var_1_127 = 0;
float var_1_128 = 64.75;
double var_1_129 = 16.5;
signed char var_1_130 = -128;
float var_1_131 = 1.25;
unsigned char var_1_132 = 0;
double var_1_133 = -0.25;
float var_1_134 = 49.5;
signed long int var_1_135 = 1;
unsigned char var_1_136 = 1;
signed char var_1_137 = 0;
signed short int var_1_138 = -64;
unsigned long int var_1_139 = 256;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_20) {
		var_1_19 = (max ((min (var_1_21 , var_1_22)) , (min (var_1_23 , var_1_24))));
	}


	// From: CodeObject2
	if (var_1_20) {
		if ((abs (var_1_26)) <= var_1_27) {
			var_1_25 = (var_1_28 - (max (var_1_29 , (abs (0.4)))));
		} else {
			var_1_25 = (abs (var_1_22));
		}
	}


	// From: CodeObject3
	var_1_30 = (var_1_31 + var_1_32);


	// From: CodeObject4
	if (! (var_1_31 > var_1_27)) {
		var_1_33 = (abs (var_1_34));
	}


	// From: CodeObject5
	if (var_1_25 > (var_1_23 + var_1_29)) {
		var_1_35 = (abs (var_1_33));
	}


	// From: CodeObject6
	if (var_1_20 && (var_1_34 > (var_1_30 + var_1_27))) {
		if (! ((var_1_34 % var_1_37) > (abs (var_1_26)))) {
			var_1_36 = (var_1_30 - var_1_31);
		} else {
			var_1_36 = -32;
		}
	}


	// From: CodeObject7
	if (var_1_36 <= (abs (var_1_26))) {
		var_1_38 = ((abs (var_1_39)) + var_1_40);
	}


	// From: CodeObject8
	if (var_1_28 <= var_1_23) {
		var_1_41 = (abs (abs (7.5)));
	} else {
		if (var_1_27 != var_1_26) {
			var_1_41 = (abs (min ((min (var_1_23 , var_1_42)) , var_1_29)));
		} else {
			var_1_41 = (abs (abs (var_1_43)));
		}
	}


	// From: CodeObject9
	if (var_1_40 != (min (var_1_27 , (abs (var_1_45))))) {
		if ((~ var_1_32) >= (var_1_34 + var_1_45)) {
			if ((max (var_1_37 , var_1_31)) >= var_1_26) {
				var_1_44 = (var_1_46 || var_1_47);
			}
		}
	} else {
		var_1_44 = ((var_1_42 > var_1_25) && (var_1_20 && var_1_48));
	}


	// From: CodeObject10
	if (var_1_31 >= (var_1_50 - (var_1_51 + var_1_52))) {
		var_1_49 = (! ((var_1_47 && var_1_53) && var_1_54));
	}


	// From: CodeObject11
	if (var_1_21 > var_1_25) {
		var_1_55 = var_1_33;
	} else {
		if (var_1_24 <= (25.25f / var_1_56)) {
			var_1_55 = ((var_1_52 + (var_1_57 - var_1_58)) - var_1_51);
		} else {
			var_1_55 = (abs (abs (var_1_40)));
		}
	}


	// From: CodeObject12
	if ((var_1_25 + var_1_43) >= (- var_1_41)) {
		var_1_59 = (min ((min (var_1_50 , var_1_33)) , var_1_45));
	}


	// From: CodeObject13
	if (var_1_44 || ((var_1_30 + var_1_51) <= (min (var_1_59 , var_1_57)))) {
		var_1_60 = (min (var_1_39 , (var_1_61 - var_1_62)));
	}


	// From: CodeObject14
	if (var_1_47) {
		var_1_63 = (min ((min ((abs (var_1_43)) , var_1_28)) , var_1_21));
	}


	// From: CodeObject15
	if (var_1_30 <= var_1_55) {
		var_1_64 = (abs (var_1_62));
	}


	// From: CodeObject16
	if (2 >= var_1_33) {
		var_1_65 = (min ((min (var_1_57 , var_1_51)) , (min (var_1_32 , var_1_31))));
	} else {
		if (var_1_46 && var_1_44) {
			var_1_65 = (max (1 , var_1_51));
		}
	}


	// From: CodeObject17
	if (var_1_28 >= (min ((var_1_56 + var_1_67) , var_1_21))) {
		if (var_1_60 <= var_1_61) {
			var_1_66 = (max (var_1_50 , ((abs (var_1_58)) + var_1_57)));
		}
	}


	// From: CodeObject18
	if (var_1_53) {
		var_1_68 = (var_1_28 - 9.99999999995E10f);
	}


	// From: CodeObject19
	if ((max (var_1_36 , (var_1_38 / var_1_57))) >= var_1_31) {
		if (! ((100u & var_1_31) < var_1_58)) {
			if ((var_1_25 / var_1_56) >= (- var_1_28)) {
				var_1_69 = var_1_45;
			}
		}
	} else {
		var_1_69 = ((var_1_51 + var_1_39) + var_1_35);
	}


	// From: CodeObject20
	if (var_1_57 >= var_1_69) {
		var_1_70 = var_1_53;
	}


	// From: CodeObject21
	if ((var_1_31 < var_1_72) || (0 >= (~ var_1_60))) {
		var_1_71 = (max ((var_1_62 + (min (var_1_73 , var_1_74))) , var_1_75));
	} else {
		var_1_71 = (var_1_73 + var_1_62);
	}


	// From: CodeObject22
	if (var_1_32 > var_1_64) {
		var_1_76 = ((var_1_74 <= var_1_66) || var_1_47);
	} else {
		if (var_1_42 >= (abs (abs (var_1_63)))) {
			var_1_76 = var_1_48;
		}
	}


	// From: CodeObject23
	if ((max (var_1_43 , var_1_41)) > var_1_22) {
		if ((abs (var_1_41)) < var_1_22) {
			var_1_77 = (max (var_1_34 , var_1_61));
		} else {
			if (var_1_51 <= var_1_57) {
				var_1_77 = var_1_62;
			} else {
				var_1_77 = (abs (var_1_39));
			}
		}
	} else {
		if (((var_1_72 >> var_1_38) % var_1_57) <= var_1_34) {
			var_1_77 = (min (0 , (var_1_39 + (var_1_78 + -8))));
		} else {
			var_1_77 = (abs (var_1_62 - var_1_79));
		}
	}


	// From: CodeObject24
	if (((5 << 10) < var_1_72) || ((var_1_58 >> var_1_37) < var_1_35)) {
		var_1_80 = var_1_62;
	}


	// From: CodeObject25
	if (((var_1_43 * var_1_28) + var_1_63) >= var_1_23) {
		if (var_1_46) {
			if (var_1_19 > (abs (var_1_25))) {
				if (var_1_75 >= var_1_58) {
					var_1_81 = (max (var_1_39 , var_1_45));
				}
			} else {
				var_1_81 = (var_1_51 - var_1_74);
			}
		}
	} else {
		if (var_1_65 != ((var_1_31 * var_1_36) & (~ 256))) {
			var_1_81 = (var_1_79 - var_1_74);
		}
	}


	// From: CodeObject26
	if ((var_1_41 / var_1_56) < ((127.375 - var_1_28) / (max (var_1_83 , var_1_84)))) {
		if (var_1_26 >= var_1_65) {
			var_1_82 = (var_1_85 - var_1_74);
		}
	}


	// From: CodeObject27
	if (! ((var_1_19 <= 1.000000000005E11f) && var_1_44)) {
		var_1_86 = (var_1_73 - var_1_32);
	}


	// From: CodeObject28
	if (var_1_57 >= (var_1_40 / 64)) {
		var_1_87 = (abs (var_1_71));
	} else {
		var_1_87 = (abs (var_1_52));
	}


	// From: CodeObject29
	if ((-2 & (max (var_1_66 , 8))) <= var_1_60) {
		if (! ((abs (var_1_42)) < (var_1_29 + var_1_83))) {
			var_1_88 = (min (var_1_42 , var_1_28));
		}
	} else {
		if (var_1_53 && var_1_46) {
			var_1_88 = (min ((min (var_1_28 , (min (var_1_24 , var_1_23)))) , (abs (max (var_1_21 , var_1_43)))));
		}
	}


	// From: CodeObject30
	var_1_89 = (max ((var_1_90 - var_1_79) , var_1_74));


	// From: CodeObject31
	if (var_1_76) {
		var_1_91 = ((max (var_1_30 , var_1_61)) + (max (var_1_50 , var_1_92)));
	} else {
		var_1_91 = var_1_93;
	}


	// From: CodeObject32
	if (var_1_48) {
		var_1_94 = (abs (var_1_95));
	} else {
		if (var_1_49 && var_1_76) {
			if (var_1_71 == var_1_79) {
				var_1_94 = (abs (abs (max (var_1_96 , 32))));
			}
		}
	}


	// From: CodeObject33
	if ((var_1_56 + (var_1_88 * 1.6)) < var_1_21) {
		var_1_97 = var_1_73;
	} else {
		if (var_1_86 > 200) {
			var_1_97 = (min (var_1_79 , var_1_96));
		}
	}


	// From: CodeObject34
	if (var_1_52 > var_1_57) {
		if (var_1_33 <= (~ var_1_57)) {
			if (((max (var_1_35 , var_1_81)) / (abs (2))) >= ((max (var_1_34 , 10000)) >> var_1_96)) {
				var_1_98 = (abs (min ((64 - var_1_51) , var_1_74)));
			}
		}
	} else {
		var_1_98 = ((var_1_99 - var_1_57) - (var_1_94 + var_1_71));
	}


	// From: CodeObject35
	if (var_1_45 < var_1_78) {
		if (-128 < var_1_30) {
			if (var_1_72 >= var_1_91) {
				var_1_100 = (abs (var_1_22));
			}
		}
	}


	// From: CodeObject36
	if (var_1_53 || ((var_1_72 * var_1_36) >= (var_1_50 >> var_1_32))) {
		var_1_101 = (abs (var_1_92));
	}


	// From: CodeObject37
	if (var_1_57 != var_1_71) {
		var_1_102 = (max (var_1_42 , var_1_28));
	} else {
		var_1_102 = (max (var_1_29 , (7.7f - var_1_28)));
	}


	// From: CodeObject38
	if ((var_1_38 | var_1_71) > var_1_95) {
		if ((var_1_29 == var_1_104) || ((max (var_1_92 , var_1_89)) < (abs (var_1_78)))) {
			var_1_103 = (abs (var_1_50));
		}
	}


	// From: CodeObject39
	if ((var_1_79 / var_1_37) >= (var_1_45 / var_1_90)) {
		if (var_1_42 < (var_1_104 / var_1_56)) {
			var_1_105 = (! (! var_1_48));
		} else {
			var_1_105 = ((var_1_49 || var_1_47) && ((var_1_53 && var_1_54) && (var_1_106 && var_1_107)));
		}
	}


	// From: CodeObject40
	if (var_1_70) {
		if (255.7 < (var_1_29 / var_1_56)) {
			if (var_1_76) {
				if ((var_1_36 % var_1_37) > -25) {
					var_1_108 = (abs (var_1_21));
				} else {
					if (var_1_91 >= var_1_99) {
						var_1_108 = var_1_24;
					}
				}
			}
		}
	} else {
		var_1_108 = (min ((abs (var_1_29)) , var_1_43));
	}


	// From: CodeObject41
	if (var_1_92 >= var_1_90) {
		var_1_109 = (max ((max (var_1_71 , (var_1_85 - var_1_73))) , (abs (var_1_32))));
	}


	// From: CodeObject42
	if (! var_1_106) {
		var_1_110 = (min ((200 + var_1_89) , var_1_57));
	}


	// From: CodeObject43
	if (var_1_69 <= 2) {
		if (var_1_105) {
			var_1_111 = (abs (var_1_112 + (var_1_113 - var_1_114)));
		}
	} else {
		var_1_111 = (var_1_28 - 255.4f);
	}


	// From: CodeObject44
	if (var_1_54) {
		var_1_115 = (abs (var_1_78));
	} else {
		if (var_1_69 <= var_1_34) {
			var_1_115 = (min (var_1_40 , var_1_61));
		}
	}


	// From: CodeObject45
	var_1_116 = (var_1_113 + var_1_114);


	// From: CodeObject46
	if (var_1_61 == var_1_57) {
		var_1_117 = (max (var_1_95 , var_1_96));
	} else {
		var_1_117 = var_1_79;
	}


	// From: CodeObject47
	if (((min (16 , var_1_64)) ^ var_1_97) >= var_1_34) {
		if (((abs (var_1_24)) / var_1_83) > (- var_1_116)) {
			var_1_118 = (! var_1_48);
		}
	}


	// From: CodeObject48
	if (var_1_104 > var_1_67) {
		var_1_119 = (((max (var_1_75 , var_1_73)) + var_1_62) - (var_1_120 - (max (var_1_57 , var_1_74))));
	} else {
		if (((var_1_67 < var_1_114) || var_1_44) || (var_1_26 < (~ var_1_32))) {
			if ((min (var_1_82 , (16 * var_1_99))) < var_1_94) {
				var_1_119 = (max (var_1_37 , var_1_121));
			}
		}
	}


	// From: CodeObject49
	if (var_1_44) {
		var_1_122 = var_1_90;
	}


	// From: CodeObject50
	if (var_1_49) {
		var_1_123 = var_1_90;
	} else {
		var_1_123 = var_1_77;
	}


	// From: CodeObject51
	if (var_1_118) {
		var_1_124 = var_1_73;
	} else {
		var_1_124 = var_1_79;
	}


	// From: CodeObject52
	if (var_1_118) {
		var_1_125 = var_1_113;
	} else {
		var_1_125 = var_1_113;
	}


	// From: CodeObject53
	var_1_126 = var_1_127;


	// From: CodeObject54
	if (var_1_48) {
		var_1_128 = var_1_42;
	} else {
		var_1_128 = var_1_23;
	}


	// From: CodeObject55
	if (var_1_46) {
		var_1_129 = var_1_22;
	}


	// From: CodeObject56
	var_1_130 = 64;


	// From: CodeObject57
	var_1_131 = var_1_29;


	// From: CodeObject58
	if (var_1_49) {
		var_1_132 = var_1_79;
	}


	// From: CodeObject59
	if (var_1_105) {
		var_1_133 = var_1_21;
	} else {
		var_1_133 = var_1_42;
	}


	// From: CodeObject60
	if (var_1_48) {
		var_1_134 = var_1_42;
	}


	// From: CodeObject61
	if (var_1_118) {
		var_1_135 = var_1_93;
	}


	// From: CodeObject62
	if (var_1_106) {
		var_1_136 = var_1_48;
	} else {
		var_1_136 = var_1_48;
	}


	// From: CodeObject63
	var_1_137 = -2;


	// From: CodeObject64
	if ((abs (5)) <= (var_1_69 % var_1_90)) {
		var_1_138 = (var_1_137 + var_1_97);
	}


	// From: CodeObject65
	if ((var_1_91 / (min (var_1_37 , var_1_90))) <= var_1_115) {
		var_1_139 = var_1_85;
	}


	// From: Req4Batch45PS_CN_500
	if (var_1_8 > var_1_9) {
		var_1_10 = (abs (var_1_11));
	} else {
		var_1_10 = (var_1_12 - (var_1_13 - 8));
	}


	// From: Req7Batch45PS_CN_500
	if (var_1_2) {
		var_1_16 = (var_1_5 || var_1_17);
	}


	// From: Req8Batch45PS_CN_500
	var_1_18 = var_1_8;


	// From: Req2Batch45PS_CN_500
	unsigned long int stepLocal_2 = var_1_18;
	signed char stepLocal_1 = var_1_10;
	if (stepLocal_2 <= var_1_10) {
		if (var_1_10 <= stepLocal_1) {
			var_1_6 = var_1_10;
		}
	}


	// From: Req3Batch45PS_CN_500
	var_1_7 = (min ((var_1_8 - var_1_18) , var_1_9));


	// From: Req5Batch45PS_CN_500
	if (! var_1_16) {
		if (var_1_16) {
			var_1_14 = ((32 + var_1_10) + (abs (var_1_11)));
		} else {
			var_1_14 = -50;
		}
	}


	// From: Req6Batch45PS_CN_500
	signed long int stepLocal_3 = var_1_6 * (var_1_6 + var_1_8);
	if (var_1_14 >= stepLocal_3) {
		var_1_15 = (min ((max (var_1_13 , var_1_11)) , (abs (var_1_12))));
	} else {
		var_1_15 = (min (var_1_11 , var_1_12));
	}


	// From: Req1Batch45PS_CN_500
	signed long int stepLocal_0 = ~ var_1_15;
	if (var_1_16) {
		if (stepLocal_0 <= (var_1_10 + 100000000)) {
			if (! var_1_16) {
				var_1_1 = (abs (var_1_15));
			} else {
				var_1_1 = (var_1_15 + 32);
			}
		} else {
			var_1_1 = var_1_15;
		}
	} else {
		var_1_1 = var_1_15;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -126);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32767);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -126);
	assume_abort_if_not(var_1_34 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -128);
	assume_abort_if_not(var_1_37 <= 127);
	assume_abort_if_not(var_1_37 != 0);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854765600e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -127);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 32767);
	assume_abort_if_not(var_1_50 <= 65535);
	var_1_51 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 16384);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 16383);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -922337.2036854776000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
	assume_abort_if_not(var_1_56 != 0.0F);
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= 8191);
	assume_abort_if_not(var_1_57 <= 16383);
	var_1_58 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 8191);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= -1);
	assume_abort_if_not(var_1_61 <= 126);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= -922337.2036854776000e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854776000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 65535);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 127);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 127);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 254);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= -31);
	assume_abort_if_not(var_1_78 <= 32);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 126);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= -922337.2036854776000e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854776000e+12F && var_1_83 >= 1.0e-20F ));
	assume_abort_if_not(var_1_83 != 0.0F);
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= -922337.2036854776000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854776000e+12F && var_1_84 >= 1.0e-20F ));
	assume_abort_if_not(var_1_84 != 0.0F);
	var_1_85 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_85 >= 2147483647);
	assume_abort_if_not(var_1_85 <= 4294967294);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 127);
	assume_abort_if_not(var_1_90 <= 254);
	var_1_92 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_92 >= -1073741823);
	assume_abort_if_not(var_1_92 <= 1073741823);
	var_1_93 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_93 >= -2147483647);
	assume_abort_if_not(var_1_93 <= 2147483646);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 254);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 254);
	var_1_99 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_99 >= 16382);
	assume_abort_if_not(var_1_99 <= 32766);
	var_1_104 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_104 >= -922337.2036854776000e+13F && var_1_104 <= -1.0e-20F) || (var_1_104 <= 9223372.036854776000e+12F && var_1_104 >= 1.0e-20F ));
	var_1_106 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_106 >= 1);
	assume_abort_if_not(var_1_106 <= 1);
	var_1_107 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_107 >= 1);
	assume_abort_if_not(var_1_107 <= 1);
	var_1_112 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_112 >= -461168.6018427382800e+13F && var_1_112 <= -1.0e-20F) || (var_1_112 <= 4611686.018427382800e+12F && var_1_112 >= 1.0e-20F ));
	var_1_113 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_113 >= 0.0F && var_1_113 <= -1.0e-20F) || (var_1_113 <= 4611686.018427382800e+12F && var_1_113 >= 1.0e-20F ));
	var_1_114 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_114 >= 0.0F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 4611686.018427382800e+12F && var_1_114 >= 1.0e-20F ));
	var_1_120 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_120 >= 16383);
	assume_abort_if_not(var_1_120 <= 32766);
	var_1_121 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_121 >= -32767);
	assume_abort_if_not(var_1_121 <= 32766);
	var_1_127 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_127 >= 0);
	assume_abort_if_not(var_1_127 <= 254);
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_16 ? (((~ var_1_15) <= (var_1_10 + 100000000)) ? ((! var_1_16) ? (var_1_1 == ((signed short int) (abs (var_1_15)))) : (var_1_1 == ((signed short int) (var_1_15 + 32)))) : (var_1_1 == ((signed short int) var_1_15))) : (var_1_1 == ((signed short int) var_1_15))) && ((var_1_18 <= var_1_10) ? ((var_1_10 <= var_1_10) ? (var_1_6 == ((signed long int) var_1_10)) : 1) : 1)) && (var_1_7 == ((unsigned short int) (min ((var_1_8 - var_1_18) , var_1_9))))) && ((var_1_8 > var_1_9) ? (var_1_10 == ((signed char) (abs (var_1_11)))) : (var_1_10 == ((signed char) (var_1_12 - (var_1_13 - 8)))))) && ((! var_1_16) ? (var_1_16 ? (var_1_14 == ((signed short int) ((32 + var_1_10) + (abs (var_1_11))))) : (var_1_14 == ((signed short int) -50))) : 1)) && ((var_1_14 >= (var_1_6 * (var_1_6 + var_1_8))) ? (var_1_15 == ((signed char) (min ((max (var_1_13 , var_1_11)) , (abs (var_1_12)))))) : (var_1_15 == ((signed char) (min (var_1_11 , var_1_12)))))) && (var_1_2 ? (var_1_16 == ((unsigned char) (var_1_5 || var_1_17))) : 1)) && (var_1_18 == ((unsigned long int) var_1_8))
;
}
int main(void) {
	isInitial = 1;
	initially();

	while (1) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
