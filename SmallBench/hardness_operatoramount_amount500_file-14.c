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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch14Amount500.c", 13, "reach_error"); }
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
unsigned long int var_1_4 = 4042214920;
signed long int var_1_6 = -128;
signed char var_1_8 = 8;
signed char var_1_10 = 1;
signed char var_1_11 = 100;
signed char var_1_12 = 64;
signed char var_1_13 = 16;
signed long int var_1_14 = -256;
signed char var_1_15 = 0;
float var_1_16 = 127.25;
float var_1_19 = 4.25;
unsigned char var_1_20 = 4;
float var_1_21 = 15.625;
float var_1_22 = 25.8;
float var_1_23 = 7.45;
float var_1_24 = -0.5;
float var_1_25 = 0.1;
float var_1_26 = 128.75;
float var_1_27 = 0.0;
float var_1_28 = 256.5;
float var_1_30 = 0.0;
float var_1_31 = 1.75;
unsigned long int var_1_32 = 5;
unsigned long int var_1_33 = 2121590769;
unsigned long int var_1_34 = 1893878881;
double var_1_35 = 127.5;
double var_1_36 = 128.875;
unsigned char var_1_37 = 1;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 1;
unsigned char var_1_43 = 0;
signed char var_1_44 = 1;
unsigned char var_1_45 = 50;
unsigned char var_1_46 = 100;
unsigned char var_1_47 = 100;
unsigned char var_1_48 = 50;
unsigned char var_1_49 = 2;
signed long int var_1_50 = 16;
unsigned short int var_1_51 = 64;
unsigned char var_1_52 = 1;
unsigned char var_1_54 = 128;
unsigned char var_1_55 = 64;
signed short int var_1_56 = 8;
unsigned short int var_1_58 = 16;
double var_1_59 = 4.4;
double var_1_60 = 127.4;
signed char var_1_61 = 8;
signed char var_1_62 = 5;
signed char var_1_63 = 1;
unsigned long int var_1_64 = 0;
unsigned char var_1_66 = 25;
unsigned char var_1_67 = 2;
unsigned char var_1_68 = 64;
unsigned char var_1_69 = 64;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned char var_1_74 = 0;
unsigned short int var_1_75 = 256;
unsigned short int var_1_76 = 55171;
signed char var_1_77 = -10;
signed char var_1_78 = 0;
signed long int var_1_79 = -8;
unsigned char var_1_80 = 8;
unsigned short int var_1_81 = 10;
unsigned short int var_1_82 = 5;
unsigned char var_1_83 = 0;
unsigned short int var_1_84 = 32;
unsigned short int var_1_85 = 27955;
unsigned short int var_1_86 = 20602;
unsigned char var_1_88 = 8;
unsigned char var_1_89 = 4;
double var_1_90 = 16.5;
double var_1_91 = 0.25;
double var_1_92 = 0.4;
double var_1_93 = 31.55;
unsigned char var_1_94 = 0;
unsigned char var_1_96 = 1;
signed short int var_1_97 = -10;
signed short int var_1_99 = 8;
float var_1_100 = 255.25;
unsigned short int var_1_101 = 0;
unsigned char var_1_104 = 0;
signed short int var_1_105 = -128;
float var_1_106 = 16.8;
double var_1_107 = 128.5;
signed char var_1_108 = -100;
unsigned short int var_1_109 = 8;
signed long int var_1_110 = -256;
unsigned char var_1_111 = 1;
signed long int var_1_112 = -25;
signed short int var_1_113 = -8;
signed char var_1_114 = -4;
signed short int var_1_115 = -64;
double var_1_116 = 2.5;
unsigned long int var_1_117 = 64;
unsigned long int var_1_118 = 0;
float var_1_119 = 99999.4;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_37 = 1;
signed long int last_1_var_1_50 = 16;
unsigned short int last_1_var_1_51 = 64;
unsigned short int last_1_var_1_58 = 16;
signed char last_1_var_1_61 = 8;
unsigned char last_1_var_1_66 = 25;
signed char last_1_var_1_77 = -10;
signed long int last_1_var_1_79 = -8;
unsigned char last_1_var_1_80 = 8;
unsigned short int last_1_var_1_84 = 32;
unsigned char last_1_var_1_88 = 8;
unsigned char last_1_var_1_89 = 4;
unsigned char last_1_var_1_96 = 1;
signed short int last_1_var_1_97 = -10;
float last_1_var_1_100 = 255.25;
unsigned short int last_1_var_1_101 = 0;
signed char last_1_var_1_108 = -100;
unsigned char last_1_var_1_111 = 1;
unsigned long int last_1_var_1_117 = 64;
unsigned long int last_1_var_1_118 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req37Batch14Amount500
	if ((-10 % var_1_34) < last_1_var_1_88) {
		var_1_104 = var_1_39;
	} else {
		var_1_104 = 0;
	}


	// From: Req34Batch14Amount500
	if ((var_1_69 * last_1_var_1_50) <= last_1_var_1_79) {
		var_1_99 = last_1_var_1_77;
	}


	// From: Req3Batch14Amount500
	signed char stepLocal_2 = var_1_12;
	signed long int stepLocal_1 = (abs (var_1_99)) / var_1_6;
	if (stepLocal_2 < ((var_1_13 + var_1_15) - var_1_11)) {
		if (var_1_4 <= stepLocal_1) {
			var_1_14 = var_1_13;
		}
	} else {
		var_1_14 = var_1_15;
	}


	// From: Req22Batch14Amount500
	if ((last_1_var_1_50 * last_1_var_1_117) < last_1_var_1_111) {
		if (last_1_var_1_37 && (var_1_23 >= last_1_var_1_100)) {
			var_1_70 = ((var_1_13 >= (last_1_var_1_80 >> last_1_var_1_50)) && (var_1_43 && (var_1_71 || var_1_72)));
		} else {
			var_1_70 = var_1_72;
		}
	} else {
		if (! (last_1_var_1_79 > last_1_var_1_61)) {
			if (var_1_72) {
				var_1_70 = (var_1_43 && (var_1_71 || var_1_74));
			}
		}
	}


	// From: Req12Batch14Amount500
	unsigned char stepLocal_12 = ! var_1_70;
	if ((var_1_30 != var_1_36) && stepLocal_12) {
		var_1_51 = ((min (var_1_12 , var_1_47)) + ((min (last_1_var_1_51 , var_1_20)) + var_1_15));
	} else {
		var_1_51 = last_1_var_1_51;
	}


	// From: Req25Batch14Amount500
	signed long int stepLocal_22 = - (last_1_var_1_108 >> last_1_var_1_58);
	signed char stepLocal_21 = var_1_62;
	if (stepLocal_21 > var_1_20) {
		if (last_1_var_1_61 < stepLocal_22) {
			var_1_79 = ((last_1_var_1_118 + var_1_46) - var_1_76);
		} else {
			var_1_79 = ((abs (var_1_13 - 50)) + var_1_15);
		}
	} else {
		var_1_79 = (var_1_68 - (min (last_1_var_1_61 , 10)));
	}


	// From: Req15Batch14Amount500
	if (var_1_40) {
		var_1_58 = ((56219 - (min (var_1_47 , var_1_55))) - 32);
	} else {
		var_1_58 = var_1_49;
	}


	// From: Req21Batch14Amount500
	if (var_1_40) {
		var_1_67 = ((var_1_55 + (max (var_1_68 , var_1_69))) - var_1_47);
	}


	// From: Req35Batch14Amount500
	if ((32.75 - var_1_30) >= last_1_var_1_100) {
		var_1_100 = ((min ((var_1_30 - var_1_31) , var_1_25)) - var_1_36);
	} else {
		var_1_100 = ((var_1_30 - var_1_25) - var_1_22);
	}


	// From: Req38Batch14Amount500
	var_1_105 = var_1_48;


	// From: Req39Batch14Amount500
	if (var_1_43) {
		var_1_106 = var_1_19;
	} else {
		var_1_106 = var_1_24;
	}


	// From: Req40Batch14Amount500
	var_1_107 = var_1_19;


	// From: Req41Batch14Amount500
	var_1_108 = var_1_81;


	// From: Req42Batch14Amount500
	if (var_1_40) {
		var_1_109 = var_1_83;
	}


	// From: Req43Batch14Amount500
	if (var_1_71) {
		var_1_110 = var_1_15;
	}


	// From: Req44Batch14Amount500
	if (var_1_41) {
		var_1_111 = var_1_13;
	}


	// From: Req47Batch14Amount500
	if (var_1_104) {
		var_1_114 = var_1_82;
	} else {
		var_1_114 = 5;
	}


	// From: Req49Batch14Amount500
	if (var_1_78 != var_1_33) {
		var_1_116 = (0.6 + var_1_26);
	} else {
		var_1_116 = var_1_92;
	}


	// From: Req50Batch14Amount500
	if (var_1_43) {
		var_1_117 = last_1_var_1_117;
	}


	// From: Req51Batch14Amount500
	var_1_118 = var_1_85;


	// From: Req52Batch14Amount500
	var_1_119 = var_1_30;


	// From: Req18Batch14Amount500
	unsigned char stepLocal_17 = var_1_47;
	if (stepLocal_17 >= (var_1_79 / var_1_48)) {
		var_1_61 = ((var_1_15 + var_1_49) - 4);
	} else {
		if (var_1_104) {
			var_1_61 = var_1_13;
		} else {
			var_1_61 = ((var_1_62 + (max (var_1_49 , var_1_63))) + var_1_48);
		}
	}


	// From: Req16Batch14Amount500
	if (var_1_117 != (- var_1_55)) {
		if (var_1_61 <= var_1_13) {
			var_1_59 = (min (var_1_26 , var_1_19));
		} else {
			var_1_59 = var_1_25;
		}
	}


	// From: Req24Batch14Amount500
	unsigned char stepLocal_20 = var_1_54;
	if (stepLocal_20 <= var_1_51) {
		if (var_1_19 == var_1_59) {
			var_1_77 = (min (var_1_49 , (max ((var_1_48 + var_1_62) , 2))));
		}
	} else {
		var_1_77 = (max (var_1_49 , (var_1_12 - var_1_78)));
	}


	// From: Req36Batch14Amount500
	if (var_1_70) {
		if (var_1_107 < var_1_91) {
			var_1_101 = 128;
		}
	} else {
		var_1_101 = ((min (var_1_85 , last_1_var_1_101)) + var_1_111);
	}


	// From: Req20Batch14Amount500
	if ((- last_1_var_1_66) < (var_1_49 - var_1_101)) {
		var_1_66 = (min (var_1_49 , 32));
	} else {
		var_1_66 = ((min (var_1_48 , (var_1_49 + 5))) + var_1_11);
	}


	// From: Req26Batch14Amount500
	signed long int stepLocal_23 = var_1_101 >> (max (var_1_81 , var_1_82));
	if (! (var_1_25 < var_1_26)) {
		var_1_80 = var_1_11;
	} else {
		if (var_1_70) {
			if ((var_1_69 + var_1_67) > stepLocal_23) {
				var_1_80 = (var_1_48 + var_1_13);
			} else {
				if (99.5f >= var_1_23) {
					var_1_80 = (var_1_48 + var_1_81);
				}
			}
		} else {
			var_1_80 = ((var_1_49 + var_1_81) + var_1_83);
		}
	}


	// From: Req9Batch14Amount500
	if (var_1_41) {
		if (var_1_119 <= var_1_31) {
			if (var_1_39) {
				var_1_44 = var_1_12;
			}
		}
	} else {
		var_1_44 = (var_1_15 + -2);
	}


	// From: Req11Batch14Amount500
	signed short int stepLocal_11 = var_1_105;
	if (stepLocal_11 == var_1_15) {
		var_1_50 = -10;
	} else {
		var_1_50 = (max (var_1_48 , var_1_108));
	}


	// From: Req30Batch14Amount500
	signed char stepLocal_27 = var_1_114;
	if (stepLocal_27 >= (2 % 1)) {
		var_1_90 = (max (var_1_91 , (min ((min (var_1_36 , var_1_26)) , var_1_19))));
	} else {
		var_1_90 = (var_1_31 + (var_1_92 + var_1_93));
	}


	// From: Req32Batch14Amount500
	if ((abs (var_1_21)) <= (min (var_1_59 , var_1_24))) {
		if (! (var_1_104 && last_1_var_1_96)) {
			var_1_96 = (var_1_74 || (! var_1_71));
		} else {
			var_1_96 = (! var_1_72);
		}
	} else {
		var_1_96 = (var_1_39 || var_1_40);
	}


	// From: Req8Batch14Amount500
	unsigned char stepLocal_8 = var_1_66;
	signed long int stepLocal_7 = var_1_108 | var_1_20;
	signed long int stepLocal_6 = min (var_1_6 , (var_1_99 ^ var_1_79));
	if ((max (var_1_13 , (- var_1_101))) >= stepLocal_8) {
		if (var_1_104) {
			if (-8 <= stepLocal_6) {
				var_1_37 = (var_1_104 || var_1_39);
			} else {
				var_1_37 = var_1_39;
			}
		} else {
			var_1_37 = (! (var_1_39 || (var_1_40 && var_1_41)));
		}
	} else {
		if (((var_1_14 * 100) + var_1_109) >= stepLocal_7) {
			var_1_37 = (var_1_43 || (! var_1_39));
		}
	}


	// From: Req46Batch14Amount500
	if (var_1_37) {
		var_1_113 = var_1_48;
	} else {
		var_1_113 = var_1_69;
	}


	// From: Req1Batch14Amount500
	if (var_1_113 >= var_1_44) {
		var_1_1 = (var_1_4 - var_1_67);
	} else {
		if (((var_1_113 * var_1_67) / var_1_6) <= (var_1_4 / 5u)) {
			var_1_1 = (var_1_67 + var_1_51);
		} else {
			var_1_1 = (min (var_1_4 , var_1_51));
		}
	}


	// From: Req6Batch14Amount500
	if (var_1_104) {
		if (var_1_96) {
			var_1_32 = ((min ((var_1_33 + var_1_34) , var_1_4)) - var_1_11);
		} else {
			var_1_32 = (max (((var_1_11 + var_1_15) + var_1_66) , var_1_33));
		}
	} else {
		var_1_32 = ((var_1_34 - (min (var_1_15 , var_1_11))) + var_1_12);
	}


	// From: Req7Batch14Amount500
	if (var_1_96 && var_1_104) {
		if (var_1_104 || var_1_96) {
			var_1_35 = (max (var_1_27 , ((abs (var_1_25)) + (var_1_36 - var_1_31))));
		} else {
			var_1_35 = (var_1_31 + (var_1_36 - var_1_25));
		}
	}


	// From: Req17Batch14Amount500
	unsigned char stepLocal_16 = var_1_55;
	if ((var_1_54 + var_1_32) != stepLocal_16) {
		var_1_60 = (var_1_19 - (max ((min (var_1_30 , var_1_31)) , var_1_22)));
	}


	// From: Req29Batch14Amount500
	unsigned long int stepLocal_26 = var_1_33 >> (min (var_1_49 , var_1_81));
	if (var_1_24 <= var_1_90) {
		var_1_89 = (max (5 , (var_1_49 + var_1_46)));
	} else {
		if (stepLocal_26 <= last_1_var_1_89) {
			var_1_89 = ((4 + var_1_48) + var_1_78);
		}
	}


	// From: Req31Batch14Amount500
	if ((var_1_36 - (abs (var_1_91))) < var_1_60) {
		var_1_94 = (((var_1_85 * var_1_89) > (var_1_33 - 10)) && (! (var_1_40 && var_1_39)));
	}


	// From: Req45Batch14Amount500
	if (var_1_94) {
		var_1_112 = var_1_78;
	}


	// From: Req48Batch14Amount500
	if (var_1_94) {
		var_1_115 = var_1_12;
	}


	// From: Req28Batch14Amount500
	signed long int stepLocal_25 = 10;
	signed long int stepLocal_24 = (var_1_62 / var_1_86) | (var_1_66 + var_1_12);
	if (var_1_71) {
		if (stepLocal_25 >= var_1_66) {
			if ((var_1_113 * var_1_69) <= stepLocal_24) {
				var_1_88 = (var_1_68 + (min (var_1_48 , var_1_55)));
			} else {
				var_1_88 = ((max (var_1_11 , (var_1_55 - var_1_49))) + var_1_13);
			}
		} else {
			var_1_88 = (var_1_46 + var_1_78);
		}
	} else {
		var_1_88 = (min (var_1_78 , var_1_47));
	}


	// From: Req13Batch14Amount500
	signed char stepLocal_14 = var_1_13;
	signed char stepLocal_13 = var_1_13;
	if ((max (var_1_112 , var_1_34)) >= stepLocal_13) {
		if (stepLocal_14 <= 16) {
			var_1_52 = (var_1_54 - var_1_11);
		} else {
			var_1_52 = ((var_1_47 + var_1_55) - (min (var_1_15 , (var_1_49 + var_1_13))));
		}
	}


	// From: Req33Batch14Amount500
	signed char stepLocal_28 = var_1_61;
	if (stepLocal_28 >= var_1_48) {
		if (var_1_39) {
			var_1_97 = (var_1_14 + last_1_var_1_97);
		} else {
			var_1_97 = (var_1_115 + var_1_15);
		}
	}


	// From: Req5Batch14Amount500
	signed short int stepLocal_5 = var_1_97;
	signed char stepLocal_4 = var_1_12;
	unsigned char stepLocal_3 = var_1_104;
	if (stepLocal_4 <= var_1_67) {
		if (stepLocal_3 || var_1_104) {
			if (var_1_104) {
				if ((- var_1_27) > 7.25f) {
					var_1_28 = var_1_19;
				} else {
					var_1_28 = (9.625f + var_1_26);
				}
			} else {
				if ((max (var_1_89 , -10)) <= stepLocal_5) {
					var_1_28 = (min (var_1_23 , var_1_21));
				} else {
					var_1_28 = ((abs (max (var_1_24 , var_1_21))) - var_1_25);
				}
			}
		} else {
			var_1_28 = (var_1_22 - (var_1_30 - (127.5f + var_1_31)));
		}
	}


	// From: Req14Batch14Amount500
	unsigned char stepLocal_15 = var_1_49;
	if (stepLocal_15 < var_1_66) {
		if (var_1_60 <= var_1_28) {
			var_1_56 = (max (var_1_48 , (abs (var_1_46 - var_1_15))));
		} else {
			var_1_56 = ((8 + var_1_46) - (abs (var_1_47)));
		}
	} else {
		var_1_56 = (max ((var_1_13 + (min (var_1_97 , -32))) , var_1_12));
	}


	// From: Req2Batch14Amount500
	signed short int stepLocal_0 = var_1_56;
	if (stepLocal_0 != var_1_112) {
		var_1_8 = (var_1_10 - (max (var_1_11 , var_1_12)));
	} else {
		var_1_8 = (var_1_11 - ((var_1_13 + 5) + 10));
	}


	// From: Req27Batch14Amount500
	if ((var_1_49 - last_1_var_1_84) != var_1_62) {
		if (var_1_24 < (var_1_23 / var_1_27)) {
			var_1_84 = (min (((var_1_85 - 50) + (var_1_86 - 2)) , var_1_11));
		} else {
			var_1_84 = (max (var_1_48 , (min (var_1_52 , var_1_69))));
		}
	} else {
		var_1_84 = (40664 - (var_1_69 + (min (var_1_8 , var_1_81))));
	}


	// From: Req23Batch14Amount500
	signed long int stepLocal_19 = var_1_80 | var_1_61;
	unsigned char stepLocal_18 = var_1_48 <= 10;
	if (var_1_84 > stepLocal_19) {
		if (stepLocal_18 && ((var_1_4 - var_1_49) >= var_1_55)) {
			var_1_75 = (min (var_1_12 , ((max (var_1_76 , 57120)) - (min (4 , var_1_109)))));
		}
	}


	// From: Req4Batch14Amount500
	if (var_1_37 && var_1_96) {
		if (var_1_96) {
			var_1_16 = (999.15f - var_1_19);
		} else {
			if (((~ var_1_75) % (max (var_1_6 , var_1_20))) < var_1_58) {
				var_1_16 = (min ((var_1_19 - (max (var_1_21 , var_1_22))) , (max ((var_1_23 - 8.5f) , var_1_24))));
			} else {
				var_1_16 = (var_1_19 - var_1_23);
			}
		}
	} else {
		if (var_1_67 < 10u) {
			var_1_16 = ((var_1_25 - 1.0000000005E9f) + (min (var_1_26 , 255.5f)));
		} else {
			var_1_16 = (((var_1_27 - 64.5f) + 1.00000000005E10f) - var_1_23);
		}
	}


	// From: Req10Batch14Amount500
	unsigned short int stepLocal_10 = var_1_75;
	signed char stepLocal_9 = var_1_12;
	if (var_1_33 <= stepLocal_10) {
		if (var_1_104) {
			if (var_1_27 > var_1_24) {
				var_1_45 = (((max (var_1_46 , var_1_47)) - var_1_15) + var_1_13);
			} else {
				var_1_45 = ((var_1_47 - (var_1_48 - var_1_49)) + (var_1_13 + var_1_15));
			}
		}
	} else {
		if ((var_1_49 / var_1_4) != stepLocal_9) {
			var_1_45 = ((min (var_1_46 , var_1_48)) + (64 - (var_1_13 + var_1_49)));
		} else {
			var_1_45 = (var_1_13 + var_1_49);
		}
	}


	// From: Req19Batch14Amount500
	if (var_1_111 > (min ((abs (var_1_118)) , var_1_88))) {
		if ((var_1_20 + var_1_15) < var_1_46) {
			if (var_1_39 && var_1_94) {
				var_1_64 = (abs (max (var_1_75 , var_1_11)));
			} else {
				var_1_64 = (max ((abs (5u)) , (var_1_4 - var_1_113)));
			}
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 2147483647);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 255);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 2305843.009213691390e+12F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 4611686.018427382800e+12F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691390e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 1073741823);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 1073741824);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 63);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 63);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 31);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 31);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 127);
	assume_abort_if_not(var_1_54 <= 254);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 64);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= -31);
	assume_abort_if_not(var_1_62 <= 32);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= -31);
	assume_abort_if_not(var_1_63 <= 31);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 64);
	assume_abort_if_not(var_1_68 <= 127);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 64);
	assume_abort_if_not(var_1_69 <= 127);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 0);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 0);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 0);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 32767);
	assume_abort_if_not(var_1_76 <= 65534);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 126);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 17);
	var_1_82 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 17);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 127);
	var_1_85 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_85 >= 16383);
	assume_abort_if_not(var_1_85 <= 32767);
	var_1_86 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_86 >= 16383);
	assume_abort_if_not(var_1_86 <= 32767);
	var_1_91 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_91 >= -922337.2036854765600e+13F && var_1_91 <= -1.0e-20F) || (var_1_91 <= 9223372.036854765600e+12F && var_1_91 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_92 >= -230584.3009213691390e+13F && var_1_92 <= -1.0e-20F) || (var_1_92 <= 2305843.009213691390e+12F && var_1_92 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_93 >= -230584.3009213691390e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 2305843.009213691390e+12F && var_1_93 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_37 = var_1_37;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_111 = var_1_111;
	last_1_var_1_117 = var_1_117;
	last_1_var_1_118 = var_1_118;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_113 >= var_1_44) ? (var_1_1 == ((unsigned long int) (var_1_4 - var_1_67))) : ((((var_1_113 * var_1_67) / var_1_6) <= (var_1_4 / 5u)) ? (var_1_1 == ((unsigned long int) (var_1_67 + var_1_51))) : (var_1_1 == ((unsigned long int) (min (var_1_4 , var_1_51)))))) && ((var_1_56 != var_1_112) ? (var_1_8 == ((signed char) (var_1_10 - (max (var_1_11 , var_1_12))))) : (var_1_8 == ((signed char) (var_1_11 - ((var_1_13 + 5) + 10)))))) && ((var_1_12 < ((var_1_13 + var_1_15) - var_1_11)) ? ((var_1_4 <= ((abs (var_1_99)) / var_1_6)) ? (var_1_14 == ((signed long int) var_1_13)) : 1) : (var_1_14 == ((signed long int) var_1_15)))) && ((var_1_37 && var_1_96) ? (var_1_96 ? (var_1_16 == ((float) (999.15f - var_1_19))) : ((((~ var_1_75) % (max (var_1_6 , var_1_20))) < var_1_58) ? (var_1_16 == ((float) (min ((var_1_19 - (max (var_1_21 , var_1_22))) , (max ((var_1_23 - 8.5f) , var_1_24)))))) : (var_1_16 == ((float) (var_1_19 - var_1_23))))) : ((var_1_67 < 10u) ? (var_1_16 == ((float) ((var_1_25 - 1.0000000005E9f) + (min (var_1_26 , 255.5f))))) : (var_1_16 == ((float) (((var_1_27 - 64.5f) + 1.00000000005E10f) - var_1_23)))))) && ((var_1_12 <= var_1_67) ? ((var_1_104 || var_1_104) ? (var_1_104 ? (((- var_1_27) > 7.25f) ? (var_1_28 == ((float) var_1_19)) : (var_1_28 == ((float) (9.625f + var_1_26)))) : (((max (var_1_89 , -10)) <= var_1_97) ? (var_1_28 == ((float) (min (var_1_23 , var_1_21)))) : (var_1_28 == ((float) ((abs (max (var_1_24 , var_1_21))) - var_1_25))))) : (var_1_28 == ((float) (var_1_22 - (var_1_30 - (127.5f + var_1_31)))))) : 1)) && (var_1_104 ? (var_1_96 ? (var_1_32 == ((unsigned long int) ((min ((var_1_33 + var_1_34) , var_1_4)) - var_1_11))) : (var_1_32 == ((unsigned long int) (max (((var_1_11 + var_1_15) + var_1_66) , var_1_33))))) : (var_1_32 == ((unsigned long int) ((var_1_34 - (min (var_1_15 , var_1_11))) + var_1_12))))) && ((var_1_96 && var_1_104) ? ((var_1_104 || var_1_96) ? (var_1_35 == ((double) (max (var_1_27 , ((abs (var_1_25)) + (var_1_36 - var_1_31)))))) : (var_1_35 == ((double) (var_1_31 + (var_1_36 - var_1_25))))) : 1)) && (((max (var_1_13 , (- var_1_101))) >= var_1_66) ? (var_1_104 ? ((-8 <= (min (var_1_6 , (var_1_99 ^ var_1_79)))) ? (var_1_37 == ((unsigned char) (var_1_104 || var_1_39))) : (var_1_37 == ((unsigned char) var_1_39))) : (var_1_37 == ((unsigned char) (! (var_1_39 || (var_1_40 && var_1_41)))))) : ((((var_1_14 * 100) + var_1_109) >= (var_1_108 | var_1_20)) ? (var_1_37 == ((unsigned char) (var_1_43 || (! var_1_39)))) : 1))) && (var_1_41 ? ((var_1_119 <= var_1_31) ? (var_1_39 ? (var_1_44 == ((signed char) var_1_12)) : 1) : 1) : (var_1_44 == ((signed char) (var_1_15 + -2))))) && ((var_1_33 <= var_1_75) ? (var_1_104 ? ((var_1_27 > var_1_24) ? (var_1_45 == ((unsigned char) (((max (var_1_46 , var_1_47)) - var_1_15) + var_1_13))) : (var_1_45 == ((unsigned char) ((var_1_47 - (var_1_48 - var_1_49)) + (var_1_13 + var_1_15))))) : 1) : (((var_1_49 / var_1_4) != var_1_12) ? (var_1_45 == ((unsigned char) ((min (var_1_46 , var_1_48)) + (64 - (var_1_13 + var_1_49))))) : (var_1_45 == ((unsigned char) (var_1_13 + var_1_49)))))) && ((var_1_105 == var_1_15) ? (var_1_50 == ((signed long int) -10)) : (var_1_50 == ((signed long int) (max (var_1_48 , var_1_108)))))) && (((var_1_30 != var_1_36) && (! var_1_70)) ? (var_1_51 == ((unsigned short int) ((min (var_1_12 , var_1_47)) + ((min (last_1_var_1_51 , var_1_20)) + var_1_15)))) : (var_1_51 == ((unsigned short int) last_1_var_1_51)))) && (((max (var_1_112 , var_1_34)) >= var_1_13) ? ((var_1_13 <= 16) ? (var_1_52 == ((unsigned char) (var_1_54 - var_1_11))) : (var_1_52 == ((unsigned char) ((var_1_47 + var_1_55) - (min (var_1_15 , (var_1_49 + var_1_13))))))) : 1)) && ((var_1_49 < var_1_66) ? ((var_1_60 <= var_1_28) ? (var_1_56 == ((signed short int) (max (var_1_48 , (abs (var_1_46 - var_1_15)))))) : (var_1_56 == ((signed short int) ((8 + var_1_46) - (abs (var_1_47)))))) : (var_1_56 == ((signed short int) (max ((var_1_13 + (min (var_1_97 , -32))) , var_1_12)))))) && (var_1_40 ? (var_1_58 == ((unsigned short int) ((56219 - (min (var_1_47 , var_1_55))) - 32))) : (var_1_58 == ((unsigned short int) var_1_49)))) && ((var_1_117 != (- var_1_55)) ? ((var_1_61 <= var_1_13) ? (var_1_59 == ((double) (min (var_1_26 , var_1_19)))) : (var_1_59 == ((double) var_1_25))) : 1)) && (((var_1_54 + var_1_32) != var_1_55) ? (var_1_60 == ((double) (var_1_19 - (max ((min (var_1_30 , var_1_31)) , var_1_22))))) : 1)) && ((var_1_47 >= (var_1_79 / var_1_48)) ? (var_1_61 == ((signed char) ((var_1_15 + var_1_49) - 4))) : (var_1_104 ? (var_1_61 == ((signed char) var_1_13)) : (var_1_61 == ((signed char) ((var_1_62 + (max (var_1_49 , var_1_63))) + var_1_48)))))) && ((var_1_111 > (min ((abs (var_1_118)) , var_1_88))) ? (((var_1_20 + var_1_15) < var_1_46) ? ((var_1_39 && var_1_94) ? (var_1_64 == ((unsigned long int) (abs (max (var_1_75 , var_1_11))))) : (var_1_64 == ((unsigned long int) (max ((abs (5u)) , (var_1_4 - var_1_113)))))) : 1) : 1)) && (((- last_1_var_1_66) < (var_1_49 - var_1_101)) ? (var_1_66 == ((unsigned char) (min (var_1_49 , 32)))) : (var_1_66 == ((unsigned char) ((min (var_1_48 , (var_1_49 + 5))) + var_1_11))))) && (var_1_40 ? (var_1_67 == ((unsigned char) ((var_1_55 + (max (var_1_68 , var_1_69))) - var_1_47))) : 1)) && (((last_1_var_1_50 * last_1_var_1_117) < last_1_var_1_111) ? ((last_1_var_1_37 && (var_1_23 >= last_1_var_1_100)) ? (var_1_70 == ((unsigned char) ((var_1_13 >= (last_1_var_1_80 >> last_1_var_1_50)) && (var_1_43 && (var_1_71 || var_1_72))))) : (var_1_70 == ((unsigned char) var_1_72))) : ((! (last_1_var_1_79 > last_1_var_1_61)) ? (var_1_72 ? (var_1_70 == ((unsigned char) (var_1_43 && (var_1_71 || var_1_74)))) : 1) : 1))) && ((var_1_84 > (var_1_80 | var_1_61)) ? (((var_1_48 <= 10) && ((var_1_4 - var_1_49) >= var_1_55)) ? (var_1_75 == ((unsigned short int) (min (var_1_12 , ((max (var_1_76 , 57120)) - (min (4 , var_1_109))))))) : 1) : 1)) && ((var_1_54 <= var_1_51) ? ((var_1_19 == var_1_59) ? (var_1_77 == ((signed char) (min (var_1_49 , (max ((var_1_48 + var_1_62) , 2)))))) : 1) : (var_1_77 == ((signed char) (max (var_1_49 , (var_1_12 - var_1_78))))))) && ((var_1_62 > var_1_20) ? ((last_1_var_1_61 < (- (last_1_var_1_108 >> last_1_var_1_58))) ? (var_1_79 == ((signed long int) ((last_1_var_1_118 + var_1_46) - var_1_76))) : (var_1_79 == ((signed long int) ((abs (var_1_13 - 50)) + var_1_15)))) : (var_1_79 == ((signed long int) (var_1_68 - (min (last_1_var_1_61 , 10))))))) && ((! (var_1_25 < var_1_26)) ? (var_1_80 == ((unsigned char) var_1_11)) : (var_1_70 ? (((var_1_69 + var_1_67) > (var_1_101 >> (max (var_1_81 , var_1_82)))) ? (var_1_80 == ((unsigned char) (var_1_48 + var_1_13))) : ((99.5f >= var_1_23) ? (var_1_80 == ((unsigned char) (var_1_48 + var_1_81))) : 1)) : (var_1_80 == ((unsigned char) ((var_1_49 + var_1_81) + var_1_83)))))) && (((var_1_49 - last_1_var_1_84) != var_1_62) ? ((var_1_24 < (var_1_23 / var_1_27)) ? (var_1_84 == ((unsigned short int) (min (((var_1_85 - 50) + (var_1_86 - 2)) , var_1_11)))) : (var_1_84 == ((unsigned short int) (max (var_1_48 , (min (var_1_52 , var_1_69))))))) : (var_1_84 == ((unsigned short int) (40664 - (var_1_69 + (min (var_1_8 , var_1_81)))))))) && (var_1_71 ? ((10 >= var_1_66) ? (((var_1_113 * var_1_69) <= ((var_1_62 / var_1_86) | (var_1_66 + var_1_12))) ? (var_1_88 == ((unsigned char) (var_1_68 + (min (var_1_48 , var_1_55))))) : (var_1_88 == ((unsigned char) ((max (var_1_11 , (var_1_55 - var_1_49))) + var_1_13)))) : (var_1_88 == ((unsigned char) (var_1_46 + var_1_78)))) : (var_1_88 == ((unsigned char) (min (var_1_78 , var_1_47)))))) && ((var_1_24 <= var_1_90) ? (var_1_89 == ((unsigned char) (max (5 , (var_1_49 + var_1_46))))) : (((var_1_33 >> (min (var_1_49 , var_1_81))) <= last_1_var_1_89) ? (var_1_89 == ((unsigned char) ((4 + var_1_48) + var_1_78))) : 1))) && ((var_1_114 >= (2 % 1)) ? (var_1_90 == ((double) (max (var_1_91 , (min ((min (var_1_36 , var_1_26)) , var_1_19)))))) : (var_1_90 == ((double) (var_1_31 + (var_1_92 + var_1_93)))))) && (((var_1_36 - (abs (var_1_91))) < var_1_60) ? (var_1_94 == ((unsigned char) (((var_1_85 * var_1_89) > (var_1_33 - 10)) && (! (var_1_40 && var_1_39))))) : 1)) && (((abs (var_1_21)) <= (min (var_1_59 , var_1_24))) ? ((! (var_1_104 && last_1_var_1_96)) ? (var_1_96 == ((unsigned char) (var_1_74 || (! var_1_71)))) : (var_1_96 == ((unsigned char) (! var_1_72)))) : (var_1_96 == ((unsigned char) (var_1_39 || var_1_40))))) && ((var_1_61 >= var_1_48) ? (var_1_39 ? (var_1_97 == ((signed short int) (var_1_14 + last_1_var_1_97))) : (var_1_97 == ((signed short int) (var_1_115 + var_1_15)))) : 1)) && (((var_1_69 * last_1_var_1_50) <= last_1_var_1_79) ? (var_1_99 == ((signed short int) last_1_var_1_77)) : 1)) && (((32.75 - var_1_30) >= last_1_var_1_100) ? (var_1_100 == ((float) ((min ((var_1_30 - var_1_31) , var_1_25)) - var_1_36))) : (var_1_100 == ((float) ((var_1_30 - var_1_25) - var_1_22))))) && (var_1_70 ? ((var_1_107 < var_1_91) ? (var_1_101 == ((unsigned short int) 128)) : 1) : (var_1_101 == ((unsigned short int) ((min (var_1_85 , last_1_var_1_101)) + var_1_111))))) && (((-10 % var_1_34) < last_1_var_1_88) ? (var_1_104 == ((unsigned char) var_1_39)) : (var_1_104 == ((unsigned char) 0)))) && (var_1_105 == ((signed short int) var_1_48))) && (var_1_43 ? (var_1_106 == ((float) var_1_19)) : (var_1_106 == ((float) var_1_24)))) && (var_1_107 == ((double) var_1_19))) && (var_1_108 == ((signed char) var_1_81))) && (var_1_40 ? (var_1_109 == ((unsigned short int) var_1_83)) : 1)) && (var_1_71 ? (var_1_110 == ((signed long int) var_1_15)) : 1)) && (var_1_41 ? (var_1_111 == ((unsigned char) var_1_13)) : 1)) && (var_1_94 ? (var_1_112 == ((signed long int) var_1_78)) : 1)) && (var_1_37 ? (var_1_113 == ((signed short int) var_1_48)) : (var_1_113 == ((signed short int) var_1_69)))) && (var_1_104 ? (var_1_114 == ((signed char) var_1_82)) : (var_1_114 == ((signed char) 5)))) && (var_1_94 ? (var_1_115 == ((signed short int) var_1_12)) : 1)) && ((var_1_78 != var_1_33) ? (var_1_116 == ((double) (0.6 + var_1_26))) : (var_1_116 == ((double) var_1_92)))) && (var_1_43 ? (var_1_117 == ((unsigned long int) last_1_var_1_117)) : 1)) && (var_1_118 == ((unsigned long int) var_1_85))) && (var_1_119 == ((float) var_1_30))
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
