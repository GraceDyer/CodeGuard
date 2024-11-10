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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch51PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 128;
double var_1_4 = 32.3;
double var_1_5 = 0.25;
unsigned char var_1_7 = 2;
signed char var_1_8 = -10;
signed char var_1_9 = 5;
signed char var_1_10 = 4;
signed char var_1_11 = 100;
unsigned long int var_1_12 = 8;
unsigned char var_1_13 = 0;
unsigned long int var_1_15 = 1114432789;
double var_1_17 = 256.8;
double var_1_18 = 1.25;
unsigned long int var_1_19 = 16;
unsigned char var_1_21 = 1;
double var_1_22 = -0.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
float var_1_25 = -0.575;
signed char var_1_26 = -128;
signed char var_1_27 = 5;
signed char var_1_28 = 1;
signed long int var_1_29 = 1;
float var_1_30 = 10.8;
float var_1_31 = 49.2;
float var_1_32 = 0.4;
unsigned char var_1_33 = 10;
unsigned char var_1_34 = 2;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 64;
signed char var_1_38 = -8;
signed char var_1_39 = 4;
float var_1_40 = 255.5;
float var_1_41 = 49.4;
unsigned short int var_1_42 = 4;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
float var_1_47 = 1.25;
float var_1_48 = 100.08;
double var_1_49 = 127.4;
signed long int var_1_50 = -2;
float var_1_51 = 99.7;
signed long int var_1_52 = 10000;
unsigned char var_1_53 = 50;
unsigned char var_1_54 = 1;
float var_1_55 = 100000000.375;
float var_1_56 = 16.75;
unsigned char var_1_57 = 8;
signed long int var_1_58 = -100;
double var_1_59 = 5.25;
float var_1_60 = 3.4;
float var_1_61 = 127.25;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
signed short int var_1_64 = 1;
unsigned short int var_1_65 = 16;
unsigned short int var_1_66 = 60173;
unsigned long int var_1_67 = 200;
unsigned char var_1_68 = 128;
unsigned short int var_1_69 = 1;
unsigned short int var_1_70 = 20564;
unsigned short int var_1_71 = 28541;
unsigned short int var_1_72 = 62560;
unsigned short int var_1_73 = 10000;
signed short int var_1_74 = -128;
float var_1_75 = 8.8;
signed short int var_1_76 = 22591;
signed short int var_1_77 = 5;
signed short int var_1_79 = 5;
unsigned char var_1_80 = 0;
double var_1_81 = 25.875;
unsigned long int var_1_82 = 50;
unsigned short int var_1_83 = 32;
signed long int var_1_84 = -25;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 128;
unsigned long int last_1_var_1_12 = 8;
double last_1_var_1_17 = 256.8;
unsigned char last_1_var_1_21 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_26 % (max (var_1_27 , var_1_28))) > var_1_29) {
		var_1_25 = ((max (var_1_30 , var_1_31)) - var_1_32);
	}


	// From: CodeObject2
	if (var_1_32 < (max (var_1_30 , (abs (var_1_25))))) {
		var_1_33 = (max (var_1_34 , var_1_35));
	} else {
		if (var_1_36) {
			var_1_33 = ((64 + var_1_37) - 50);
		}
	}


	// From: CodeObject3
	if (var_1_36) {
		var_1_38 = (max (-8 , var_1_39));
	}


	// From: CodeObject4
	if ((var_1_34 / var_1_37) != (var_1_29 | var_1_39)) {
		var_1_40 = (var_1_31 - (max (var_1_30 , var_1_32)));
	}


	// From: CodeObject5
	if (var_1_36) {
		var_1_41 = (min ((min (var_1_31 , var_1_32)) , var_1_30));
	}


	// From: CodeObject6
	if (! var_1_36) {
		var_1_42 = (abs (abs (abs (var_1_33))));
	}


	// From: CodeObject7
	if (var_1_37 > var_1_29) {
		var_1_43 = ((var_1_36 && var_1_44) || (! (var_1_45 || var_1_46)));
	} else {
		if (var_1_35 < 32) {
			var_1_43 = var_1_46;
		}
	}


	// From: CodeObject8
	if (var_1_37 > (var_1_33 ^ 16)) {
		var_1_47 = var_1_32;
	}


	// From: CodeObject9
	if (var_1_34 > var_1_26) {
		var_1_48 = ((abs (4.875f)) - var_1_31);
	} else {
		if (var_1_30 < (- var_1_41)) {
			var_1_48 = (31.6f - (max (var_1_32 , var_1_30)));
		} else {
			if (var_1_43 && var_1_45) {
				if (var_1_41 != var_1_30) {
					var_1_48 = (min (var_1_31 , var_1_32));
				}
			}
		}
	}


	// From: CodeObject10
	if (var_1_45) {
		if ((min (var_1_47 , var_1_30)) > var_1_25) {
			if (var_1_27 >= var_1_39) {
				var_1_49 = var_1_31;
			} else {
				var_1_49 = (min (var_1_30 , var_1_31));
			}
		}
	}


	// From: CodeObject11
	if (var_1_45) {
		if ((min (var_1_35 , 128)) > var_1_29) {
			var_1_50 = (abs (abs (var_1_34 - var_1_42)));
		}
	} else {
		var_1_50 = (var_1_34 - (var_1_35 + var_1_37));
	}


	// From: CodeObject12
	if (4 >= (abs (var_1_26))) {
		var_1_51 = (abs (var_1_32));
	}


	// From: CodeObject13
	if ((var_1_50 / var_1_28) < var_1_37) {
		if (31.5f == var_1_31) {
			var_1_52 = (abs (var_1_38));
		}
	} else {
		if (var_1_29 > var_1_26) {
			var_1_52 = var_1_33;
		} else {
			var_1_52 = (min (var_1_27 , (max ((abs (var_1_28)) , (max (var_1_42 , var_1_38))))));
		}
	}


	// From: CodeObject14
	if ((var_1_52 ^ var_1_33) > var_1_27) {
		if (var_1_54) {
			var_1_53 = var_1_37;
		} else {
			var_1_53 = var_1_37;
		}
	}


	// From: CodeObject15
	if (var_1_30 < 127.5f) {
		if ((- (var_1_31 + var_1_47)) > (var_1_30 + var_1_51)) {
			var_1_55 = (max ((abs (var_1_56 + 4.75f)) , var_1_32));
		}
	}


	// From: CodeObject16
	if (var_1_43) {
		var_1_57 = var_1_34;
	}


	// From: CodeObject17
	if ((var_1_42 % (max (var_1_27 , var_1_37))) < -4) {
		var_1_58 = (var_1_53 - ((min (var_1_34 , var_1_35)) + var_1_42));
	}


	// From: CodeObject18
	if ((min ((abs (var_1_49)) , var_1_60)) >= (max (var_1_41 , (100.5 * var_1_31)))) {
		if (var_1_54 || (var_1_40 > 0.65f)) {
			var_1_59 = (abs (max (15.375 , var_1_32)));
		} else {
			if ((var_1_28 != (abs (-2))) || (var_1_56 == var_1_49)) {
				var_1_59 = (abs (var_1_30));
			}
		}
	} else {
		var_1_59 = (abs (max ((var_1_31 - var_1_32) , var_1_30)));
	}


	// From: CodeObject19
	if (var_1_36) {
		var_1_61 = var_1_31;
	} else {
		var_1_61 = (abs (max (var_1_32 , var_1_30)));
	}


	// From: CodeObject20
	var_1_62 = (! (var_1_44 || var_1_63));


	// From: CodeObject21
	if (((abs (var_1_34)) & -5) >= var_1_37) {
		if (1.000000000005E11f <= (var_1_25 * var_1_48)) {
			var_1_64 = -16;
		}
	}


	// From: CodeObject22
	if (var_1_52 < (var_1_50 ^ var_1_57)) {
		if (var_1_56 > (min ((var_1_49 * var_1_48) , var_1_55))) {
			var_1_65 = (min ((max (var_1_35 , var_1_33)) , var_1_57));
		}
	} else {
		var_1_65 = (min ((abs (var_1_37)) , (var_1_66 - var_1_33)));
	}


	// From: CodeObject23
	if (var_1_57 >= (var_1_68 - var_1_37)) {
		var_1_67 = (var_1_68 + 10000u);
	}


	// From: CodeObject24
	if ((~ var_1_29) <= var_1_58) {
		if ((min ((abs (var_1_32)) , 9.875f)) >= (max (var_1_60 , (min (var_1_61 , var_1_56))))) {
			var_1_69 = ((var_1_70 + var_1_71) - (max (2 , (5 + var_1_53))));
		} else {
			if (var_1_30 <= var_1_49) {
				var_1_69 = ((abs (var_1_72 - 64)) - (var_1_71 - (var_1_73 - 64)));
			}
		}
	}


	// From: CodeObject25
	if (var_1_28 >= (abs (var_1_39))) {
		if (var_1_41 <= var_1_75) {
			var_1_74 = (((min (26728 , var_1_76)) - var_1_37) - 256);
		} else {
			var_1_74 = var_1_57;
		}
	}


	// From: CodeObject26
	if ((var_1_70 >> (min (var_1_79 , 16))) != var_1_76) {
		var_1_77 = (abs (var_1_38));
	}


	// From: CodeObject27
	var_1_80 = (! (! (var_1_54 || var_1_46)));


	// From: CodeObject28
	if (var_1_80) {
		var_1_81 = var_1_32;
	}


	// From: CodeObject29
	if (var_1_43) {
		var_1_82 = var_1_42;
	}


	// From: CodeObject30
	if ((var_1_84 < (abs (var_1_77))) || var_1_43) {
		if (2.5 < var_1_59) {
			var_1_83 = (abs (abs (var_1_53)));
		}
	} else {
		if (var_1_54) {
			var_1_83 = var_1_57;
		} else {
			var_1_83 = var_1_79;
		}
	}


	// From: Req5Batch51PS_CN_250
	unsigned char stepLocal_3 = (max (var_1_4 , last_1_var_1_17)) > var_1_18;
	if (last_1_var_1_21 || stepLocal_3) {
		if (var_1_18 > (abs (last_1_var_1_17))) {
			var_1_19 = last_1_var_1_1;
		} else {
			var_1_19 = var_1_11;
		}
	} else {
		var_1_19 = last_1_var_1_1;
	}


	// From: Req1Batch51PS_CN_250
	unsigned long int stepLocal_1 = last_1_var_1_12;
	unsigned long int stepLocal_0 = 32u;
	if (stepLocal_0 >= last_1_var_1_12) {
		if (stepLocal_1 <= last_1_var_1_12) {
			if ((var_1_4 - var_1_5) >= last_1_var_1_17) {
				var_1_1 = var_1_7;
			}
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req4Batch51PS_CN_250
	if ((min ((~ var_1_1) , 8)) > var_1_11) {
		var_1_17 = var_1_18;
	}


	// From: Req2Batch51PS_CN_250
	if (! (var_1_17 > var_1_5)) {
		var_1_8 = ((min (var_1_9 , var_1_10)) - var_1_11);
	} else {
		var_1_8 = -4;
	}


	// From: Req6Batch51PS_CN_250
	unsigned long int stepLocal_4 = var_1_19;
	if ((var_1_18 / (max (5.5 , var_1_22))) > 10.5) {
		if (var_1_13) {
			if (var_1_1 < stepLocal_4) {
				var_1_21 = (! var_1_23);
			} else {
				var_1_21 = var_1_24;
			}
		} else {
			var_1_21 = var_1_23;
		}
	} else {
		var_1_21 = var_1_23;
	}


	// From: Req3Batch51PS_CN_250
	unsigned char stepLocal_2 = var_1_21;
	if (var_1_21 && stepLocal_2) {
		var_1_12 = var_1_11;
	} else {
		if (var_1_21) {
			var_1_12 = ((max (var_1_19 , (var_1_11 + var_1_7))) + (var_1_15 - var_1_1));
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 1073741823);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -128);
	assume_abort_if_not(var_1_27 <= 127);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -128);
	assume_abort_if_not(var_1_28 <= 127);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 64);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -461168.6018427382800e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 4611686.018427382800e+12F && var_1_56 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= -922337.2036854776000e+13F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854776000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 0);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 32767);
	assume_abort_if_not(var_1_66 <= 65534);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 127);
	assume_abort_if_not(var_1_68 <= 255);
	var_1_70 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_70 >= 16383);
	assume_abort_if_not(var_1_70 <= 32767);
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 16384);
	assume_abort_if_not(var_1_71 <= 32767);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 49150);
	assume_abort_if_not(var_1_72 <= 65534);
	var_1_73 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_73 >= 8191);
	assume_abort_if_not(var_1_73 <= 16383);
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= -922337.2036854776000e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854776000e+12F && var_1_75 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_76 >= 16382);
	assume_abort_if_not(var_1_76 <= 32766);
	var_1_79 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 17);
	var_1_84 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_84 >= -2147483648);
	assume_abort_if_not(var_1_84 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_21 = var_1_21;
}

