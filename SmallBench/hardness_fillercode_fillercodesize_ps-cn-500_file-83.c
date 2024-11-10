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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch83PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -25;
unsigned char var_1_2 = 0;
signed long int var_1_3 = 1230640054;
signed long int var_1_6 = 1508873667;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
float var_1_16 = 10000000000000.375;
float var_1_17 = 16.4;
float var_1_18 = 8.5;
float var_1_19 = 64.75;
unsigned char var_1_20 = 16;
signed char var_1_22 = 0;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 10;
signed long int var_1_26 = 2;
signed long int var_1_27 = -25;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 128;
signed short int var_1_30 = 25;
signed short int var_1_31 = 2;
signed short int var_1_32 = 5;
double var_1_33 = 9.25;
double var_1_34 = 5.5;
double var_1_35 = 99.2;
signed long int var_1_36 = -64;
signed short int var_1_37 = 10000;
signed short int var_1_38 = 10000;
unsigned long int var_1_39 = 10;
unsigned long int var_1_40 = 10;
signed char var_1_41 = 32;
signed char var_1_42 = 64;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned short int var_1_49 = 1;
signed char var_1_50 = 50;
signed long int var_1_51 = 16;
signed char var_1_52 = -64;
signed long int var_1_53 = -100;
float var_1_54 = 49.4;
float var_1_55 = 10000.375;
unsigned long int var_1_56 = 8;
signed short int var_1_57 = 25;
float var_1_58 = 199.875;
float var_1_59 = 0.19999999999999996;
double var_1_60 = 1000.98;
double var_1_61 = 127.6;
float var_1_62 = -0.5;
float var_1_63 = 1.6;
float var_1_64 = 127.1;
float var_1_65 = 1.145;
float var_1_66 = 4.2;
float var_1_67 = 31.5;
signed char var_1_68 = -1;
signed char var_1_69 = 8;
signed char var_1_70 = -10;
signed char var_1_71 = 32;
signed char var_1_72 = 4;
signed char var_1_73 = 5;
signed char var_1_74 = 0;
signed long int var_1_75 = 1;
signed char var_1_76 = -64;
float var_1_77 = 7.1;
unsigned short int var_1_78 = 8;
unsigned short int var_1_79 = 54995;
unsigned short int var_1_80 = 58454;
unsigned short int var_1_81 = 64875;
double var_1_82 = 255.5;
double var_1_83 = 499.75;
double var_1_84 = 128.2;
unsigned long int var_1_85 = 50;
float var_1_86 = 8.2;
signed long int var_1_87 = 64;
unsigned char var_1_88 = 8;
signed short int var_1_89 = 4;
double var_1_90 = 25.5;
double var_1_91 = 7.75;
double var_1_92 = 64.85;
signed long int var_1_93 = -2;
signed short int var_1_94 = -5;
signed short int var_1_95 = 256;
float var_1_96 = 63.2;
float var_1_97 = 25.78;
signed long int var_1_98 = 0;
double var_1_99 = 64.5;
unsigned char var_1_100 = 8;
unsigned char var_1_101 = 8;
double var_1_102 = 10.625;
double var_1_103 = 127.25;
unsigned char var_1_104 = 1;
unsigned char var_1_105 = 0;
unsigned long int var_1_106 = 2;
unsigned short int var_1_107 = 64;
unsigned short int var_1_108 = 28921;
unsigned long int var_1_109 = 0;
unsigned short int var_1_110 = 128;
unsigned long int var_1_111 = 8;
signed short int var_1_112 = -10000;
unsigned char var_1_113 = 64;
unsigned char var_1_114 = 0;
unsigned long int var_1_115 = 50;
float var_1_116 = 128.2;
signed long int var_1_117 = -100;
unsigned short int var_1_118 = 25;
unsigned char var_1_119 = 1;
signed long int var_1_120 = 128;
unsigned char var_1_121 = 1;
signed long int var_1_122 = 64;
float var_1_123 = 7.2;
double var_1_124 = 100000000000.2;
signed char var_1_125 = 4;
unsigned char var_1_126 = 0;
signed long int var_1_127 = 256;
unsigned short int var_1_128 = 8;
unsigned char var_1_129 = 1;
unsigned char var_1_130 = 1;
signed char var_1_131 = 100;
unsigned char var_1_132 = 1;
unsigned short int var_1_133 = 128;
double var_1_134 = 24.4;
double var_1_135 = 4.75;
signed long int var_1_136 = 16;
unsigned char var_1_137 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (((abs (var_1_25)) >= (var_1_26 % var_1_27)) || var_1_28) {
		var_1_24 = (abs (var_1_29 - 8));
	} else {
		var_1_24 = (abs (var_1_29));
	}


	// From: CodeObject2
	if ((abs (var_1_27)) >= (max (var_1_24 , (var_1_29 ^ var_1_26)))) {
		var_1_30 = var_1_25;
	} else {
		if ((var_1_24 | (var_1_29 + var_1_26)) < var_1_27) {
			var_1_30 = (min (var_1_29 , var_1_25));
		} else {
			var_1_30 = var_1_25;
		}
	}


	// From: CodeObject3
	if (((var_1_30 / var_1_27) ^ 0) >= var_1_26) {
		var_1_31 = (abs (max (var_1_25 , var_1_24)));
	} else {
		var_1_31 = (min ((max (var_1_24 , var_1_29)) , var_1_25));
	}


	// From: CodeObject4
	if (var_1_28 || ((var_1_33 / var_1_34) >= var_1_35)) {
		if (var_1_28 || (1000000 > var_1_27)) {
			var_1_32 = (abs (var_1_24));
		}
	} else {
		var_1_32 = ((abs (var_1_29)) - ((var_1_37 + var_1_38) - 128));
	}


	// From: CodeObject5
	if (var_1_26 <= (var_1_31 | var_1_38)) {
		var_1_39 = (min ((abs (var_1_37)) , (abs (var_1_40))));
	}


	// From: CodeObject6
	if ((~ var_1_38) <= var_1_39) {
		if (var_1_37 < (var_1_24 ^ (abs (var_1_25)))) {
			var_1_41 = var_1_42;
		}
	}


	// From: CodeObject7
	if (var_1_28 && var_1_44) {
		if (var_1_32 >= var_1_37) {
			var_1_43 = ((var_1_45 || (! var_1_46)) || var_1_47);
		}
	}


	// From: CodeObject8
	if (var_1_44) {
		if (! ((var_1_24 / var_1_29) > var_1_32)) {
			var_1_48 = (var_1_28 || var_1_46);
		}
	} else {
		var_1_48 = (var_1_47 || var_1_46);
	}


	// From: CodeObject9
	if ((var_1_26 | (var_1_50 % var_1_27)) > (var_1_39 / var_1_38)) {
		var_1_49 = (min (1 , var_1_24));
	} else {
		var_1_49 = (abs (var_1_37));
	}


	// From: CodeObject10
	if ((var_1_37 ^ var_1_52) == var_1_49) {
		if (var_1_48) {
			var_1_51 = (min (-8 , (abs (max (var_1_42 , var_1_50)))));
		}
	} else {
		var_1_51 = var_1_41;
	}


	// From: CodeObject11
	if (var_1_32 >= ((var_1_50 % 64) >> var_1_31)) {
		var_1_53 = (abs (abs (max (var_1_49 , var_1_25))));
	} else {
		var_1_53 = (abs (4));
	}


	// From: CodeObject12
	if (var_1_39 <= var_1_25) {
		var_1_54 = (9.089f + var_1_55);
	}


	// From: CodeObject13
	var_1_56 = (abs (32u));


	// From: CodeObject14
	if (var_1_48 && (var_1_50 != var_1_52)) {
		if (var_1_37 < var_1_25) {
			var_1_57 = ((abs (max (25 , var_1_38))) - var_1_24);
		} else {
			var_1_57 = (max (var_1_42 , var_1_37));
		}
	} else {
		var_1_57 = (min ((min (var_1_50 , var_1_24)) , var_1_52));
	}


	// From: CodeObject15
	if (var_1_54 < var_1_35) {
		if ((var_1_30 ^ var_1_51) != (var_1_32 % (min (var_1_38 , var_1_27)))) {
			var_1_58 = (abs (var_1_55));
		} else {
			var_1_58 = (abs ((abs (5.8f)) - var_1_59));
		}
	}


	// From: CodeObject16
	if (var_1_48 && (var_1_35 != 9.999999999999912E13)) {
		var_1_60 = (min ((max (var_1_55 , var_1_59)) , var_1_61));
	} else {
		if (var_1_58 < var_1_59) {
			var_1_60 = (min (0.471 , (abs (var_1_55))));
		} else {
			var_1_60 = (min (var_1_59 , (abs (var_1_61))));
		}
	}


	// From: CodeObject17
	if (var_1_36 < (var_1_57 * var_1_50)) {
		var_1_62 = ((max (var_1_55 , var_1_63)) + ((abs (var_1_64)) + (abs (var_1_65))));
	}


	// From: CodeObject18
	if (var_1_36 != (var_1_50 & var_1_29)) {
		var_1_66 = (var_1_64 + (var_1_65 + var_1_67));
	}


	// From: CodeObject19
	if (var_1_24 < var_1_52) {
		var_1_68 = ((var_1_69 + var_1_70) + var_1_71);
	} else {
		if ((4.2 < var_1_59) || (var_1_32 < var_1_25)) {
			if (((var_1_69 << var_1_49) <= var_1_32) || (var_1_58 < (abs (var_1_67)))) {
				var_1_68 = (max ((2 - var_1_72) , (abs (var_1_73 - var_1_74))));
			}
		} else {
			var_1_68 = (abs (var_1_73));
		}
	}


	// From: CodeObject20
	if ((min (var_1_71 , (var_1_74 - var_1_38))) >= var_1_52) {
		var_1_75 = var_1_72;
	} else {
		var_1_75 = var_1_69;
	}


	// From: CodeObject21
	if (var_1_59 > ((var_1_33 + var_1_64) / (max (var_1_34 , var_1_77)))) {
		var_1_76 = (min ((abs (var_1_72)) , (max (var_1_69 , var_1_70))));
	} else {
		if (256.5f >= var_1_77) {
			var_1_76 = (min (var_1_72 , var_1_73));
		}
	}


	// From: CodeObject22
	if ((var_1_56 & (var_1_73 ^ var_1_72)) < 2u) {
		var_1_78 = (abs (var_1_29));
	} else {
		var_1_78 = ((max ((min (var_1_79 , var_1_80)) , (min (41853 , var_1_81)))) - var_1_73);
	}


	// From: CodeObject23
	if (var_1_44) {
		var_1_82 = ((var_1_83 - var_1_84) + var_1_55);
	} else {
		var_1_82 = (abs (var_1_65));
	}


	// From: CodeObject24
	if (var_1_84 <= var_1_83) {
		var_1_85 = (min (var_1_40 , (max (var_1_29 , var_1_73))));
	}


	// From: CodeObject25
	if (var_1_62 <= (var_1_63 * var_1_65)) {
		var_1_86 = (abs (var_1_55));
	}


	// From: CodeObject26
	if (var_1_45) {
		var_1_87 = (abs (var_1_30));
	}


	// From: CodeObject27
	if ((var_1_32 | (var_1_89 + var_1_27)) >= (var_1_49 * 16)) {
		var_1_88 = (abs (var_1_29));
	}


	// From: CodeObject28
	if ((var_1_29 & var_1_50) > ((max (var_1_79 , var_1_36)) | var_1_42)) {
		if (((var_1_38 ^ var_1_42) * (max (var_1_85 , var_1_25))) >= var_1_49) {
			var_1_90 = (var_1_84 - (abs (abs (var_1_91))));
		}
	} else {
		var_1_90 = (max (var_1_67 , (abs (var_1_59))));
	}


	// From: CodeObject29
	if ((var_1_65 < 5.75f) && (var_1_68 <= var_1_88)) {
		var_1_92 = var_1_59;
	} else {
		if (var_1_83 >= (max (var_1_91 , var_1_84))) {
			if (var_1_58 <= var_1_62) {
				var_1_92 = ((max ((abs (var_1_55)) , 9.25)) + var_1_63);
			}
		}
	}


	// From: CodeObject30
	if ((abs (var_1_78)) <= var_1_42) {
		var_1_93 = var_1_49;
	} else {
		var_1_93 = (abs (var_1_88 - (min (var_1_79 , var_1_37))));
	}


	// From: CodeObject31
	if ((abs (var_1_68)) > (abs (var_1_71))) {
		var_1_94 = (var_1_24 - var_1_95);
	}


	// From: CodeObject32
	if (var_1_48) {
		var_1_96 = ((abs (var_1_65)) - var_1_59);
	}


	// From: CodeObject33
	if (((var_1_37 >> var_1_94) * var_1_95) <= var_1_31) {
		var_1_97 = (abs (var_1_59));
	} else {
		if (var_1_47) {
			var_1_97 = (min ((var_1_83 - var_1_59) , (max (var_1_91 , var_1_65))));
		}
	}


	// From: CodeObject34
	if (var_1_34 != (var_1_59 - (min (var_1_84 , var_1_83)))) {
		var_1_98 = (((abs (var_1_73)) - var_1_49) + var_1_79);
	} else {
		if ((var_1_57 > var_1_38) && var_1_47) {
			var_1_98 = ((var_1_78 + (max (var_1_25 , var_1_29))) - (abs (min (var_1_89 , var_1_68))));
		}
	}


	// From: CodeObject35
	if (var_1_45) {
		var_1_99 = (max (var_1_61 , (abs (var_1_59))));
	}


	// From: CodeObject36
	if ((var_1_59 >= var_1_91) && var_1_46) {
		if (var_1_69 >= var_1_30) {
			var_1_100 = ((min (var_1_72 , var_1_74)) + var_1_73);
		}
	} else {
		var_1_100 = (abs (abs (abs (var_1_73))));
	}


	// From: CodeObject37
	if ((min (var_1_92 , (var_1_67 + 4.2f))) >= var_1_60) {
		if (var_1_85 <= (min (var_1_40 , var_1_53))) {
			if ((max (var_1_40 , var_1_25)) < (abs (var_1_26))) {
				var_1_101 = (abs (var_1_29));
			}
		} else {
			if (var_1_79 <= var_1_39) {
				var_1_101 = (abs (var_1_29 - var_1_73));
			}
		}
	}


	// From: CodeObject38
	if (var_1_73 <= var_1_85) {
		if (var_1_42 <= var_1_73) {
			if (var_1_50 > var_1_71) {
				var_1_102 = (max ((abs (var_1_63)) , var_1_84));
			}
		} else {
			var_1_102 = (min (var_1_67 , var_1_83));
		}
	} else {
		if (var_1_101 < 8) {
			var_1_102 = (max ((min ((127.5 + var_1_67) , var_1_55)) , (abs (min (var_1_65 , var_1_83)))));
		}
	}


	// From: CodeObject39
	if (var_1_93 < (var_1_74 + var_1_51)) {
		var_1_103 = (var_1_84 + var_1_67);
	} else {
		if (var_1_47) {
			var_1_103 = (abs (var_1_55));
		} else {
			var_1_103 = (var_1_83 - var_1_59);
		}
	}


	// From: CodeObject40
	if (((var_1_59 - var_1_83) / var_1_34) < var_1_58) {
		var_1_104 = (var_1_46 && var_1_105);
	} else {
		var_1_104 = (var_1_28 || (! (var_1_45 || var_1_47)));
	}


	// From: CodeObject41
	if (var_1_34 > (min (var_1_84 , var_1_33))) {
		if (var_1_46) {
			var_1_106 = (abs (var_1_100));
		}
	}


	// From: CodeObject42
	if (var_1_49 < var_1_25) {
		if (var_1_27 >= (var_1_74 * (min (var_1_56 , var_1_49)))) {
			var_1_107 = ((abs (var_1_38 + var_1_24)) + 2);
		}
	} else {
		if ((! 1) || var_1_45) {
			var_1_107 = (((abs (var_1_108)) - var_1_73) + var_1_25);
		}
	}


	// From: CodeObject43
	if (var_1_81 <= (~ (var_1_108 ^ var_1_110))) {
		var_1_109 = (min ((abs (4u)) , var_1_81));
	}


	// From: CodeObject44
	var_1_111 = (abs (abs (abs (1u))));


	// From: CodeObject45
	var_1_112 = (min (var_1_38 , var_1_101));


	// From: CodeObject46
	if (var_1_73 > (abs (min (-50 , var_1_42)))) {
		if ((var_1_72 & var_1_51) <= var_1_73) {
			var_1_113 = (abs (var_1_72));
		} else {
			var_1_113 = (min (var_1_72 , (abs (var_1_73))));
		}
	}


	// From: CodeObject47
	if (var_1_28) {
		if ((200 % var_1_38) >= var_1_109) {
			var_1_114 = (var_1_105 && var_1_46);
		}
	}


	// From: CodeObject48
	if (((abs (2)) + (- var_1_108)) > var_1_49) {
		var_1_115 = var_1_88;
	}


	// From: CodeObject49
	if (var_1_48) {
		var_1_116 = var_1_59;
	}


	// From: CodeObject50
	var_1_117 = var_1_94;


	// From: CodeObject51
	if (var_1_119) {
		var_1_118 = 1;
	} else {
		var_1_118 = var_1_72;
	}


	// From: CodeObject52
	if (var_1_121) {
		var_1_120 = var_1_122;
	}


	// From: CodeObject53
	var_1_123 = 64.5f;


	// From: CodeObject54
	if (var_1_121) {
		var_1_124 = var_1_83;
	}


	// From: CodeObject55
	if (var_1_119) {
		var_1_125 = 5;
	} else {
		var_1_125 = var_1_69;
	}


	// From: CodeObject56
	var_1_126 = var_1_47;


	// From: CodeObject57
	if (var_1_45) {
		var_1_127 = var_1_32;
	}


	// From: CodeObject58
	if (var_1_48) {
		var_1_128 = var_1_25;
	} else {
		var_1_128 = var_1_38;
	}


	// From: CodeObject59
	var_1_129 = var_1_130;


	// From: CodeObject60
	if (var_1_45) {
		var_1_131 = 5;
	} else {
		var_1_131 = var_1_42;
	}


	// From: CodeObject61
	if (var_1_119) {
		var_1_132 = var_1_73;
	}


	// From: CodeObject62
	if (var_1_45) {
		var_1_133 = var_1_79;
	} else {
		var_1_133 = var_1_81;
	}


	// From: CodeObject63
	if (var_1_48) {
		var_1_134 = var_1_135;
	}


	// From: CodeObject64
	if (var_1_105) {
		var_1_136 = 0;
	} else {
		var_1_136 = var_1_125;
	}


	// From: CodeObject65
	if (var_1_100 < (var_1_117 & 4)) {
		if ((var_1_109 ^ var_1_131) <= var_1_80) {
			var_1_137 = (! (var_1_45 || var_1_47));
		} else {
			var_1_137 = var_1_47;
		}
	} else {
		var_1_137 = var_1_105;
	}


	// From: Req2Batch83PS_CN_500
	var_1_7 = ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)));


	// From: Req4Batch83PS_CN_500
	var_1_16 = (var_1_17 + (abs (var_1_18)));


	// From: Req7Batch83PS_CN_500
	if ((3886175339u - var_1_20) <= (var_1_9 / var_1_3)) {
		if (var_1_10 > var_1_7) {
			var_1_23 = (min (var_1_20 , (var_1_8 - var_1_9)));
		} else {
			var_1_23 = ((max (var_1_20 , 64)) + var_1_11);
		}
	} else {
		var_1_23 = var_1_20;
	}


	// From: Req1Batch83PS_CN_500
	if (var_1_2) {
		var_1_1 = ((var_1_3 - var_1_7) - var_1_7);
	} else {
		var_1_1 = ((max (var_1_3 , (var_1_6 - var_1_7))) - var_1_7);
	}


	// From: Req5Batch83PS_CN_500
	signed long int stepLocal_1 = var_1_9 % (var_1_8 - var_1_20);
	signed long int stepLocal_0 = var_1_7 ^ var_1_10;
	if (stepLocal_1 > (abs (var_1_23))) {
		if ((var_1_3 ^ var_1_23) <= stepLocal_0) {
			var_1_19 = var_1_17;
		}
	}


	// From: Req6Batch83PS_CN_500
	if ((var_1_11 % var_1_20) < var_1_1) {
		var_1_22 = (max (10 , var_1_10));
	}


	// From: Req3Batch83PS_CN_500
	if ((max (var_1_16 , var_1_16)) <= (- (var_1_19 / 4.9f))) {
		var_1_12 = 31.5f;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 1073741822);
	assume_abort_if_not(var_1_3 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 1073741822);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 190);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 126);
	assume_abort_if_not(var_1_20 != 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 255);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	assume_abort_if_not(var_1_34 != 0.0F);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 8191);
	assume_abort_if_not(var_1_37 <= 16383);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 8192);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -127);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -128);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -128);
	assume_abort_if_not(var_1_52 <= 127);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= -461168.6018427382800e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427382800e+12F && var_1_55 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -922337.2036854765600e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854765600e+12F && var_1_61 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= -461168.6018427382800e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= -230584.3009213691390e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691390e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -230584.3009213691390e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= -230584.3009213691390e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 2305843.009213691390e+12F && var_1_67 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -31);
	assume_abort_if_not(var_1_69 <= 32);
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= -31);
	assume_abort_if_not(var_1_70 <= 31);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -63);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 126);
	var_1_73 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 126);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 126);
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= -922337.2036854776000e+13F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
	assume_abort_if_not(var_1_77 != 0.0F);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 32767);
	assume_abort_if_not(var_1_79 <= 65534);
	var_1_80 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_80 >= 32767);
	assume_abort_if_not(var_1_80 <= 65534);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 32767);
	assume_abort_if_not(var_1_81 <= 65534);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427382800e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 4611686.018427382800e+12F && var_1_84 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_89 >= -32768);
	assume_abort_if_not(var_1_89 <= 32767);
	var_1_91 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_91 >= -922337.2036854765600e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854765600e+12F && var_1_91 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 32766);
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 1);
	assume_abort_if_not(var_1_105 <= 1);
	var_1_108 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_108 >= 16383);
	assume_abort_if_not(var_1_108 <= 32767);
	var_1_110 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_110 >= 0);
	assume_abort_if_not(var_1_110 <= 65535);
	var_1_119 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_119 >= 0);
	assume_abort_if_not(var_1_119 <= 1);
	var_1_121 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_121 >= 0);
	assume_abort_if_not(var_1_121 <= 1);
	var_1_122 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_122 >= -2147483647);
	assume_abort_if_not(var_1_122 <= 2147483646);
	var_1_130 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_130 >= 1);
	assume_abort_if_not(var_1_130 <= 1);
	var_1_135 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_135 >= -922337.2036854765600e+13F && var_1_135 <= -1.0e-20F) || (var_1_135 <= 9223372.036854765600e+12F && var_1_135 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return ((((((var_1_2 ? (var_1_1 == ((signed long int) ((var_1_3 - var_1_7) - var_1_7))) : (var_1_1 == ((signed long int) ((max (var_1_3 , (var_1_6 - var_1_7))) - var_1_7)))) && (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)))))) && (((max (var_1_16 , var_1_16)) <= (- (var_1_19 / 4.9f))) ? (var_1_12 == ((float) 31.5f)) : 1)) && (var_1_16 == ((float) (var_1_17 + (abs (var_1_18)))))) && (((var_1_9 % (var_1_8 - var_1_20)) > (abs (var_1_23))) ? (((var_1_3 ^ var_1_23) <= (var_1_7 ^ var_1_10)) ? (var_1_19 == ((float) var_1_17)) : 1) : 1)) && (((var_1_11 % var_1_20) < var_1_1) ? (var_1_22 == ((signed char) (max (10 , var_1_10)))) : 1)) && (((3886175339u - var_1_20) <= (var_1_9 / var_1_3)) ? ((var_1_10 > var_1_7) ? (var_1_23 == ((unsigned char) (min (var_1_20 , (var_1_8 - var_1_9))))) : (var_1_23 == ((unsigned char) ((max (var_1_20 , 64)) + var_1_11)))) : (var_1_23 == ((unsigned char) var_1_20)))
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
