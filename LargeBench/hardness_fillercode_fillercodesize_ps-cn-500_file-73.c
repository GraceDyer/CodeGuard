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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73PS_CN_500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 7.325;
double var_1_3 = 63.8;
double var_1_4 = 256.6;
double var_1_5 = 2.375;
double var_1_6 = 25.8;
unsigned char var_1_7 = 1;
double var_1_8 = 1.5;
unsigned long int var_1_9 = 32;
unsigned long int var_1_10 = 3567543019;
float var_1_12 = 31.875;
signed long int var_1_13 = 128;
unsigned char var_1_16 = 4;
unsigned char var_1_18 = 16;
signed long int var_1_19 = 64;
unsigned char var_1_20 = 0;
signed long int var_1_21 = 1897833385;
unsigned char var_1_22 = 2;
signed char var_1_23 = -5;
signed char var_1_24 = -4;
signed char var_1_25 = 2;
signed long int var_1_26 = -1000000;
double var_1_27 = 31.6;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 16;
signed short int var_1_30 = 10;
double var_1_31 = 99.25;
unsigned char var_1_32 = 10;
signed char var_1_33 = -64;
double var_1_34 = 1.6440000000000001;
double var_1_35 = 7.625;
signed char var_1_36 = 8;
signed char var_1_37 = 100;
signed char var_1_38 = 8;
signed char var_1_39 = 10;
signed long int var_1_40 = -16;
signed long int var_1_41 = 64;
signed char var_1_42 = 1;
signed long int var_1_43 = -1;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 1;
signed long int var_1_46 = 32;
signed long int var_1_47 = 32;
unsigned short int var_1_48 = 0;
signed short int var_1_49 = 1;
unsigned short int var_1_50 = 100;
signed long int var_1_51 = 1;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
float var_1_56 = 24.375;
float var_1_57 = -0.8;
float var_1_58 = 31.45;
float var_1_59 = 1000.75;
double var_1_60 = 64.2;
signed long int var_1_61 = 1;
signed short int var_1_62 = -64;
float var_1_63 = 127.8;
double var_1_64 = 25.2;
signed short int var_1_65 = 4;
unsigned char var_1_66 = 0;
double var_1_67 = 2.6;
unsigned char var_1_68 = 0;
unsigned char var_1_69 = 64;
unsigned char var_1_70 = 5;
unsigned char var_1_71 = 32;
unsigned char var_1_72 = 0;
unsigned char var_1_73 = 25;
unsigned char var_1_74 = 128;
signed long int var_1_75 = 1;
signed long int var_1_76 = -32;
unsigned short int var_1_77 = 1;
unsigned short int var_1_78 = 59020;
float var_1_79 = 8.5;
float var_1_80 = 100.2;
unsigned char var_1_81 = 8;
float var_1_82 = 63.5;
signed long int var_1_83 = -2;
signed long int var_1_84 = 128;
signed short int var_1_85 = 128;
signed char var_1_86 = 64;
float var_1_87 = 15.8;
float var_1_88 = 127.6;
float var_1_89 = 99.2;
signed long int var_1_90 = -1000000000;
signed long int var_1_91 = 10;
signed long int var_1_92 = -8;
unsigned short int var_1_93 = 64;
signed long int var_1_94 = 256;
signed long int var_1_95 = -100;
signed short int var_1_96 = 256;
signed short int var_1_97 = -16;
double var_1_98 = 0.25;
float var_1_99 = 32.8;
signed char var_1_100 = -8;
signed char var_1_101 = 32;
float var_1_102 = 2.5;
double var_1_103 = 0.0;
double var_1_104 = 32.5;
unsigned long int var_1_105 = 32;
float var_1_106 = 100000000000.75;
unsigned long int var_1_107 = 8;
signed long int var_1_108 = -500;
signed char var_1_109 = -128;
unsigned char var_1_110 = 10;
signed long int var_1_111 = 10;
unsigned char var_1_112 = 32;
double var_1_113 = 0.19999999999999996;
double var_1_114 = 9999999999.95;
float var_1_115 = -0.25;
signed long int var_1_116 = 5;
double var_1_117 = 0.25;
signed char var_1_118 = -64;
unsigned char var_1_119 = 4;
signed long int var_1_120 = 1;
double var_1_121 = 32.25;
unsigned short int var_1_122 = 100;
signed char var_1_123 = 1;
signed char var_1_124 = 32;
signed short int var_1_125 = -5;
signed long int var_1_126 = -64;
signed char var_1_127 = 1;
double var_1_128 = 5.4;
unsigned char var_1_129 = 1;
signed short int var_1_130 = -128;
float var_1_131 = 0.125;
unsigned short int var_1_132 = 8;
float var_1_133 = 63.75;
signed short int var_1_134 = 5;
signed short int var_1_135 = -8;

