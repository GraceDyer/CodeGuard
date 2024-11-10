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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch69PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 4;
signed short int var_1_3 = 128;
signed short int var_1_4 = 10;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 64;
signed char var_1_9 = -128;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
double var_1_12 = 32.75;
double var_1_13 = 255.6;
signed short int var_1_14 = 8;
unsigned long int var_1_15 = 256;
unsigned long int var_1_16 = 4031871391;
unsigned long int var_1_17 = 3083112228;
unsigned long int var_1_18 = 3058504136;
unsigned long int var_1_19 = 1902304375;
unsigned char var_1_20 = 1;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 1;
unsigned short int var_1_24 = 64;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 256;
unsigned short int var_1_27 = 100;
unsigned short int var_1_28 = 2;
unsigned short int var_1_29 = 10;
unsigned long int var_1_30 = 64;
unsigned short int var_1_31 = 0;
unsigned long int var_1_32 = 100;
float var_1_33 = 31.6;
float var_1_34 = 128.5;
float var_1_35 = 24.2;
float var_1_36 = 1.5;
unsigned short int var_1_37 = 128;
unsigned char var_1_38 = 1;
unsigned short int var_1_39 = 28029;
signed short int var_1_40 = -100;
float var_1_41 = 1.8;
signed short int var_1_42 = -5;
signed short int var_1_43 = 50;
signed long int var_1_44 = 10;
float var_1_45 = 99.8;
signed long int var_1_46 = 1576786638;
float var_1_47 = 8.75;
float var_1_48 = 2.5;
unsigned short int var_1_49 = 64;
unsigned short int var_1_50 = 49251;
signed long int var_1_51 = -50;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 1;
double var_1_54 = 5.8;
unsigned short int var_1_55 = 1;
unsigned short int var_1_56 = 10000;
unsigned short int var_1_57 = 100;
signed long int var_1_58 = -128;
unsigned short int var_1_59 = 0;
signed long int var_1_60 = 128;
unsigned long int var_1_61 = 2;
signed long int var_1_62 = -256;
signed char var_1_63 = -4;
signed char var_1_64 = 1;
signed char var_1_65 = -2;
signed char var_1_66 = 0;
signed char var_1_67 = 32;
unsigned short int var_1_68 = 32;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 200;
unsigned char var_1_71 = 5;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
unsigned long int var_1_76 = 10;
unsigned long int var_1_77 = 2367549294;
unsigned long int var_1_78 = 8;
signed short int var_1_79 = -1;
signed char var_1_80 = -10;
double var_1_82 = 63.8;
double var_1_83 = 8.5;
signed short int var_1_84 = -64;
unsigned long int var_1_85 = 256;
signed long int var_1_86 = 1;
unsigned char var_1_87 = 64;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 32;
signed short int var_1_90 = -100;
unsigned char var_1_91 = 0;
unsigned short int var_1_92 = 16;
unsigned char var_1_93 = 10;
signed char var_1_94 = 100;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 50;
unsigned long int var_1_97 = 0;
signed char var_1_98 = 8;
signed long int var_1_99 = -32;
float var_1_100 = 256.6;
signed long int var_1_101 = 1000000000;
signed long int var_1_102 = 32;
signed long int var_1_103 = 16;
signed char var_1_104 = -2;
signed char var_1_106 = -4;
signed char var_1_107 = -64;
unsigned char var_1_108 = 0;
unsigned short int var_1_109 = 128;
double var_1_110 = 31.5;
signed short int var_1_111 = 5;
signed short int var_1_112 = 128;
unsigned char var_1_113 = 128;
float var_1_114 = 4.8;
double var_1_115 = 199.4;
unsigned char var_1_116 = 50;
unsigned char var_1_117 = 32;
float var_1_118 = 10.5;
unsigned char var_1_119 = 1;
unsigned char var_1_120 = 0;
unsigned long int var_1_121 = 100000;
unsigned char var_1_122 = 1;
unsigned char var_1_123 = 25;
unsigned char var_1_124 = 0;
signed long int var_1_125 = 25;
unsigned short int var_1_126 = 256;
unsigned long int var_1_127 = 4;
float var_1_128 = 999999.8;
double var_1_129 = 32.2;
signed char var_1_130 = 5;
signed char var_1_131 = -4;
unsigned char var_1_132 = 0;
double var_1_133 = 4.5;
signed char var_1_134 = 5;
unsigned short int var_1_135 = 2;
unsigned char var_1_136 = 0;
double var_1_137 = 255.25;
signed char var_1_138 = -16;
unsigned char var_1_139 = 1;
unsigned char var_1_140 = 1;
float var_1_141 = 0.018;
float var_1_142 = 25.6;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 4;
signed char last_1_var_1_9 = -128;
signed short int last_1_var_1_14 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25) {
		var_1_24 = (((max (var_1_26 , var_1_27)) + (abs (var_1_28))) + var_1_29);
	} else {
		var_1_24 = var_1_28;
	}


	// From: CodeObject2
	if (var_1_27 <= (var_1_31 >> var_1_29)) {
		if (var_1_26 > var_1_24) {
			var_1_30 = (abs (var_1_32));
		}
	}


	// From: CodeObject3
	if (var_1_31 > var_1_27) {
		var_1_33 = (256.75f + (max ((max (var_1_34 , var_1_35)) , var_1_36)));
	}


	// From: CodeObject4
	if (((var_1_28 << var_1_24) < var_1_30) || (var_1_25 || (var_1_36 >= var_1_33))) {
		if (var_1_24 > (abs (var_1_26))) {
			if (var_1_25 || var_1_38) {
				var_1_37 = ((min ((var_1_39 - var_1_28) , 32)) + var_1_26);
			}
		}
	}


	// From: CodeObject5
	if (var_1_29 < var_1_31) {
		if (var_1_36 < (var_1_35 + (var_1_33 / var_1_41))) {
			var_1_40 = 64;
		}
	} else {
		if (var_1_25) {
			var_1_40 = (max (((min (var_1_28 , var_1_42)) + var_1_43) , (max (4 , var_1_27))));
		}
	}


	// From: CodeObject6
	if ((var_1_45 - (abs (var_1_35))) >= (abs (- 3.6f))) {
		var_1_44 = ((abs (var_1_43)) - (var_1_46 - var_1_28));
	}


	// From: CodeObject7
	if (var_1_25) {
		if ((-5 << var_1_28) < var_1_39) {
			var_1_47 = var_1_36;
		} else {
			var_1_47 = (abs ((abs (var_1_34)) - var_1_48));
		}
	}


	// From: CodeObject8
	if (var_1_37 > ((4 & var_1_40) / var_1_39)) {
		if ((var_1_34 / var_1_41) > var_1_35) {
			if (var_1_25) {
				var_1_49 = (abs (min (var_1_39 , var_1_29)));
			}
		} else {
			var_1_49 = var_1_27;
		}
	} else {
		if (var_1_40 <= var_1_24) {
			if (var_1_33 < ((abs (var_1_41)) * var_1_34)) {
				var_1_49 = (abs ((abs (var_1_27)) + var_1_29));
			} else {
				if (var_1_38) {
					var_1_49 = (abs (min (var_1_28 , 0)));
				} else {
					var_1_49 = ((abs (var_1_50)) - var_1_39);
				}
			}
		}
	}


	// From: CodeObject9
	if (var_1_38 || var_1_25) {
		var_1_51 = (min (var_1_39 , (abs (var_1_40 + var_1_24))));
	}


	// From: CodeObject10
	if (var_1_24 <= 128) {
		var_1_52 = (var_1_38 || var_1_53);
	}


	// From: CodeObject11
	if (var_1_38) {
		if (var_1_52) {
			if (var_1_26 < var_1_44) {
				var_1_54 = (abs (var_1_35));
			}
		}
	} else {
		var_1_54 = (64.5 - var_1_48);
	}


	// From: CodeObject12
	if (var_1_40 <= var_1_39) {
		var_1_55 = (max ((var_1_50 - var_1_39) , (abs (var_1_26))));
	} else {
		if ((var_1_37 & var_1_40) >= -8) {
			if (var_1_53) {
				var_1_55 = ((var_1_39 - (var_1_56 - var_1_57)) + var_1_28);
			}
		}
	}


	// From: CodeObject13
	if (var_1_25) {
		var_1_58 = (abs (var_1_55));
	} else {
		if (var_1_37 < var_1_59) {
			if (var_1_53) {
				var_1_58 = ((var_1_46 - var_1_60) - (abs (-16)));
			}
		} else {
			if ((~ var_1_56) <= (min (-25 , var_1_44))) {
				var_1_58 = 8;
			} else {
				var_1_58 = var_1_43;
			}
		}
	}


	// From: CodeObject14
	if (((~ -16) & var_1_62) < (abs (var_1_39))) {
		var_1_61 = ((min (var_1_49 , (abs (var_1_59)))) + var_1_60);
	} else {
		var_1_61 = 4u;
	}


	// From: CodeObject15
	if ((var_1_31 - var_1_27) <= var_1_46) {
		if (((var_1_56 + var_1_62) & var_1_44) >= ((min (var_1_51 , var_1_31)) | 32)) {
			var_1_63 = (var_1_64 + (abs (var_1_65)));
		} else {
			var_1_63 = (min ((var_1_66 - var_1_67) , var_1_64));
		}
	}


	// From: CodeObject16
	if (var_1_52) {
		if (var_1_53) {
			var_1_68 = var_1_28;
		}
	} else {
		var_1_68 = (min (var_1_56 , var_1_26));
	}


	// From: CodeObject17
	if (var_1_40 <= (var_1_67 % var_1_39)) {
		if (((var_1_70 - var_1_71) - var_1_67) <= var_1_68) {
			var_1_69 = (((var_1_53 && var_1_72) && var_1_73) && var_1_74);
		} else {
			var_1_69 = (var_1_52 && (var_1_74 && var_1_75));
		}
	}


	// From: CodeObject18
	if ((min ((-0.4f * var_1_41) , (var_1_36 + 0.75f))) >= (var_1_48 - var_1_45)) {
		var_1_76 = (min ((max (var_1_49 , (var_1_77 - var_1_39))) , var_1_78));
	}


	// From: CodeObject19
	if ((var_1_70 / var_1_56) >= (max (var_1_67 , var_1_65))) {
		var_1_79 = (var_1_56 + (var_1_63 + (max (var_1_65 , var_1_64))));
	}


	// From: CodeObject20
	if (var_1_36 <= (var_1_48 / var_1_41)) {
		var_1_80 = (abs (64));
	} else {
		var_1_80 = (var_1_67 - var_1_71);
	}


	// From: CodeObject21
	if (var_1_80 > var_1_78) {
		var_1_82 = (var_1_48 - var_1_83);
	}


	// From: CodeObject22
	if (var_1_55 > var_1_50) {
		var_1_84 = (abs (var_1_70));
	}


	// From: CodeObject23
	if (var_1_52 || var_1_74) {
		var_1_85 = ((abs (max (var_1_49 , var_1_71))) + var_1_70);
	}


	// From: CodeObject24
	if (var_1_51 <= var_1_49) {
		var_1_86 = var_1_26;
	} else {
		var_1_86 = var_1_43;
	}


	// From: CodeObject25
	if (var_1_74) {
		var_1_87 = 16;
	} else {
		var_1_87 = var_1_67;
	}


	// From: CodeObject26
	if (var_1_75) {
		var_1_88 = var_1_72;
	}


	// From: CodeObject27
	if (var_1_75) {
		var_1_89 = var_1_71;
	} else {
		var_1_89 = var_1_71;
	}


	// From: CodeObject28
	if (var_1_73) {
		var_1_90 = var_1_43;
	}


	// From: CodeObject29
	if (var_1_74) {
		var_1_91 = var_1_73;
	} else {
		var_1_91 = var_1_75;
	}


	// From: CodeObject30
	if (var_1_59 < var_1_62) {
		var_1_92 = (61676 - var_1_89);
	}


	// From: CodeObject31
	if (var_1_34 <= (min ((min (var_1_47 , var_1_36)) , (var_1_48 - var_1_83)))) {
		var_1_93 = (max ((var_1_71 + (var_1_95 + var_1_96)) , var_1_67));
	}


	// From: CodeObject32
	if (var_1_95 < var_1_37) {
		if (var_1_71 == var_1_96) {
			if (32 <= var_1_95) {
				var_1_97 = (var_1_77 - (var_1_46 - (1000000000u - var_1_24)));
			}
		}
	}


	// From: CodeObject33
	if ((10 / var_1_94) > var_1_70) {
		if ((var_1_30 | 64u) >= (var_1_46 * (5u + var_1_44))) {
			if ((var_1_96 * var_1_43) <= var_1_99) {
				var_1_98 = var_1_65;
			} else {
				if (var_1_64 <= (abs (var_1_71 + var_1_96))) {
					var_1_98 = var_1_67;
				} else {
					var_1_98 = var_1_64;
				}
			}
		}
	} else {
		var_1_98 = (abs (var_1_66));
	}


	// From: CodeObject34
	if (! var_1_52) {
		if (var_1_54 >= (max (var_1_47 , (abs (var_1_34))))) {
			var_1_100 = (abs (var_1_34));
		}
	}


	// From: CodeObject35
	if (var_1_87 <= var_1_56) {
		if (var_1_28 >= var_1_84) {
			if ((var_1_98 / var_1_94) >= var_1_71) {
				var_1_101 = (abs (var_1_49));
			} else {
				var_1_101 = (min ((max (var_1_65 , (min (var_1_28 , var_1_89)))) , var_1_27));
			}
		} else {
			var_1_101 = (abs (var_1_80));
		}
	}


	// From: CodeObject36
	if (200 <= (~ (var_1_85 + var_1_71))) {
		var_1_102 = (var_1_92 - (abs (abs (var_1_103))));
	}


	// From: CodeObject37
	if ((var_1_52 && var_1_53) && (var_1_64 < var_1_79)) {
		var_1_104 = ((abs (var_1_95)) - var_1_96);
	}


	// From: CodeObject38
	var_1_106 = (abs (var_1_95));


	// From: CodeObject39
	if (var_1_74) {
		var_1_107 = (min ((abs (abs (var_1_67))) , (abs (var_1_95))));
	}


	// From: CodeObject40
	if ((~ (var_1_76 ^ var_1_79)) >= (min (var_1_71 , var_1_30))) {
		var_1_108 = var_1_75;
	}


	// From: CodeObject41
	if (var_1_48 >= var_1_36) {
		var_1_109 = (max (var_1_71 , (min (var_1_50 , 16))));
	}


	// From: CodeObject42
	if (var_1_93 < var_1_98) {
		var_1_110 = (abs (var_1_83));
	} else {
		var_1_110 = (abs (var_1_35));
	}


	// From: CodeObject43
	if (var_1_71 < (var_1_90 % (min (var_1_94 , var_1_70)))) {
		var_1_111 = (max (var_1_87 , var_1_63));
	} else {
		var_1_111 = ((abs (2 + var_1_57)) - var_1_93);
	}


	// From: CodeObject44
	var_1_112 = var_1_87;


	// From: CodeObject45
	var_1_113 = (min (var_1_71 , var_1_95));


	// From: CodeObject46
	var_1_114 = (max (var_1_34 , var_1_35));


	// From: CodeObject47
	if (! var_1_73) {
		var_1_115 = (abs (var_1_48));
	} else {
		var_1_115 = (min (var_1_48 , var_1_34));
	}


	// From: CodeObject48
	if ((var_1_102 / var_1_70) <= var_1_56) {
		var_1_116 = (abs (var_1_71));
	} else {
		var_1_116 = (min (var_1_117 , var_1_95));
	}


	// From: CodeObject49
	if ((var_1_89 * var_1_58) <= 50) {
		var_1_118 = (max (var_1_35 , var_1_36));
	}


	// From: CodeObject50
	if (var_1_53) {
		var_1_119 = (! (var_1_75 || var_1_120));
	} else {
		var_1_119 = ((var_1_74 || var_1_73) && (! (var_1_75 && var_1_120)));
	}


	// From: CodeObject51
	if (var_1_25) {
		var_1_121 = ((max (256u , var_1_59)) + var_1_57);
	}


	// From: CodeObject52
	if (! (var_1_117 != var_1_123)) {
		var_1_122 = ((var_1_120 && var_1_75) || (var_1_124 || (! var_1_53)));
	} else {
		if ((var_1_45 + var_1_115) > var_1_47) {
			var_1_122 = var_1_53;
		}
	}


	// From: CodeObject53
	if (var_1_109 < ((- var_1_77) & var_1_126)) {
		if ((var_1_34 / var_1_41) > 999.5f) {
			if ((var_1_56 / (min (var_1_39 , var_1_94))) <= (abs (var_1_57))) {
				var_1_125 = (var_1_79 + var_1_29);
			}
		} else {
			if (((abs (var_1_110)) < var_1_34) && (var_1_45 < var_1_36)) {
				if (var_1_110 < var_1_34) {
					var_1_125 = (min (var_1_92 , var_1_123));
				} else {
					var_1_125 = var_1_66;
				}
			} else {
				var_1_125 = var_1_95;
			}
		}
	}


	// From: CodeObject54
	if (var_1_41 >= (- (- 7.2f))) {
		if (var_1_38 || ((max (var_1_84 , var_1_90)) > var_1_31)) {
			var_1_127 = (max (var_1_77 , (abs (abs (var_1_57)))));
		} else {
			if ((var_1_42 != var_1_126) || (var_1_90 < (abs (var_1_29)))) {
				var_1_127 = (abs (abs (var_1_77)));
			}
		}
	} else {
		var_1_127 = (var_1_77 - var_1_24);
	}


	// From: CodeObject55
	if ((abs (var_1_30)) >= var_1_61) {
		var_1_128 = (abs (var_1_35));
	}


	// From: CodeObject56
	var_1_129 = (min (3.4 , var_1_34));


	// From: CodeObject57
	if (((abs (var_1_129)) - var_1_45) != var_1_82) {
		var_1_130 = (max ((abs (var_1_66)) , var_1_67));
	} else {
		var_1_130 = (abs (abs (abs (var_1_131))));
	}


	// From: CodeObject58
	if (var_1_82 > var_1_133) {
		var_1_132 = var_1_73;
	} else {
		var_1_132 = var_1_120;
	}


	// From: CodeObject59
	var_1_134 = var_1_66;


	// From: CodeObject60
	if (var_1_108) {
		var_1_135 = var_1_117;
	} else {
		var_1_135 = 256;
	}


	// From: CodeObject61
	if (var_1_108) {
		var_1_136 = var_1_96;
	} else {
		var_1_136 = var_1_117;
	}


	// From: CodeObject62
	var_1_137 = var_1_48;


	// From: CodeObject63
	var_1_138 = var_1_71;


	// From: CodeObject64
	if (var_1_124) {
		var_1_139 = var_1_74;
	}


	// From: CodeObject65
	if (var_1_139) {
		var_1_140 = var_1_75;
	} else {
		var_1_140 = var_1_53;
	}


	// From: CodeObject66
	if ((var_1_26 / 8) <= (~ var_1_51)) {
		var_1_141 = var_1_142;
	} else {
		if (var_1_79 <= var_1_138) {
			var_1_141 = (3.5f - var_1_83);
		} else {
			var_1_141 = var_1_48;
		}
	}


	// From: Req6Batch69PS_CN_500
	signed long int stepLocal_5 = last_1_var_1_9;
	if (stepLocal_5 < last_1_var_1_1) {
		var_1_20 = ((! (var_1_11 && var_1_22)) && (var_1_10 || var_1_23));
	} else {
		var_1_20 = var_1_23;
	}


	// From: Req4Batch69PS_CN_500
	if (var_1_20 || (var_1_6 <= var_1_8)) {
		var_1_14 = var_1_6;
	}


	// From: Req1Batch69PS_CN_500
	signed long int stepLocal_0 = var_1_3 - var_1_4;
	if (last_1_var_1_14 >= stepLocal_0) {
		var_1_1 = ((var_1_5 - (min (var_1_6 , var_1_7))) - var_1_8);
	} else {
		var_1_1 = (32 + var_1_7);
	}


	// From: Req2Batch69PS_CN_500
	unsigned char stepLocal_2 = var_1_20;
	signed long int stepLocal_1 = var_1_8 - var_1_5;
	if (stepLocal_1 >= var_1_1) {
		if (stepLocal_2 || var_1_20) {
			var_1_9 = var_1_6;
		} else {
			var_1_9 = var_1_7;
		}
	} else {
		var_1_9 = var_1_5;
	}


	// From: Req3Batch69PS_CN_500
	unsigned char stepLocal_4 = var_1_7;
	unsigned char stepLocal_3 = var_1_20;
	if (stepLocal_4 > var_1_1) {
		if (((var_1_1 + var_1_9) == var_1_1) && stepLocal_3) {
			if (! var_1_20) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = var_1_13;
			}
		} else {
			var_1_12 = var_1_13;
		}
	} else {
		var_1_12 = var_1_13;
	}


	// From: Req5Batch69PS_CN_500
	if (var_1_12 < var_1_13) {
		var_1_15 = ((max ((max (var_1_16 , var_1_17)) , (max (3407568261u , var_1_18)))) - (var_1_19 - 32u));
	} else {
		var_1_15 = (var_1_18 - var_1_19);
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 2147483647);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 16384);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16384);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65535);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -461168.6018427382800e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	assume_abort_if_not(var_1_41 != 0.0F);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= -16383);
	assume_abort_if_not(var_1_42 <= 16383);
	var_1_43 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_43 >= -16383);
	assume_abort_if_not(var_1_43 <= 16383);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= 1073741823);
	assume_abort_if_not(var_1_46 <= 2147483646);
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 32767);
	assume_abort_if_not(var_1_50 <= 65534);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 8191);
	assume_abort_if_not(var_1_56 <= 16383);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 8191);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 65535);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 1073741823);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= -2147483648);
	assume_abort_if_not(var_1_62 <= 2147483647);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -63);
	assume_abort_if_not(var_1_64 <= 63);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -63);
	assume_abort_if_not(var_1_65 <= 63);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= -1);
	assume_abort_if_not(var_1_66 <= 126);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 126);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 191);
	assume_abort_if_not(var_1_70 <= 255);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 64);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 1);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 1);
	assume_abort_if_not(var_1_73 <= 1);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 1);
	assume_abort_if_not(var_1_74 <= 1);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 0);
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 2147483647);
	assume_abort_if_not(var_1_77 <= 4294967294);
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 4294967294);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854765600e+12F && var_1_83 >= 1.0e-20F ));
	var_1_94 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_94 >= -128);
	assume_abort_if_not(var_1_94 <= 127);
	assume_abort_if_not(var_1_94 != 0);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 64);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 63);
	var_1_99 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_99 >= -2147483648);
	assume_abort_if_not(var_1_99 <= 2147483647);
	var_1_103 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_103 >= -2147483646);
	assume_abort_if_not(var_1_103 <= 2147483646);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 254);
	var_1_120 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_120 >= 0);
	assume_abort_if_not(var_1_120 <= 0);
	var_1_123 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_123 >= 0);
	assume_abort_if_not(var_1_123 <= 255);
	var_1_124 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_124 >= 0);
	assume_abort_if_not(var_1_124 <= 0);
	var_1_126 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_126 >= 0);
	assume_abort_if_not(var_1_126 <= 65535);
	var_1_131 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_131 >= -126);
	assume_abort_if_not(var_1_131 <= 126);
	var_1_133 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_133 >= -922337.2036854776000e+13F && var_1_133 <= -1.0e-20F) || (var_1_133 <= 9223372.036854776000e+12F && var_1_133 >= 1.0e-20F ));
	var_1_142 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_142 >= -922337.2036854765600e+13F && var_1_142 <= -1.0e-20F) || (var_1_142 <= 9223372.036854765600e+12F && var_1_142 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_14 = var_1_14;
}

