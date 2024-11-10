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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch38PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 4;
signed long int var_1_11 = 100;
signed long int var_1_12 = 8;
unsigned short int var_1_13 = 128;
double var_1_14 = 64.5;
signed short int var_1_15 = 4;
signed long int var_1_16 = -8;
double var_1_17 = 255.5;
double var_1_18 = 0.6;
double var_1_19 = 1000000000000.5;
double var_1_20 = 999999.25;
signed short int var_1_21 = -64;
signed char var_1_25 = -128;
signed char var_1_26 = -8;
unsigned char var_1_27 = 32;
double var_1_28 = 128.375;
double var_1_29 = 25.2;
double var_1_30 = 255.5;
unsigned char var_1_31 = 32;
signed char var_1_32 = 0;
signed char var_1_33 = 5;
unsigned char var_1_34 = 100;
unsigned char var_1_35 = 25;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 64;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned short int var_1_42 = 5;
float var_1_43 = 49.5;
float var_1_44 = 255.8;
float var_1_45 = 255.9;
float var_1_46 = 25.2;
float var_1_47 = 4.3;
unsigned short int var_1_48 = 8;
unsigned char var_1_49 = 16;
unsigned char var_1_50 = 200;
unsigned long int var_1_51 = 256;
unsigned long int var_1_52 = 0;
unsigned long int var_1_53 = 2484935662;
unsigned long int var_1_54 = 10;
unsigned long int var_1_55 = 0;
unsigned long int var_1_56 = 128;
unsigned long int var_1_57 = 2050161667;
unsigned long int var_1_58 = 1562665941;
signed short int var_1_59 = -5;
signed short int var_1_60 = 5;
unsigned long int var_1_61 = 4;
float var_1_62 = 0.75;
signed long int var_1_63 = -10;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 32;
unsigned char var_1_66 = 10;
unsigned char var_1_67 = 128;
unsigned long int var_1_68 = 50;
double var_1_69 = 15.125;
double var_1_70 = 99999.5;
signed char var_1_71 = 16;
signed char var_1_72 = 8;
float var_1_73 = 5.25;
float var_1_74 = 10000000.25;
unsigned short int var_1_75 = 256;
unsigned short int var_1_76 = 46855;
float var_1_77 = 32.2;
float var_1_78 = 32.25;
float var_1_79 = 4.8;
float var_1_80 = 64.6;
float var_1_81 = 0.8;
float var_1_82 = 256.4;
float var_1_83 = 32.5;
float var_1_84 = 64.2;
unsigned char var_1_85 = 1;
signed short int var_1_86 = -2;
signed short int var_1_87 = -128;
signed short int var_1_88 = 30850;
signed short int var_1_89 = 10000;
unsigned long int var_1_90 = 10000;
signed long int var_1_91 = 32;
unsigned short int var_1_92 = 4;
unsigned short int var_1_93 = 28814;
signed char var_1_94 = -5;
double var_1_95 = 1.808;
float var_1_96 = 10.375;
signed long int var_1_97 = -5;
signed long int var_1_98 = -128;
double var_1_99 = -0.75;
signed long int var_1_100 = 32;
signed char var_1_101 = 2;
float var_1_102 = 64.3;
signed char var_1_103 = 10;
unsigned char var_1_104 = 0;
unsigned char var_1_105 = 1;
signed char var_1_106 = 50;
float var_1_107 = 1.5;
signed char var_1_108 = 32;
signed char var_1_109 = 1;
unsigned long int var_1_110 = 25;
signed char var_1_111 = -8;
float var_1_112 = 0.0;
unsigned char var_1_113 = 0;
unsigned char var_1_114 = 0;
double var_1_115 = 10.125;
double var_1_116 = 8.3;
signed short int var_1_117 = -16;
unsigned long int var_1_118 = 128;
unsigned short int var_1_119 = 16;
signed char var_1_120 = 8;
unsigned long int var_1_121 = 50;
unsigned char var_1_122 = 25;
unsigned char var_1_123 = 1;
unsigned char var_1_124 = 0;
unsigned char var_1_125 = 0;
signed char var_1_126 = 64;
signed char var_1_127 = 5;
double var_1_128 = 256.5;
unsigned char var_1_129 = 0;
unsigned char var_1_130 = 0;
float var_1_131 = 4.925;
float var_1_132 = 127.8;
float var_1_133 = 1.4;
float var_1_134 = 9.75;
unsigned char var_1_135 = 1;
unsigned char var_1_136 = 1;
double var_1_137 = 8.625;
unsigned short int var_1_138 = 32;
float var_1_139 = 24.86;
double var_1_140 = 100.8;
unsigned short int var_1_141 = 64;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_8 = 4;
signed short int last_1_var_1_21 = -64;
signed char last_1_var_1_25 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_30 >= (abs (max (var_1_29 , var_1_28)))) {
		if (var_1_28 <= var_1_29) {
			var_1_27 = (abs (var_1_31));
		} else {
			if (((~ 10) | (var_1_32 % var_1_33)) <= var_1_31) {
				var_1_27 = (abs (abs (var_1_34 + var_1_35)));
			}
		}
	} else {
		if (var_1_36) {
			var_1_27 = (abs ((var_1_37 + var_1_38) - (min (var_1_34 , 16))));
		}
	}


	// From: CodeObject2
	var_1_39 = (! (var_1_40 || var_1_41));


	// From: CodeObject3
	if (var_1_33 != 50) {
		var_1_42 = ((abs (var_1_35)) + var_1_38);
	}


	// From: CodeObject4
	if (((abs (var_1_37)) - var_1_34) == -2) {
		var_1_43 = (var_1_44 - var_1_45);
	} else {
		if (var_1_36 || ((var_1_27 & var_1_38) <= (min (var_1_42 , var_1_35)))) {
			var_1_43 = (abs ((var_1_46 + var_1_47) - (5.1817978523946885E18f - 2.5f)));
		}
	}


	// From: CodeObject5
	if (var_1_35 <= (1 / var_1_37)) {
		if (var_1_33 >= (min (var_1_42 , (~ var_1_35)))) {
			var_1_48 = (abs (var_1_35));
		}
	} else {
		var_1_48 = (abs (min ((abs (var_1_34)) , var_1_31)));
	}


	// From: CodeObject6
	if (var_1_45 < var_1_29) {
		if (var_1_41) {
			var_1_49 = (min (var_1_34 , var_1_38));
		}
	} else {
		var_1_49 = (var_1_50 - var_1_34);
	}


	// From: CodeObject7
	if (var_1_49 > var_1_50) {
		var_1_51 = (abs (var_1_49 + (max (var_1_48 , var_1_38))));
	}


	// From: CodeObject8
	if (var_1_32 != var_1_42) {
		if (var_1_41 || (var_1_31 < (var_1_37 / var_1_33))) {
			var_1_52 = (min ((var_1_53 - var_1_35) , var_1_37));
		} else {
			if (var_1_40) {
				if (var_1_31 >= 200) {
					var_1_52 = (max (var_1_50 , (max (var_1_35 , (max (50u , var_1_53))))));
				} else {
					var_1_52 = var_1_48;
				}
			}
		}
	}


	// From: CodeObject9
	if ((abs (var_1_38)) > (var_1_42 - var_1_48)) {
		var_1_54 = ((max (var_1_34 , var_1_31)) + (min (var_1_42 , var_1_55)));
	} else {
		if (var_1_36 && (var_1_56 < var_1_35)) {
			var_1_54 = (var_1_35 + ((min (var_1_57 , var_1_58)) - var_1_37));
		}
	}


	// From: CodeObject10
	var_1_59 = (max ((abs (max (var_1_50 , -8))) , var_1_60));


	// From: CodeObject11
	if (((var_1_55 / var_1_50) % var_1_58) > var_1_37) {
		var_1_61 = (abs ((var_1_57 + 1176340465u) - var_1_58));
	} else {
		var_1_61 = var_1_58;
	}


	// From: CodeObject12
	if (var_1_39) {
		var_1_62 = var_1_44;
	}


	// From: CodeObject13
	if ((5 >> var_1_42) >= var_1_33) {
		var_1_63 = (min (var_1_59 , var_1_37));
	}


	// From: CodeObject14
	if (var_1_32 >= var_1_27) {
		if ((var_1_58 | var_1_56) > var_1_54) {
			var_1_64 = ((var_1_65 + var_1_66) + (max (var_1_34 , var_1_37)));
		}
	} else {
		if (var_1_63 >= ((var_1_55 % -8) & var_1_54)) {
			var_1_64 = (max (((min (var_1_50 , var_1_67)) - var_1_34) , var_1_37));
		}
	}


	// From: CodeObject15
	var_1_68 = (((abs (var_1_58)) + 1119936218u) - (var_1_57 - (min (var_1_50 , 64u))));


	// From: CodeObject16
	if ((- var_1_43) <= var_1_62) {
		if (((var_1_42 % var_1_37) & (var_1_66 * var_1_64)) >= var_1_31) {
			if ((-128 >> var_1_68) > var_1_56) {
				if ((~ var_1_35) >= var_1_67) {
					var_1_69 = (abs (var_1_47));
				} else {
					if (var_1_67 != var_1_50) {
						var_1_69 = (abs (var_1_47));
					}
				}
			} else {
				if (var_1_47 > (max ((abs (var_1_62)) , var_1_46))) {
					var_1_69 = (min (99.7 , var_1_70));
				}
			}
		}
	}


	// From: CodeObject17
	if (((abs (var_1_37)) >> var_1_51) != var_1_65) {
		var_1_71 = (var_1_66 - var_1_65);
	}


	// From: CodeObject18
	if (var_1_69 <= var_1_44) {
		var_1_72 = (abs (var_1_66));
	} else {
		var_1_72 = (var_1_65 - (abs (var_1_66)));
	}


	// From: CodeObject19
	if (var_1_40 || var_1_41) {
		var_1_73 = (abs (abs (abs (var_1_45))));
	}


	// From: CodeObject20
	if (((abs (var_1_44)) + (abs (1.6f))) < var_1_62) {
		var_1_74 = (abs (min ((max (var_1_46 , var_1_45)) , var_1_47)));
	}


	// From: CodeObject21
	if (var_1_42 <= ((- var_1_67) | var_1_49)) {
		var_1_75 = (abs (var_1_65));
	} else {
		var_1_75 = (var_1_76 - var_1_31);
	}


	// From: CodeObject22
	if ((min (var_1_54 , var_1_58)) > (var_1_56 + var_1_35)) {
		if ((var_1_61 & var_1_33) <= 8u) {
			if (var_1_40) {
				var_1_77 = ((var_1_78 + var_1_79) + (1.8f + var_1_80));
			} else {
				var_1_77 = var_1_79;
			}
		} else {
			var_1_77 = (max (((abs (var_1_79)) + var_1_80) , var_1_81));
		}
	} else {
		var_1_77 = var_1_47;
	}


	// From: CodeObject23
	if ((-10 & 2) >= var_1_66) {
		if (var_1_36) {
			if (var_1_29 > (- (abs (var_1_80)))) {
				var_1_82 = ((max ((max (var_1_46 , var_1_44)) , var_1_83)) - (abs (var_1_70)));
			}
		}
	} else {
		var_1_82 = var_1_46;
	}


	// From: CodeObject24
	if (var_1_39 || (var_1_47 >= var_1_45)) {
		var_1_84 = ((max (var_1_80 , var_1_46)) + var_1_79);
	} else {
		var_1_84 = var_1_70;
	}


	// From: CodeObject25
	if (var_1_41) {
		var_1_85 = 64;
	}


	// From: CodeObject26
	if (var_1_81 <= var_1_84) {
		if (var_1_45 < (- (min (64.8f , var_1_47)))) {
			if (var_1_75 >= var_1_67) {
				var_1_86 = var_1_31;
			}
		} else {
			if (var_1_67 <= ((var_1_27 >> var_1_76) & var_1_72)) {
				var_1_86 = (min (var_1_31 , (min (var_1_38 , var_1_87))));
			}
		}
	} else {
		var_1_86 = ((var_1_88 - (var_1_89 - var_1_34)) - (abs (var_1_72)));
	}


	// From: CodeObject27
	if (var_1_77 <= var_1_30) {
		if (var_1_40) {
			if ((abs (var_1_91)) <= var_1_87) {
				var_1_90 = (abs (var_1_27));
			} else {
				var_1_90 = (abs (max (var_1_89 , var_1_55)));
			}
		} else {
			if (var_1_56 >= ((abs (var_1_64)) + var_1_52)) {
				var_1_90 = (min (var_1_34 , var_1_64));
			}
		}
	} else {
		var_1_90 = (var_1_27 + var_1_55);
	}


	// From: CodeObject28
	var_1_92 = ((31726 + var_1_93) - (min (var_1_34 , var_1_35)));


	// From: CodeObject29
	if ((- var_1_79) > var_1_30) {
		var_1_94 = (-1 - var_1_66);
	}


	// From: CodeObject30
	if (var_1_50 > (abs (var_1_34))) {
		if (var_1_39) {
			var_1_95 = (max ((min (var_1_46 , 127.6)) , var_1_47));
		} else {
			if (var_1_59 >= var_1_64) {
				var_1_95 = (abs (var_1_81));
			}
		}
	}


	// From: CodeObject31
	if ((abs (var_1_67)) < var_1_38) {
		if (256 >= (var_1_97 / (max (var_1_88 , var_1_67)))) {
			var_1_96 = (abs (var_1_80));
		}
	}


	// From: CodeObject32
	if (var_1_93 <= (min (1 , (var_1_65 * var_1_55)))) {
		if ((- 0.4) <= ((abs (var_1_77)) / var_1_99)) {
			var_1_98 = (abs (-1));
		}
	}


	// From: CodeObject33
	var_1_100 = (abs (abs (min (var_1_50 , var_1_35))));


	// From: CodeObject34
	if (var_1_87 >= (abs (var_1_49))) {
		if (var_1_102 < var_1_83) {
			var_1_101 = (max (2 , var_1_66));
		} else {
			var_1_101 = (max ((var_1_65 - (max (var_1_66 , var_1_103))) , 2));
		}
	}


	// From: CodeObject35
	if (var_1_36) {
		var_1_104 = ((var_1_50 < var_1_76) || var_1_105);
	} else {
		if ((var_1_68 >> var_1_88) <= var_1_35) {
			if (var_1_51 != 0u) {
				if ((~ var_1_101) > var_1_94) {
					var_1_104 = (! (! (var_1_39 || var_1_105)));
				} else {
					var_1_104 = (var_1_41 || var_1_105);
				}
			} else {
				if (var_1_65 <= var_1_55) {
					var_1_104 = (var_1_105 && var_1_41);
				}
			}
		} else {
			var_1_104 = (var_1_39 || ((var_1_74 >= var_1_46) || var_1_105));
		}
	}


	// From: CodeObject36
	if ((max ((var_1_107 - var_1_45) , (var_1_78 / var_1_99))) <= (var_1_70 + var_1_43)) {
		var_1_106 = ((100 - (var_1_108 - var_1_109)) - (min (var_1_65 , var_1_103)));
	} else {
		if (var_1_109 > var_1_88) {
			var_1_106 = var_1_65;
		}
	}


	// From: CodeObject37
	if (var_1_80 < ((var_1_30 / 9.99999999975E9f) / 2.25f)) {
		var_1_110 = (var_1_38 + ((var_1_35 + var_1_65) + var_1_93));
	}


	// From: CodeObject38
	if (var_1_81 < ((var_1_112 - var_1_46) - 16.5f)) {
		var_1_111 = var_1_109;
	}


	// From: CodeObject39
	if (var_1_64 <= var_1_76) {
		var_1_113 = (abs (var_1_31));
	} else {
		var_1_113 = (var_1_37 + (abs (var_1_34)));
	}


	// From: CodeObject40
	if (var_1_100 < var_1_88) {
		if (var_1_41) {
			if (var_1_77 < var_1_73) {
				var_1_114 = (var_1_39 || ((var_1_115 > var_1_116) || var_1_105));
			}
		}
	}


	// From: CodeObject41
	if (var_1_39) {
		var_1_117 = (var_1_35 + (var_1_94 + (var_1_37 - 25)));
	}


	// From: CodeObject42
	if (var_1_39) {
		var_1_118 = (var_1_53 - var_1_42);
	} else {
		var_1_118 = (max (var_1_67 , (abs (var_1_50))));
	}


	// From: CodeObject43
	if (var_1_54 < var_1_92) {
		var_1_119 = (abs (min (5 , var_1_66)));
	} else {
		if (var_1_81 >= 64.8f) {
			var_1_119 = (abs (var_1_66));
		}
	}


	// From: CodeObject44
	if ((var_1_56 >= var_1_97) && var_1_40) {
		if (var_1_98 <= (var_1_48 + var_1_63)) {
			var_1_120 = (abs (var_1_66));
		}
	} else {
		if (var_1_119 >= (64 | var_1_42)) {
			if (var_1_55 < var_1_121) {
				var_1_120 = (abs (abs (var_1_65)));
			}
		}
	}


	// From: CodeObject45
	if (var_1_68 <= var_1_52) {
		if (var_1_114) {
			var_1_122 = var_1_37;
		}
	}


	// From: CodeObject46
	if (var_1_104) {
		var_1_123 = (var_1_41 && var_1_40);
	}


	// From: CodeObject47
	if (var_1_49 <= 0) {
		var_1_124 = (! var_1_125);
	}


	// From: CodeObject48
	if (var_1_104) {
		var_1_126 = var_1_108;
	} else {
		var_1_126 = var_1_103;
	}


	// From: CodeObject49
	if (var_1_125) {
		var_1_127 = var_1_103;
	}


	// From: CodeObject50
	if (var_1_124) {
		var_1_128 = var_1_70;
	} else {
		var_1_128 = 1.375;
	}


	// From: CodeObject51
	if (var_1_40) {
		var_1_129 = 0;
	}


	// From: CodeObject52
	var_1_130 = var_1_105;


	// From: CodeObject53
	var_1_131 = var_1_47;


	// From: CodeObject54
	var_1_132 = 1.00000005E7f;


	// From: CodeObject55
	if (var_1_130) {
		var_1_133 = var_1_79;
	} else {
		var_1_133 = var_1_79;
	}


	// From: CodeObject56
	var_1_134 = var_1_47;


	// From: CodeObject57
	if (var_1_125) {
		var_1_135 = 0;
	}


	// From: CodeObject58
	if (var_1_135) {
		var_1_136 = var_1_105;
	}


	// From: CodeObject59
	var_1_137 = var_1_83;


	// From: CodeObject60
	if (var_1_123) {
		var_1_138 = var_1_93;
	}


	// From: CodeObject61
	if (var_1_135) {
		var_1_139 = var_1_44;
	} else {
		var_1_139 = var_1_45;
	}


	// From: CodeObject62
	var_1_140 = var_1_46;


	// From: CodeObject63
	if ((var_1_66 | var_1_61) <= 128u) {
		if (var_1_105 && var_1_135) {
			var_1_141 = (25 + (abs (var_1_50)));
		} else {
			var_1_141 = var_1_38;
		}
	} else {
		var_1_141 = var_1_34;
	}


	// From: Req5Batch38PS_CN_500
	if ((last_1_var_1_8 + 4u) <= (last_1_var_1_8 >> var_1_15)) {
		var_1_21 = (min ((last_1_var_1_25 + last_1_var_1_25) , last_1_var_1_25));
	} else {
		var_1_21 = last_1_var_1_25;
	}


	// From: Req3Batch38PS_CN_500
	signed long int stepLocal_1 = (max (-1 , var_1_11)) - var_1_12;
	signed long int stepLocal_0 = last_1_var_1_21 + last_1_var_1_21;
	if ((last_1_var_1_21 * last_1_var_1_21) < stepLocal_1) {
		if (stepLocal_0 < var_1_12) {
			var_1_8 = var_1_13;
		}
	} else {
		var_1_8 = var_1_13;
	}


	// From: Req6Batch38PS_CN_500
	if (! (var_1_21 > var_1_8)) {
		if (var_1_4) {
			var_1_25 = var_1_26;
		}
	}


	// From: Req4Batch38PS_CN_500
	if ((8 / var_1_15) < (64 / var_1_16)) {
		if (var_1_8 >= var_1_15) {
			var_1_14 = (var_1_17 - var_1_18);
		} else {
			var_1_14 = (var_1_18 - (64.25 + (max (var_1_19 , var_1_20))));
		}
	} else {
		var_1_14 = var_1_18;
	}


	// From: Req1Batch38PS_CN_500
	if ((- var_1_14) <= var_1_14) {
		var_1_1 = var_1_4;
	} else {
		if (var_1_14 <= var_1_14) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req2Batch38PS_CN_500
	if (var_1_14 < (max (var_1_14 , (128.5 * var_1_14)))) {
		var_1_7 = (var_1_1 && (! 1));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32768);
	assume_abort_if_not(var_1_15 <= 32767);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	assume_abort_if_not(var_1_33 != 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 63);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 64);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854765600e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 127);
	assume_abort_if_not(var_1_50 <= 254);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 2147483647);
	assume_abort_if_not(var_1_53 <= 4294967294);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 2147483647);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 4294967295);
	var_1_57 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_57 >= 1073741823);
	assume_abort_if_not(var_1_57 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 1073741823);
	assume_abort_if_not(var_1_58 <= 2147483647);
	var_1_60 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_60 >= -32767);
	assume_abort_if_not(var_1_60 <= 32766);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 64);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 63);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 127);
	assume_abort_if_not(var_1_67 <= 254);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -922337.2036854765600e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854765600e+12F && var_1_70 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 32767);
	assume_abort_if_not(var_1_76 <= 65534);
	var_1_78 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_78 >= -230584.3009213691390e+13F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 2305843.009213691390e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= -230584.3009213691390e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 2305843.009213691390e+12F && var_1_79 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_80 >= -230584.3009213691390e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 2305843.009213691390e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_81 >= -922337.2036854765600e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 9223372.036854765600e+12F && var_1_81 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854765600e+12F && var_1_83 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_87 >= -32767);
	assume_abort_if_not(var_1_87 <= 32766);
	var_1_88 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_88 >= 16382);
	assume_abort_if_not(var_1_88 <= 32766);
	var_1_89 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_89 >= 8191);
	assume_abort_if_not(var_1_89 <= 16383);
	var_1_91 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_91 >= -2147483647);
	assume_abort_if_not(var_1_91 <= 2147483647);
	var_1_93 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_93 >= 16384);
	assume_abort_if_not(var_1_93 <= 32767);
	var_1_97 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_97 >= -2147483648);
	assume_abort_if_not(var_1_97 <= 2147483647);
	var_1_99 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_99 >= -922337.2036854776000e+13F && var_1_99 <= -1.0e-20F) || (var_1_99 <= 9223372.036854776000e+12F && var_1_99 >= 1.0e-20F ));
	assume_abort_if_not(var_1_99 != 0.0F);
	var_1_102 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_102 >= -922337.2036854776000e+13F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 9223372.036854776000e+12F && var_1_102 >= 1.0e-20F ));
	var_1_103 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_103 >= 0);
	assume_abort_if_not(var_1_103 <= 126);
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 1);
	assume_abort_if_not(var_1_105 <= 1);
	var_1_107 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_107 >= 0.0F && var_1_107 <= -1.0e-20F) || (var_1_107 <= 9223372.036854776000e+12F && var_1_107 >= 1.0e-20F ));
	var_1_108 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_108 >= 31);
	assume_abort_if_not(var_1_108 <= 63);
	var_1_109 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_109 >= 0);
	assume_abort_if_not(var_1_109 <= 31);
	var_1_112 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_112 >= 4611686.018427387900e+12F && var_1_112 <= -1.0e-20F) || (var_1_112 <= 9223372.036854776000e+12F && var_1_112 >= 1.0e-20F ));
	var_1_115 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_115 >= -922337.2036854776000e+13F && var_1_115 <= -1.0e-20F) || (var_1_115 <= 9223372.036854776000e+12F && var_1_115 >= 1.0e-20F ));
	var_1_116 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_116 >= -922337.2036854776000e+13F && var_1_116 <= -1.0e-20F) || (var_1_116 <= 9223372.036854776000e+12F && var_1_116 >= 1.0e-20F ));
	var_1_121 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_121 >= 0);
	assume_abort_if_not(var_1_121 <= 4294967295);
	var_1_125 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_125 >= 0);
	assume_abort_if_not(var_1_125 <= 0);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
}

