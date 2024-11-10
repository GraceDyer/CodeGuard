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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch32PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 2;
unsigned char var_1_4 = 100;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 32;
unsigned char var_1_8 = 32;
float var_1_9 = 100.5;
float var_1_11 = 0.8;
float var_1_12 = 2.5;
signed short int var_1_13 = -32;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
float var_1_18 = 0.25;
float var_1_19 = 100000000.25;
signed char var_1_20 = 0;
signed char var_1_21 = 10;
double var_1_22 = 1000000.5;
unsigned long int var_1_23 = 256;
unsigned long int var_1_24 = 50;
signed long int var_1_25 = 64;
signed long int var_1_26 = 0;
signed long int var_1_27 = -128;
signed long int var_1_28 = -100;
unsigned long int var_1_29 = 32;
signed long int var_1_30 = -32;
signed long int var_1_31 = 0;
unsigned long int var_1_32 = 2219578776;
unsigned long int var_1_33 = 128;
signed long int var_1_34 = -32;
signed long int var_1_35 = -25;
signed long int var_1_36 = -16;
unsigned short int var_1_37 = 10;
float var_1_38 = 200.2;
float var_1_39 = 4.925;
float var_1_40 = 8.65;
float var_1_41 = 255.4;
unsigned char var_1_42 = 0;
unsigned short int var_1_43 = 0;
unsigned char var_1_44 = 0;
signed long int var_1_45 = 8;
unsigned char var_1_46 = 0;
signed long int var_1_47 = -16;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 200;
unsigned char var_1_50 = 1;
double var_1_51 = -0.8;
unsigned long int var_1_52 = 2831007237;
double var_1_53 = 5.25;
double var_1_54 = 0.0;
double var_1_55 = 8.67;
double var_1_56 = 1.75;
double var_1_57 = 25.4;
unsigned long int var_1_58 = 4;
signed char var_1_59 = -25;
signed char var_1_60 = -10;
unsigned short int var_1_61 = 10;
signed char var_1_62 = -32;
float var_1_63 = 100.86;
unsigned char var_1_64 = 8;
unsigned char var_1_65 = 2;
unsigned char var_1_66 = 1;
unsigned long int var_1_67 = 500;
unsigned long int var_1_68 = 2856516369;
unsigned long int var_1_69 = 0;
unsigned char var_1_70 = 2;
double var_1_71 = 4.5;
signed short int var_1_72 = -64;
unsigned long int var_1_73 = 4;
float var_1_74 = 2.2;
signed short int var_1_75 = 128;
signed long int var_1_76 = 25;
unsigned short int var_1_77 = 61109;
unsigned short int var_1_78 = 4;
double var_1_79 = 128.2;
double var_1_80 = 255.2;
double var_1_81 = 255.25;
double var_1_82 = 5.25;
signed short int var_1_83 = -5;
double var_1_84 = 9.4;
signed char var_1_85 = 1;
signed char var_1_86 = 16;
unsigned long int var_1_87 = 10;
signed short int var_1_88 = 128;
unsigned char var_1_89 = 5;
unsigned char var_1_90 = 5;
signed char var_1_91 = 32;
unsigned short int var_1_92 = 128;
unsigned short int var_1_93 = 64;
unsigned char var_1_94 = 5;
signed long int var_1_95 = 64;
unsigned char var_1_96 = 25;
unsigned char var_1_97 = 8;
unsigned char var_1_98 = 32;
signed short int var_1_99 = -32;
signed short int var_1_100 = 18178;
signed short int var_1_101 = 256;
unsigned char var_1_102 = 0;
signed char var_1_103 = 10;
unsigned short int var_1_104 = 16919;
unsigned short int var_1_105 = 32414;
signed char var_1_106 = 64;
signed char var_1_107 = 64;
signed char var_1_108 = 32;
signed long int var_1_109 = 10;
unsigned short int var_1_110 = 100;
unsigned long int var_1_111 = 100;
float var_1_112 = 16.75;
unsigned char var_1_113 = 1;
double var_1_114 = 255.4;
unsigned char var_1_115 = 1;
double var_1_116 = 7.5;
unsigned char var_1_117 = 0;
unsigned short int var_1_118 = 4;
unsigned short int var_1_119 = 5;
float var_1_120 = 500.75;
float var_1_121 = 0.0;
float var_1_122 = 0.0;
float var_1_123 = 0.0;
float var_1_124 = 128.8;
unsigned char var_1_125 = 0;
unsigned long int var_1_126 = 256;
unsigned short int var_1_127 = 100;
signed char var_1_128 = 0;
unsigned long int var_1_129 = 100000;
unsigned char var_1_130 = 32;
double var_1_131 = 9.25;
signed short int var_1_132 = 4;
signed long int var_1_133 = -32;
unsigned char var_1_134 = 1;
double var_1_135 = 16.5;
signed long int var_1_136 = -16;
unsigned short int var_1_137 = 4;
signed short int var_1_138 = 128;
unsigned char var_1_139 = 1;
signed short int var_1_140 = 256;
double var_1_141 = 10.25;
unsigned short int var_1_142 = 0;
unsigned short int var_1_143 = 24084;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 2;
unsigned char last_1_var_1_15 = 1;
signed char last_1_var_1_20 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_26 < (min (var_1_27 , (var_1_28 >> var_1_29)))) {
		if (var_1_26 > var_1_27) {
			var_1_25 = var_1_30;
		} else {
			if (((var_1_29 ^ var_1_28) >> var_1_26) > (abs (var_1_27))) {
				var_1_25 = (abs (var_1_31));
			}
		}
	} else {
		if ((var_1_29 - var_1_31) <= (~ (var_1_32 - var_1_33))) {
			var_1_25 = (max ((var_1_30 + var_1_34) , (abs (var_1_31))));
		} else {
			var_1_25 = var_1_30;
		}
	}


	// From: CodeObject2
	if ((1 << var_1_27) < var_1_30) {
		var_1_35 = (abs (var_1_31));
	} else {
		if (((var_1_25 ^ var_1_26) % var_1_36) <= var_1_34) {
			var_1_35 = -5;
		} else {
			var_1_35 = var_1_29;
		}
	}


	// From: CodeObject3
	if ((max (var_1_38 , (var_1_39 * var_1_40))) < (abs (var_1_41))) {
		var_1_37 = var_1_29;
	} else {
		if ((64.5f + (min (var_1_38 , var_1_39))) <= var_1_41) {
			if (var_1_42) {
				var_1_37 = (abs (var_1_29));
			} else {
				var_1_37 = (min (var_1_29 , var_1_43));
			}
		}
	}


	// From: CodeObject4
	if (var_1_30 >= var_1_45) {
		var_1_44 = (((~ 8u) < 8u) && var_1_46);
	}


	// From: CodeObject5
	if (var_1_46 || var_1_44) {
		if (var_1_42 && ((var_1_38 * var_1_39) > var_1_40)) {
			var_1_47 = ((var_1_29 + var_1_37) - 2);
		}
	}


	// From: CodeObject6
	if (((abs (var_1_49)) - var_1_29) <= var_1_43) {
		var_1_48 = var_1_50;
	} else {
		if (var_1_50) {
			if (var_1_35 >= var_1_27) {
				var_1_48 = ((var_1_28 <= (var_1_45 & var_1_31)) && var_1_46);
			}
		}
	}


	// From: CodeObject7
	if ((abs (abs (128.75f))) > (abs (var_1_38))) {
		if ((var_1_32 >> var_1_49) >= ((abs (var_1_52)) - var_1_33)) {
			var_1_51 = (var_1_53 - (var_1_54 - (abs (var_1_55))));
		} else {
			var_1_51 = ((abs (min (8.25 , var_1_55))) + (var_1_56 - (abs (var_1_57))));
		}
	}


	// From: CodeObject8
	var_1_58 = (max ((min (var_1_31 , var_1_33)) , (abs (var_1_37))));


	// From: CodeObject9
	if ((abs (var_1_54)) > var_1_51) {
		var_1_59 = (var_1_29 - (abs (var_1_60)));
	} else {
		var_1_59 = (max (-16 , (abs (var_1_60))));
	}


	// From: CodeObject10
	if (var_1_31 < var_1_30) {
		var_1_61 = (abs (var_1_29));
	} else {
		if (var_1_46) {
			var_1_61 = var_1_29;
		} else {
			var_1_61 = 2;
		}
	}


	// From: CodeObject11
	if (var_1_50 && (var_1_26 <= var_1_61)) {
		var_1_62 = (abs (var_1_29));
	} else {
		var_1_62 = (abs (var_1_29));
	}


	// From: CodeObject12
	if ((25.7 + var_1_56) <= (- var_1_57)) {
		var_1_63 = (abs (var_1_57));
	}


	// From: CodeObject13
	if (var_1_44) {
		if (((var_1_47 >> var_1_52) % (max (var_1_49 , var_1_36))) <= var_1_43) {
			if (256.2f < var_1_53) {
				var_1_64 = (var_1_29 + 4);
			} else {
				var_1_64 = (min (var_1_29 , (abs (var_1_65))));
			}
		}
	} else {
		var_1_64 = var_1_66;
	}


	// From: CodeObject14
	if (var_1_56 <= var_1_41) {
		var_1_67 = (abs (abs (var_1_68 - var_1_61)));
	}


	// From: CodeObject15
	if ((min ((var_1_53 / 15.5f) , var_1_38)) >= 4.845) {
		if (var_1_33 < var_1_43) {
			var_1_69 = (min ((abs (var_1_66)) , var_1_43));
		}
	} else {
		var_1_69 = (min (var_1_33 , var_1_37));
	}


	// From: CodeObject16
	if ((16 / (min (var_1_49 , var_1_36))) != var_1_47) {
		var_1_70 = (min ((abs (abs (128))) , var_1_29));
	} else {
		if (var_1_41 > var_1_51) {
			var_1_70 = (abs (abs (var_1_65)));
		} else {
			var_1_70 = (max (var_1_66 , 25));
		}
	}


	// From: CodeObject17
	if (var_1_66 <= var_1_59) {
		var_1_71 = (var_1_56 - var_1_54);
	} else {
		var_1_71 = var_1_55;
	}


	// From: CodeObject18
	if (var_1_55 > (var_1_71 + 32.25)) {
		var_1_72 = (abs (max (var_1_29 , (max (var_1_59 , var_1_70)))));
	} else {
		if ((1u ^ 8u) <= var_1_70) {
			var_1_72 = (abs (var_1_60));
		}
	}


	// From: CodeObject19
	if (var_1_49 <= var_1_69) {
		var_1_73 = var_1_49;
	}


	// From: CodeObject20
	if (var_1_48 && var_1_50) {
		var_1_74 = (var_1_57 + var_1_56);
	}


	// From: CodeObject21
	if (var_1_64 < var_1_52) {
		var_1_75 = var_1_64;
	}


	// From: CodeObject22
	if (var_1_37 < (var_1_77 - var_1_78)) {
		if ((var_1_31 - var_1_61) < (var_1_67 / var_1_36)) {
			var_1_76 = (abs (var_1_62));
		} else {
			var_1_76 = var_1_70;
		}
	}


	// From: CodeObject23
	if (var_1_57 < (- var_1_53)) {
		var_1_79 = (((var_1_80 + var_1_81) + var_1_82) + var_1_57);
	}


	// From: CodeObject24
	if (var_1_45 > (min (var_1_36 , var_1_31))) {
		var_1_83 = (abs (var_1_49));
	} else {
		if (var_1_42) {
			var_1_83 = 100;
		} else {
			var_1_83 = var_1_70;
		}
	}


	// From: CodeObject25
	if (var_1_31 <= (abs (var_1_83))) {
		var_1_84 = (min (var_1_56 , var_1_54));
	}


	// From: CodeObject26
	if (-2 >= var_1_34) {
		if (-4 > (var_1_66 + var_1_37)) {
			var_1_85 = (abs (-10));
		}
	} else {
		if (var_1_26 >= (var_1_30 | var_1_25)) {
			if (! ((var_1_29 % var_1_36) < (~ 5u))) {
				var_1_85 = (abs (var_1_86));
			}
		}
	}


	// From: CodeObject27
	if (var_1_66 < var_1_31) {
		if (var_1_34 > -8) {
			if (var_1_42 || var_1_50) {
				if (var_1_88 >= var_1_78) {
					var_1_87 = var_1_64;
				}
			}
		}
	} else {
		var_1_87 = (abs (max (8u , (var_1_86 + var_1_29))));
	}


	// From: CodeObject28
	if (var_1_46) {
		if ((max (var_1_90 , (- var_1_28))) <= var_1_75) {
			if (var_1_60 <= 100) {
				var_1_89 = 5;
			} else {
				var_1_89 = (abs (max (var_1_86 , var_1_65)));
			}
		}
	} else {
		var_1_89 = (min (var_1_66 , var_1_86));
	}


	// From: CodeObject29
	if ((abs (var_1_29)) < var_1_61) {
		if (var_1_86 > var_1_68) {
			var_1_91 = (abs (var_1_86));
		}
	} else {
		var_1_91 = var_1_29;
	}


	// From: CodeObject30
	if (var_1_46) {
		if (var_1_60 > 32) {
			var_1_92 = ((var_1_93 + var_1_90) + var_1_64);
		} else {
			var_1_92 = var_1_29;
		}
	}


	// From: CodeObject31
	if ((var_1_34 & var_1_37) > (var_1_33 - var_1_95)) {
		var_1_94 = (var_1_86 + (min ((var_1_29 + var_1_96) , (var_1_97 + var_1_98))));
	}


	// From: CodeObject32
	var_1_99 = ((min ((var_1_100 - 8) , var_1_90)) - (min (var_1_65 , var_1_98)));


	// From: CodeObject33
	if (var_1_97 <= var_1_98) {
		if ((var_1_25 + var_1_49) > var_1_87) {
			var_1_101 = (abs (-10));
		}
	}


	// From: CodeObject34
	if (var_1_83 <= var_1_66) {
		var_1_102 = (var_1_46 || (! var_1_50));
	}


	// From: CodeObject35
	if ((var_1_58 <= 16u) && (var_1_41 == var_1_82)) {
		if (var_1_63 <= var_1_55) {
			if ((var_1_60 % (max (256 , var_1_77))) <= (abs (var_1_49))) {
				var_1_103 = (max ((max (var_1_96 , var_1_29)) , var_1_86));
			} else {
				if ((abs (var_1_59)) < (var_1_61 | (~ var_1_66))) {
					var_1_103 = (var_1_96 - var_1_98);
				}
			}
		} else {
			if (var_1_75 <= var_1_60) {
				var_1_103 = (max (var_1_60 , 8));
			}
		}
	} else {
		if (((var_1_104 + var_1_105) - var_1_70) <= 5) {
			if (var_1_68 > var_1_98) {
				var_1_103 = (max (var_1_98 , (max ((max (var_1_60 , -16)) , 0))));
			}
		} else {
			var_1_103 = (min (((var_1_106 - var_1_98) - var_1_86) , (var_1_97 - (var_1_107 - var_1_108))));
		}
	}


	// From: CodeObject36
	if (var_1_25 > (max (var_1_36 , var_1_83))) {
		if ((abs (var_1_59)) >= ((max (var_1_91 , var_1_36)) & var_1_92)) {
			var_1_109 = ((abs (var_1_59 + var_1_99)) - (1348961904 - var_1_77));
		} else {
			var_1_109 = (abs ((abs (1)) + var_1_43));
		}
	} else {
		if ((var_1_79 <= var_1_55) || (var_1_80 <= (var_1_53 + var_1_71))) {
			var_1_109 = (abs (var_1_92));
		}
	}


	// From: CodeObject37
	if ((var_1_107 ^ var_1_78) >= (var_1_98 / var_1_100)) {
		var_1_110 = (abs (var_1_78));
	} else {
		var_1_110 = (abs (max (var_1_104 , var_1_43)));
	}


	// From: CodeObject38
	if (var_1_87 >= var_1_66) {
		var_1_111 = (max (var_1_31 , var_1_110));
	} else {
		var_1_111 = (min ((var_1_68 - (abs (var_1_90))) , var_1_107));
	}


	// From: CodeObject39
	if (var_1_86 <= var_1_35) {
		var_1_112 = (max (var_1_56 , var_1_80));
	}


	// From: CodeObject40
	if ((abs (var_1_40)) != (- var_1_84)) {
		if ((min (var_1_114 , var_1_53)) < var_1_40) {
			if (var_1_111 < var_1_67) {
				if ((~ var_1_26) == var_1_73) {
					var_1_113 = (var_1_50 && var_1_115);
				} else {
					if (var_1_26 < var_1_109) {
						if ((var_1_41 / var_1_54) != (var_1_38 / var_1_116)) {
							var_1_113 = (! (var_1_46 || var_1_117));
						}
					}
				}
			} else {
				if (var_1_46) {
					var_1_113 = (! var_1_50);
				}
			}
		}
	}


	// From: CodeObject41
	if (var_1_55 >= var_1_63) {
		if ((min (var_1_74 , var_1_40)) < var_1_57) {
			var_1_118 = (max ((min (var_1_96 , var_1_97)) , var_1_89));
		}
	}


	// From: CodeObject42
	if (var_1_59 >= var_1_111) {
		var_1_119 = (max (var_1_107 , var_1_89));
	} else {
		var_1_119 = (abs (var_1_108));
	}


	// From: CodeObject43
	if ((abs (abs (var_1_92))) == (var_1_29 - var_1_110)) {
		if (var_1_87 >= var_1_118) {
			var_1_120 = ((min (var_1_56 , var_1_53)) - ((var_1_121 + var_1_122) - (var_1_123 - var_1_124)));
		} else {
			if (var_1_89 > var_1_37) {
				var_1_120 = var_1_124;
			}
		}
	}


	// From: CodeObject44
	if (var_1_48) {
		var_1_125 = var_1_50;
	}


	// From: CodeObject45
	if (var_1_102) {
		var_1_126 = var_1_64;
	} else {
		var_1_126 = var_1_65;
	}


	// From: CodeObject46
	if (var_1_125) {
		var_1_127 = var_1_86;
	}


	// From: CodeObject47
	if (var_1_113) {
		var_1_128 = var_1_106;
	} else {
		var_1_128 = var_1_86;
	}


	// From: CodeObject48
	if (var_1_42) {
		var_1_129 = 4u;
	}


	// From: CodeObject49
	if (var_1_125) {
		var_1_130 = var_1_97;
	}


	// From: CodeObject50
	var_1_131 = var_1_82;


	// From: CodeObject51
	if (var_1_48) {
		var_1_132 = var_1_130;
	}


	// From: CodeObject52
	if (var_1_134) {
		var_1_133 = var_1_88;
	}


	// From: CodeObject53
	var_1_135 = var_1_53;


	// From: CodeObject54
	var_1_136 = var_1_94;


	// From: CodeObject55
	var_1_137 = var_1_107;


	// From: CodeObject56
	if (var_1_134) {
		var_1_138 = var_1_59;
	} else {
		var_1_138 = 256;
	}


	// From: CodeObject57
	if (var_1_48) {
		var_1_139 = var_1_50;
	}


	// From: CodeObject58
	if (((abs (var_1_55)) < (var_1_141 + var_1_116)) || var_1_115) {
		var_1_140 = (abs (var_1_29));
	}


	// From: CodeObject59
	if ((var_1_47 & var_1_36) > var_1_78) {
		var_1_142 = ((var_1_105 + var_1_143) - (var_1_29 + var_1_64));
	}


	// From: Req4Batch32PS_CN_500
	if (var_1_5 >= var_1_6) {
		if (last_1_var_1_1 <= last_1_var_1_20) {
			var_1_15 = var_1_16;
		} else {
			if (last_1_var_1_15 || var_1_16) {
				var_1_15 = var_1_17;
			}
		}
	} else {
		var_1_15 = var_1_17;
	}


	// From: Req5Batch32PS_CN_500
	unsigned char stepLocal_1 = var_1_15;
	unsigned char stepLocal_0 = var_1_15;
	if (var_1_17 || stepLocal_0) {
		if (var_1_15 && stepLocal_1) {
			var_1_18 = (var_1_11 + var_1_19);
		} else {
			var_1_18 = var_1_19;
		}
	}


	// From: Req3Batch32PS_CN_500
	if ((var_1_12 * (min (var_1_18 , var_1_11))) > (- var_1_18)) {
		if (var_1_6 <= var_1_8) {
			if (var_1_15) {
				var_1_13 = var_1_8;
			} else {
				var_1_13 = var_1_5;
			}
		}
	}


	// From: Req6Batch32PS_CN_500
	if (var_1_11 == var_1_18) {
		var_1_20 = ((var_1_5 + var_1_21) + var_1_8);
	}


	// From: Req1Batch32PS_CN_500
	if (-32 < var_1_13) {
		var_1_1 = (((var_1_4 - var_1_5) + var_1_6) - (var_1_7 + (abs (var_1_8))));
	}


	// From: Req2Batch32PS_CN_500
	if ((var_1_13 + (max (var_1_13 , var_1_6))) == var_1_5) {
		var_1_9 = ((4.5f + var_1_11) - var_1_12);
	} else {
		var_1_9 = var_1_12;
	}


	// From: Req7Batch32PS_CN_500
	var_1_22 = var_1_12;


	// From: Req8Batch32PS_CN_500
	var_1_23 = var_1_8;


	// From: Req9Batch32PS_CN_500
	var_1_24 = var_1_6;
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 95);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 64);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 64);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -31);
	assume_abort_if_not(var_1_21 <= 31);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -1073741823);
	assume_abort_if_not(var_1_30 <= 1073741823);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 2147483646);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -1073741823);
	assume_abort_if_not(var_1_34 <= 1073741823);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	assume_abort_if_not(var_1_36 != 0);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 65534);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -2147483648);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 127);
	assume_abort_if_not(var_1_49 <= 255);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967295);
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854765600e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= 4611686.018427382800e+12F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -461168.6018427382800e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427382800e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -63);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 254);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 2147483647);
	assume_abort_if_not(var_1_68 <= 4294967294);
	var_1_77 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_77 >= 32767);
	assume_abort_if_not(var_1_77 <= 65535);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 32767);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= -115292.1504606845700e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 1152921.504606845700e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= -115292.1504606845700e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 1152921.504606845700e+12F && var_1_81 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= -230584.3009213691390e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 2305843.009213691390e+12F && var_1_82 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 63);
	var_1_88 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_88 >= -32768);
	assume_abort_if_not(var_1_88 <= 32767);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 255);
	var_1_93 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 16384);
	var_1_95 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 2147483647);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 63);
	var_1_97 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_97 >= 0);
	assume_abort_if_not(var_1_97 <= 64);
	var_1_98 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_98 >= 0);
	assume_abort_if_not(var_1_98 <= 63);
	var_1_100 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_100 >= 16382);
	assume_abort_if_not(var_1_100 <= 32766);
	var_1_104 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_104 >= 16383);
	assume_abort_if_not(var_1_104 <= 32768);
	var_1_105 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_105 >= 16384);
	assume_abort_if_not(var_1_105 <= 32767);
	var_1_106 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_106 >= 62);
	assume_abort_if_not(var_1_106 <= 126);
	var_1_107 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_107 >= 63);
	assume_abort_if_not(var_1_107 <= 126);
	var_1_108 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 63);
	var_1_114 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_114 >= -922337.2036854776000e+13F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 9223372.036854776000e+12F && var_1_114 >= 1.0e-20F ));
	var_1_115 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_115 >= 1);
	assume_abort_if_not(var_1_115 <= 1);
	var_1_116 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_116 >= -922337.2036854776000e+13F && var_1_116 <= -1.0e-20F) || (var_1_116 <= 9223372.036854776000e+12F && var_1_116 >= 1.0e-20F ));
	assume_abort_if_not(var_1_116 != 0.0F);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 0);
	var_1_121 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_121 >= 2305843.009213691390e+12F && var_1_121 <= -1.0e-20F) || (var_1_121 <= 4611686.018427382800e+12F && var_1_121 >= 1.0e-20F ));
	var_1_122 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_122 >= 2305843.009213691390e+12F && var_1_122 <= -1.0e-20F) || (var_1_122 <= 4611686.018427382800e+12F && var_1_122 >= 1.0e-20F ));
	var_1_123 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_123 >= 2305843.009213691390e+12F && var_1_123 <= -1.0e-20F) || (var_1_123 <= 4611686.018427382800e+12F && var_1_123 >= 1.0e-20F ));
	var_1_124 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_124 >= 0.0F && var_1_124 <= -1.0e-20F) || (var_1_124 <= 2305843.009213691390e+12F && var_1_124 >= 1.0e-20F ));
	var_1_134 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_134 >= 0);
	assume_abort_if_not(var_1_134 <= 1);
	var_1_141 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_141 >= -922337.2036854776000e+13F && var_1_141 <= -1.0e-20F) || (var_1_141 <= 9223372.036854776000e+12F && var_1_141 >= 1.0e-20F ));
	var_1_143 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_143 >= 16384);
	assume_abort_if_not(var_1_143 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((((((-32 < var_1_13) ? (var_1_1 == ((unsigned char) (((var_1_4 - var_1_5) + var_1_6) - (var_1_7 + (abs (var_1_8)))))) : 1) && (((var_1_13 + (max (var_1_13 , var_1_6))) == var_1_5) ? (var_1_9 == ((float) ((4.5f + var_1_11) - var_1_12))) : (var_1_9 == ((float) var_1_12)))) && (((var_1_12 * (min (var_1_18 , var_1_11))) > (- var_1_18)) ? ((var_1_6 <= var_1_8) ? (var_1_15 ? (var_1_13 == ((signed short int) var_1_8)) : (var_1_13 == ((signed short int) var_1_5))) : 1) : 1)) && ((var_1_5 >= var_1_6) ? ((last_1_var_1_1 <= last_1_var_1_20) ? (var_1_15 == ((unsigned char) var_1_16)) : ((last_1_var_1_15 || var_1_16) ? (var_1_15 == ((unsigned char) var_1_17)) : 1)) : (var_1_15 == ((unsigned char) var_1_17)))) && ((var_1_17 || var_1_15) ? ((var_1_15 && var_1_15) ? (var_1_18 == ((float) (var_1_11 + var_1_19))) : (var_1_18 == ((float) var_1_19))) : 1)) && ((var_1_11 == var_1_18) ? (var_1_20 == ((signed char) ((var_1_5 + var_1_21) + var_1_8))) : 1)) && (var_1_22 == ((double) var_1_12))) && (var_1_23 == ((unsigned long int) var_1_8))) && (var_1_24 == ((unsigned long int) var_1_6))
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