int property() {
	return ((((((last_1_var_1_14 >= (var_1_3 - var_1_4)) ? (var_1_1 == ((unsigned char) ((var_1_5 - (min (var_1_6 , var_1_7))) - var_1_8))) : (var_1_1 == ((unsigned char) (32 + var_1_7)))) && (((var_1_8 - var_1_5) >= var_1_1) ? ((var_1_20 || var_1_20) ? (var_1_9 == ((signed char) var_1_6)) : (var_1_9 == ((signed char) var_1_7))) : (var_1_9 == ((signed char) var_1_5)))) && ((var_1_7 > var_1_1) ? ((((var_1_1 + var_1_9) == var_1_1) && var_1_20) ? ((! var_1_20) ? (var_1_12 == ((double) var_1_13)) : (var_1_12 == ((double) var_1_13))) : (var_1_12 == ((double) var_1_13))) : (var_1_12 == ((double) var_1_13)))) && ((var_1_20 || (var_1_6 <= var_1_8)) ? (var_1_14 == ((signed short int) var_1_6)) : 1)) && ((var_1_12 < var_1_13) ? (var_1_15 == ((unsigned long int) ((max ((max (var_1_16 , var_1_17)) , (max (3407568261u , var_1_18)))) - (var_1_19 - 32u)))) : (var_1_15 == ((unsigned long int) (var_1_18 - var_1_19))))) && ((last_1_var_1_9 < last_1_var_1_1) ? (var_1_20 == ((unsigned char) ((! (var_1_11 && var_1_22)) && (var_1_10 || var_1_23)))) : (var_1_20 == ((unsigned char) var_1_23)))
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