int property() {
	return ((((((32u >= last_1_var_1_12) ? ((last_1_var_1_12 <= last_1_var_1_12) ? (((var_1_4 - var_1_5) >= last_1_var_1_17) ? (var_1_1 == ((unsigned char) var_1_7)) : 1) : 1) : (var_1_1 == ((unsigned char) var_1_7))) && ((! (var_1_17 > var_1_5)) ? (var_1_8 == ((signed char) ((min (var_1_9 , var_1_10)) - var_1_11))) : (var_1_8 == ((signed char) -4)))) && ((var_1_21 && var_1_21) ? (var_1_12 == ((unsigned long int) var_1_11)) : (var_1_21 ? (var_1_12 == ((unsigned long int) ((max (var_1_19 , (var_1_11 + var_1_7))) + (var_1_15 - var_1_1)))) : 1))) && (((min ((~ var_1_1) , 8)) > var_1_11) ? (var_1_17 == ((double) var_1_18)) : 1)) && ((last_1_var_1_21 || ((max (var_1_4 , last_1_var_1_17)) > var_1_18)) ? ((var_1_18 > (abs (last_1_var_1_17))) ? (var_1_19 == ((unsigned long int) last_1_var_1_1)) : (var_1_19 == ((unsigned long int) var_1_11))) : (var_1_19 == ((unsigned long int) last_1_var_1_1)))) && (((var_1_18 / (max (5.5 , var_1_22))) > 10.5) ? (var_1_13 ? ((var_1_1 < var_1_19) ? (var_1_21 == ((unsigned char) (! var_1_23))) : (var_1_21 == ((unsigned char) var_1_24))) : (var_1_21 == ((unsigned char) var_1_23))) : (var_1_21 == ((unsigned char) var_1_23)))
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
