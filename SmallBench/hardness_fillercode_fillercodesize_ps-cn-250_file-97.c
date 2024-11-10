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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch97PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 2;
signed long int var_1_5 = 5;
unsigned char var_1_8 = 0;
float var_1_9 = 128.6;
float var_1_10 = 32.5;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 4;
unsigned char var_1_14 = 4;
unsigned long int var_1_15 = 0;
signed short int var_1_16 = 0;
signed char var_1_17 = 1;
signed char var_1_18 = -1;
signed char var_1_19 = 0;
signed long int var_1_20 = -64;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed short int var_1_24 = -4;
unsigned char var_1_25 = 1;
signed char var_1_26 = 50;
signed char var_1_27 = 64;
signed short int var_1_28 = 4;
unsigned short int var_1_29 = 8;
unsigned char var_1_30 = 16;
unsigned short int var_1_31 = 8;
unsigned short int var_1_32 = 2;
unsigned short int var_1_33 = 48701;
unsigned short int var_1_34 = 1;
float var_1_35 = 1.2;
float var_1_36 = 7.5;
float var_1_37 = 32.25;
unsigned char var_1_38 = 1;
float var_1_39 = 100000000000.5;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
signed long int var_1_44 = -2;
unsigned short int var_1_45 = 1;
unsigned short int var_1_46 = 32;
unsigned char var_1_47 = 64;
signed short int var_1_48 = 32;
unsigned char var_1_49 = 25;
unsigned char var_1_50 = 2;
unsigned char var_1_51 = 64;
unsigned char var_1_52 = 128;
unsigned long int var_1_53 = 1;
signed short int var_1_54 = -500;
unsigned char var_1_55 = 4;
unsigned char var_1_56 = 8;
unsigned char var_1_57 = 0;
double var_1_58 = 128.9;
unsigned char var_1_59 = 1;
unsigned char var_1_60 = 0;
unsigned long int var_1_61 = 16;
unsigned short int var_1_62 = 4;
unsigned long int var_1_63 = 100;
signed char var_1_64 = 32;
signed char var_1_65 = -16;
signed char var_1_66 = 5;
signed char var_1_67 = 1;
float var_1_68 = 2.8;
float var_1_69 = 99999999999.23;
float var_1_70 = 2.4;
float var_1_71 = 100.75;
float var_1_72 = 9.5;
float var_1_73 = -0.625;
float var_1_74 = 50.4;
float var_1_75 = 10.75;
unsigned long int var_1_76 = 0;
signed char var_1_77 = -8;
signed char var_1_78 = -2;
signed char var_1_79 = 32;
unsigned long int var_1_80 = 3664231484;
unsigned char var_1_81 = 1;
signed char var_1_82 = 5;
unsigned char var_1_83 = 5;
unsigned short int var_1_84 = 16;
float var_1_85 = 0.0;
float var_1_86 = 5.052;
signed char var_1_87 = 10;
unsigned long int var_1_88 = 5;
signed short int var_1_89 = -4;
float var_1_90 = 16.8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_5 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25) {
		if (var_1_27 <= var_1_26) {
			var_1_24 = ((max (var_1_27 , (min (-128 , var_1_26)))) + var_1_28);
		}
	} else {
		var_1_24 = (abs (var_1_26));
	}


	// From: CodeObject2
	if ((var_1_26 / var_1_30) < var_1_27) {
		var_1_29 = var_1_30;
	} else {
		var_1_29 = (max ((max ((min (var_1_30 , var_1_31)) , var_1_32)) , ((abs (var_1_33)) - var_1_34)));
	}


	// From: CodeObject3
	if (var_1_25) {
		var_1_35 = (abs (max ((max (var_1_36 , var_1_37)) , 255.6f)));
	} else {
		if ((var_1_30 ^ var_1_28) >= var_1_33) {
			if (((abs (var_1_37)) + (abs (var_1_36))) < var_1_39) {
				var_1_35 = var_1_36;
			} else {
				var_1_35 = var_1_37;
			}
		}
	}


	// From: CodeObject4
	if (var_1_30 < (var_1_34 >> var_1_32)) {
		var_1_40 = ((! var_1_41) || (var_1_42 || var_1_43));
	}


	// From: CodeObject5
	if ((~ var_1_30) >= var_1_33) {
		var_1_44 = (abs (abs (var_1_34 - var_1_31)));
	}


	// From: CodeObject6
	if (var_1_33 < var_1_29) {
		if (var_1_31 == (~ var_1_33)) {
			var_1_45 = (abs (var_1_32));
		} else {
			var_1_45 = (var_1_33 - (var_1_30 + var_1_46));
		}
	} else {
		var_1_45 = var_1_34;
	}


	// From: CodeObject7
	if (var_1_32 < (var_1_33 - var_1_34)) {
		if ((~ var_1_48) > var_1_45) {
			if ((- (var_1_36 + var_1_35)) < (abs (var_1_37))) {
				if ((max (var_1_37 , var_1_39)) <= var_1_35) {
					var_1_47 = var_1_49;
				}
			} else {
				if ((abs (var_1_49)) > (var_1_46 + var_1_26)) {
					var_1_47 = (min (64 , ((abs (var_1_50)) + var_1_51)));
				}
			}
		} else {
			var_1_47 = (max (var_1_50 , var_1_49));
		}
	} else {
		var_1_47 = (abs (var_1_52 - var_1_50));
	}


	// From: CodeObject8
	if (var_1_28 < var_1_46) {
		var_1_53 = (abs (var_1_45));
	}


	// From: CodeObject9
	if (var_1_41 && var_1_42) {
		var_1_54 = (var_1_51 - (21537 - var_1_52));
	} else {
		var_1_54 = (var_1_47 + 1);
	}


	// From: CodeObject10
	if ((abs (var_1_44 * var_1_47)) > (var_1_33 / var_1_30)) {
		var_1_55 = (min (var_1_49 , (128 - 10)));
	} else {
		var_1_55 = (abs (5));
	}


	// From: CodeObject11
	if (var_1_47 > ((1 & var_1_53) | var_1_55)) {
		var_1_56 = (abs (var_1_51));
	}


	// From: CodeObject12
	if (var_1_34 <= var_1_45) {
		var_1_57 = (var_1_40 && (! var_1_41));
	}


	// From: CodeObject13
	if (var_1_42) {
		var_1_58 = var_1_37;
	} else {
		var_1_58 = (abs (var_1_36));
	}


	// From: CodeObject14
	if (((var_1_47 >> var_1_33) * var_1_49) < -128) {
		if (var_1_38) {
			var_1_59 = (var_1_41 && var_1_60);
		} else {
			var_1_59 = (var_1_41 && var_1_43);
		}
	}


	// From: CodeObject15
	if (var_1_42) {
		var_1_61 = var_1_34;
	} else {
		var_1_61 = var_1_32;
	}


	// From: CodeObject16
	if (var_1_40) {
		var_1_62 = var_1_51;
	}


	// From: CodeObject17
	if (var_1_53 < 1u) {
		var_1_63 = (abs (abs (var_1_31)));
	}


	// From: CodeObject18
	if (var_1_55 > (var_1_56 & (var_1_34 >> var_1_45))) {
		var_1_64 = (abs ((var_1_65 + var_1_66) + var_1_67));
	}


	// From: CodeObject19
	if (var_1_51 <= ((~ var_1_30) / var_1_52)) {
		var_1_68 = (max ((var_1_69 + var_1_70) , var_1_37));
	} else {
		if ((var_1_69 + var_1_70) < var_1_35) {
			var_1_68 = (max (var_1_70 , (max (var_1_36 , var_1_37))));
		}
	}


	// From: CodeObject20
	if ((var_1_34 + var_1_46) > var_1_47) {
		var_1_71 = var_1_37;
	}


	// From: CodeObject21
	if (((var_1_39 / var_1_73) + var_1_36) < var_1_35) {
		if (var_1_42) {
			var_1_72 = (max ((var_1_74 - (abs (var_1_36))) , var_1_70));
		}
	} else {
		var_1_72 = (min ((var_1_74 - var_1_75) , var_1_70));
	}


	// From: CodeObject22
	if (((var_1_77 & var_1_30) + var_1_50) != (var_1_46 | var_1_31)) {
		if (((var_1_44 / var_1_30) % (max (var_1_78 , var_1_79))) < (var_1_77 & var_1_56)) {
			var_1_76 = (max (var_1_33 , (min ((var_1_80 - var_1_50) , (max (var_1_30 , var_1_29))))));
		}
	}


	// From: CodeObject23
	if ((abs (abs (var_1_71))) >= var_1_58) {
		if (-256 < (var_1_47 % (abs (var_1_52)))) {
			var_1_81 = (abs (64));
		}
	}


	// From: CodeObject24
	if (var_1_77 > var_1_26) {
		var_1_82 = (var_1_67 + var_1_66);
	}


	// From: CodeObject25
	if ((min (var_1_79 , (min (var_1_27 , var_1_48)))) < var_1_76) {
		var_1_83 = var_1_52;
	}


	// From: CodeObject26
	if (((var_1_85 - var_1_86) - var_1_74) > var_1_72) {
		var_1_84 = var_1_50;
	}


	// From: CodeObject27
	if (var_1_59) {
		var_1_87 = (abs (var_1_65));
	}


	// From: CodeObject28
	if ((var_1_71 * (min (var_1_85 , var_1_69))) < var_1_75) {
		var_1_88 = (min (var_1_56 , (5u + var_1_83)));
	} else {
		var_1_88 = (max ((var_1_80 - 8u) , var_1_46));
	}


	// From: CodeObject29
	if (var_1_61 > var_1_47) {
		var_1_89 = (abs (var_1_49));
	} else {
		if ((var_1_83 * var_1_24) < var_1_46) {
			var_1_89 = var_1_78;
		} else {
			var_1_89 = var_1_66;
		}
	}


	// From: CodeObject30
	if (var_1_84 >= 256) {
		if (var_1_42) {
			var_1_90 = (min (var_1_70 , (min (var_1_69 , var_1_75))));
		} else {
			var_1_90 = (max ((max (var_1_74 , var_1_86)) , var_1_37));
		}
	}


	// From: Req3Batch97PS_CN_250
	if (var_1_9 > var_1_10) {
		var_1_8 = (min ((var_1_11 + (var_1_12 - var_1_13)) , (5 + var_1_14)));
	}


	// From: Req7Batch97PS_CN_250
	var_1_20 = var_1_8;


	// From: Req8Batch97PS_CN_250
	var_1_22 = var_1_23;


	// From: Req4Batch97PS_CN_250
	if (var_1_22) {
		var_1_15 = var_1_8;
	}


	// From: Req5Batch97PS_CN_250
	var_1_16 = ((min (var_1_15 , (max (var_1_13 , var_1_12)))) - var_1_11);


	// From: Req6Batch97PS_CN_250
	if (var_1_22) {
		if (var_1_14 < (var_1_13 & (var_1_15 / 2))) {
			var_1_17 = (var_1_13 + (var_1_18 + (var_1_19 + 5)));
		} else {
			var_1_17 = var_1_18;
		}
	} else {
		var_1_17 = -32;
	}


	// From: Req1Batch97PS_CN_250
	unsigned long int stepLocal_1 = var_1_20 + var_1_15;
	signed long int stepLocal_0 = var_1_20;
	if (stepLocal_1 < -200) {
		if (var_1_22) {
			if (stepLocal_0 > (- var_1_15)) {
				var_1_1 = var_1_20;
			} else {
				var_1_1 = var_1_20;
			}
		} else {
			var_1_1 = var_1_20;
		}
	} else {
		var_1_1 = var_1_20;
	}


	// From: Req2Batch97PS_CN_250
	signed long int stepLocal_4 = 256;
	unsigned char stepLocal_3 = var_1_22;
	unsigned long int stepLocal_2 = var_1_15;
	if (stepLocal_4 > (var_1_15 - (last_1_var_1_5 + var_1_8))) {
		var_1_5 = last_1_var_1_5;
	} else {
		if (stepLocal_3 || var_1_22) {
			if (((32 * -25) | last_1_var_1_5) >= stepLocal_2) {
				var_1_5 = var_1_8;
			}
		} else {
			var_1_5 = -10000;
		}
	}
}



