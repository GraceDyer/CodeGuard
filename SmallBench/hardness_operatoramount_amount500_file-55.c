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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch55Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -2;
signed char var_1_4 = 0;
signed char var_1_5 = -5;
signed short int var_1_6 = -32;
signed char var_1_7 = 8;
unsigned char var_1_8 = 2;
float var_1_10 = 15.6;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 100;
unsigned char var_1_13 = 50;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 1;
float var_1_16 = 63.2;
float var_1_17 = 99999999999999.5;
float var_1_18 = 32.4;
signed char var_1_19 = -1;
signed char var_1_20 = 100;
signed char var_1_21 = 0;
signed char var_1_22 = 5;
signed char var_1_23 = 4;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_27 = 1;
signed char var_1_28 = 0;
signed char var_1_29 = 64;
unsigned char var_1_30 = 16;
signed char var_1_31 = -25;
float var_1_33 = -0.5;
float var_1_34 = 99.25;
float var_1_35 = 3.25;
float var_1_36 = 32.5;
float var_1_37 = 32.75;
double var_1_38 = 100.25;
double var_1_39 = 128.1;
signed long int var_1_40 = -4;
signed char var_1_43 = 64;
signed char var_1_44 = 50;
unsigned short int var_1_45 = 32;
unsigned char var_1_46 = 32;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 32;
unsigned char var_1_51 = 200;
unsigned long int var_1_52 = 64;
unsigned long int var_1_53 = 1748165977;
float var_1_54 = 32.5;
float var_1_55 = 127.45;
float var_1_56 = 0.875;
float var_1_57 = 99.4;
float var_1_58 = 0.5;
unsigned long int var_1_59 = 4;
unsigned long int var_1_60 = 3071194324;
signed short int var_1_61 = 4;
double var_1_62 = 5.05;
double var_1_63 = 999999999.2;
double var_1_64 = 5.5;
float var_1_65 = 5.5;
signed long int var_1_66 = 5;
unsigned char var_1_67 = 50;
float var_1_68 = 256.875;
unsigned long int var_1_69 = 128;
unsigned long int var_1_71 = 4;
unsigned long int var_1_72 = 1653621525;
unsigned long int var_1_73 = 1000000000;
unsigned long int var_1_74 = 1000000000;
unsigned long int var_1_75 = 1000000000;
float var_1_76 = 64.5;
float var_1_77 = 0.0;
signed char var_1_78 = -25;
unsigned short int var_1_79 = 20143;
unsigned short int var_1_80 = 17140;
signed char var_1_81 = -8;
double var_1_82 = 128.5;
unsigned long int var_1_83 = 16;
unsigned short int var_1_84 = 4;
signed short int var_1_86 = -64;
double var_1_87 = 0.0;
double var_1_88 = 4.25;
double var_1_89 = 256.25;
double var_1_90 = 49.7;
float var_1_91 = -0.6;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 1;
float var_1_95 = 32.6;
double var_1_96 = 255.25;
double var_1_97 = 3.178;
signed long int var_1_98 = 100;
double var_1_99 = 1000000.8;
signed long int var_1_100 = -2;
unsigned short int var_1_101 = 8;
unsigned short int var_1_102 = 35185;
double var_1_103 = 32.5;
float var_1_104 = 64.1;
float var_1_105 = 0.0;
float var_1_106 = 0.0;
unsigned char var_1_107 = 1;
unsigned char var_1_108 = 8;
signed long int var_1_109 = -256;
float var_1_111 = 32.25;
unsigned long int var_1_112 = 0;
unsigned long int var_1_113 = 10000;
unsigned short int var_1_114 = 1;
unsigned long int var_1_115 = 25;
signed short int var_1_116 = -50;
unsigned short int var_1_117 = 128;
double var_1_118 = 16.4;
signed char var_1_119 = -100;
signed long int var_1_120 = 8;
unsigned char var_1_121 = 1;
unsigned long int var_1_122 = 2;

// Calibration values

