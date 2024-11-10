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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch35PS_CN_250.c", 13, "reach_error"); }
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
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 25;
double var_1_9 = 999.625;
unsigned short int var_1_11 = 5;
signed short int var_1_12 = 2;
signed long int var_1_13 = -256;
double var_1_14 = 127.75;
double var_1_15 = 9.75;
float var_1_16 = 32.8;
float var_1_17 = 32.5;
float var_1_18 = 1.75;
float var_1_19 = 1000000000000000.4;
float var_1_20 = 0.875;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
signed short int var_1_23 = 64;
signed short int var_1_24 = 25;
signed short int var_1_25 = 0;
float var_1_26 = 128.2;
float var_1_27 = 16.625;
signed long int var_1_28 = -100000;
signed short int var_1_29 = -64;
signed short int var_1_30 = 2;
signed long int var_1_31 = 256;
unsigned char var_1_32 = 1;
signed long int var_1_33 = 256;
unsigned short int var_1_34 = 64;
unsigned short int var_1_35 = 2;
unsigned short int var_1_36 = 31839;
unsigned short int var_1_37 = 64;
unsigned short int var_1_38 = 30759;
unsigned short int var_1_39 = 1;
unsigned short int var_1_40 = 500;
double var_1_41 = 49.5;
signed char var_1_42 = 8;
signed char var_1_43 = 32;
signed char var_1_44 = 1;
unsigned char var_1_45 = 16;
signed char var_1_46 = -1;
unsigned short int var_1_47 = 128;
float var_1_48 = 3.375;
signed long int var_1_49 = 128;
unsigned char var_1_50 = 50;
unsigned char var_1_51 = 1;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned long int var_1_56 = 1;
float var_1_57 = 99.1;
float var_1_58 = -0.75;
float var_1_59 = 255.8;
float var_1_60 = 49.1;
float var_1_61 = 9.75;
unsigned short int var_1_62 = 500;
float var_1_63 = 5.8;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 5;
unsigned char var_1_67 = 1;
signed short int var_1_68 = 4;
signed char var_1_69 = -128;
unsigned char var_1_70 = 5;
unsigned char var_1_71 = 4;
unsigned char var_1_72 = 0;
unsigned short int var_1_73 = 0;
signed long int var_1_74 = -10;
signed long int var_1_75 = 16;
signed short int var_1_76 = 32;
signed short int var_1_77 = 8;
unsigned char var_1_78 = 0;
signed long int var_1_79 = -256;
signed short int var_1_80 = -8;
signed long int var_1_81 = 5;
unsigned char var_1_82 = 0;
signed short int var_1_83 = -256;
signed short int var_1_84 = 2;
float var_1_85 = 4.5;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 0;
double var_1_88 = 2.625;
float var_1_89 = 2.75;
signed long int var_1_90 = -50;
signed long int var_1_91 = 5;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_12 = 2;
signed long int last_1_var_1_13 = -256;
double last_1_var_1_14 = 127.75;
unsigned char last_1_var_1_21 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_26 = var_1_27;


	// From: CodeObject2
	if (((min (var_1_29 , var_1_30)) <= var_1_31) && var_1_32) {
		var_1_28 = (abs (var_1_33));
	} else {
		var_1_28 = (abs (max (var_1_29 , var_1_33)));
	}


	// From: CodeObject3
	if (((var_1_30 | var_1_28) | var_1_33) <= var_1_31) {
		if (var_1_27 >= var_1_26) {
			var_1_34 = (max (1 , var_1_35));
		}
	} else {
		if (var_1_27 >= var_1_26) {
			var_1_34 = (((var_1_36 - var_1_37) + (var_1_38 - var_1_39)) - var_1_40);
		}
	}


	// From: CodeObject4
	if (32u >= ((max (var_1_38 , var_1_36)) % 16u)) {
		if ((-5 > var_1_34) && (var_1_31 <= (max (var_1_29 , var_1_28)))) {
			var_1_41 = var_1_27;
		} else {
			var_1_41 = (abs (var_1_27));
		}
	} else {
		if (var_1_32) {
			var_1_41 = var_1_27;
		}
	}


	// From: CodeObject5
	if ((max (var_1_33 , (var_1_43 - var_1_44))) >= (abs (var_1_35))) {
		if (var_1_45 > var_1_37) {
			var_1_42 = (var_1_46 + (abs (abs (32))));
		}
	}


	// From: CodeObject6
	if ((var_1_26 / var_1_48) >= var_1_27) {
		var_1_47 = (min ((abs (abs (var_1_39))) , (min (var_1_35 , var_1_38))));
	}


	// From: CodeObject7
	if (var_1_38 > var_1_39) {
		var_1_49 = (abs (var_1_35));
	}


	// From: CodeObject8
	if (((abs (var_1_30)) == var_1_42) || (var_1_36 <= (2 | var_1_45))) {
		var_1_50 = (abs (var_1_44));
	}


	// From: CodeObject9
	if (var_1_29 > var_1_44) {
		if ((~ (var_1_34 / var_1_38)) < var_1_43) {
			var_1_51 = (var_1_32 || (var_1_52 && var_1_53));
		}
	} else {
		var_1_51 = (! (! (var_1_54 || var_1_55)));
	}


	// From: CodeObject10
	if ((~ var_1_50) < (var_1_31 | var_1_38)) {
		var_1_56 = ((max (var_1_40 , var_1_50)) + var_1_37);
	}


	// From: CodeObject11
	if (((var_1_41 / var_1_48) * 8.8f) >= var_1_27) {
		var_1_57 = (abs (var_1_27));
	}


	// From: CodeObject12
	if ((max (var_1_35 , (min (var_1_36 , var_1_40)))) != var_1_31) {
		if (((var_1_28 / var_1_36) * var_1_35) >= (abs (max (var_1_30 , var_1_39)))) {
			var_1_58 = (max ((abs (var_1_27)) , var_1_59));
		} else {
			var_1_58 = (var_1_60 + var_1_61);
		}
	}


	// From: CodeObject13
	if (var_1_48 > (9.5f + var_1_57)) {
		var_1_62 = var_1_36;
	} else {
		var_1_62 = var_1_39;
	}


	// From: CodeObject14
	if (var_1_30 <= (min (var_1_42 , var_1_46))) {
		var_1_63 = (var_1_61 + var_1_60);
	} else {
		var_1_63 = (var_1_60 + (abs (16.6f)));
	}


	// From: CodeObject15
	if (var_1_53) {
		var_1_64 = (min ((abs (var_1_44)) , (var_1_65 + (min (var_1_66 , var_1_67)))));
	}


	// From: CodeObject16
	if (var_1_30 <= var_1_33) {
		if (var_1_43 > (-64 & (var_1_33 + var_1_69))) {
			var_1_68 = (((var_1_64 + var_1_44) + var_1_37) - 200);
		} else {
			if (var_1_55) {
				if (((abs (var_1_36)) % (max (var_1_70 , var_1_71))) > var_1_65) {
					var_1_68 = (abs (var_1_66));
				} else {
					var_1_68 = (abs (var_1_45));
				}
			}
		}
	}


	// From: CodeObject17
	if ((var_1_40 << (abs (var_1_73))) < var_1_30) {
		var_1_72 = (var_1_52 && var_1_54);
	}


	// From: CodeObject18
	if (var_1_52) {
		var_1_74 = (min ((max (var_1_69 , var_1_29)) , -25));
	} else {
		if (var_1_71 > var_1_37) {
			var_1_74 = (min (var_1_50 , (var_1_46 + var_1_68)));
		}
	}


	// From: CodeObject19
	if (var_1_64 < ((128 - var_1_67) >> (abs (var_1_73)))) {
		var_1_75 = (abs (-64));
	} else {
		var_1_75 = (min (var_1_36 , var_1_73));
	}


	// From: CodeObject20
	if (! var_1_52) {
		if ((var_1_57 * var_1_48) > var_1_41) {
			if ((var_1_66 % var_1_36) >= (abs (var_1_69))) {
				var_1_76 = var_1_43;
			}
		}
	} else {
		if (var_1_29 >= 0) {
			if ((var_1_44 + var_1_68) >= (var_1_46 % var_1_36)) {
				var_1_76 = (((abs (var_1_70)) - var_1_37) + var_1_42);
			}
		} else {
			var_1_76 = (min (var_1_42 , (var_1_71 + (var_1_65 + var_1_77))));
		}
	}


	// From: CodeObject21
	if (var_1_53) {
		var_1_78 = (var_1_72 || var_1_52);
	} else {
		if ((var_1_39 & (min (var_1_80 , var_1_79))) <= var_1_81) {
			var_1_78 = (! var_1_52);
		} else {
			if (var_1_52) {
				var_1_78 = (var_1_72 && (! var_1_82));
			}
		}
	}


	// From: CodeObject22
	if ((var_1_28 % var_1_71) < (max (5 , 2))) {
		if (var_1_75 < (var_1_42 ^ (abs (var_1_68)))) {
			var_1_83 = (abs (var_1_42));
		} else {
			if (var_1_82) {
				var_1_83 = (max (var_1_50 , (var_1_39 - var_1_37)));
			} else {
				var_1_83 = (max (var_1_66 , var_1_84));
			}
		}
	}


	// From: CodeObject23
	var_1_85 = ((abs (var_1_61)) + var_1_60);


	// From: CodeObject24
	if (((var_1_62 | var_1_81) & var_1_31) <= var_1_56) {
		var_1_86 = (var_1_55 || (var_1_87 || var_1_54));
	} else {
		var_1_86 = var_1_54;
	}


	// From: CodeObject25
	var_1_88 = var_1_59;


	// From: CodeObject26
	var_1_89 = var_1_27;


	// From: CodeObject27
	if (var_1_43 < (4 & var_1_70)) {
		if (var_1_43 >= (var_1_79 * var_1_73)) {
			var_1_90 = (var_1_73 - var_1_39);
		}
	} else {
		var_1_90 = var_1_62;
	}


	// From: CodeObject28
	var_1_91 = var_1_65;


	// From: Req1Batch35PS_CN_250
	if (last_1_var_1_21) {
		var_1_1 = ((! var_1_3) || var_1_4);
	} else {
		var_1_1 = (var_1_3 && var_1_5);
	}


	// From: Req8Batch35PS_CN_250
	if (var_1_18 > var_1_9) {
		var_1_23 = (max ((var_1_24 - var_1_25) , last_1_var_1_13));
	} else {
		var_1_23 = (last_1_var_1_13 + 1);
	}


	// From: Req2Batch35PS_CN_250
	signed long int stepLocal_0 = last_1_var_1_12;
	if (last_1_var_1_12 >= stepLocal_0) {
		if ((var_1_9 - 1.00000000000025E12) >= last_1_var_1_14) {
			var_1_6 = 200;
		} else {
			var_1_6 = var_1_11;
		}
	} else {
		var_1_6 = var_1_11;
	}


	// From: Req3Batch35PS_CN_250
	unsigned short int stepLocal_1 = var_1_6;
	if (var_1_11 > stepLocal_1) {
		var_1_12 = 32;
	}


	// From: Req5Batch35PS_CN_250
	if ((var_1_12 + var_1_23) < ((var_1_11 >> var_1_6) * var_1_12)) {
		var_1_14 = var_1_15;
	} else {
		var_1_14 = var_1_15;
	}


	// From: Req6Batch35PS_CN_250
	var_1_16 = (abs ((var_1_17 + var_1_18) + (min (var_1_19 , var_1_20))));


	// From: Req7Batch35PS_CN_250
	unsigned short int stepLocal_3 = var_1_11;
	if (stepLocal_3 == var_1_6) {
		var_1_21 = ((var_1_5 || var_1_3) && (var_1_1 || var_1_22));
	}


	// From: Req4Batch35PS_CN_250
	unsigned short int stepLocal_2 = var_1_6;
	if (stepLocal_2 == var_1_12) {
		if (! var_1_3) {
			var_1_13 = ((last_1_var_1_13 + var_1_6) + (var_1_11 - var_1_23));
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -1);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32766);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854765600e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32768);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483646);
	assume_abort_if_not(var_1_33 <= 2147483646);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 24575);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 8192);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 24575);
	assume_abort_if_not(var_1_38 <= 32767);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 8191);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -1);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 255);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -63);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	assume_abort_if_not(var_1_48 != 0.0F);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 0);
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -922337.2036854765600e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854765600e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -461168.6018427382800e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 127);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 127);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 127);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -128);
	assume_abort_if_not(var_1_69 <= 127);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 255);
	assume_abort_if_not(var_1_70 != 0);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 255);
	assume_abort_if_not(var_1_71 != 0);
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 1);
	var_1_77 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_77 >= -8191);
	assume_abort_if_not(var_1_77 <= 8191);
	var_1_79 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_79 >= -2147483648);
	assume_abort_if_not(var_1_79 <= 2147483647);
	var_1_80 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_80 >= -32768);
	assume_abort_if_not(var_1_80 <= 32767);
	var_1_81 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_81 >= -2147483648);
	assume_abort_if_not(var_1_81 <= 2147483647);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 1);
	assume_abort_if_not(var_1_82 <= 1);
	var_1_84 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_84 >= -32767);
	assume_abort_if_not(var_1_84 <= 32766);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 0);
	assume_abort_if_not(var_1_87 <= 0);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_21 = var_1_21;
}