void updateVariables() {
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 63);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -31);
	assume_abort_if_not(var_1_18 <= 32);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -15);
	assume_abort_if_not(var_1_19 <= 16);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -16383);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 255);
	assume_abort_if_not(var_1_30 != 0);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= -32768);
	assume_abort_if_not(var_1_48 <= 32767);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 254);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 127);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 1);
	assume_abort_if_not(var_1_60 <= 1);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -31);
	assume_abort_if_not(var_1_65 <= 32);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= -31);
	assume_abort_if_not(var_1_66 <= 31);
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= -63);
	assume_abort_if_not(var_1_67 <= 63);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= -461168.6018427382800e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 4611686.018427382800e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= -461168.6018427382800e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427382800e+12F && var_1_70 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= -922337.2036854776000e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854776000e+12F && var_1_73 >= 1.0e-20F ));
	assume_abort_if_not(var_1_73 != 0.0F);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854765600e+12F && var_1_75 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= -128);
	assume_abort_if_not(var_1_77 <= 127);
	var_1_78 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_78 >= -128);
	assume_abort_if_not(var_1_78 <= 127);
	assume_abort_if_not(var_1_78 != 0);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= -128);
	assume_abort_if_not(var_1_79 <= 127);
	assume_abort_if_not(var_1_79 != 0);
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 2147483647);
	assume_abort_if_not(var_1_80 <= 4294967294);
	var_1_85 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_85 >= 4611686.018427387900e+12F && var_1_85 <= -1.0e-20F) || (var_1_85 <= 9223372.036854776000e+12F && var_1_85 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 4611686.018427387900e+12F && var_1_86 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
}