// Calibration values

// Last'ed variables
float last_1_var_1_12 = 31.875;
signed long int last_1_var_1_13 = 128;
unsigned char last_1_var_1_16 = 4;
signed long int last_1_var_1_19 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_28 && (var_1_29 > var_1_30)) {
		var_1_27 = var_1_31;
	} else {
		if (var_1_29 == var_1_30) {
			if (var_1_30 >= var_1_29) {
				var_1_27 = var_1_31;
			}
		}
	}


	// From: CodeObject2
	var_1_32 = 2;


	// From: CodeObject3
	if ((min ((var_1_34 - var_1_35) , var_1_27)) >= 9.9999999999975E11) {
		var_1_33 = (var_1_36 - (var_1_37 - (max (var_1_38 , var_1_39))));
	} else {
		var_1_33 = (abs (var_1_36));
	}


	// From: CodeObject4
	if ((var_1_39 >> var_1_37) >= ((abs (var_1_30)) & var_1_38)) {
		if (var_1_32 != var_1_37) {
			var_1_40 = (abs (abs (var_1_38)));
		} else {
			var_1_40 = (max (var_1_41 , var_1_37));
		}
	}


	// From: CodeObject5
	if (var_1_40 <= (var_1_39 % var_1_37)) {
		var_1_42 = (var_1_38 + var_1_39);
	}


	// From: CodeObject6
	if (var_1_40 < -10000000) {
		if (var_1_30 >= var_1_33) {
			var_1_43 = (abs (var_1_38));
		}
	}


	// From: CodeObject7
	if ((var_1_40 & var_1_41) > var_1_30) {
		if (var_1_28 && var_1_45) {
			if ((5 % var_1_37) < var_1_46) {
				var_1_44 = 25;
			} else {
				var_1_44 = var_1_37;
			}
		} else {
			var_1_44 = var_1_39;
		}
	} else {
		var_1_44 = var_1_39;
	}


	// From: CodeObject8
	if (var_1_45) {
		var_1_47 = (min (((min (var_1_37 , -1)) - var_1_32) , (max (var_1_39 , var_1_33))));
	} else {
		var_1_47 = (max ((max (var_1_32 , (abs (var_1_39)))) , (var_1_44 - var_1_37)));
	}


	// From: CodeObject9
	if (var_1_45) {
		if (var_1_41 > (var_1_47 | var_1_43)) {
			if (var_1_33 < -10) {
				var_1_48 = (min (var_1_37 , (abs (min (200 , var_1_38)))));
			}
		}
	}


	// From: CodeObject10
	if (var_1_30 > var_1_32) {
		if (var_1_45) {
			if (((var_1_33 + var_1_29) + var_1_47) <= ((var_1_43 / var_1_37) << var_1_39)) {
				var_1_49 = (min (var_1_32 , (abs (var_1_37))));
			}
		}
	}


	// From: CodeObject11
	if (var_1_32 <= (- var_1_46)) {
		if (var_1_28) {
			if (var_1_38 < var_1_42) {
				var_1_50 = ((max (var_1_32 , var_1_38)) + 128);
			}
		}
	}


	// From: CodeObject12
	if (var_1_35 <= var_1_27) {
		if (var_1_45) {
			var_1_51 = (max (var_1_30 , (var_1_50 - var_1_48)));
		}
	}


	// From: CodeObject13
	if (((var_1_32 + var_1_49) * (var_1_39 + var_1_44)) < var_1_46) {
		var_1_52 = (var_1_45 && (! var_1_53));
	} else {
		var_1_52 = (((~ var_1_37) < var_1_47) && (var_1_54 || (! var_1_55)));
	}


	// From: CodeObject14
	if ((abs (max (var_1_44 , var_1_38))) < var_1_30) {
		var_1_56 = (abs (var_1_31));
	} else {
		var_1_56 = ((var_1_57 + var_1_58) + (abs (256.6f - var_1_59)));
	}


	// From: CodeObject15
	if (var_1_36 >= var_1_44) {
		if (var_1_59 < var_1_35) {
			var_1_60 = (abs (abs (24.6)));
		} else {
			var_1_60 = (min (var_1_58 , (abs (var_1_59))));
		}
	} else {
		if (var_1_40 < var_1_33) {
			var_1_60 = (var_1_59 + var_1_58);
		}
	}


	// From: CodeObject16
	if ((var_1_49 & var_1_43) >= 0) {
		var_1_61 = (var_1_50 - (max (var_1_32 , var_1_39)));
	}


	// From: CodeObject17
	if (var_1_49 <= (var_1_38 - var_1_44)) {
		var_1_62 = (min (var_1_44 , var_1_37));
	}


	// From: CodeObject18
	var_1_63 = var_1_31;


	// From: CodeObject19
	if (var_1_57 < var_1_58) {
		if (var_1_40 == (var_1_32 ^ var_1_47)) {
			var_1_64 = var_1_59;
		}
	} else {
		if (! (var_1_41 < var_1_61)) {
			if (var_1_28) {
				var_1_64 = var_1_58;
			}
		}
	}


	// From: CodeObject20
	if (((- var_1_48) + var_1_33) <= (abs (var_1_30))) {
		var_1_65 = var_1_38;
	} else {
		if (var_1_55) {
			var_1_65 = var_1_36;
		} else {
			if (var_1_28) {
				var_1_65 = ((min (var_1_38 , var_1_37)) - (min (var_1_32 , var_1_39)));
			} else {
				var_1_65 = (abs (var_1_36));
			}
		}
	}


	// From: CodeObject21
	if (63.5 < var_1_67) {
		var_1_66 = (var_1_53 && (var_1_54 || (var_1_55 && var_1_68)));
	}


	// From: CodeObject22
	var_1_69 = (abs (var_1_37));


	// From: CodeObject23
	if (var_1_54) {
		var_1_70 = ((var_1_37 - (var_1_71 + var_1_72)) + var_1_73);
	} else {
		if (var_1_32 != var_1_42) {
			if (var_1_52) {
				var_1_70 = var_1_73;
			} else {
				var_1_70 = (abs (var_1_74 - var_1_71));
			}
		} else {
			var_1_70 = (max (var_1_39 , var_1_73));
		}
	}


	// From: CodeObject24
	if (var_1_70 < var_1_44) {
		if ((var_1_47 + var_1_65) > (max (var_1_76 , var_1_71))) {
			var_1_75 = var_1_39;
		}
	} else {
		var_1_75 = (var_1_74 - var_1_32);
	}


	// From: CodeObject25
	var_1_77 = (min ((var_1_78 - var_1_37) , var_1_44));


	// From: CodeObject26
	if ((5 - (max (var_1_71 , var_1_38))) >= var_1_33) {
		var_1_79 = (var_1_59 - var_1_80);
	}


	// From: CodeObject27
	if (var_1_45) {
		if (var_1_55) {
			if (var_1_73 <= (var_1_37 * var_1_62)) {
				var_1_81 = (max (0 , (var_1_39 + var_1_71)));
			} else {
				var_1_81 = ((200 - var_1_39) - (min (var_1_72 , var_1_38)));
			}
		}
	}


	// From: CodeObject28
	if ((var_1_58 >= (abs (4.75f))) || ((var_1_48 >= var_1_75) && var_1_28)) {
		var_1_82 = (var_1_59 - var_1_80);
	} else {
		if (var_1_48 <= (min (0 , var_1_76))) {
			if (var_1_43 < var_1_30) {
				var_1_82 = (abs (var_1_80));
			} else {
				if (var_1_45) {
					var_1_82 = (min (var_1_80 , (min (var_1_59 , var_1_58))));
				} else {
					var_1_82 = (var_1_59 + (min (var_1_57 , var_1_58)));
				}
			}
		}
	}


	// From: CodeObject29
	if (var_1_41 < (var_1_77 ^ (abs (var_1_69)))) {
		if ((abs (var_1_38)) <= var_1_30) {
			var_1_83 = var_1_62;
		} else {
			if ((var_1_27 * var_1_35) <= ((var_1_60 * var_1_79) * var_1_34)) {
				var_1_83 = (min ((min (var_1_84 , var_1_81)) , var_1_62));
			}
		}
	}


	// From: CodeObject30
	if (! var_1_45) {
		var_1_85 = (abs (var_1_38));
	} else {
		var_1_85 = (abs (max (var_1_33 , var_1_37)));
	}


	// From: CodeObject31
	if (var_1_56 >= var_1_35) {
		var_1_86 = ((abs (var_1_72)) - (max (var_1_37 , var_1_71)));
	}


	// From: CodeObject32
	if ((var_1_79 + var_1_59) <= var_1_35) {
		if (var_1_71 > (abs (var_1_72))) {
			var_1_87 = (abs (var_1_58));
		} else {
			var_1_87 = ((var_1_59 - (abs (var_1_57))) + (max ((abs (var_1_58)) , (var_1_88 + var_1_89))));
		}
	} else {
		if ((var_1_46 != -64) || (var_1_67 >= var_1_59)) {
			var_1_87 = var_1_59;
		}
	}


	// From: CodeObject33
	if (var_1_55) {
		if ((var_1_77 / var_1_74) >= var_1_49) {
			var_1_90 = var_1_86;
		} else {
			var_1_90 = var_1_42;
		}
	} else {
		var_1_90 = var_1_84;
	}


	// From: CodeObject34
	if (var_1_85 < 8) {
		var_1_91 = (min ((var_1_50 - var_1_71) , var_1_44));
	}


	// From: CodeObject35
	if (var_1_40 == var_1_49) {
		var_1_92 = var_1_41;
	}


	// From: CodeObject36
	if (var_1_88 < var_1_31) {
		var_1_93 = (max (var_1_39 , var_1_38));
	} else {
		var_1_93 = (abs (var_1_74));
	}


	// From: CodeObject37
	if ((abs (var_1_65)) < 25) {
		var_1_94 = (var_1_42 + (abs (var_1_30)));
	} else {
		if (var_1_87 >= (var_1_59 - var_1_34)) {
			var_1_94 = (var_1_71 - 4);
		}
	}


	// From: CodeObject38
	if (var_1_34 <= var_1_64) {
		var_1_95 = (abs (var_1_85 + var_1_38));
	}


	// From: CodeObject39
	if ((max (var_1_95 , var_1_77)) < (min (var_1_50 , var_1_85))) {
		if (var_1_28) {
			var_1_96 = (max (var_1_97 , (max ((var_1_71 - var_1_39) , (abs (var_1_37))))));
		}
	} else {
		var_1_96 = (abs (var_1_33));
	}


	// From: CodeObject40
	if ((max ((abs (var_1_86)) , (var_1_38 % var_1_78))) <= var_1_91) {
		if (var_1_39 >= (var_1_29 * var_1_51)) {
			var_1_98 = (abs (var_1_80 - var_1_59));
		}
	}


	// From: CodeObject41
	if (var_1_66) {
		if (var_1_68) {
			var_1_99 = var_1_58;
		}
	}


	// From: CodeObject42
	if (var_1_31 < (- 32.4)) {
		var_1_100 = (abs (var_1_72));
	}


	// From: CodeObject43
	if (var_1_91 <= (var_1_29 / var_1_78)) {
		if (var_1_79 <= var_1_89) {
			if ((abs (var_1_99)) <= (var_1_67 * (var_1_102 - var_1_35))) {
				var_1_101 = (min ((abs (max (10 , var_1_38))) , var_1_36));
			} else {
				if ((var_1_59 - (var_1_103 - var_1_104)) < (var_1_87 + 15.5)) {
					var_1_101 = var_1_72;
				}
			}
		}
	}


	// From: CodeObject44
	if (var_1_53) {
		var_1_105 = (max (var_1_74 , var_1_78));
	}


	// From: CodeObject45
	if ((var_1_43 == (abs (var_1_81))) && var_1_53) {
		var_1_106 = (abs (var_1_57));
	} else {
		var_1_106 = (abs (var_1_80));
	}


	// From: CodeObject46
	if (var_1_68 && ((abs (var_1_95)) < var_1_108)) {
		var_1_107 = (min ((var_1_70 + var_1_81) , var_1_74));
	}


	// From: CodeObject47
	if (var_1_96 < (~ var_1_108)) {
		var_1_109 = ((var_1_37 - var_1_71) - var_1_38);
	} else {
		if ((var_1_94 % var_1_37) >= var_1_86) {
			var_1_109 = (min (var_1_71 , var_1_39));
		} else {
			if (var_1_44 < var_1_90) {
				var_1_109 = var_1_36;
			}
		}
	}


	// From: CodeObject48
	if (((abs (var_1_51)) >> var_1_32) > var_1_61) {
		var_1_110 = (abs (abs (var_1_73)));
	} else {
		var_1_110 = (var_1_74 - var_1_38);
	}


	// From: CodeObject49
	if ((min (var_1_104 , var_1_89)) <= var_1_59) {
		if ((var_1_110 & var_1_78) == var_1_42) {
			var_1_111 = var_1_69;
		} else {
			var_1_111 = (abs (var_1_42));
		}
	}


	// From: CodeObject50
	if (var_1_68) {
		var_1_112 = (abs (var_1_39));
	}


	// From: CodeObject51
	if (var_1_34 <= (min ((var_1_103 - 8.5) , var_1_89))) {
		if (var_1_74 > (var_1_95 >> var_1_47)) {
			if (var_1_68) {
				var_1_113 = 128.625;
			} else {
				var_1_113 = (max (var_1_114 , var_1_88));
			}
		}
	}


	// From: CodeObject52
	var_1_115 = var_1_114;


	// From: CodeObject53
	if (var_1_53) {
		var_1_116 = var_1_41;
	} else {
		var_1_116 = var_1_73;
	}


	// From: CodeObject54
	var_1_117 = 128.1;


	// From: CodeObject55
	var_1_118 = var_1_38;


	// From: CodeObject56
	var_1_119 = var_1_72;


	// From: CodeObject57
	if (var_1_66) {
		var_1_120 = var_1_36;
	}


	// From: CodeObject58
	if (var_1_55) {
		var_1_121 = var_1_58;
	}


	// From: CodeObject59
	var_1_122 = var_1_70;


	// From: CodeObject60
	if (var_1_54) {
		var_1_123 = var_1_39;
	} else {
		var_1_123 = var_1_39;
	}


	// From: CodeObject61
	if (var_1_53) {
		var_1_124 = var_1_72;
	} else {
		var_1_124 = var_1_71;
	}


	// From: CodeObject62
	var_1_125 = var_1_72;


	// From: CodeObject63
	if (var_1_52) {
		var_1_126 = var_1_101;
	}


	// From: CodeObject64
	if (var_1_66) {
		var_1_127 = var_1_36;
	} else {
		var_1_127 = var_1_36;
	}


	// From: CodeObject65
	var_1_128 = var_1_59;


	// From: CodeObject66
	var_1_129 = var_1_54;


	// From: CodeObject67
	var_1_130 = var_1_118;


	// From: CodeObject68
	if (var_1_52) {
		var_1_131 = var_1_58;
	} else {
		var_1_131 = var_1_80;
	}


	// From: CodeObject69
	var_1_132 = 8;


	// From: CodeObject70
	if (var_1_54) {
		var_1_133 = var_1_114;
	}


	// From: CodeObject71
	var_1_134 = var_1_118;


	// From: CodeObject72
	if (8.4f <= var_1_80) {
		if (-10 <= var_1_46) {
			if (var_1_48 >= ((var_1_78 - 25) << var_1_70)) {
				if (var_1_100 <= var_1_105) {
					var_1_135 = var_1_118;
				} else {
					var_1_135 = var_1_119;
				}
			} else {
				var_1_135 = var_1_110;
			}
		}
	}


	// From: Req3Batch73PS_CN_500
	if ((max ((last_1_var_1_19 / 2) , (~ last_1_var_1_16))) <= var_1_10) {
		var_1_12 = var_1_8;
	}


	// From: Req1Batch73PS_CN_500
	if (var_1_12 > ((var_1_3 - var_1_4) / (max (var_1_5 , var_1_6)))) {
		if (var_1_7) {
			var_1_1 = var_1_8;
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req5Batch73PS_CN_500
	if (var_1_3 >= (last_1_var_1_12 * var_1_4)) {
		var_1_16 = var_1_18;
	}


	// From: Req7Batch73PS_CN_500
	var_1_22 = (abs (var_1_18));


	// From: Req8Batch73PS_CN_500
	if (var_1_1 > var_1_5) {
		var_1_23 = (abs (min (var_1_24 , var_1_25)));
	} else {
		var_1_23 = var_1_24;
	}


	// From: Req9Batch73PS_CN_500
	var_1_26 = var_1_25;


	// From: Req4Batch73PS_CN_500
	signed long int stepLocal_0 = var_1_26 >> var_1_10;
	if (stepLocal_0 < last_1_var_1_13) {
		var_1_13 = (min (var_1_26 , var_1_22));
	}


	// From: Req2Batch73PS_CN_500
	if (var_1_1 < (var_1_4 - var_1_3)) {
		var_1_9 = (var_1_10 - var_1_16);
	}


	// From: Req6Batch73PS_CN_500
	if (var_1_7 && var_1_20) {
		var_1_19 = ((1827081742 - var_1_13) - (var_1_21 - (var_1_18 + var_1_16)));
	} else {
		if (2u >= (max (var_1_21 , var_1_9))) {
			var_1_19 = var_1_22;
		} else {
			var_1_19 = var_1_22;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -126);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -126);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32768);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 63);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= -2147483647);
	assume_abort_if_not(var_1_41 <= 2147483646);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= -2147483648);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -230584.3009213691390e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 2305843.009213691390e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= -230584.3009213691390e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691390e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= -922337.2036854776000e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854776000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 0);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 32);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 31);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 127);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 127);
	assume_abort_if_not(var_1_74 <= 254);
	var_1_76 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_76 >= -2147483648);
	assume_abort_if_not(var_1_76 <= 2147483647);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 32767);
	assume_abort_if_not(var_1_78 <= 65534);
	var_1_80 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854765600e+12F && var_1_80 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_84 >= -2147483647);
	assume_abort_if_not(var_1_84 <= 2147483646);
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= -230584.3009213691390e+13F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 2305843.009213691390e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= -230584.3009213691390e+13F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 2305843.009213691390e+12F && var_1_89 >= 1.0e-20F ));
	var_1_97 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_97 >= -32767);
	assume_abort_if_not(var_1_97 <= 32766);
	var_1_102 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_102 >= 0.0F && var_1_102 <= -1.0e-20F) || (var_1_102 <= 9223372.036854776000e+12F && var_1_102 >= 1.0e-20F ));
	var_1_103 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_103 >= 4611686.018427387900e+12F && var_1_103 <= -1.0e-20F) || (var_1_103 <= 9223372.036854776000e+12F && var_1_103 >= 1.0e-20F ));
	var_1_104 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_104 >= 0.0F && var_1_104 <= -1.0e-20F) || (var_1_104 <= 4611686.018427387900e+12F && var_1_104 >= 1.0e-20F ));
	var_1_108 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_108 >= -2147483648);
	assume_abort_if_not(var_1_108 <= 2147483647);
	var_1_114 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_114 >= -922337.2036854765600e+13F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 9223372.036854765600e+12F && var_1_114 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return (((((((((var_1_12 > ((var_1_3 - var_1_4) / (max (var_1_5 , var_1_6)))) ? (var_1_7 ? (var_1_1 == ((double) var_1_8)) : (var_1_1 == ((double) var_1_8))) : (var_1_1 == ((double) var_1_8))) && ((var_1_1 < (var_1_4 - var_1_3)) ? (var_1_9 == ((unsigned long int) (var_1_10 - var_1_16))) : 1)) && (((max ((last_1_var_1_19 / 2) , (~ last_1_var_1_16))) <= var_1_10) ? (var_1_12 == ((float) var_1_8)) : 1)) && (((var_1_26 >> var_1_10) < last_1_var_1_13) ? (var_1_13 == ((signed long int) (min (var_1_26 , var_1_22)))) : 1)) && ((var_1_3 >= (last_1_var_1_12 * var_1_4)) ? (var_1_16 == ((unsigned char) var_1_18)) : 1)) && ((var_1_7 && var_1_20) ? (var_1_19 == ((signed long int) ((1827081742 - var_1_13) - (var_1_21 - (var_1_18 + var_1_16))))) : ((2u >= (max (var_1_21 , var_1_9))) ? (var_1_19 == ((signed long int) var_1_22)) : (var_1_19 == ((signed long int) var_1_22))))) && (var_1_22 == ((unsigned char) (abs (var_1_18))))) && ((var_1_1 > var_1_5) ? (var_1_23 == ((signed char) (abs (min (var_1_24 , var_1_25))))) : (var_1_23 == ((signed char) var_1_24)))) && (var_1_26 == ((signed long int) var_1_25))
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