int property() {
	return (((((((last_1_var_1_21 ? (var_1_1 == ((unsigned char) ((! var_1_3) || var_1_4))) : (var_1_1 == ((unsigned char) (var_1_3 && var_1_5)))) && ((last_1_var_1_12 >= last_1_var_1_12) ? (((var_1_9 - 1.00000000000025E12) >= last_1_var_1_14) ? (var_1_6 == ((unsigned short int) 200)) : (var_1_6 == ((unsigned short int) var_1_11))) : (var_1_6 == ((unsigned short int) var_1_11)))) && ((var_1_11 > var_1_6) ? (var_1_12 == ((signed short int) 32)) : 1)) && ((var_1_6 == var_1_12) ? ((! var_1_3) ? (var_1_13 == ((signed long int) ((last_1_var_1_13 + var_1_6) + (var_1_11 - var_1_23)))) : 1) : 1)) && (((var_1_12 + var_1_23) < ((var_1_11 >> var_1_6) * var_1_12)) ? (var_1_14 == ((double) var_1_15)) : (var_1_14 == ((double) var_1_15)))) && (var_1_16 == ((float) (abs ((var_1_17 + var_1_18) + (min (var_1_19 , var_1_20))))))) && ((var_1_11 == var_1_6) ? (var_1_21 == ((unsigned char) ((var_1_5 || var_1_3) && (var_1_1 || var_1_22)))) : 1)) && ((var_1_18 > var_1_9) ? (var_1_23 == ((signed short int) (max ((var_1_24 - var_1_25) , last_1_var_1_13)))) : (var_1_23 == ((signed short int) (last_1_var_1_13 + 1))))
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