// Last'ed variables
signed char last_1_var_1_19 = -1;
float last_1_var_1_33 = -0.5;
double last_1_var_1_38 = 100.25;
unsigned short int last_1_var_1_45 = 32;
unsigned char last_1_var_1_49 = 1;
signed short int last_1_var_1_61 = 4;
unsigned char last_1_var_1_67 = 50;
unsigned long int last_1_var_1_69 = 128;
unsigned long int last_1_var_1_71 = 4;
signed short int last_1_var_1_86 = -64;
signed long int last_1_var_1_98 = 100;
unsigned char last_1_var_1_107 = 1;
unsigned long int last_1_var_1_122 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req39Batch55Amount500
	if (var_1_25 && ((max (last_1_var_1_61 , var_1_15)) > var_1_80)) {
		if (last_1_var_1_122 < last_1_var_1_71) {
			var_1_87 = (var_1_57 + 4.75);
		} else {
			if ((last_1_var_1_49 && var_1_27) && last_1_var_1_107) {
				var_1_87 = (max ((var_1_37 - var_1_55) , var_1_57));
			} else {
				var_1_87 = (var_1_64 - var_1_36);
			}
		}
	} else {
		if (((var_1_14 / var_1_51) / var_1_80) > (last_1_var_1_98 % var_1_79)) {
			var_1_87 = ((var_1_63 + var_1_36) - ((min (var_1_64 , var_1_88)) + (var_1_89 + var_1_90)));
		} else {
			var_1_87 = (((max (var_1_64 , var_1_88)) - (var_1_89 + var_1_63)) + (var_1_90 + var_1_34));
		}
	}


	// From: Req1Batch55Amount500
	if (-2 == last_1_var_1_67) {
		if ((last_1_var_1_67 * last_1_var_1_67) <= -500) {
			var_1_1 = (abs (2 - var_1_4));
		} else {
			var_1_1 = (abs (var_1_4));
		}
	} else {
		var_1_1 = (var_1_5 + 5);
	}


	// From: Req38Batch55Amount500
	signed char stepLocal_14 = var_1_44;
	if ((last_1_var_1_33 / (abs (var_1_10))) == (var_1_64 / var_1_77)) {
		if (((var_1_60 - var_1_75) / var_1_20) > stepLocal_14) {
			var_1_86 = ((abs (var_1_21)) - (abs (var_1_51 + last_1_var_1_86)));
		} else {
			var_1_86 = ((abs (last_1_var_1_45)) - last_1_var_1_19);
		}
	} else {
		var_1_86 = (abs (var_1_51));
	}


	// From: Req20Batch55Amount500
	signed char stepLocal_9 = var_1_4;
	if (stepLocal_9 > var_1_86) {
		var_1_50 = (var_1_51 - (max (var_1_44 , var_1_20)));
	}


	// From: Req8Batch55Amount500
	var_1_29 = (max (var_1_21 , var_1_22));


	// From: Req9Batch55Amount500
	signed char stepLocal_2 = var_1_23;
	if (((~ var_1_7) & var_1_13) < stepLocal_2) {
		var_1_30 = var_1_13;
	}


	// From: Req12Batch55Amount500
	if (var_1_37 <= last_1_var_1_38) {
		var_1_38 = (min (var_1_35 , var_1_36));
	}


	// From: Req13Batch55Amount500
	if (var_1_25) {
		var_1_39 = var_1_36;
	}


	// From: Req18Batch55Amount500
	unsigned char stepLocal_8 = var_1_13;
	if (stepLocal_8 <= var_1_4) {
		var_1_47 = (var_1_48 || (! var_1_25));
	}


	// From: Req27Batch55Amount500
	var_1_65 = (max (var_1_56 , (min ((var_1_63 - 16.915f) , var_1_36))));


	// From: Req35Batch55Amount500
	var_1_82 = (abs (var_1_37 - 128.4));


	// From: Req43Batch55Amount500
	var_1_96 = ((max (var_1_36 , var_1_55)) - var_1_63);


	// From: Req44Batch55Amount500
	var_1_97 = (min ((var_1_36 - var_1_77) , (var_1_35 + var_1_63)));


	// From: Req45Batch55Amount500
	var_1_98 = (abs (64));


	// From: Req51Batch55Amount500
	var_1_107 = var_1_48;


	// From: Req54Batch55Amount500
	if (var_1_94) {
		var_1_111 = var_1_64;
	}


	// From: Req55Batch55Amount500
	var_1_112 = var_1_102;


	// From: Req56Batch55Amount500
	var_1_113 = var_1_44;


	// From: Req57Batch55Amount500
	var_1_114 = var_1_11;


	// From: Req58Batch55Amount500
	if (var_1_93) {
		var_1_115 = var_1_29;
	} else {
		var_1_115 = var_1_13;
	}


	// From: Req62Batch55Amount500
	if (var_1_48) {
		var_1_119 = var_1_44;
	} else {
		var_1_119 = var_1_20;
	}


	// From: Req64Batch55Amount500
	if (var_1_27) {
		var_1_121 = var_1_25;
	} else {
		var_1_121 = var_1_48;
	}


	// From: Req65Batch55Amount500
	unsigned char stepLocal_24 = var_1_107;
	if (var_1_87 <= (var_1_82 * var_1_96)) {
		var_1_122 = ((min (var_1_4 , (min (1u , var_1_72)))) + var_1_51);
	} else {
		if (stepLocal_24 || var_1_121) {
			var_1_122 = var_1_75;
		} else {
			var_1_122 = var_1_72;
		}
	}


	// From: Req14Batch55Amount500
	unsigned char stepLocal_5 = var_1_121;
	signed long int stepLocal_4 = (5 - var_1_20) / (abs (var_1_12));
	if (var_1_17 != 10.7f) {
		if (var_1_23 <= stepLocal_4) {
			var_1_40 = (var_1_119 + var_1_4);
		}
	} else {
		if (var_1_25 && stepLocal_5) {
			var_1_40 = var_1_86;
		}
	}


	// From: Req2Batch55Amount500
	if (var_1_5 > (var_1_40 % var_1_7)) {
		var_1_6 = var_1_5;
	} else {
		var_1_6 = (var_1_5 + var_1_7);
	}


	// From: Req5Batch55Amount500
	if (var_1_14 >= (- var_1_40)) {
		var_1_19 = (var_1_14 - ((var_1_20 - var_1_21) - var_1_15));
	} else {
		var_1_19 = ((var_1_21 + (abs (var_1_22))) + (max (var_1_15 , (min (var_1_5 , var_1_23)))));
	}


	// From: Req7Batch55Amount500
	if (var_1_121) {
		var_1_28 = (max ((min (var_1_5 , var_1_14)) , var_1_4));
	} else {
		if (! ((10 / var_1_11) != var_1_4)) {
			var_1_28 = (max (var_1_15 , (min (var_1_20 , var_1_5))));
		} else {
			var_1_28 = (var_1_14 - (var_1_20 - var_1_15));
		}
	}


	// From: Req10Batch55Amount500
	if (var_1_121) {
		var_1_31 = var_1_4;
	} else {
		var_1_31 = (min ((min (-16 , var_1_22)) , (min ((var_1_4 - var_1_21) , (var_1_23 + var_1_5)))));
	}


	// From: Req24Batch55Amount500
	if (var_1_82 < (max (var_1_55 , var_1_34))) {
		if (var_1_23 >= var_1_15) {
			var_1_59 = (var_1_60 - var_1_44);
		}
	} else {
		var_1_59 = (max (var_1_13 , 1000000u));
	}


	// From: Req30Batch55Amount500
	if (var_1_27 || (var_1_59 < var_1_7)) {
		var_1_68 = (min (var_1_57 , var_1_34));
	} else {
		var_1_68 = ((var_1_36 - var_1_63) + (min (var_1_56 , (var_1_57 + var_1_64))));
	}


	// From: Req46Batch55Amount500
	signed char stepLocal_21 = var_1_21;
	if ((max (var_1_14 , var_1_112)) < stepLocal_21) {
		var_1_99 = (max (var_1_36 , var_1_89));
	} else {
		var_1_99 = (max (var_1_55 , var_1_56));
	}


	// From: Req61Batch55Amount500
	if (var_1_121) {
		var_1_118 = 100.5;
	} else {
		var_1_118 = var_1_55;
	}


	// From: Req63Batch55Amount500
	if (var_1_47) {
		var_1_120 = var_1_59;
	} else {
		var_1_120 = var_1_75;
	}


	// From: Req31Batch55Amount500
	if (var_1_56 >= ((var_1_118 + var_1_68) + var_1_35)) {
		var_1_69 = (var_1_60 - var_1_20);
	} else {
		var_1_69 = (last_1_var_1_69 + var_1_4);
	}


	// From: Req33Batch55Amount500
	unsigned long int stepLocal_13 = var_1_59;
	unsigned long int stepLocal_12 = var_1_112;
	if (stepLocal_12 <= (var_1_69 * var_1_6)) {
		if ((min (var_1_30 , (var_1_6 * var_1_5))) > stepLocal_13) {
			var_1_76 = (min ((abs (64.2f)) , var_1_35));
		} else {
			var_1_76 = ((max ((min (128.75f , var_1_34)) , (127.4f - var_1_36))) + var_1_64);
		}
	} else {
		var_1_76 = (var_1_63 - (var_1_77 - 1000000.2f));
	}


	// From: Req48Batch55Amount500
	if (var_1_25) {
		if ((min (var_1_99 , (var_1_76 * var_1_76))) != var_1_17) {
			var_1_101 = (var_1_102 - var_1_86);
		}
	}


	// From: Req21Batch55Amount500
	if ((max (0.19999999999999996 , (var_1_18 * var_1_17))) != var_1_76) {
		var_1_52 = ((var_1_53 - var_1_15) + var_1_4);
	}


	// From: Req11Batch55Amount500
	unsigned short int stepLocal_3 = var_1_101;
	if (stepLocal_3 > var_1_59) {
		var_1_33 = ((min (15.27f , (var_1_34 + 0.4f))) + var_1_35);
	} else {
		var_1_33 = ((8.9821145927556444E18f - var_1_36) - var_1_37);
	}


	// From: Req19Batch55Amount500
	if (var_1_69 == var_1_15) {
		if ((max (var_1_37 , var_1_10)) < (- var_1_33)) {
			var_1_49 = (! var_1_27);
		}
	} else {
		var_1_49 = ((var_1_119 <= var_1_4) || var_1_25);
	}


	// From: Req41Batch55Amount500
	unsigned char stepLocal_18 = var_1_25;
	unsigned long int stepLocal_17 = var_1_74 - var_1_12;
	if (stepLocal_18 || var_1_49) {
		var_1_92 = (var_1_27 || (var_1_25 && (var_1_93 && var_1_94)));
	} else {
		if (var_1_50 != stepLocal_17) {
			var_1_92 = var_1_27;
		}
	}


	// From: Req6Batch55Amount500
	var_1_24 = ((var_1_5 <= (var_1_11 - var_1_14)) || (var_1_25 && (var_1_49 || var_1_27)));


	// From: Req15Batch55Amount500
	unsigned char stepLocal_6 = var_1_92;
	if (stepLocal_6 || (var_1_114 <= (var_1_12 - var_1_20))) {
		var_1_43 = ((var_1_20 - (var_1_44 - var_1_21)) - (abs (var_1_22)));
	} else {
		var_1_43 = ((var_1_21 + var_1_22) + (abs (var_1_44)));
	}


	// From: Req22Batch55Amount500
	signed long int stepLocal_10 = var_1_14 * var_1_50;
	if (var_1_43 < stepLocal_10) {
		if (((var_1_36 + var_1_55) - var_1_37) > ((min (var_1_33 , var_1_96)) / var_1_10)) {
			var_1_54 = (var_1_36 + 4.5f);
		} else {
			var_1_54 = (var_1_35 + var_1_34);
		}
	} else {
		if (var_1_25) {
			var_1_54 = (var_1_55 - var_1_36);
		} else {
			var_1_54 = ((var_1_34 + (var_1_56 + var_1_57)) + var_1_35);
		}
	}


	// From: Req26Batch55Amount500
	if (var_1_49) {
		var_1_62 = (((var_1_63 + var_1_64) + var_1_36) - var_1_55);
	} else {
		var_1_62 = (var_1_37 - var_1_63);
	}


	// From: Req32Batch55Amount500
	if (var_1_49) {
		var_1_71 = (var_1_15 + ((var_1_72 - var_1_112) - (128u + var_1_21)));
	} else {
		var_1_71 = (((var_1_73 + var_1_74) - (var_1_75 - var_1_13)) + (var_1_72 - var_1_30));
	}


	// From: Req42Batch55Amount500
	unsigned long int stepLocal_20 = ~ var_1_71;
	signed char stepLocal_19 = var_1_7;
	if (var_1_10 <= (abs (5.6f))) {
		var_1_95 = (((min (var_1_36 , var_1_88)) - var_1_63) + var_1_35);
	} else {
		if (stepLocal_19 <= (var_1_119 / var_1_12)) {
			if (var_1_80 != stepLocal_20) {
				var_1_95 = (max (var_1_18 , (var_1_56 + (1000000.5f + var_1_63))));
			} else {
				var_1_95 = ((var_1_89 + var_1_64) - var_1_90);
			}
		}
	}


	// From: Req49Batch55Amount500
	if (var_1_49) {
		var_1_103 = (var_1_56 + var_1_35);
	} else {
		var_1_103 = ((max ((var_1_63 + var_1_88) , var_1_36)) - (abs (var_1_57)));
	}


	// From: Req50Batch55Amount500
	unsigned char stepLocal_23 = var_1_35 < var_1_17;
	if (var_1_107) {
		if (var_1_27 && stepLocal_23) {
			if (var_1_62 >= var_1_17) {
				var_1_104 = (((var_1_105 + var_1_106) - var_1_36) - var_1_63);
			}
		} else {
			var_1_104 = (max (var_1_37 , var_1_55));
		}
	} else {
		var_1_104 = (var_1_36 + var_1_105);
	}


	// From: Req52Batch55Amount500
	if (var_1_49) {
		var_1_108 = 5;
	} else {
		var_1_108 = var_1_13;
	}


	// From: Req60Batch55Amount500
	if (var_1_24) {
		var_1_117 = var_1_69;
	} else {
		var_1_117 = var_1_4;
	}


	// From: Req37Batch55Amount500
	if (var_1_92) {
		if (var_1_25) {
			var_1_84 = (min (var_1_11 , var_1_1));
		}
	}


	// From: Req16Batch55Amount500
	unsigned char stepLocal_7 = var_1_92;
	if (stepLocal_7 && var_1_47) {
		var_1_45 = (var_1_13 + var_1_15);
	}


	// From: Req4Batch55Amount500
	if ((var_1_71 ^ (var_1_12 - var_1_11)) <= (var_1_31 - var_1_4)) {
		var_1_16 = (min (var_1_17 , var_1_18));
	}


	// From: Req25Batch55Amount500
	if ((var_1_55 + (var_1_103 / var_1_10)) >= (- var_1_17)) {
		var_1_61 = (var_1_21 - var_1_28);
	} else {
		var_1_61 = var_1_7;
	}


	// From: Req36Batch55Amount500
	var_1_83 = (max (var_1_13 , (min (var_1_75 , var_1_61))));


	// From: Req40Batch55Amount500
	unsigned short int stepLocal_16 = var_1_45;
	signed long int stepLocal_15 = var_1_21 << var_1_20;
	if ((64 / var_1_11) >= stepLocal_15) {
		if (stepLocal_16 >= (var_1_60 - var_1_51)) {
			var_1_91 = var_1_63;
		}
	}


	// From: Req3Batch55Amount500
	signed char stepLocal_1 = var_1_5;
	unsigned char stepLocal_0 = var_1_7 < (var_1_5 * -100);
	if (((var_1_76 / var_1_10) < 255.625f) && stepLocal_0) {
		var_1_8 = (max (((var_1_11 + var_1_12) - var_1_4) , var_1_13));
	} else {
		if (stepLocal_1 > var_1_84) {
			var_1_8 = ((max (128 , (abs (128)))) - var_1_4);
		} else {
			var_1_8 = (128 - (var_1_14 + var_1_15));
		}
	}


	// From: Req47Batch55Amount500
	signed long int stepLocal_22 = 64;
	if ((var_1_8 >> var_1_79) <= stepLocal_22) {
		var_1_100 = (abs (var_1_15));
	}


	// From: Req59Batch55Amount500
	var_1_116 = var_1_100;


	// From: Req17Batch55Amount500
	if (var_1_25) {
		if (var_1_59 != (abs (var_1_12))) {
			var_1_46 = (abs (var_1_4));
		}
	} else {
		if (var_1_83 < var_1_12) {
			var_1_46 = (2 + (min (32 , var_1_20)));
		} else {
			var_1_46 = (128 - (min ((min (var_1_11 , var_1_15)) , (var_1_12 - var_1_44))));
		}
	}


	// From: Req23Batch55Amount500
	if ((var_1_46 / var_1_11) <= var_1_43) {
		var_1_58 = (min (var_1_36 , var_1_57));
	}


	// From: Req28Batch55Amount500
	signed long int stepLocal_11 = max (var_1_43 , (var_1_44 >> var_1_101));
	if (var_1_76 >= (var_1_91 * var_1_103)) {
		if (var_1_100 <= stepLocal_11) {
			var_1_66 = (min (var_1_44 , var_1_12));
		}
	}


	// From: Req34Batch55Amount500
	if (var_1_49) {
		if (((var_1_79 + var_1_80) - var_1_44) < var_1_116) {
			var_1_78 = (var_1_22 + var_1_23);
		}
	} else {
		var_1_78 = (2 + (max (var_1_22 , (var_1_21 + var_1_81))));
	}


	// From: Req53Batch55Amount500
	if (var_1_48) {
		var_1_109 = var_1_78;
	} else {
		var_1_109 = 10;
	}


	// From: Req29Batch55Amount500
	if (4 <= (var_1_14 + var_1_109)) {
		if ((- var_1_34) >= (min (var_1_68 , 9999999.875f))) {
			var_1_67 = var_1_21;
		} else {
			var_1_67 = var_1_4;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -128);
	assume_abort_if_not(var_1_7 <= 127);
	assume_abort_if_not(var_1_7 != 0);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 64);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 64);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 94);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 31);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -31);
	assume_abort_if_not(var_1_22 <= 31);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -230584.3009213691390e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691390e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 31);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 127);
	assume_abort_if_not(var_1_51 <= 254);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 1073741823);
	assume_abort_if_not(var_1_53 <= 2147483647);
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427387900e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -115292.1504606845700e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 1152921.504606845700e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -115292.1504606845700e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 1152921.504606845700e+12F && var_1_57 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 2147483647);
	assume_abort_if_not(var_1_60 <= 4294967294);
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691390e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= 0.0F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691390e+12F && var_1_64 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 1610612735);
	assume_abort_if_not(var_1_72 <= 2147483647);
	var_1_73 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_73 >= 536870911);
	assume_abort_if_not(var_1_73 <= 1073741824);
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 536870912);
	assume_abort_if_not(var_1_74 <= 1073741823);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 536870911);
	assume_abort_if_not(var_1_75 <= 1073741823);
	var_1_77 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_77 >= 4611686.018427382800e+12F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854765600e+12F && var_1_77 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 16383);
	assume_abort_if_not(var_1_79 <= 32768);
	var_1_80 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_80 >= 16384);
	assume_abort_if_not(var_1_80 <= 32767);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= -31);
	assume_abort_if_not(var_1_81 <= 31);
	var_1_88 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 4611686.018427382800e+12F && var_1_88 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_89 >= 0.0F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 2305843.009213691390e+12F && var_1_89 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_90 >= 0.0F && var_1_90 <= -1.0e-20F) || (var_1_90 <= 2305843.009213691390e+12F && var_1_90 >= 1.0e-20F ));
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 1);
	assume_abort_if_not(var_1_93 <= 1);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 1);
	assume_abort_if_not(var_1_94 <= 1);
	var_1_102 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_102 >= 32767);
	assume_abort_if_not(var_1_102 <= 65534);
	var_1_105 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_105 >= 2305843.009213691390e+12F && var_1_105 <= -1.0e-20F) || (var_1_105 <= 4611686.018427382800e+12F && var_1_105 >= 1.0e-20F ));
	var_1_106 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_106 >= 2305843.009213691390e+12F && var_1_106 <= -1.0e-20F) || (var_1_106 <= 4611686.018427382800e+12F && var_1_106 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_122 = var_1_122;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((-2 == last_1_var_1_67) ? (((last_1_var_1_67 * last_1_var_1_67) <= -500) ? (var_1_1 == ((signed char) (abs (2 - var_1_4)))) : (var_1_1 == ((signed char) (abs (var_1_4))))) : (var_1_1 == ((signed char) (var_1_5 + 5)))) && ((var_1_5 > (var_1_40 % var_1_7)) ? (var_1_6 == ((signed short int) var_1_5)) : (var_1_6 == ((signed short int) (var_1_5 + var_1_7))))) && ((((var_1_76 / var_1_10) < 255.625f) && (var_1_7 < (var_1_5 * -100))) ? (var_1_8 == ((unsigned char) (max (((var_1_11 + var_1_12) - var_1_4) , var_1_13)))) : ((var_1_5 > var_1_84) ? (var_1_8 == ((unsigned char) ((max (128 , (abs (128)))) - var_1_4))) : (var_1_8 == ((unsigned char) (128 - (var_1_14 + var_1_15))))))) && (((var_1_71 ^ (var_1_12 - var_1_11)) <= (var_1_31 - var_1_4)) ? (var_1_16 == ((float) (min (var_1_17 , var_1_18)))) : 1)) && ((var_1_14 >= (- var_1_40)) ? (var_1_19 == ((signed char) (var_1_14 - ((var_1_20 - var_1_21) - var_1_15)))) : (var_1_19 == ((signed char) ((var_1_21 + (abs (var_1_22))) + (max (var_1_15 , (min (var_1_5 , var_1_23))))))))) && (var_1_24 == ((unsigned char) ((var_1_5 <= (var_1_11 - var_1_14)) || (var_1_25 && (var_1_49 || var_1_27)))))) && (var_1_121 ? (var_1_28 == ((signed char) (max ((min (var_1_5 , var_1_14)) , var_1_4)))) : ((! ((10 / var_1_11) != var_1_4)) ? (var_1_28 == ((signed char) (max (var_1_15 , (min (var_1_20 , var_1_5)))))) : (var_1_28 == ((signed char) (var_1_14 - (var_1_20 - var_1_15))))))) && (var_1_29 == ((signed char) (max (var_1_21 , var_1_22))))) && ((((~ var_1_7) & var_1_13) < var_1_23) ? (var_1_30 == ((unsigned char) var_1_13)) : 1)) && (var_1_121 ? (var_1_31 == ((signed char) var_1_4)) : (var_1_31 == ((signed char) (min ((min (-16 , var_1_22)) , (min ((var_1_4 - var_1_21) , (var_1_23 + var_1_5))))))))) && ((var_1_101 > var_1_59) ? (var_1_33 == ((float) ((min (15.27f , (var_1_34 + 0.4f))) + var_1_35))) : (var_1_33 == ((float) ((8.9821145927556444E18f - var_1_36) - var_1_37))))) && ((var_1_37 <= last_1_var_1_38) ? (var_1_38 == ((double) (min (var_1_35 , var_1_36)))) : 1)) && (var_1_25 ? (var_1_39 == ((double) var_1_36)) : 1)) && ((var_1_17 != 10.7f) ? ((var_1_23 <= ((5 - var_1_20) / (abs (var_1_12)))) ? (var_1_40 == ((signed long int) (var_1_119 + var_1_4))) : 1) : ((var_1_25 && var_1_121) ? (var_1_40 == ((signed long int) var_1_86)) : 1))) && ((var_1_92 || (var_1_114 <= (var_1_12 - var_1_20))) ? (var_1_43 == ((signed char) ((var_1_20 - (var_1_44 - var_1_21)) - (abs (var_1_22))))) : (var_1_43 == ((signed char) ((var_1_21 + var_1_22) + (abs (var_1_44))))))) && ((var_1_92 && var_1_47) ? (var_1_45 == ((unsigned short int) (var_1_13 + var_1_15))) : 1)) && (var_1_25 ? ((var_1_59 != (abs (var_1_12))) ? (var_1_46 == ((unsigned char) (abs (var_1_4)))) : 1) : ((var_1_83 < var_1_12) ? (var_1_46 == ((unsigned char) (2 + (min (32 , var_1_20))))) : (var_1_46 == ((unsigned char) (128 - (min ((min (var_1_11 , var_1_15)) , (var_1_12 - var_1_44))))))))) && ((var_1_13 <= var_1_4) ? (var_1_47 == ((unsigned char) (var_1_48 || (! var_1_25)))) : 1)) && ((var_1_69 == var_1_15) ? (((max (var_1_37 , var_1_10)) < (- var_1_33)) ? (var_1_49 == ((unsigned char) (! var_1_27))) : 1) : (var_1_49 == ((unsigned char) ((var_1_119 <= var_1_4) || var_1_25))))) && ((var_1_4 > var_1_86) ? (var_1_50 == ((unsigned char) (var_1_51 - (max (var_1_44 , var_1_20))))) : 1)) && (((max (0.19999999999999996 , (var_1_18 * var_1_17))) != var_1_76) ? (var_1_52 == ((unsigned long int) ((var_1_53 - var_1_15) + var_1_4))) : 1)) && ((var_1_43 < (var_1_14 * var_1_50)) ? ((((var_1_36 + var_1_55) - var_1_37) > ((min (var_1_33 , var_1_96)) / var_1_10)) ? (var_1_54 == ((float) (var_1_36 + 4.5f))) : (var_1_54 == ((float) (var_1_35 + var_1_34)))) : (var_1_25 ? (var_1_54 == ((float) (var_1_55 - var_1_36))) : (var_1_54 == ((float) ((var_1_34 + (var_1_56 + var_1_57)) + var_1_35)))))) && (((var_1_46 / var_1_11) <= var_1_43) ? (var_1_58 == ((float) (min (var_1_36 , var_1_57)))) : 1)) && ((var_1_82 < (max (var_1_55 , var_1_34))) ? ((var_1_23 >= var_1_15) ? (var_1_59 == ((unsigned long int) (var_1_60 - var_1_44))) : 1) : (var_1_59 == ((unsigned long int) (max (var_1_13 , 1000000u)))))) && (((var_1_55 + (var_1_103 / var_1_10)) >= (- var_1_17)) ? (var_1_61 == ((signed short int) (var_1_21 - var_1_28))) : (var_1_61 == ((signed short int) var_1_7)))) && (var_1_49 ? (var_1_62 == ((double) (((var_1_63 + var_1_64) + var_1_36) - var_1_55))) : (var_1_62 == ((double) (var_1_37 - var_1_63))))) && (var_1_65 == ((float) (max (var_1_56 , (min ((var_1_63 - 16.915f) , var_1_36))))))) && ((var_1_76 >= (var_1_91 * var_1_103)) ? ((var_1_100 <= (max (var_1_43 , (var_1_44 >> var_1_101)))) ? (var_1_66 == ((signed long int) (min (var_1_44 , var_1_12)))) : 1) : 1)) && ((4 <= (var_1_14 + var_1_109)) ? (((- var_1_34) >= (min (var_1_68 , 9999999.875f))) ? (var_1_67 == ((unsigned char) var_1_21)) : (var_1_67 == ((unsigned char) var_1_4))) : 1)) && ((var_1_27 || (var_1_59 < var_1_7)) ? (var_1_68 == ((float) (min (var_1_57 , var_1_34)))) : (var_1_68 == ((float) ((var_1_36 - var_1_63) + (min (var_1_56 , (var_1_57 + var_1_64)))))))) && ((var_1_56 >= ((var_1_118 + var_1_68) + var_1_35)) ? (var_1_69 == ((unsigned long int) (var_1_60 - var_1_20))) : (var_1_69 == ((unsigned long int) (last_1_var_1_69 + var_1_4))))) && (var_1_49 ? (var_1_71 == ((unsigned long int) (var_1_15 + ((var_1_72 - var_1_112) - (128u + var_1_21))))) : (var_1_71 == ((unsigned long int) (((var_1_73 + var_1_74) - (var_1_75 - var_1_13)) + (var_1_72 - var_1_30)))))) && ((var_1_112 <= (var_1_69 * var_1_6)) ? (((min (var_1_30 , (var_1_6 * var_1_5))) > var_1_59) ? (var_1_76 == ((float) (min ((abs (64.2f)) , var_1_35)))) : (var_1_76 == ((float) ((max ((min (128.75f , var_1_34)) , (127.4f - var_1_36))) + var_1_64)))) : (var_1_76 == ((float) (var_1_63 - (var_1_77 - 1000000.2f)))))) && (var_1_49 ? ((((var_1_79 + var_1_80) - var_1_44) < var_1_116) ? (var_1_78 == ((signed char) (var_1_22 + var_1_23))) : 1) : (var_1_78 == ((signed char) (2 + (max (var_1_22 , (var_1_21 + var_1_81)))))))) && (var_1_82 == ((double) (abs (var_1_37 - 128.4))))) && (var_1_83 == ((unsigned long int) (max (var_1_13 , (min (var_1_75 , var_1_61))))))) && (var_1_92 ? (var_1_25 ? (var_1_84 == ((unsigned short int) (min (var_1_11 , var_1_1)))) : 1) : 1)) && (((last_1_var_1_33 / (abs (var_1_10))) == (var_1_64 / var_1_77)) ? ((((var_1_60 - var_1_75) / var_1_20) > var_1_44) ? (var_1_86 == ((signed short int) ((abs (var_1_21)) - (abs (var_1_51 + last_1_var_1_86))))) : (var_1_86 == ((signed short int) ((abs (last_1_var_1_45)) - last_1_var_1_19)))) : (var_1_86 == ((signed short int) (abs (var_1_51)))))) && ((var_1_25 && ((max (last_1_var_1_61 , var_1_15)) > var_1_80)) ? ((last_1_var_1_122 < last_1_var_1_71) ? (var_1_87 == ((double) (var_1_57 + 4.75))) : (((last_1_var_1_49 && var_1_27) && last_1_var_1_107) ? (var_1_87 == ((double) (max ((var_1_37 - var_1_55) , var_1_57)))) : (var_1_87 == ((double) (var_1_64 - var_1_36))))) : ((((var_1_14 / var_1_51) / var_1_80) > (last_1_var_1_98 % var_1_79)) ? (var_1_87 == ((double) ((var_1_63 + var_1_36) - ((min (var_1_64 , var_1_88)) + (var_1_89 + var_1_90))))) : (var_1_87 == ((double) (((max (var_1_64 , var_1_88)) - (var_1_89 + var_1_63)) + (var_1_90 + var_1_34))))))) && (((64 / var_1_11) >= (var_1_21 << var_1_20)) ? ((var_1_45 >= (var_1_60 - var_1_51)) ? (var_1_91 == ((float) var_1_63)) : 1) : 1)) && ((var_1_25 || var_1_49) ? (var_1_92 == ((unsigned char) (var_1_27 || (var_1_25 && (var_1_93 && var_1_94))))) : ((var_1_50 != (var_1_74 - var_1_12)) ? (var_1_92 == ((unsigned char) var_1_27)) : 1))) && ((var_1_10 <= (abs (5.6f))) ? (var_1_95 == ((float) (((min (var_1_36 , var_1_88)) - var_1_63) + var_1_35))) : ((var_1_7 <= (var_1_119 / var_1_12)) ? ((var_1_80 != (~ var_1_71)) ? (var_1_95 == ((float) (max (var_1_18 , (var_1_56 + (1000000.5f + var_1_63)))))) : (var_1_95 == ((float) ((var_1_89 + var_1_64) - var_1_90)))) : 1))) && (var_1_96 == ((double) ((max (var_1_36 , var_1_55)) - var_1_63)))) && (var_1_97 == ((double) (min ((var_1_36 - var_1_77) , (var_1_35 + var_1_63)))))) && (var_1_98 == ((signed long int) (abs (64))))) && (((max (var_1_14 , var_1_112)) < var_1_21) ? (var_1_99 == ((double) (max (var_1_36 , var_1_89)))) : (var_1_99 == ((double) (max (var_1_55 , var_1_56)))))) && (((var_1_8 >> var_1_79) <= 64) ? (var_1_100 == ((signed long int) (abs (var_1_15)))) : 1)) && (var_1_25 ? (((min (var_1_99 , (var_1_76 * var_1_76))) != var_1_17) ? (var_1_101 == ((unsigned short int) (var_1_102 - var_1_86))) : 1) : 1)) && (var_1_49 ? (var_1_103 == ((double) (var_1_56 + var_1_35))) : (var_1_103 == ((double) ((max ((var_1_63 + var_1_88) , var_1_36)) - (abs (var_1_57))))))) && (var_1_107 ? ((var_1_27 && (var_1_35 < var_1_17)) ? ((var_1_62 >= var_1_17) ? (var_1_104 == ((float) (((var_1_105 + var_1_106) - var_1_36) - var_1_63))) : 1) : (var_1_104 == ((float) (max (var_1_37 , var_1_55))))) : (var_1_104 == ((float) (var_1_36 + var_1_105))))) && (var_1_107 == ((unsigned char) var_1_48))) && (var_1_49 ? (var_1_108 == ((unsigned char) 5)) : (var_1_108 == ((unsigned char) var_1_13)))) && (var_1_48 ? (var_1_109 == ((signed long int) var_1_78)) : (var_1_109 == ((signed long int) 10)))) && (var_1_94 ? (var_1_111 == ((float) var_1_64)) : 1)) && (var_1_112 == ((unsigned long int) var_1_102))) && (var_1_113 == ((unsigned long int) var_1_44))) && (var_1_114 == ((unsigned short int) var_1_11))) && (var_1_93 ? (var_1_115 == ((unsigned long int) var_1_29)) : (var_1_115 == ((unsigned long int) var_1_13)))) && (var_1_116 == ((signed short int) var_1_100))) && (var_1_24 ? (var_1_117 == ((unsigned short int) var_1_69)) : (var_1_117 == ((unsigned short int) var_1_4)))) && (var_1_121 ? (var_1_118 == ((double) 100.5)) : (var_1_118 == ((double) var_1_55)))) && (var_1_48 ? (var_1_119 == ((signed char) var_1_44)) : (var_1_119 == ((signed char) var_1_20)))) && (var_1_47 ? (var_1_120 == ((signed long int) var_1_59)) : (var_1_120 == ((signed long int) var_1_75)))) && (var_1_27 ? (var_1_121 == ((unsigned char) var_1_25)) : (var_1_121 == ((unsigned char) var_1_48)))) && ((var_1_87 <= (var_1_82 * var_1_96)) ? (var_1_122 == ((unsigned long int) ((min (var_1_4 , (min (1u , var_1_72)))) + var_1_51))) : ((var_1_107 || var_1_121) ? (var_1_122 == ((unsigned long int) var_1_75)) : (var_1_122 == ((unsigned long int) var_1_72))))
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
