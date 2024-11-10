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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch60PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 32;
unsigned char var_1_2 = 1;
float var_1_4 = 7.8;
signed short int var_1_6 = 16;
signed short int var_1_7 = 256;
float var_1_8 = 256.6;
unsigned char var_1_9 = 50;
unsigned char var_1_10 = 5;
double var_1_11 = 127.75;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
double var_1_15 = 15.2;
double var_1_16 = 256.5;
double var_1_17 = 256.5;
double var_1_18 = 0.0;
double var_1_19 = 9.7;
unsigned long int var_1_20 = 10000000;
unsigned long int var_1_21 = 4008920074;
unsigned char var_1_23 = 0;
signed long int var_1_24 = 4;
signed long int var_1_25 = 32;
signed long int var_1_26 = 256;
unsigned short int var_1_27 = 5;
signed long int var_1_28 = -128;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 10;
unsigned char var_1_33 = 4;
signed char var_1_34 = -64;
signed short int var_1_35 = -1;
unsigned char var_1_36 = 1;
signed char var_1_37 = -10;
signed char var_1_38 = 8;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
double var_1_44 = 10.375;
float var_1_45 = 0.7;
float var_1_46 = 500.5;
float var_1_47 = 999999999999.2;
float var_1_48 = 127.125;
double var_1_49 = 255.2;
double var_1_50 = 5.875;
double var_1_51 = 256.48;
double var_1_52 = 199.4;
double var_1_53 = 128.5;
double var_1_54 = 99.5;
double var_1_55 = 500.25;
unsigned short int var_1_56 = 5;
unsigned char var_1_57 = 16;
unsigned short int var_1_58 = 48216;
signed long int var_1_59 = 8;
float var_1_60 = -0.53;
float var_1_61 = 32.4;
unsigned short int var_1_62 = 1;
unsigned short int var_1_63 = 60270;
signed short int var_1_64 = 25;
float var_1_65 = 10000000.75;
float var_1_66 = 7.6;
unsigned long int var_1_67 = 32;
signed long int var_1_68 = -4;
unsigned short int var_1_69 = 4;
unsigned char var_1_70 = 64;
unsigned char var_1_71 = 8;
unsigned long int var_1_72 = 8;
float var_1_73 = 1.55;
float var_1_74 = 0.0;
float var_1_75 = 9.25;
unsigned char var_1_76 = 50;
unsigned char var_1_77 = 128;
signed char var_1_78 = -100;
unsigned char var_1_79 = 8;
signed char var_1_80 = -2;
unsigned char var_1_81 = 1;
unsigned long int var_1_82 = 0;
unsigned long int var_1_83 = 16;
float var_1_84 = 10.625;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = 32;
unsigned char last_1_var_1_9 = 50;
double last_1_var_1_11 = 127.75;
double last_1_var_1_16 = 256.5;
unsigned long int last_1_var_1_20 = 10000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_24 <= (var_1_25 + var_1_26)) {
		if (var_1_27 < var_1_26) {
			var_1_23 = ((var_1_25 <= (~ var_1_28)) || var_1_29);
		} else {
			var_1_23 = (! var_1_29);
		}
	}


	// From: CodeObject2
	var_1_30 = ((10 + (max (var_1_31 , var_1_32))) + var_1_33);


	// From: CodeObject3
	if (((2 / var_1_35) >> (abs (1))) <= var_1_27) {
		if (((~ var_1_25) < var_1_33) || var_1_36) {
			if (var_1_27 > ((var_1_26 / var_1_35) ^ var_1_28)) {
				var_1_34 = (max ((max ((max (var_1_31 , var_1_32)) , var_1_37)) , (abs (-16 + var_1_38))));
			} else {
				var_1_34 = (min ((abs (max (var_1_31 , var_1_32))) , var_1_37));
			}
		} else {
			var_1_34 = (min ((min (var_1_31 , (abs (var_1_32)))) , var_1_38));
		}
	} else {
		var_1_34 = (abs (-8));
	}


	// From: CodeObject4
	if (var_1_29) {
		if (var_1_23 && var_1_36) {
			var_1_39 = ((var_1_37 < (max (var_1_32 , var_1_31))) && (! var_1_40));
		}
	} else {
		if (var_1_23) {
			var_1_39 = (var_1_40 && (var_1_41 && var_1_42));
		} else {
			var_1_39 = (! (var_1_42 && var_1_43));
		}
	}


	// From: CodeObject5
	if (var_1_43) {
		if ((abs (var_1_45)) < ((min (var_1_46 , var_1_47)) * var_1_48)) {
			var_1_44 = var_1_49;
		} else {
			var_1_44 = (max (var_1_49 , var_1_50));
		}
	} else {
		if ((var_1_28 & var_1_32) <= var_1_37) {
			var_1_44 = var_1_50;
		}
	}


	// From: CodeObject6
	if (var_1_49 >= var_1_50) {
		var_1_51 = (min ((var_1_52 + (max (var_1_53 , var_1_54))) , var_1_55));
	}


	// From: CodeObject7
	if (var_1_41) {
		var_1_56 = (min ((abs (var_1_31)) , var_1_32));
	} else {
		if (var_1_38 < ((var_1_34 ^ var_1_33) ^ (var_1_25 * var_1_24))) {
			if (var_1_43) {
				if ((var_1_57 & 0) >= var_1_28) {
					var_1_56 = (var_1_58 - ((max (var_1_32 , var_1_33)) + var_1_31));
				}
			}
		}
	}


	// From: CodeObject8
	if ((var_1_30 % var_1_35) >= var_1_37) {
		var_1_59 = (abs (var_1_31));
	}


	// From: CodeObject9
	if (var_1_42) {
		var_1_60 = var_1_54;
	}


	// From: CodeObject10
	if (var_1_58 <= var_1_24) {
		if (var_1_31 >= var_1_28) {
			var_1_61 = (abs (var_1_53));
		}
	} else {
		var_1_61 = (abs (var_1_55));
	}


	// From: CodeObject11
	if (! var_1_42) {
		var_1_62 = ((abs (var_1_63 - var_1_31)) - var_1_33);
	}


	// From: CodeObject12
	if (var_1_31 >= var_1_25) {
		if (! var_1_41) {
			if (((abs (var_1_32)) <= (abs (var_1_31))) && (var_1_34 > var_1_58)) {
				if ((- (var_1_65 - var_1_66)) < var_1_46) {
					var_1_64 = (abs (var_1_37));
				} else {
					var_1_64 = (min (var_1_31 , var_1_37));
				}
			}
		} else {
			var_1_64 = var_1_38;
		}
	}


	// From: CodeObject13
	if (-2 < var_1_33) {
		var_1_67 = (abs (min (var_1_31 , (max (var_1_27 , var_1_30)))));
	}


	// From: CodeObject14
	if ((min (var_1_24 , var_1_56)) <= var_1_37) {
		if (var_1_25 < var_1_62) {
			if (var_1_59 < ((var_1_56 ^ var_1_25) % var_1_63)) {
				if ((~ 64u) > (var_1_32 & (var_1_31 * var_1_67))) {
					var_1_68 = (min ((abs (var_1_27)) , var_1_64));
				} else {
					var_1_68 = (abs (var_1_56));
				}
			}
		}
	}


	// From: CodeObject15
	if (var_1_30 <= var_1_25) {
		var_1_69 = (max ((max (var_1_57 , (max (var_1_32 , var_1_31)))) , (abs (max (var_1_30 , var_1_63)))));
	} else {
		var_1_69 = var_1_30;
	}


	// From: CodeObject16
	if (var_1_40) {
		var_1_70 = (max ((var_1_31 + (abs (var_1_33))) , (min (var_1_32 , var_1_71))));
	}


	// From: CodeObject17
	if (-1 > (min (var_1_56 , (var_1_59 * var_1_71)))) {
		if (var_1_28 >= (abs (4 + var_1_71))) {
			if (((var_1_70 + -256) >> var_1_64) >= ((var_1_27 & var_1_62) / var_1_35)) {
				var_1_72 = var_1_62;
			} else {
				var_1_72 = ((var_1_58 + var_1_71) + (abs (abs (var_1_56))));
			}
		}
	} else {
		if ((abs (var_1_28)) > var_1_26) {
			var_1_72 = (abs (var_1_57));
		}
	}


	// From: CodeObject18
	if (var_1_57 > var_1_63) {
		var_1_73 = (abs (var_1_53 + (abs (var_1_52))));
	} else {
		var_1_73 = ((var_1_74 - var_1_75) - (8.6771040804332749E18f - 1.65f));
	}


	// From: CodeObject19
	if (var_1_51 < (max (var_1_65 , var_1_66))) {
		if (! (var_1_71 < var_1_24)) {
			var_1_76 = (abs (var_1_33));
		} else {
			var_1_76 = (max ((max (var_1_33 , var_1_31)) , (max (var_1_32 , var_1_71))));
		}
	} else {
		var_1_76 = (abs (abs (var_1_77 - var_1_32)));
	}


	// From: CodeObject20
	if ((- var_1_67) <= (var_1_70 + var_1_69)) {
		var_1_78 = var_1_38;
	}


	// From: CodeObject21
	if (var_1_69 > var_1_72) {
		var_1_79 = var_1_71;
	} else {
		var_1_79 = var_1_71;
	}


	// From: CodeObject22
	var_1_80 = var_1_31;


	// From: CodeObject23
	if (var_1_41) {
		var_1_81 = var_1_42;
	}


	// From: CodeObject24
	if (var_1_43) {
		var_1_82 = var_1_31;
	}


	// From: CodeObject25
	if (var_1_80 != -16) {
		var_1_83 = (abs (min (var_1_69 , (abs (var_1_32)))));
	}


	// From: CodeObject26
	if ((var_1_65 - var_1_74) < var_1_51) {
		if (var_1_81) {
			var_1_84 = var_1_49;
		}
	}


	// From: Req3Batch60PS_CN_250
	signed long int stepLocal_0 = min (var_1_7 , last_1_var_1_1);
	if (last_1_var_1_11 < (last_1_var_1_11 + last_1_var_1_16)) {
		if (stepLocal_0 > (var_1_6 * 1)) {
			var_1_9 = var_1_10;
		} else {
			var_1_9 = var_1_10;
		}
	} else {
		var_1_9 = var_1_10;
	}


	// From: Req5Batch60PS_CN_250
	unsigned long int stepLocal_1 = last_1_var_1_20;
	if (((var_1_10 * last_1_var_1_9) + last_1_var_1_1) > stepLocal_1) {
		var_1_16 = (var_1_17 - (var_1_18 - var_1_19));
	}


	// From: Req4Batch60PS_CN_250
	if ((last_1_var_1_16 >= last_1_var_1_16) || ((var_1_2 && var_1_12) || (var_1_13 || var_1_14))) {
		if (var_1_2) {
			var_1_11 = var_1_15;
		} else {
			var_1_11 = var_1_15;
		}
	} else {
		var_1_11 = var_1_15;
	}


	// From: Req6Batch60PS_CN_250
	if (var_1_13) {
		var_1_20 = ((max (var_1_9 , 128u)) + var_1_9);
	} else {
		if (var_1_9 >= var_1_9) {
			var_1_20 = (var_1_21 - var_1_9);
		} else {
			var_1_20 = var_1_9;
		}
	}


	// From: Req2Batch60PS_CN_250
	if ((- var_1_16) <= var_1_4) {
		if ((var_1_11 <= var_1_4) || var_1_2) {
			var_1_8 = 3.3f;
		}
	}


	// From: Req1Batch60PS_CN_250
	if (var_1_2) {
		if ((var_1_11 / var_1_4) <= var_1_8) {
			var_1_1 = (var_1_9 - var_1_9);
		} else {
			var_1_1 = var_1_9;
		}
	} else {
		var_1_1 = var_1_9;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 4611686.018427382800e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 2147483647);
	assume_abort_if_not(var_1_21 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483648);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 65535);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= -32768);
	assume_abort_if_not(var_1_35 <= 32767);
	assume_abort_if_not(var_1_35 != 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -127);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -922337.2036854765600e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854765600e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854765600e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854765600e+12F && var_1_50 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -461168.6018427382800e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= -461168.6018427382800e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427382800e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= -922337.2036854765600e+13F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 255);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 32767);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 49150);
	assume_abort_if_not(var_1_63 <= 65534);
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854776000e+12F && var_1_66 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 254);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 4611686.018427382800e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854765600e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= 0.0F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 4611686.018427382800e+12F && var_1_75 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 127);
	assume_abort_if_not(var_1_77 <= 254);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((var_1_2 ? (((var_1_11 / var_1_4) <= var_1_8) ? (var_1_1 == ((signed short int) (var_1_9 - var_1_9))) : (var_1_1 == ((signed short int) var_1_9))) : (var_1_1 == ((signed short int) var_1_9))) && (((- var_1_16) <= var_1_4) ? (((var_1_11 <= var_1_4) || var_1_2) ? (var_1_8 == ((float) 3.3f)) : 1) : 1)) && ((last_1_var_1_11 < (last_1_var_1_11 + last_1_var_1_16)) ? (((min (var_1_7 , last_1_var_1_1)) > (var_1_6 * 1)) ? (var_1_9 == ((unsigned char) var_1_10)) : (var_1_9 == ((unsigned char) var_1_10))) : (var_1_9 == ((unsigned char) var_1_10)))) && (((last_1_var_1_16 >= last_1_var_1_16) || ((var_1_2 && var_1_12) || (var_1_13 || var_1_14))) ? (var_1_2 ? (var_1_11 == ((double) var_1_15)) : (var_1_11 == ((double) var_1_15))) : (var_1_11 == ((double) var_1_15)))) && ((((var_1_10 * last_1_var_1_9) + last_1_var_1_1) > last_1_var_1_20) ? (var_1_16 == ((double) (var_1_17 - (var_1_18 - var_1_19)))) : 1)) && (var_1_13 ? (var_1_20 == ((unsigned long int) ((max (var_1_9 , 128u)) + var_1_9))) : ((var_1_9 >= var_1_9) ? (var_1_20 == ((unsigned long int) (var_1_21 - var_1_9))) : (var_1_20 == ((unsigned long int) var_1_9))))
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
