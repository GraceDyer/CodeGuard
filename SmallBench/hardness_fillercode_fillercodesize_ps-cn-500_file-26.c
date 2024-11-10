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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch26PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 16;
signed long int var_1_4 = -64;
signed char var_1_9 = 10;
unsigned char var_1_10 = 0;
signed char var_1_11 = -1;
unsigned short int var_1_12 = 10000;
float var_1_13 = 5.4;
float var_1_14 = 1.4;
unsigned short int var_1_18 = 32;
double var_1_20 = 1.5;
double var_1_21 = 2.75;
unsigned char var_1_22 = 5;
unsigned short int var_1_23 = 55712;
unsigned char var_1_24 = 5;
signed short int var_1_25 = 10;
float var_1_26 = 64.2;
unsigned short int var_1_27 = 64;
unsigned long int var_1_28 = 4;
unsigned long int var_1_29 = 0;
unsigned long int var_1_30 = 256;
unsigned short int var_1_31 = 53359;
unsigned short int var_1_32 = 64;
unsigned short int var_1_33 = 256;
unsigned short int var_1_34 = 128;
double var_1_35 = 50.2;
unsigned char var_1_36 = 0;
unsigned short int var_1_37 = 10;
double var_1_38 = 16.6;
unsigned char var_1_39 = 100;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 100;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 10;
unsigned char var_1_44 = 0;
float var_1_45 = 5.2;
float var_1_46 = 24.8;
float var_1_47 = 9.875;
unsigned long int var_1_48 = 16;
double var_1_49 = 49.75;
double var_1_50 = 32.5;
double var_1_51 = 1.2;
double var_1_52 = 10.2;
double var_1_53 = 16.75;
unsigned long int var_1_54 = 2;
signed char var_1_55 = 0;
signed char var_1_56 = 5;
unsigned long int var_1_57 = 4270994341;
signed char var_1_58 = -64;
signed char var_1_59 = 4;
signed char var_1_60 = -2;
signed char var_1_61 = 5;
float var_1_62 = 5.625;
float var_1_63 = 15.62;
float var_1_64 = 255.1;
float var_1_65 = 64.5;
float var_1_66 = 256.4;
signed short int var_1_67 = -256;
float var_1_68 = 2.8;
unsigned long int var_1_69 = 128;
signed long int var_1_70 = -10;
unsigned long int var_1_71 = 1;
unsigned long int var_1_72 = 1130561346;
unsigned long int var_1_73 = 32;
unsigned short int var_1_74 = 8;
signed short int var_1_75 = -256;
signed short int var_1_76 = 500;
signed short int var_1_77 = 25145;
unsigned long int var_1_78 = 1;
float var_1_79 = 31.4;
unsigned char var_1_80 = 128;
unsigned char var_1_81 = 0;
float var_1_82 = 255.75;
float var_1_83 = 15.75;
unsigned long int var_1_84 = 0;
signed long int var_1_85 = -25;
signed char var_1_86 = 50;
unsigned long int var_1_87 = 1;
float var_1_88 = 128.2;
unsigned short int var_1_89 = 64;
signed char var_1_90 = -2;
float var_1_91 = 9.25;
unsigned char var_1_92 = 64;
unsigned char var_1_93 = 128;
signed char var_1_94 = -8;
unsigned long int var_1_95 = 256;
signed short int var_1_96 = -64;
unsigned char var_1_97 = 64;
double var_1_98 = 3.4;
unsigned long int var_1_99 = 2;
unsigned long int var_1_100 = 2;
unsigned char var_1_101 = 128;
unsigned short int var_1_102 = 16;
signed short int var_1_103 = 16;
unsigned short int var_1_104 = 1;
double var_1_105 = 32.25;
unsigned long int var_1_106 = 2;
unsigned long int var_1_107 = 32;
double var_1_108 = 9999999.02;
unsigned long int var_1_109 = 100;
unsigned char var_1_110 = 1;
unsigned char var_1_111 = 0;
unsigned short int var_1_112 = 256;
unsigned short int var_1_113 = 100;
signed char var_1_114 = -10;
unsigned char var_1_115 = 0;
unsigned char var_1_116 = 1;
unsigned char var_1_117 = 0;
signed char var_1_118 = 25;
unsigned char var_1_119 = 0;
float var_1_120 = 64.25;
unsigned long int var_1_121 = 64;
signed short int var_1_122 = -4;
unsigned short int var_1_123 = 8;
double var_1_124 = -0.4;
unsigned char var_1_125 = 0;
double var_1_126 = 9.5;
unsigned char var_1_127 = 1;
signed char var_1_128 = -2;
signed short int var_1_129 = 25;
unsigned short int var_1_130 = 128;
unsigned short int var_1_131 = 0;
signed char var_1_132 = -8;
signed char var_1_133 = 2;
unsigned char var_1_134 = 0;
signed long int var_1_135 = -64;
signed char var_1_136 = 25;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 16;
signed char last_1_var_1_9 = 10;
unsigned short int last_1_var_1_12 = 10000;
double last_1_var_1_20 = 1.5;
unsigned char last_1_var_1_22 = 5;
signed short int last_1_var_1_25 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (((var_1_28 ^ 16u) + var_1_29) <= (2921979571u - (abs (var_1_30)))) {
		if (var_1_30 <= (var_1_29 * (50u * var_1_28))) {
			var_1_27 = (((abs (var_1_31)) - var_1_32) - (var_1_33 + (abs (var_1_34))));
		}
	} else {
		if (var_1_29 <= (var_1_30 * var_1_34)) {
			var_1_27 = (var_1_34 + var_1_33);
		}
	}


	// From: CodeObject2
	if (var_1_36) {
		if (var_1_33 >= (abs (var_1_37))) {
			var_1_35 = var_1_38;
		} else {
			var_1_35 = var_1_38;
		}
	}


	// From: CodeObject3
	if (var_1_36) {
		if (var_1_40) {
			var_1_39 = (min (((var_1_41 - var_1_42) + var_1_43) , var_1_44));
		} else {
			var_1_39 = (max (10 , (min (var_1_43 , (max (var_1_44 , var_1_41))))));
		}
	} else {
		var_1_39 = var_1_43;
	}


	// From: CodeObject4
	if (var_1_30 >= var_1_34) {
		if (var_1_40) {
			var_1_45 = (min (var_1_38 , (var_1_46 - var_1_47)));
		}
	}


	// From: CodeObject5
	if (var_1_46 < (min (var_1_35 , var_1_47))) {
		if (var_1_45 > var_1_38) {
			var_1_48 = (var_1_43 + var_1_27);
		} else {
			if (var_1_36) {
				var_1_48 = (abs (var_1_44));
			}
		}
	}


	// From: CodeObject6
	if (! var_1_36) {
		if (var_1_45 >= var_1_46) {
			var_1_49 = (max (var_1_38 , (max (var_1_46 , (var_1_50 + var_1_51)))));
		} else {
			var_1_49 = (var_1_47 - 1000000.5);
		}
	} else {
		if ((var_1_38 >= (abs (var_1_45))) || var_1_40) {
			if (var_1_42 <= (min (var_1_37 , var_1_43))) {
				var_1_49 = (abs (var_1_51));
			}
		} else {
			var_1_49 = (var_1_51 + (var_1_52 - var_1_53));
		}
	}


	// From: CodeObject7
	if (var_1_36) {
		var_1_54 = (abs (256u));
	} else {
		if (var_1_32 >= var_1_33) {
			if ((var_1_32 & var_1_37) < (var_1_34 >> (var_1_55 + var_1_56))) {
				var_1_54 = (((var_1_57 - var_1_42) - var_1_55) - 256u);
			}
		}
	}


	// From: CodeObject8
	if ((abs (var_1_42)) >= var_1_33) {
		var_1_58 = (abs (var_1_55));
	} else {
		var_1_58 = (max (((min (var_1_55 , var_1_59)) + (abs (var_1_56))) , (max (var_1_42 , var_1_60))));
	}


	// From: CodeObject9
	if (var_1_40) {
		var_1_61 = var_1_56;
	}


	// From: CodeObject10
	if (((-4 + var_1_44) << (abs (5))) >= (~ var_1_59)) {
		if (var_1_28 > (~ (var_1_31 % var_1_41))) {
			if (var_1_55 > var_1_57) {
				if (var_1_57 >= var_1_44) {
					if (var_1_43 <= (var_1_48 >> var_1_56)) {
						var_1_62 = var_1_52;
					}
				} else {
					var_1_62 = (abs (var_1_63));
				}
			}
		}
	} else {
		var_1_62 = ((abs (abs (var_1_52))) + (min (var_1_53 , (var_1_64 + var_1_65))));
	}


	// From: CodeObject11
	if ((var_1_42 | (abs (var_1_43))) <= 128) {
		if ((var_1_41 - var_1_33) <= var_1_56) {
			var_1_66 = (max ((var_1_52 - (max (var_1_53 , var_1_46))) , var_1_64));
		}
	} else {
		var_1_66 = ((min ((abs (var_1_52)) , (min (var_1_65 , var_1_64)))) + (abs (abs (var_1_53))));
	}


	// From: CodeObject12
	if (var_1_37 > ((var_1_34 >> var_1_56) * var_1_41)) {
		var_1_67 = var_1_60;
	}


	// From: CodeObject13
	if (var_1_29 > ((var_1_56 % var_1_69) / var_1_41)) {
		var_1_68 = (abs (var_1_53));
	}


	// From: CodeObject14
	if ((abs (abs (var_1_61))) > (abs (var_1_42 - var_1_33))) {
		var_1_70 = (var_1_33 + var_1_27);
	}


	// From: CodeObject15
	if (var_1_35 >= var_1_51) {
		if (var_1_36 && (var_1_69 <= var_1_32)) {
			if (var_1_63 <= var_1_68) {
				if ((~ var_1_43) > (var_1_56 & var_1_70)) {
					var_1_71 = var_1_55;
				} else {
					var_1_71 = ((min ((3660540065u - var_1_37) , var_1_57)) - var_1_43);
				}
			} else {
				var_1_71 = (var_1_57 - (var_1_72 - 16u));
			}
		} else {
			var_1_71 = (var_1_34 + (min (var_1_27 , var_1_72)));
		}
	} else {
		var_1_71 = var_1_73;
	}


	// From: CodeObject16
	if (((var_1_73 % var_1_69) >> var_1_61) == var_1_42) {
		var_1_74 = (abs (max (var_1_55 , var_1_33)));
	}


	// From: CodeObject17
	if (var_1_36) {
		if ((var_1_32 | var_1_56) > ((abs (var_1_43)) - var_1_39)) {
			var_1_75 = (abs (min (16 , var_1_76)));
		}
	} else {
		var_1_75 = (((min (18847 , var_1_77)) - var_1_34) - var_1_56);
	}


	// From: CodeObject18
	var_1_78 = (abs (var_1_55));


	// From: CodeObject19
	if (var_1_44 > var_1_56) {
		if (! (var_1_80 <= var_1_28)) {
			if (var_1_43 < var_1_81) {
				var_1_79 = (abs (abs (abs (var_1_65))));
			} else {
				var_1_79 = var_1_52;
			}
		}
	} else {
		var_1_79 = (var_1_47 - var_1_46);
	}


	// From: CodeObject20
	if (var_1_42 > var_1_27) {
		var_1_82 = (var_1_46 - ((max (var_1_53 , 32.25f)) + (max (var_1_52 , var_1_83))));
	} else {
		var_1_82 = 256.75f;
	}


	// From: CodeObject21
	if ((abs (var_1_65)) > (abs (255.4f))) {
		var_1_84 = (max ((max ((abs (var_1_72)) , var_1_42)) , (min (var_1_81 , var_1_27))));
	} else {
		if (((abs (var_1_30)) + (~ var_1_81)) <= var_1_73) {
			var_1_84 = var_1_80;
		}
	}


	// From: CodeObject22
	var_1_85 = (abs (max (var_1_37 , var_1_39)));


	// From: CodeObject23
	if ((- (abs (var_1_67))) > ((var_1_31 * var_1_34) / var_1_77)) {
		if ((abs (var_1_56)) < (var_1_57 | (var_1_33 * var_1_27))) {
			var_1_86 = (abs (var_1_42 + -8));
		} else {
			var_1_86 = ((var_1_42 - var_1_56) + var_1_59);
		}
	}


	// From: CodeObject24
	if (var_1_45 >= (var_1_50 + var_1_65)) {
		var_1_87 = (var_1_55 + 10u);
	} else {
		var_1_87 = (min ((abs (5u)) , ((abs (var_1_34)) + (var_1_72 - var_1_74))));
	}


	// From: CodeObject25
	var_1_88 = (var_1_52 + var_1_50);


	// From: CodeObject26
	if (var_1_40) {
		var_1_89 = (var_1_31 - var_1_42);
	} else {
		var_1_89 = (min (var_1_56 , (min (var_1_32 , (abs (var_1_81))))));
	}


	// From: CodeObject27
	if ((var_1_44 * 64u) > (var_1_80 % var_1_72)) {
		var_1_90 = (min ((min (var_1_42 , var_1_59)) , -2));
	}


	// From: CodeObject28
	if (var_1_36) {
		var_1_91 = (max ((min (var_1_64 , var_1_46)) , (max ((min (var_1_51 , var_1_63)) , var_1_53))));
	} else {
		var_1_91 = (var_1_52 - 1.5f);
	}


	// From: CodeObject29
	if ((var_1_51 <= var_1_68) || (var_1_45 > var_1_88)) {
		if (var_1_43 >= var_1_44) {
			var_1_92 = (min ((abs (var_1_41)) , (var_1_93 - (max (var_1_55 , var_1_43)))));
		} else {
			if (var_1_79 >= var_1_65) {
				if ((var_1_68 + var_1_62) <= var_1_64) {
					var_1_92 = (min ((var_1_93 - var_1_56) , 32));
				}
			} else {
				var_1_92 = (var_1_41 + 100);
			}
		}
	}


	// From: CodeObject30
	if ((var_1_55 >= (var_1_89 + var_1_34)) && var_1_36) {
		var_1_94 = var_1_59;
	} else {
		var_1_94 = var_1_56;
	}


	// From: CodeObject31
	if (var_1_72 >= (max (var_1_84 , (min (var_1_69 , var_1_29))))) {
		if (var_1_40) {
			var_1_95 = (abs (abs (var_1_27)));
		} else {
			var_1_95 = ((abs (var_1_57)) - (var_1_72 - var_1_31));
		}
	}


	// From: CodeObject32
	if ((var_1_29 % (min (var_1_77 , var_1_69))) >= var_1_43) {
		var_1_96 = (max ((abs (var_1_39)) , (abs (var_1_58))));
	} else {
		var_1_96 = (max (var_1_94 , (abs (var_1_93))));
	}


	// From: CodeObject33
	if (var_1_95 <= (abs (100u / var_1_72))) {
		if (var_1_49 <= var_1_98) {
			if ((max (var_1_33 , var_1_74)) > var_1_48) {
				if ((var_1_55 << (min (var_1_99 , var_1_100))) < var_1_58) {
					var_1_97 = (min ((var_1_101 - (abs (var_1_100))) , var_1_44));
				} else {
					var_1_97 = (abs (abs (var_1_55)));
				}
			}
		}
	}


	// From: CodeObject34
	var_1_102 = ((abs (var_1_32)) + var_1_43);


	// From: CodeObject35
	if (256 <= var_1_100) {
		var_1_103 = ((max (var_1_55 , var_1_93)) + (abs (var_1_81 + 5)));
	}


	// From: CodeObject36
	if (var_1_36 && var_1_40) {
		if (var_1_57 <= var_1_44) {
			var_1_104 = (min (var_1_97 , (abs (var_1_41))));
		} else {
			var_1_104 = (abs (var_1_44));
		}
	} else {
		var_1_104 = (max (var_1_31 , var_1_101));
	}


	// From: CodeObject37
	if ((abs (var_1_37)) <= (max (var_1_69 , var_1_28))) {
		if (var_1_99 <= var_1_106) {
			var_1_105 = ((6.7460453815471022E18 - var_1_52) - (min (var_1_83 , var_1_47)));
		} else {
			var_1_105 = ((var_1_53 - var_1_52) + (var_1_64 + var_1_65));
		}
	}


	// From: CodeObject38
	if ((var_1_29 + var_1_97) > var_1_57) {
		if (var_1_29 <= var_1_95) {
			var_1_107 = (abs (var_1_101));
		} else {
			var_1_107 = (max (var_1_77 , (abs (2u))));
		}
	}


	// From: CodeObject39
	if ((var_1_84 ^ var_1_77) <= var_1_48) {
		var_1_108 = (abs (max (var_1_46 , var_1_52)));
	}


	// From: CodeObject40
	if ((var_1_47 - (max (var_1_52 , var_1_46))) <= (var_1_66 + (abs (var_1_51)))) {
		if (var_1_36 && var_1_40) {
			var_1_109 = var_1_41;
		}
	}


	// From: CodeObject41
	if (var_1_78 >= var_1_48) {
		var_1_110 = var_1_111;
	}


	// From: CodeObject42
	if (var_1_35 > (abs (abs (7.5)))) {
		if (var_1_75 <= ((var_1_80 | var_1_34) >> var_1_101)) {
			var_1_112 = (var_1_31 - var_1_80);
		}
	}


	// From: CodeObject43
	if (var_1_74 > (var_1_101 & var_1_102)) {
		if ((var_1_34 & var_1_104) <= 4) {
			if (((abs (var_1_93)) - var_1_41) >= var_1_32) {
				var_1_113 = var_1_81;
			} else {
				var_1_113 = var_1_33;
			}
		} else {
			var_1_113 = var_1_101;
		}
	} else {
		var_1_113 = var_1_92;
	}


	// From: CodeObject44
	if (var_1_115) {
		var_1_114 = var_1_55;
	} else {
		var_1_114 = var_1_55;
	}


	// From: CodeObject45
	if (var_1_115) {
		var_1_116 = var_1_117;
	}


	// From: CodeObject46
	if (var_1_110) {
		var_1_118 = var_1_100;
	}


	// From: CodeObject47
	if (var_1_40) {
		var_1_119 = var_1_101;
	} else {
		var_1_119 = var_1_42;
	}


	// From: CodeObject48
	var_1_120 = var_1_83;


	// From: CodeObject49
	var_1_121 = var_1_102;


	// From: CodeObject50
	if (var_1_110) {
		var_1_122 = var_1_101;
	}


	// From: CodeObject51
	if (var_1_40) {
		var_1_123 = var_1_100;
	}


	// From: CodeObject52
	var_1_124 = var_1_64;


	// From: CodeObject53
	if (var_1_110) {
		var_1_125 = var_1_117;
	} else {
		var_1_125 = var_1_111;
	}


	// From: CodeObject54
	if (var_1_125) {
		var_1_126 = var_1_46;
	} else {
		var_1_126 = var_1_46;
	}


	// From: CodeObject55
	if (var_1_110) {
		var_1_127 = var_1_117;
	}


	// From: CodeObject56
	var_1_128 = var_1_60;


	// From: CodeObject57
	var_1_129 = var_1_101;


	// From: CodeObject58
	if (var_1_117) {
		var_1_130 = var_1_97;
	}


	// From: CodeObject59
	if (var_1_117) {
		var_1_131 = var_1_101;
	}


	// From: CodeObject60
	if (var_1_87 < var_1_131) {
		var_1_132 = (min (var_1_99 , (max (var_1_55 , (min (var_1_56 , var_1_133))))));
	}


	// From: CodeObject61
	var_1_134 = var_1_100;


	// From: CodeObject62
	var_1_135 = var_1_67;


	// From: CodeObject63
	var_1_136 = var_1_60;


	// From: Req2Batch26PS_CN_500
	if (! var_1_10) {
		if ((max (last_1_var_1_22 , last_1_var_1_25)) >= last_1_var_1_12) {
			var_1_9 = (-16 + var_1_11);
		} else {
			var_1_9 = var_1_11;
		}
	} else {
		var_1_9 = var_1_11;
	}


	// From: Req3Batch26PS_CN_500
	unsigned char stepLocal_2 = var_1_10;
	signed long int stepLocal_1 = last_1_var_1_22;
	if (((var_1_13 - var_1_14) != (min (last_1_var_1_20 , last_1_var_1_20))) || stepLocal_2) {
		if (stepLocal_1 >= last_1_var_1_12) {
			var_1_12 = ((min (last_1_var_1_22 , last_1_var_1_22)) + 32);
		} else {
			var_1_12 = last_1_var_1_22;
		}
	}


	// From: Req5Batch26PS_CN_500
	unsigned long int stepLocal_5 = last_1_var_1_1;
	signed long int stepLocal_4 = var_1_4 + last_1_var_1_9;
	unsigned short int stepLocal_3 = var_1_18;
	if (stepLocal_5 > last_1_var_1_12) {
		if (last_1_var_1_1 >= stepLocal_4) {
			if (stepLocal_3 == (var_1_23 - 8)) {
				var_1_22 = var_1_24;
			} else {
				var_1_22 = var_1_24;
			}
		} else {
			var_1_22 = var_1_24;
		}
	} else {
		var_1_22 = var_1_24;
	}


	// From: Req4Batch26PS_CN_500
	if (var_1_11 > (var_1_22 * (var_1_12 + var_1_22))) {
		var_1_20 = var_1_21;
	}


	// From: Req6Batch26PS_CN_500
	if ((var_1_20 / var_1_26) > var_1_13) {
		var_1_25 = (max ((min (var_1_9 , var_1_24)) , 2));
	} else {
		var_1_25 = var_1_11;
	}


	// From: Req1Batch26PS_CN_500
	signed long int stepLocal_0 = (var_1_25 + var_1_9) / var_1_4;
	if (stepLocal_0 == var_1_25) {
		var_1_1 = ((min (var_1_12 , var_1_22)) + var_1_22);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 49150);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 16383);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 16384);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 16383);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 65535);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 63);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854765600e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -461168.6018427382800e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -461168.6018427382800e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 9);
	var_1_56 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 8);
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 3758096382);
	assume_abort_if_not(var_1_57 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -63);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= -127);
	assume_abort_if_not(var_1_60 <= 126);
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= -922337.2036854765600e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854765600e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= -230584.3009213691390e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691390e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -230584.3009213691390e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 4294967295);
	assume_abort_if_not(var_1_69 != 0);
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 1073741823);
	assume_abort_if_not(var_1_72 <= 2147483647);
	var_1_73 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 4294967294);
	var_1_76 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_76 >= -32766);
	assume_abort_if_not(var_1_76 <= 32766);
	var_1_77 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_77 >= 16382);
	assume_abort_if_not(var_1_77 <= 32766);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 255);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 255);
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427382800e+12F && var_1_83 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 127);
	assume_abort_if_not(var_1_93 <= 254);
	var_1_98 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_98 >= -922337.2036854776000e+13F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 9223372.036854776000e+12F && var_1_98 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_99 >= 0);
	assume_abort_if_not(var_1_99 <= 3);
	var_1_100 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_100 >= 0);
	assume_abort_if_not(var_1_100 <= 3);
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 127);
	assume_abort_if_not(var_1_101 <= 254);
	var_1_106 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 4294967295);
	var_1_111 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_111 >= 1);
	assume_abort_if_not(var_1_111 <= 1);
	var_1_115 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_115 >= 0);
	assume_abort_if_not(var_1_115 <= 1);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 0);
	var_1_133 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_133 >= -127);
	assume_abort_if_not(var_1_133 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
}