int property() {
	return (((((((- var_1_14) <= var_1_14) ? (var_1_1 == ((unsigned char) var_1_4)) : ((var_1_14 <= var_1_14) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) var_1_4)))) && ((var_1_14 < (max (var_1_14 , (128.5 * var_1_14)))) ? (var_1_7 == ((unsigned char) (var_1_1 && (! 1)))) : 1)) && (((last_1_var_1_21 * last_1_var_1_21) < ((max (-1 , var_1_11)) - var_1_12)) ? (((last_1_var_1_21 + last_1_var_1_21) < var_1_12) ? (var_1_8 == ((unsigned short int) var_1_13)) : 1) : (var_1_8 == ((unsigned short int) var_1_13)))) && (((8 / var_1_15) < (64 / var_1_16)) ? ((var_1_8 >= var_1_15) ? (var_1_14 == ((double) (var_1_17 - var_1_18))) : (var_1_14 == ((double) (var_1_18 - (64.25 + (max (var_1_19 , var_1_20))))))) : (var_1_14 == ((double) var_1_18)))) && (((last_1_var_1_8 + 4u) <= (last_1_var_1_8 >> var_1_15)) ? (var_1_21 == ((signed short int) (min ((last_1_var_1_25 + last_1_var_1_25) , last_1_var_1_25)))) : (var_1_21 == ((signed short int) last_1_var_1_25)))) && ((! (var_1_21 > var_1_8)) ? (var_1_4 ? (var_1_25 == ((signed char) var_1_26)) : 1) : 1)
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
