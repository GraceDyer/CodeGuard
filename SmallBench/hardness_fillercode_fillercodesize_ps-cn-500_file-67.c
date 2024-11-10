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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch67PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 9.75;
unsigned char var_1_3 = 1;
signed long int var_1_4 = 25;
unsigned char var_1_6 = 1;
float var_1_7 = 7.5;
signed long int var_1_8 = -1000;
float var_1_9 = 9.25;
float var_1_10 = 64.5;
float var_1_11 = 16.25;
signed char var_1_12 = 2;
signed char var_1_13 = 8;
signed char var_1_14 = 0;
float var_1_15 = 0.6;
signed char var_1_16 = 32;
unsigned short int var_1_17 = 2;
unsigned short int var_1_19 = 63241;
unsigned short int var_1_20 = 58697;
unsigned short int var_1_21 = 25516;
unsigned long int var_1_22 = 3301682525;
double var_1_23 = 128.9;
signed short int var_1_24 = -32;
signed short int var_1_25 = 2;
signed short int var_1_26 = -256;
double var_1_27 = 7.75;
double var_1_28 = 200.6;
unsigned long int var_1_29 = 100000;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 4154314939;
unsigned long int var_1_32 = 4;
unsigned long int var_1_33 = 32;
unsigned long int var_1_34 = 64;
unsigned long int var_1_35 = 500;
signed long int var_1_36 = 500;
unsigned char var_1_37 = 1;
double var_1_38 = 5.75;
unsigned long int var_1_39 = 32;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
float var_1_42 = 255.5;
float var_1_43 = 2.75;
float var_1_44 = 10.5;
float var_1_45 = 2.6;
float var_1_46 = 50.5;
float var_1_47 = 50.6;
float var_1_48 = 256.7;
double var_1_49 = 32.625;
float var_1_50 = 0.4;
unsigned long int var_1_51 = 0;
unsigned short int var_1_52 = 1;
unsigned char var_1_53 = 25;
unsigned long int var_1_54 = 64;
unsigned long int var_1_55 = 8;
unsigned long int var_1_56 = 10;
signed short int var_1_57 = 64;
double var_1_58 = 16.5;
double var_1_59 = 100000000000000.4;
float var_1_60 = 0.5;
float var_1_61 = 127.4;
float var_1_62 = 63.25;
float var_1_63 = 0.4;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 1;
unsigned char var_1_66 = 0;
signed long int var_1_67 = -128;
signed char var_1_68 = 16;
signed char var_1_69 = 8;
unsigned char var_1_70 = 1;
unsigned char var_1_71 = 1;
unsigned char var_1_72 = 1;
signed char var_1_73 = -10;
signed char var_1_74 = -32;
signed long int var_1_75 = -8;
unsigned short int var_1_76 = 16;
signed long int var_1_77 = 1313693589;
signed long int var_1_78 = 500;
unsigned short int var_1_79 = 32;
unsigned short int var_1_80 = 8;
unsigned char var_1_81 = 8;
unsigned short int var_1_82 = 56074;
unsigned short int var_1_83 = 34483;
signed long int var_1_84 = -64;
unsigned long int var_1_85 = 128;
signed short int var_1_86 = 4;
double var_1_87 = 25.6;
double var_1_88 = 128.5;
signed short int var_1_89 = -2;
unsigned short int var_1_90 = 16;
signed char var_1_91 = -8;
signed short int var_1_92 = 2;
signed short int var_1_93 = -16;
float var_1_94 = 9999999999999.9;
double var_1_95 = 5.875;
unsigned short int var_1_96 = 64;
float var_1_97 = 127.8;
unsigned char var_1_98 = 16;
signed short int var_1_99 = -1;
signed short int var_1_100 = 29869;
signed short int var_1_101 = -16;
unsigned char var_1_102 = 1;
signed short int var_1_103 = -256;
signed short int var_1_104 = -64;
signed char var_1_105 = 64;
signed char var_1_106 = -4;
signed char var_1_107 = 64;
float var_1_108 = -0.9;
float var_1_109 = 0.0;
unsigned char var_1_110 = 128;
unsigned char var_1_111 = 128;
unsigned char var_1_112 = 4;
unsigned char var_1_113 = 64;
unsigned char var_1_114 = 25;
unsigned short int var_1_115 = 256;
signed long int var_1_116 = -100;
double var_1_117 = 256.6;
signed long int var_1_118 = -256;
unsigned char var_1_119 = 8;
unsigned long int var_1_120 = 1;
signed long int var_1_121 = -2;
unsigned long int var_1_122 = 128;
signed char var_1_123 = 0;
float var_1_124 = 25.8;
signed short int var_1_125 = -5;
unsigned short int var_1_126 = 2;
unsigned short int var_1_127 = 8;
double var_1_128 = 49.875;
signed long int var_1_129 = 10;
signed char var_1_130 = 1;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 9.75;
unsigned char last_1_var_1_3 = 1;
float last_1_var_1_7 = 7.5;
signed char last_1_var_1_12 = 2;
float last_1_var_1_15 = 0.6;
unsigned short int last_1_var_1_17 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_24 < (var_1_25 + var_1_26)) {
		if (5 <= var_1_25) {
			var_1_23 = 4.7;
		}
	} else {
		var_1_23 = (max (var_1_27 , var_1_28));
	}


	// From: CodeObject2
	if (var_1_30) {
		if ((abs (var_1_25)) > ((-10 + var_1_26) & var_1_24)) {
			var_1_29 = ((abs (var_1_31 - 64u)) - var_1_32);
		} else {
			var_1_29 = ((abs (var_1_32)) + (var_1_33 + (min (var_1_34 , var_1_35))));
		}
	}


	// From: CodeObject3
	if (var_1_32 >= var_1_35) {
		var_1_36 = (abs (abs (var_1_31)));
	}


	// From: CodeObject4
	if (var_1_27 > (var_1_23 / var_1_38)) {
		if (var_1_39 >= var_1_36) {
			if (var_1_35 < var_1_34) {
				var_1_37 = 0;
			} else {
				var_1_37 = (var_1_40 || var_1_41);
			}
		}
	}


	// From: CodeObject5
	var_1_42 = ((var_1_43 + var_1_44) + (min ((max (var_1_45 , var_1_46)) , (var_1_47 + var_1_48))));


	// From: CodeObject6
	if (var_1_45 <= (min ((abs (0.19999999999999996f)) , (abs (var_1_50))))) {
		var_1_49 = (max ((abs (abs (128.2))) , var_1_45));
	}


	// From: CodeObject7
	if (var_1_40) {
		if ((abs (var_1_25)) > (min ((var_1_26 & var_1_39) , var_1_33))) {
			var_1_51 = (var_1_31 - (abs (abs (var_1_35))));
		}
	}


	// From: CodeObject8
	if (! var_1_37) {
		if ((var_1_35 >> (var_1_53 - 8)) <= 32u) {
			var_1_52 = 32;
		}
	}


	// From: CodeObject9
	if (var_1_40 && var_1_30) {
		var_1_54 = (abs (var_1_35));
	}


	// From: CodeObject10
	if (var_1_32 <= (var_1_33 ^ var_1_31)) {
		if ((- var_1_50) == (- var_1_38)) {
			var_1_55 = (max (var_1_33 , (var_1_31 - var_1_52)));
		}
	} else {
		var_1_55 = (1u + var_1_32);
	}


	// From: CodeObject11
	if ((abs (var_1_32)) <= (var_1_54 | var_1_34)) {
		var_1_56 = (abs (abs (min (var_1_32 , var_1_52))));
	}


	// From: CodeObject12
	if ((- var_1_50) > 8.4f) {
		var_1_57 = (abs (abs (var_1_53)));
	}


	// From: CodeObject13
	if (var_1_29 < var_1_36) {
		var_1_58 = (max ((abs (8.75)) , var_1_27));
	} else {
		if (var_1_28 >= var_1_43) {
			if (var_1_47 < var_1_46) {
				var_1_58 = (var_1_59 - (abs (abs (var_1_48))));
			} else {
				var_1_58 = (max ((var_1_47 + var_1_45) , (max ((abs (var_1_43)) , var_1_46))));
			}
		}
	}


	// From: CodeObject14
	if (var_1_30) {
		if (var_1_50 < var_1_46) {
			var_1_60 = (var_1_59 - (max (var_1_61 , (var_1_62 + var_1_63))));
		} else {
			if ((~ (var_1_33 ^ var_1_32)) <= ((abs (var_1_36)) / var_1_53)) {
				var_1_60 = var_1_48;
			} else {
				var_1_60 = (var_1_62 + var_1_63);
			}
		}
	} else {
		if ((var_1_33 >> var_1_32) < 4u) {
			var_1_60 = (abs (abs (4.7f)));
		}
	}


	// From: CodeObject15
	if (var_1_46 < var_1_45) {
		var_1_64 = (var_1_40 || var_1_65);
	}


	// From: CodeObject16
	if (1 > var_1_53) {
		if (var_1_51 != (var_1_39 | (abs (var_1_34)))) {
			var_1_66 = var_1_53;
		} else {
			if ((var_1_51 & var_1_29) < (var_1_32 | var_1_34)) {
				if (var_1_30) {
					var_1_66 = (abs (abs (abs (var_1_53))));
				}
			} else {
				var_1_66 = var_1_53;
			}
		}
	}


	// From: CodeObject17
	if (var_1_54 > (100u & (var_1_36 & var_1_35))) {
		var_1_67 = (abs ((var_1_52 + var_1_25) + (max (var_1_24 , -100000))));
	}


	// From: CodeObject18
	if (var_1_30) {
		if (var_1_54 >= var_1_35) {
			if (var_1_65) {
				var_1_68 = (var_1_53 - (max (32 , var_1_69)));
			}
		}
	} else {
		var_1_68 = (min (var_1_69 , var_1_53));
	}


	// From: CodeObject19
	if (var_1_26 >= (var_1_39 * var_1_55)) {
		var_1_70 = (! ((var_1_65 && var_1_71) && var_1_72));
	}


	// From: CodeObject20
	if ((min (var_1_48 , var_1_61)) == var_1_38) {
		if ((min (5 , (var_1_57 | var_1_26))) > var_1_39) {
			var_1_73 = var_1_69;
		} else {
			var_1_73 = (abs (var_1_69));
		}
	} else {
		var_1_73 = (max (var_1_69 , (var_1_53 + var_1_74)));
	}


	// From: CodeObject21
	if ((abs (var_1_68)) > (32 ^ var_1_25)) {
		if (var_1_24 >= (25 & var_1_54)) {
			var_1_75 = (min ((var_1_74 + (var_1_25 + -256)) , 0));
		} else {
			if (var_1_72) {
				var_1_75 = (max ((max (var_1_57 , (abs (-10)))) , 100));
			} else {
				var_1_75 = ((min ((min (var_1_52 , var_1_34)) , var_1_66)) - (abs (var_1_68)));
			}
		}
	} else {
		if ((var_1_54 % (var_1_53 + var_1_76)) <= 0u) {
			if (var_1_48 <= (var_1_50 + var_1_59)) {
				var_1_75 = (abs (var_1_66 + var_1_52));
			}
		}
	}


	// From: CodeObject22
	if (var_1_72) {
		if (var_1_73 > (abs (var_1_53))) {
			if (var_1_70) {
				var_1_79 = (var_1_69 + (abs (var_1_66)));
			}
		} else {
			var_1_79 = (min (var_1_69 , var_1_53));
		}
	}


	// From: CodeObject23
	if (var_1_40) {
		if ((- var_1_24) >= (var_1_67 | var_1_51)) {
			if (var_1_81 >= (var_1_67 * var_1_33)) {
				var_1_80 = (abs (var_1_81));
			} else {
				var_1_80 = (abs (var_1_69));
			}
		} else {
			var_1_80 = ((max (var_1_82 , var_1_83)) - var_1_69);
		}
	}


	// From: CodeObject24
	if (var_1_37) {
		var_1_84 = ((min (var_1_77 , (max (32 , var_1_53)))) - (min (var_1_66 , var_1_78)));
	} else {
		var_1_84 = (abs ((abs (var_1_66)) + var_1_80));
	}


	// From: CodeObject25
	if (var_1_56 <= (var_1_52 * var_1_75)) {
		if (var_1_65) {
			var_1_85 = (abs (abs (var_1_69)));
		}
	}


	// From: CodeObject26
	if ((var_1_66 ^ var_1_84) < (var_1_69 | (var_1_33 << var_1_78))) {
		var_1_86 = (-16 + (abs (var_1_81)));
	}


	// From: CodeObject27
	if ((~ (-1000 + var_1_25)) > var_1_53) {
		if (var_1_72) {
			if (var_1_30) {
				if (var_1_33 > var_1_52) {
					if ((var_1_66 + var_1_33) > var_1_77) {
						var_1_87 = ((abs (var_1_48)) + var_1_88);
					} else {
						var_1_87 = (abs ((abs (var_1_48)) - (abs (128.5))));
					}
				} else {
					if (var_1_65) {
						var_1_87 = (max ((max ((abs (var_1_61)) , var_1_48)) , -0.8));
					} else {
						var_1_87 = (max (var_1_88 , var_1_59));
					}
				}
			} else {
				var_1_87 = var_1_43;
			}
		}
	} else {
		var_1_87 = (abs (var_1_62));
	}


	// From: CodeObject28
	if ((abs (var_1_61)) <= (abs (var_1_46))) {
		var_1_89 = (abs (min ((-256 + var_1_73) , (max (var_1_81 , var_1_69)))));
	}


	// From: CodeObject29
	if (var_1_39 >= var_1_32) {
		if (var_1_25 >= 16) {
			var_1_90 = (min (var_1_69 , var_1_53));
		}
	}


	// From: CodeObject30
	if (var_1_65) {
		if (var_1_71) {
			var_1_91 = (max ((min (var_1_74 , (min (4 , var_1_69)))) , var_1_53));
		} else {
			var_1_91 = (abs (abs (var_1_53)));
		}
	}


	// From: CodeObject31
	if (var_1_28 <= var_1_63) {
		var_1_92 = var_1_73;
	} else {
		if (var_1_78 <= var_1_54) {
			if (var_1_70) {
				var_1_92 = (max ((min ((max (var_1_93 , var_1_66)) , var_1_68)) , (abs (var_1_74))));
			}
		} else {
			var_1_92 = (var_1_53 + (abs (var_1_68)));
		}
	}


	// From: CodeObject32
	if (var_1_69 == (abs (var_1_53))) {
		if (var_1_76 < var_1_52) {
			var_1_94 = (var_1_62 + var_1_44);
		} else {
			var_1_94 = ((var_1_63 + var_1_62) - var_1_61);
		}
	}


	// From: CodeObject33
	if (64 <= var_1_93) {
		if (var_1_37) {
			var_1_95 = (max (var_1_47 , (max (var_1_61 , (max (24.3 , var_1_62))))));
		}
	}


	// From: CodeObject34
	var_1_96 = (max (var_1_66 , var_1_81));


	// From: CodeObject35
	if (var_1_28 >= (abs (var_1_62 - var_1_63))) {
		if ((var_1_80 < var_1_83) && var_1_71) {
			var_1_97 = ((abs (var_1_27)) - var_1_61);
		}
	}


	// From: CodeObject36
	var_1_98 = var_1_53;


	// From: CodeObject37
	if (var_1_80 < (var_1_85 & var_1_77)) {
		if (var_1_24 > ((var_1_77 >> var_1_53) % (abs (var_1_76)))) {
			if (var_1_26 <= var_1_24) {
				if (var_1_46 < var_1_94) {
					var_1_99 = (var_1_98 - (var_1_100 - (abs (var_1_91))));
				} else {
					var_1_99 = (var_1_53 - var_1_81);
				}
			}
		} else {
			var_1_99 = (abs (abs (var_1_101)));
		}
	} else {
		var_1_99 = (abs (var_1_91));
	}


	// From: CodeObject38
	if ((var_1_77 * var_1_52) >= var_1_82) {
		if (var_1_64) {
			var_1_102 = (! var_1_40);
		}
	} else {
		var_1_102 = ((var_1_36 <= var_1_90) && var_1_40);
	}


	// From: CodeObject39
	if (var_1_65) {
		var_1_103 = (max (var_1_104 , (abs (var_1_101))));
	}


	// From: CodeObject40
	if (var_1_39 > 8u) {
		var_1_105 = ((var_1_53 - (abs (var_1_74))) + var_1_106);
	} else {
		if ((var_1_53 % var_1_83) <= var_1_68) {
			var_1_105 = ((var_1_107 - var_1_53) - var_1_69);
		}
	}


	// From: CodeObject41
	if (var_1_37) {
		if (var_1_30 || (var_1_107 < -128)) {
			var_1_108 = 1.75f;
		}
	} else {
		var_1_108 = (((abs (var_1_109)) - var_1_62) - var_1_63);
	}


	// From: CodeObject42
	if (var_1_30) {
		var_1_110 = (var_1_111 - var_1_69);
	}


	// From: CodeObject43
	if (var_1_102) {
		if ((- var_1_23) <= var_1_38) {
			var_1_112 = (max ((var_1_111 - var_1_53) , var_1_69));
		}
	} else {
		if (var_1_74 < (var_1_57 / (abs (1)))) {
			if (var_1_71) {
				if (var_1_41) {
					var_1_112 = (var_1_107 + (max (var_1_53 , (var_1_113 - var_1_114))));
				} else {
					var_1_112 = var_1_113;
				}
			}
		} else {
			var_1_112 = var_1_114;
		}
	}


	// From: CodeObject44
	if (var_1_65) {
		var_1_115 = var_1_100;
	}


	// From: CodeObject45
	if (var_1_71) {
		var_1_116 = var_1_73;
	}


	// From: CodeObject46
	if (var_1_37) {
		var_1_117 = var_1_45;
	}


	// From: CodeObject47
	var_1_118 = var_1_76;


	// From: CodeObject48
	if (var_1_64) {
		var_1_119 = var_1_69;
	}


	// From: CodeObject49
	if (var_1_70) {
		var_1_120 = var_1_113;
	} else {
		var_1_120 = var_1_100;
	}


	// From: CodeObject50
	if (var_1_72) {
		var_1_121 = var_1_73;
	} else {
		var_1_121 = var_1_86;
	}


	// From: CodeObject51
	if (var_1_37) {
		var_1_122 = var_1_35;
	}


	// From: CodeObject52
	if (var_1_64) {
		var_1_123 = var_1_114;
	}


	// From: CodeObject53
	var_1_124 = var_1_48;


	// From: CodeObject54
	if (var_1_64) {
		var_1_125 = var_1_107;
	} else {
		var_1_125 = var_1_114;
	}


	// From: CodeObject55
	if (var_1_64) {
		var_1_126 = var_1_119;
	} else {
		var_1_126 = var_1_107;
	}


	// From: CodeObject56
	if (var_1_64) {
		var_1_127 = var_1_111;
	} else {
		var_1_127 = var_1_100;
	}


	// From: CodeObject57
	var_1_128 = -0.75;


	// From: CodeObject58
	if (var_1_72) {
		var_1_129 = var_1_25;
	} else {
		var_1_129 = var_1_73;
	}


	// From: CodeObject59
	if (((var_1_111 - var_1_53) ^ 8) < var_1_66) {
		if (var_1_88 >= var_1_45) {
			if (var_1_82 >= var_1_54) {
				var_1_130 = (abs (var_1_74));
			} else {
				var_1_130 = var_1_107;
			}
		}
	} else {
		var_1_130 = var_1_114;
	}


	// From: Req6Batch67PS_CN_500
	signed long int stepLocal_2 = (max (var_1_13 , last_1_var_1_17)) | last_1_var_1_12;
	if (last_1_var_1_7 > (var_1_11 + last_1_var_1_15)) {
		if (var_1_14 < stepLocal_2) {
			if (last_1_var_1_3) {
				var_1_16 = -2;
			}
		} else {
			var_1_16 = var_1_13;
		}
	}


	// From: Req7Batch67PS_CN_500
	unsigned long int stepLocal_3 = var_1_22 - var_1_20;
	if (last_1_var_1_3) {
		if (var_1_6) {
			if (last_1_var_1_3) {
				var_1_17 = var_1_14;
			} else {
				var_1_17 = ((min (var_1_19 , var_1_20)) - ((var_1_21 - 256) - 256));
			}
		} else {
			if (stepLocal_3 > (var_1_4 / var_1_8)) {
				if (last_1_var_1_1 >= var_1_10) {
					var_1_17 = var_1_14;
				}
			}
		}
	} else {
		var_1_17 = var_1_21;
	}


	// From: Req2Batch67PS_CN_500
	var_1_3 = (((5 - last_1_var_1_17) <= (last_1_var_1_17 + last_1_var_1_17)) || var_1_6);


	// From: Req1Batch67PS_CN_500
	if (50 != var_1_16) {
		var_1_1 = (1.00000000000025E12 - 24.25);
	}


	// From: Req4Batch67PS_CN_500
	var_1_12 = (var_1_13 - var_1_14);


	// From: Req5Batch67PS_CN_500
	var_1_15 = (abs (var_1_9));


	// From: Req3Batch67PS_CN_500
	unsigned char stepLocal_1 = var_1_3;
	signed long int stepLocal_0 = (var_1_16 + 100) / var_1_8;
	if (stepLocal_0 >= var_1_17) {
		if (stepLocal_1 || (var_1_17 > (var_1_17 * var_1_8))) {
			var_1_7 = var_1_9;
		} else {
			var_1_7 = (var_1_10 + var_1_11);
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 24575);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32768);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32768);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 3221225470);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1073741824);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1073741823);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1073741823);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	assume_abort_if_not(var_1_38 != 0.0F);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 4294967295);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -230584.3009213691390e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 2305843.009213691390e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -230584.3009213691390e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 2305843.009213691390e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -461168.6018427382800e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -230584.3009213691390e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 2305843.009213691390e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -230584.3009213691390e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 2305843.009213691390e+12F && var_1_48 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -922337.2036854776000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854776000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 16);
	assume_abort_if_not(var_1_53 <= 33);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 1);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 126);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 1);
	assume_abort_if_not(var_1_71 <= 1);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= -63);
	assume_abort_if_not(var_1_74 <= 63);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 1);
	assume_abort_if_not(var_1_76 <= 32767);
	var_1_77 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_77 >= 1073741823);
	assume_abort_if_not(var_1_77 <= 2147483646);
	var_1_78 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 1073741823);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 255);
	var_1_82 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_82 >= 32767);
	assume_abort_if_not(var_1_82 <= 65534);
	var_1_83 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_83 >= 32767);
	assume_abort_if_not(var_1_83 <= 65534);
	var_1_88 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_88 >= -461168.6018427382800e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 4611686.018427382800e+12F && var_1_88 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_93 >= -32767);
	assume_abort_if_not(var_1_93 <= 32766);
	var_1_100 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_100 >= 16383);
	assume_abort_if_not(var_1_100 <= 32766);
	var_1_101 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_101 >= -32766);
	assume_abort_if_not(var_1_101 <= 32766);
	var_1_104 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_104 >= -32767);
	assume_abort_if_not(var_1_104 <= 32766);
	var_1_106 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_106 >= -63);
	assume_abort_if_not(var_1_106 <= 63);
	var_1_107 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_107 >= 62);
	assume_abort_if_not(var_1_107 <= 126);
	var_1_109 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_109 >= -922337.2036854765600e+13F && var_1_109 <= -1.0e-20F) || (var_1_109 <= -461168.6018427382800e+13F && var_1_109 >= 1.0e-20F ));
	var_1_111 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_111 >= 127);
	assume_abort_if_not(var_1_111 <= 254);
	var_1_113 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_113 >= 63);
	assume_abort_if_not(var_1_113 <= 127);
	var_1_114 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_114 >= 0);
	assume_abort_if_not(var_1_114 <= 63);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_3 = var_1_3;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return (((((((50 != var_1_16) ? (var_1_1 == ((double) (1.00000000000025E12 - 24.25))) : 1) && (var_1_3 == ((unsigned char) (((5 - last_1_var_1_17) <= (last_1_var_1_17 + last_1_var_1_17)) || var_1_6)))) && ((((var_1_16 + 100) / var_1_8) >= var_1_17) ? ((var_1_3 || (var_1_17 > (var_1_17 * var_1_8))) ? (var_1_7 == ((float) var_1_9)) : (var_1_7 == ((float) (var_1_10 + var_1_11)))) : 1)) && (var_1_12 == ((signed char) (var_1_13 - var_1_14)))) && (var_1_15 == ((float) (abs (var_1_9))))) && ((last_1_var_1_7 > (var_1_11 + last_1_var_1_15)) ? ((var_1_14 < ((max (var_1_13 , last_1_var_1_17)) | last_1_var_1_12)) ? (last_1_var_1_3 ? (var_1_16 == ((signed char) -2)) : 1) : (var_1_16 == ((signed char) var_1_13))) : 1)) && (last_1_var_1_3 ? (var_1_6 ? (last_1_var_1_3 ? (var_1_17 == ((unsigned short int) var_1_14)) : (var_1_17 == ((unsigned short int) ((min (var_1_19 , var_1_20)) - ((var_1_21 - 256) - 256))))) : (((var_1_22 - var_1_20) > (var_1_4 / var_1_8)) ? ((last_1_var_1_1 >= var_1_10) ? (var_1_17 == ((unsigned short int) var_1_14)) : 1) : 1)) : (var_1_17 == ((unsigned short int) var_1_21)))
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