int property() {
	return ((((((((var_1_25 + var_1_9) / var_1_4) == var_1_25) ? (var_1_1 == ((unsigned long int) ((min (var_1_12 , var_1_22)) + var_1_22))) : 1) && ((! var_1_10) ? (((max (last_1_var_1_22 , last_1_var_1_25)) >= last_1_var_1_12) ? (var_1_9 == ((signed char) (-16 + var_1_11))) : (var_1_9 == ((signed char) var_1_11))) : (var_1_9 == ((signed char) var_1_11)))) && ((((var_1_13 - var_1_14) != (min (last_1_var_1_20 , last_1_var_1_20))) || var_1_10) ? ((last_1_var_1_22 >= last_1_var_1_12) ? (var_1_12 == ((unsigned short int) ((min (last_1_var_1_22 , last_1_var_1_22)) + 32))) : (var_1_12 == ((unsigned short int) last_1_var_1_22))) : 1)) && ((var_1_11 > (var_1_22 * (var_1_12 + var_1_22))) ? (var_1_20 == ((double) var_1_21)) : 1)) && ((last_1_var_1_1 > last_1_var_1_12) ? ((last_1_var_1_1 >= (var_1_4 + last_1_var_1_9)) ? ((var_1_18 == (var_1_23 - 8)) ? (var_1_22 == ((unsigned char) var_1_24)) : (var_1_22 == ((unsigned char) var_1_24))) : (var_1_22 == ((unsigned char) var_1_24))) : (var_1_22 == ((unsigned char) var_1_24)))) && (((var_1_20 / var_1_26) > var_1_13) ? (var_1_25 == ((signed short int) (max ((min (var_1_9 , var_1_24)) , 2)))) : (var_1_25 == ((signed short int) var_1_11)))
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