int property() {
	return (((((((((var_1_20 + var_1_15) < -200) ? (var_1_22 ? ((var_1_20 > (- var_1_15)) ? (var_1_1 == ((unsigned long int) var_1_20)) : (var_1_1 == ((unsigned long int) var_1_20))) : (var_1_1 == ((unsigned long int) var_1_20))) : (var_1_1 == ((unsigned long int) var_1_20))) && ((256 > (var_1_15 - (last_1_var_1_5 + var_1_8))) ? (var_1_5 == ((signed long int) last_1_var_1_5)) : ((var_1_22 || var_1_22) ? ((((32 * -25) | last_1_var_1_5) >= var_1_15) ? (var_1_5 == ((signed long int) var_1_8)) : 1) : (var_1_5 == ((signed long int) -10000))))) && ((var_1_9 > var_1_10) ? (var_1_8 == ((unsigned char) (min ((var_1_11 + (var_1_12 - var_1_13)) , (5 + var_1_14))))) : 1)) && (var_1_22 ? (var_1_15 == ((unsigned long int) var_1_8)) : 1)) && (var_1_16 == ((signed short int) ((min (var_1_15 , (max (var_1_13 , var_1_12)))) - var_1_11)))) && (var_1_22 ? ((var_1_14 < (var_1_13 & (var_1_15 / 2))) ? (var_1_17 == ((signed char) (var_1_13 + (var_1_18 + (var_1_19 + 5))))) : (var_1_17 == ((signed char) var_1_18))) : (var_1_17 == ((signed char) -32)))) && (var_1_20 == ((signed long int) var_1_8))) && (var_1_22 == ((unsigned char) var_1_23))
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
