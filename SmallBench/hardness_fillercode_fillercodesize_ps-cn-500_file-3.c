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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -64;
unsigned char var_1_3 = 1;
signed char var_1_5 = -32;
unsigned short int var_1_6 = 256;
unsigned long int var_1_10 = 256;
double var_1_12 = 8.2;
signed char var_1_13 = 16;
signed char var_1_14 = 10;
double var_1_15 = 199.125;
double var_1_16 = 9.4;
double var_1_17 = 9999999999999.6;
unsigned char var_1_20 = 32;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 64;
unsigned long int var_1_23 = 64;
unsigned long int var_1_24 = 5;
unsigned short int var_1_25 = 2;
unsigned short int var_1_26 = 1;
unsigned short int var_1_27 = 64;
unsigned long int var_1_28 = 1148947750;
signed long int var_1_29 = -4;
signed short int var_1_30 = 64;
unsigned char var_1_31 = 0;
float var_1_32 = 255.65;
float var_1_33 = 15.75;
float var_1_34 = -0.5;
float var_1_35 = 1.25;
unsigned char var_1_36 = 1;
unsigned long int var_1_37 = 2;
unsigned char var_1_38 = 1;
signed char var_1_39 = -128;
signed char var_1_40 = -4;
unsigned short int var_1_41 = 4;
unsigned short int var_1_42 = 2;
unsigned short int var_1_43 = 40413;
unsigned short int var_1_44 = 8;
unsigned short int var_1_45 = 16;
unsigned short int var_1_46 = 128;
unsigned short int var_1_47 = 256;
unsigned short int var_1_48 = 4;
unsigned short int var_1_49 = 1;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 1;
unsigned short int var_1_52 = 128;
unsigned long int var_1_53 = 1;
signed char var_1_54 = 4;
unsigned long int var_1_55 = 2323183524;
signed long int var_1_56 = 4;
signed long int var_1_57 = 2;
signed long int var_1_58 = 2136509866;
float var_1_59 = 5.575;
float var_1_60 = 10000000000000.125;
float var_1_61 = 63.75;
float var_1_62 = 1.625;
unsigned long int var_1_63 = 16;
signed char var_1_64 = 5;
signed char var_1_65 = -1;
signed char var_1_66 = 0;
signed char var_1_67 = -2;
signed char var_1_68 = -1;
double var_1_69 = 8.5;
unsigned char var_1_70 = 1;
unsigned char var_1_71 = 0;
double var_1_72 = 4.875;
float var_1_73 = 2.5;
float var_1_74 = 24.5;
float var_1_75 = 0.0;
unsigned char var_1_76 = 4;
unsigned char var_1_77 = 200;
double var_1_78 = 1000000000000.2;
signed char var_1_79 = 8;
signed short int var_1_80 = -16;
unsigned long int var_1_81 = 4;
unsigned short int var_1_82 = 50;
double var_1_83 = 9999999999.5;
signed char var_1_84 = -8;
signed char var_1_85 = 5;
signed char var_1_86 = 50;
signed char var_1_87 = 8;
unsigned char var_1_88 = 0;
unsigned char var_1_89 = 1;
signed short int var_1_90 = -10;
double var_1_91 = 255.7;
unsigned char var_1_92 = 200;
unsigned char var_1_93 = 0;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 0;
double var_1_97 = 16.3;
unsigned long int var_1_98 = 16;
unsigned long int var_1_99 = 100;
signed long int var_1_100 = 10;
unsigned char var_1_101 = 0;
signed long int var_1_102 = 16;
unsigned short int var_1_103 = 100;
unsigned long int var_1_104 = 16;
unsigned long int var_1_105 = 64;
unsigned long int var_1_106 = 10000000;
double var_1_107 = 3.4;
unsigned char var_1_108 = 1;
signed long int var_1_109 = -32;
float var_1_110 = 49.5;
double var_1_111 = 31.6;
double var_1_112 = 15.5;
double var_1_113 = 1000000.6;
double var_1_114 = 50.8;
double var_1_115 = 8.5;
double var_1_116 = 63.5;
float var_1_117 = 63.625;
unsigned long int var_1_118 = 1000000;
unsigned short int var_1_119 = 2;
unsigned short int var_1_120 = 64290;
float var_1_121 = 15.125;
float var_1_122 = 16.875;
double var_1_123 = 127.5;
signed char var_1_124 = -50;
signed char var_1_125 = 2;
signed char var_1_126 = 0;
unsigned long int var_1_127 = 8;
unsigned short int var_1_128 = 1;
signed long int var_1_129 = -64;
double var_1_130 = 1.6;
unsigned short int var_1_131 = 4;
double var_1_132 = 15.2;
float var_1_133 = 127.6;
unsigned char var_1_134 = 1;
unsigned char var_1_135 = 1;
double var_1_136 = 64.75;
unsigned char var_1_137 = 8;
unsigned char var_1_138 = 0;
double var_1_139 = 4.75;
double var_1_140 = 63.25;
unsigned char var_1_141 = 1;
unsigned long int var_1_142 = 5;
unsigned char var_1_143 = 0;
unsigned short int var_1_144 = 50;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_10 = 256;
unsigned char last_1_var_1_20 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25 >= (max (var_1_26 , var_1_27))) {
		var_1_24 = (min ((max (var_1_27 , var_1_25)) , var_1_26));
	} else {
		var_1_24 = ((abs (var_1_25)) + (abs (var_1_28 - var_1_26)));
	}


	// From: CodeObject2
	if (var_1_30 > var_1_27) {
		var_1_29 = (abs (abs (min (var_1_26 , var_1_27))));
	}


	// From: CodeObject3
	if (((var_1_25 * var_1_26) / var_1_28) >= var_1_24) {
		var_1_32 = (max ((abs (min (var_1_33 , var_1_34))) , var_1_35));
	}


	// From: CodeObject4
	if (((~ 25) & var_1_27) <= var_1_25) {
		if ((5u / var_1_28) <= ((32u << var_1_27) / var_1_37)) {
			if (var_1_29 > var_1_26) {
				var_1_36 = (! var_1_38);
			}
		} else {
			if (var_1_28 < var_1_26) {
				var_1_36 = (((var_1_33 * var_1_35) >= (- var_1_34)) || var_1_38);
			} else {
				var_1_36 = (! (! 0));
			}
		}
	}


	// From: CodeObject5
	if (! (var_1_34 <= (var_1_33 + var_1_35))) {
		var_1_39 = var_1_40;
	}


	// From: CodeObject6
	if (var_1_37 <= var_1_26) {
		if ((~ 32u) > var_1_29) {
			var_1_41 = (min (var_1_42 , (abs (var_1_43 - var_1_44))));
		} else {
			var_1_41 = ((min ((max (var_1_44 , var_1_45)) , var_1_46)) + (min (var_1_47 , (min (var_1_48 , var_1_49)))));
		}
	} else {
		if ((1 ^ var_1_46) < (var_1_40 & var_1_29)) {
			var_1_41 = (min (10 , var_1_47));
		}
	}


	// From: CodeObject7
	if (var_1_31 && var_1_38) {
		var_1_50 = (! (var_1_38 || var_1_51));
	}


	// From: CodeObject8
	if ((var_1_34 <= var_1_35) && var_1_51) {
		if (var_1_47 >= (min ((abs (4)) , var_1_42))) {
			var_1_52 = (max (var_1_49 , var_1_44));
		}
	}


	// From: CodeObject9
	if (var_1_39 <= (var_1_54 / var_1_30)) {
		var_1_53 = (var_1_55 - var_1_47);
	}


	// From: CodeObject10
	var_1_56 = var_1_27;


	// From: CodeObject11
	if (var_1_44 <= var_1_47) {
		if ((abs (abs (var_1_34))) >= var_1_33) {
			var_1_57 = ((max (var_1_26 , var_1_43)) - (min (var_1_49 , (var_1_58 - var_1_44))));
		}
	} else {
		if (var_1_35 < ((abs (var_1_34)) * var_1_33)) {
			var_1_57 = (min (var_1_30 , var_1_52));
		}
	}


	// From: CodeObject12
	if ((~ var_1_54) < (abs (var_1_58 - var_1_26))) {
		var_1_59 = (max ((abs (var_1_60 + var_1_61)) , (255.45f + var_1_62)));
	} else {
		var_1_59 = (min (var_1_62 , 10.4f));
	}


	// From: CodeObject13
	if (var_1_55 >= var_1_56) {
		var_1_63 = var_1_55;
	}


	// From: CodeObject14
	if ((var_1_41 > var_1_43) && var_1_51) {
		var_1_64 = (min (((max (var_1_65 , 4)) - var_1_66) , var_1_40));
	} else {
		var_1_64 = (var_1_67 + var_1_68);
	}


	// From: CodeObject15
	if (var_1_57 >= ((~ var_1_28) >> var_1_52)) {
		var_1_69 = (max (var_1_62 , var_1_35));
	}


	// From: CodeObject16
	if (var_1_61 > (abs (var_1_60))) {
		var_1_70 = ((var_1_56 < (var_1_39 >> var_1_43)) && var_1_71);
	}


	// From: CodeObject17
	if (var_1_41 > var_1_44) {
		var_1_72 = var_1_35;
	}


	// From: CodeObject18
	if ((var_1_57 % var_1_37) >= var_1_43) {
		var_1_73 = (var_1_74 - (var_1_75 - 31.8f));
	}


	// From: CodeObject19
	if (var_1_58 < var_1_67) {
		var_1_76 = (abs (max (var_1_66 , var_1_77)));
	}


	// From: CodeObject20
	if ((var_1_43 * var_1_26) <= var_1_57) {
		if ((max (var_1_33 , var_1_75)) > var_1_74) {
			var_1_78 = var_1_34;
		} else {
			var_1_78 = (var_1_60 + var_1_62);
		}
	}


	// From: CodeObject21
	if (! var_1_71) {
		if ((~ var_1_55) >= var_1_56) {
			var_1_79 = var_1_67;
		}
	}


	// From: CodeObject22
	if ((abs (min (var_1_61 , var_1_35))) >= var_1_32) {
		if (! var_1_70) {
			if (((var_1_76 >> var_1_43) + var_1_79) > var_1_77) {
				var_1_80 = (var_1_39 + var_1_64);
			}
		}
	} else {
		var_1_80 = (abs (var_1_76));
	}


	// From: CodeObject23
	var_1_81 = (max ((var_1_55 - (abs (var_1_76))) , var_1_27));


	// From: CodeObject24
	if (var_1_38) {
		var_1_82 = (max ((abs (abs (var_1_49))) , var_1_47));
	} else {
		if (var_1_24 > (var_1_52 >> var_1_41)) {
			var_1_82 = (var_1_49 + (min (var_1_45 , var_1_48)));
		} else {
			if (((min (var_1_72 , var_1_34)) / (max (var_1_75 , var_1_83))) > var_1_78) {
				var_1_82 = var_1_77;
			}
		}
	}


	// From: CodeObject25
	if ((var_1_76 >> 8) > var_1_58) {
		var_1_84 = (var_1_66 - (min ((var_1_86 + 10) , var_1_87)));
	}


	// From: CodeObject26
	if ((min ((var_1_34 / var_1_83) , var_1_78)) < var_1_69) {
		if (var_1_36) {
			if ((- (~ var_1_29)) < var_1_67) {
				var_1_88 = (var_1_70 && var_1_71);
			} else {
				var_1_88 = ((var_1_31 || var_1_38) && ((var_1_70 || var_1_51) && var_1_89));
			}
		}
	}


	// From: CodeObject27
	if (var_1_31) {
		if (var_1_43 < var_1_29) {
			var_1_90 = (min (var_1_54 , (max ((var_1_66 + var_1_85) , 64))));
		} else {
			var_1_90 = (var_1_85 + var_1_87);
		}
	} else {
		if (var_1_28 <= (abs (var_1_55 - var_1_58))) {
			if (var_1_80 >= var_1_85) {
				var_1_90 = (var_1_76 - var_1_87);
			} else {
				var_1_90 = (abs (var_1_66));
			}
		} else {
			var_1_90 = (abs (var_1_39));
		}
	}


	// From: CodeObject28
	if (var_1_71 || var_1_89) {
		if ((min (var_1_92 , var_1_81)) <= (var_1_26 | var_1_56)) {
			if ((var_1_59 * (- var_1_73)) == var_1_75) {
				var_1_91 = (min ((abs (var_1_61)) , (abs (var_1_60))));
			}
		}
	}


	// From: CodeObject29
	if (16 >= var_1_76) {
		if ((min (128.5 , var_1_74)) > var_1_78) {
			var_1_93 = (! var_1_71);
		}
	}


	// From: CodeObject30
	if ((abs (min (var_1_64 , var_1_86))) < var_1_45) {
		var_1_94 = (! (var_1_71 || (var_1_95 || var_1_96)));
	}


	// From: CodeObject31
	if (var_1_59 <= ((abs (var_1_72)) + var_1_91)) {
		var_1_97 = (max (var_1_75 , var_1_61));
	}


	// From: CodeObject32
	var_1_98 = (var_1_58 + var_1_28);


	// From: CodeObject33
	if (var_1_91 > var_1_60) {
		var_1_99 = (var_1_55 - var_1_49);
	}


	// From: CodeObject34
	if ((var_1_85 + var_1_67) >= -5) {
		var_1_100 = (-64 + var_1_76);
	}


	// From: CodeObject35
	if (! (32 < var_1_30)) {
		if ((var_1_25 & var_1_81) >= var_1_42) {
			var_1_101 = (var_1_51 || var_1_38);
		} else {
			var_1_101 = (((- var_1_73) < var_1_59) && (var_1_71 || var_1_96));
		}
	} else {
		if (! var_1_94) {
			var_1_101 = (((var_1_92 / var_1_30) > var_1_102) && var_1_96);
		}
	}


	// From: CodeObject36
	if (-256 > ((var_1_65 + var_1_80) ^ var_1_52)) {
		if (var_1_58 >= var_1_57) {
			if ((abs (var_1_69)) > ((var_1_74 - var_1_75) / var_1_83)) {
				var_1_103 = (var_1_86 + var_1_47);
			} else {
				var_1_103 = var_1_49;
			}
		}
	}


	// From: CodeObject37
	if (var_1_66 < var_1_25) {
		var_1_104 = (abs (var_1_49));
	}


	// From: CodeObject38
	if (var_1_38) {
		if (var_1_54 >= var_1_29) {
			if (var_1_31 || var_1_36) {
				var_1_105 = (abs (var_1_44));
			} else {
				var_1_105 = (abs (var_1_48));
			}
		} else {
			var_1_105 = (abs (var_1_106));
		}
	} else {
		var_1_105 = var_1_42;
	}


	// From: CodeObject39
	if (var_1_108) {
		if (var_1_35 != (var_1_83 + var_1_59)) {
			var_1_107 = (abs (32.7));
		}
	} else {
		var_1_107 = (min (var_1_34 , var_1_75));
	}


	// From: CodeObject40
	if (! var_1_95) {
		var_1_109 = (abs (var_1_58));
	} else {
		if (var_1_36 && (var_1_104 >= (var_1_42 & var_1_26))) {
			var_1_109 = (abs (var_1_103));
		}
	}


	// From: CodeObject41
	if (5 >= var_1_37) {
		var_1_110 = (abs (abs (var_1_35)));
	}


	// From: CodeObject42
	if (var_1_94) {
		var_1_111 = var_1_33;
	} else {
		var_1_111 = (max ((abs (var_1_35)) , (abs (var_1_34))));
	}


	// From: CodeObject43
	if ((- (var_1_28 << var_1_47)) <= var_1_76) {
		if (var_1_69 <= (abs (var_1_74 - var_1_75))) {
			var_1_112 = ((var_1_75 - (abs (var_1_61))) - (var_1_113 + 255.2));
		} else {
			if (var_1_110 >= var_1_107) {
				var_1_112 = (abs (var_1_114));
			} else {
				var_1_112 = (max (var_1_35 , ((abs (var_1_113)) + var_1_115)));
			}
		}
	} else {
		var_1_112 = (((var_1_116 + 8.375) - var_1_113) + var_1_115);
	}


	// From: CodeObject44
	if (var_1_105 > var_1_118) {
		var_1_117 = (min (var_1_113 , var_1_62));
	} else {
		if (var_1_108) {
			var_1_117 = (abs (2.5f));
		}
	}


	// From: CodeObject45
	if (var_1_89) {
		if (var_1_75 == var_1_83) {
			if ((- 7.5) > var_1_60) {
				var_1_119 = (min (((var_1_120 - 64) - var_1_44) , (max ((var_1_87 + var_1_46) , var_1_42))));
			}
		} else {
			var_1_119 = var_1_48;
		}
	}


	// From: CodeObject46
	if (var_1_93) {
		var_1_121 = (abs (var_1_60));
	} else {
		var_1_121 = (1.2f + (var_1_116 + (min (8.5f , var_1_122))));
	}


	// From: CodeObject47
	var_1_123 = ((min ((abs (var_1_116)) , var_1_113)) + var_1_62);


	// From: CodeObject48
	if (var_1_75 <= var_1_112) {
		var_1_124 = var_1_67;
	} else {
		var_1_124 = (var_1_66 - ((min (var_1_86 , var_1_125)) + var_1_126));
	}


	// From: CodeObject49
	if ((var_1_120 | var_1_125) >= (abs (var_1_28 - var_1_26))) {
		var_1_127 = (max (var_1_119 , (abs (var_1_106))));
	}


	// From: CodeObject50
	if ((var_1_38 && (var_1_72 >= var_1_83)) && var_1_71) {
		if ((var_1_27 * var_1_98) <= var_1_87) {
			var_1_128 = var_1_66;
		}
	} else {
		var_1_128 = var_1_86;
	}


	// From: CodeObject51
	if (var_1_71) {
		var_1_129 = var_1_40;
	} else {
		var_1_129 = var_1_58;
	}


	// From: CodeObject52
	var_1_130 = var_1_60;


	// From: CodeObject53
	if (var_1_95) {
		var_1_131 = var_1_43;
	}


	// From: CodeObject54
	var_1_132 = var_1_75;


	// From: CodeObject55
	if (var_1_36) {
		var_1_133 = var_1_60;
	} else {
		var_1_133 = var_1_34;
	}


	// From: CodeObject56
	if (var_1_101) {
		var_1_134 = var_1_96;
	}


	// From: CodeObject57
	if (var_1_134) {
		var_1_135 = var_1_38;
	} else {
		var_1_135 = var_1_71;
	}


	// From: CodeObject58
	if (var_1_96) {
		var_1_136 = var_1_116;
	}


	// From: CodeObject59
	if (var_1_94) {
		var_1_137 = var_1_125;
	}


	// From: CodeObject60
	if (var_1_95) {
		var_1_138 = 1;
	} else {
		var_1_138 = 0;
	}


	// From: CodeObject61
	if (var_1_50) {
		var_1_139 = var_1_35;
	}


	// From: CodeObject62
	if (var_1_70) {
		var_1_140 = var_1_115;
	} else {
		var_1_140 = var_1_115;
	}


	// From: CodeObject63
	var_1_141 = var_1_71;


	// From: CodeObject64
	if (var_1_71) {
		var_1_142 = var_1_25;
	}


	// From: CodeObject65
	if (2 >= var_1_109) {
		if (var_1_128 > 16) {
			var_1_143 = (! (var_1_38 && (var_1_70 || var_1_51)));
		} else {
			var_1_143 = var_1_96;
		}
	}


	// From: CodeObject66
	var_1_144 = var_1_86;


	// From: Req2Batch3PS_CN_500
	if (var_1_3) {
		if ((last_1_var_1_10 + (var_1_5 + last_1_var_1_20)) >= last_1_var_1_20) {
			var_1_6 = last_1_var_1_20;
		}
	}


	// From: Req6Batch3PS_CN_500
	signed long int stepLocal_2 = var_1_5 * var_1_13;
	if (stepLocal_2 > last_1_var_1_10) {
		var_1_20 = (abs (max ((var_1_21 - var_1_14) , (var_1_22 + 8))));
	}


	// From: Req5Batch3PS_CN_500
	if ((min ((var_1_14 - var_1_20) , var_1_5)) < var_1_20) {
		if (var_1_3) {
			var_1_17 = 128.1;
		}
	}


	// From: Req4Batch3PS_CN_500
	unsigned char stepLocal_1 = var_1_17 <= var_1_17;
	if (stepLocal_1 || var_1_3) {
		if ((var_1_17 / var_1_15) > 25.25) {
			var_1_12 = 128.5;
		}
	} else {
		var_1_12 = var_1_16;
	}


	// From: Req1Batch3PS_CN_500
	if (99999.8f < var_1_17) {
		if (! var_1_3) {
			if (var_1_17 >= (var_1_17 / 2.5f)) {
				if (var_1_3) {
					var_1_1 = var_1_5;
				} else {
					var_1_1 = var_1_5;
				}
			}
		}
	}


	// From: Req7Batch3PS_CN_500
	if ((var_1_17 + var_1_12) <= var_1_17) {
		if (var_1_6 >= var_1_6) {
			var_1_23 = var_1_20;
		}
	}


	// From: Req3Batch3PS_CN_500
	unsigned long int stepLocal_0 = (var_1_6 ^ var_1_20) + var_1_23;
	if (var_1_20 <= stepLocal_0) {
		if (var_1_12 == var_1_12) {
			var_1_10 = 0u;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65535);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65535);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 65535);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 1073741823);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	assume_abort_if_not(var_1_30 != 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 4294967295);
	assume_abort_if_not(var_1_37 != 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -127);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 65534);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 32767);
	assume_abort_if_not(var_1_43 <= 65534);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 32767);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 32767);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 32767);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 32767);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= -128);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 2147483647);
	assume_abort_if_not(var_1_55 <= 4294967294);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= 1073741823);
	assume_abort_if_not(var_1_58 <= 2147483646);
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -461168.6018427382800e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -461168.6018427382800e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -1);
	assume_abort_if_not(var_1_65 <= 126);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 126);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -63);
	assume_abort_if_not(var_1_67 <= 63);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= -63);
	assume_abort_if_not(var_1_68 <= 63);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 0);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 4611686.018427382800e+12F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854765600e+12F && var_1_75 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 254);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= -922337.2036854776000e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854776000e+12F && var_1_83 >= 1.0e-20F ));
	assume_abort_if_not(var_1_83 != 0.0F);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= -128);
	assume_abort_if_not(var_1_85 <= 127);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 63);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 126);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 1);
	assume_abort_if_not(var_1_89 <= 1);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 255);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 0);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 0);
	var_1_102 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_102 >= -2147483648);
	assume_abort_if_not(var_1_102 <= 2147483647);
	var_1_106 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 4294967294);
	var_1_108 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 1);
	var_1_113 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_113 >= 0.0F && var_1_113 <= -1.0e-20F) || (var_1_113 <= 4611686.018427382800e+12F && var_1_113 >= 1.0e-20F ));
	var_1_114 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_114 >= -922337.2036854765600e+13F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 9223372.036854765600e+12F && var_1_114 >= 1.0e-20F ));
	var_1_115 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_115 >= -461168.6018427382800e+13F && var_1_115 <= -1.0e-20F) || (var_1_115 <= 4611686.018427382800e+12F && var_1_115 >= 1.0e-20F ));
	var_1_116 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_116 >= 0.0F && var_1_116 <= -1.0e-20F) || (var_1_116 <= 2305843.009213691390e+12F && var_1_116 >= 1.0e-20F ));
	var_1_118 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_118 >= 0);
	assume_abort_if_not(var_1_118 <= 4294967295);
	var_1_120 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_120 >= 49150);
	assume_abort_if_not(var_1_120 <= 65534);
	var_1_122 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_122 >= -230584.3009213691390e+13F && var_1_122 <= -1.0e-20F) || (var_1_122 <= 2305843.009213691390e+12F && var_1_122 >= 1.0e-20F ));
	var_1_125 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_125 >= 0);
	assume_abort_if_not(var_1_125 <= 63);
	var_1_126 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_126 >= 0);
	assume_abort_if_not(var_1_126 <= 63);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((((99999.8f < var_1_17) ? ((! var_1_3) ? ((var_1_17 >= (var_1_17 / 2.5f)) ? (var_1_3 ? (var_1_1 == ((signed char) var_1_5)) : (var_1_1 == ((signed char) var_1_5))) : 1) : 1) : 1) && (var_1_3 ? (((last_1_var_1_10 + (var_1_5 + last_1_var_1_20)) >= last_1_var_1_20) ? (var_1_6 == ((unsigned short int) last_1_var_1_20)) : 1) : 1)) && ((var_1_20 <= ((var_1_6 ^ var_1_20) + var_1_23)) ? ((var_1_12 == var_1_12) ? (var_1_10 == ((unsigned long int) 0u)) : 1) : 1)) && (((var_1_17 <= var_1_17) || var_1_3) ? (((var_1_17 / var_1_15) > 25.25) ? (var_1_12 == ((double) 128.5)) : 1) : (var_1_12 == ((double) var_1_16)))) && (((min ((var_1_14 - var_1_20) , var_1_5)) < var_1_20) ? (var_1_3 ? (var_1_17 == ((double) 128.1)) : 1) : 1)) && (((var_1_5 * var_1_13) > last_1_var_1_10) ? (var_1_20 == ((unsigned char) (abs (max ((var_1_21 - var_1_14) , (var_1_22 + 8)))))) : 1)) && (((var_1_17 + var_1_12) <= var_1_17) ? ((var_1_6 >= var_1_6) ? (var_1_23 == ((unsigned long int) var_1_20)) : 1) : 1)
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
