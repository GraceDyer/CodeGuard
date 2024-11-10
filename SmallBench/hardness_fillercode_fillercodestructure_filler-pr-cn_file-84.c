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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch84Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -10;
signed char var_1_3 = -16;
signed char var_1_4 = 50;
signed char var_1_5 = 4;
unsigned long int var_1_6 = 50;
signed long int var_1_7 = -8;
signed long int var_1_8 = -4;
signed char var_1_9 = 50;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 5;
unsigned long int var_1_12 = 10;
signed char var_1_13 = 16;
unsigned short int var_1_15 = 128;
signed long int var_1_16 = 2;
unsigned short int var_1_17 = 61498;
unsigned long int var_1_18 = 1;
unsigned char var_1_19 = 0;
double var_1_20 = 4.9;
double var_1_21 = 1.5;
signed long int var_1_22 = 0;
signed long int var_1_23 = 100;
signed long int var_1_24 = 2;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 16;
signed short int var_1_35 = 8;
signed long int var_1_36 = -10;
signed short int var_1_37 = -4;
float var_1_38 = 15.875;
double var_1_39 = 0.125;
double var_1_40 = 3.8;
double var_1_41 = 3.7;
float var_1_42 = 1.75;
signed char var_1_43 = -8;
unsigned char var_1_44 = 1;
signed char var_1_45 = 25;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_15 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch84Filler_PR_CN
	if (last_1_var_1_15 <= (var_1_8 & var_1_4)) {
		if (((- 8) / (var_1_10 - var_1_11)) >= var_1_3) {
			var_1_9 = var_1_3;
		}
	} else {
		var_1_9 = var_1_4;
	}


	// From: Req6Batch84Filler_PR_CN
	signed long int stepLocal_3 = (var_1_4 + var_1_9) & var_1_7;
	if (stepLocal_3 <= (var_1_10 - (min (var_1_11 , var_1_16)))) {
		var_1_15 = (var_1_11 + 64);
	} else {
		var_1_15 = (max ((max (var_1_10 , (var_1_17 - var_1_4))) , var_1_11));
	}


	// From: CodeObject6
	var_1_37 = (min ((abs (var_1_34)) , var_1_33));


	// From: CodeObject7
	if (var_1_33 == var_1_36) {
		if ((var_1_39 - var_1_40) < var_1_41) {
			var_1_38 = (abs (abs (abs (var_1_42))));
		}
	} else {
		if (var_1_40 >= var_1_39) {
			var_1_38 = (abs (var_1_42));
		}
	}


	// From: Req2Batch84Filler_PR_CN
	signed long int stepLocal_1 = -4;
	signed long int stepLocal_0 = -16;
	if (stepLocal_1 > (var_1_5 / (max (var_1_7 , var_1_8)))) {
		if (var_1_4 < stepLocal_0) {
			var_1_6 = (abs (32u));
		}
	}


	// From: CodeObject2
	if (var_1_25 && var_1_26) {
		if (var_1_23 > var_1_22) {
			var_1_24 = var_1_23;
		}
	}


	// From: Req7Batch84Filler_PR_CN
	var_1_18 = var_1_17;


	// From: CodeObject4
	if (var_1_22 != (abs (var_1_23))) {
		var_1_33 = (5 + var_1_34);
	}


	// From: CodeObject8
	if (! var_1_44) {
		if (((var_1_34 + -128) % var_1_36) >= var_1_24) {
			var_1_43 = var_1_45;
		}
	} else {
		var_1_43 = var_1_45;
	}


	// From: Req8Batch84Filler_PR_CN
	var_1_19 = 0;


	// From: CodeObject5
	if ((~ var_1_34) > (var_1_23 / var_1_36)) {
		var_1_35 = (abs (abs (var_1_33)));
	}


	// From: Req9Batch84Filler_PR_CN
	var_1_20 = var_1_21;


	// From: Req1Batch84Filler_PR_CN
	if (var_1_19) {
		var_1_1 = (min ((var_1_3 + (1 - var_1_4)) , var_1_5));
	}


	// From: Req4Batch84Filler_PR_CN
	if (var_1_3 <= var_1_1) {
		var_1_12 = var_1_4;
	} else {
		var_1_12 = (min ((var_1_11 + var_1_4) , var_1_10));
	}


	// From: CodeObject1
	var_1_22 = var_1_23;


	// From: Req5Batch84Filler_PR_CN
	unsigned long int stepLocal_2 = var_1_18;
	if ((~ var_1_3) < stepLocal_2) {
		var_1_13 = (max ((var_1_4 + var_1_3) , -5));
	}


	// From: CodeObject3
	if (var_1_25) {
		if (var_1_26) {
			var_1_27 = ((var_1_28 && var_1_29) || (var_1_30 || var_1_31));
		} else {
			if (var_1_28) {
				var_1_27 = (var_1_30 || var_1_32);
			} else {
				var_1_27 = var_1_32;
			}
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 255);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 126);
	assume_abort_if_not(var_1_11 != 127);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 32767);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483647);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483648);
	assume_abort_if_not(var_1_36 <= 2147483647);
	assume_abort_if_not(var_1_36 != 0);
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854765600e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -127);
	assume_abort_if_not(var_1_45 <= 126);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((((((var_1_19 ? (var_1_1 == ((signed char) (min ((var_1_3 + (1 - var_1_4)) , var_1_5)))) : 1) && ((-4 > (var_1_5 / (max (var_1_7 , var_1_8)))) ? ((var_1_4 < -16) ? (var_1_6 == ((unsigned long int) (abs (32u)))) : 1) : 1)) && ((last_1_var_1_15 <= (var_1_8 & var_1_4)) ? ((((- 8) / (var_1_10 - var_1_11)) >= var_1_3) ? (var_1_9 == ((signed char) var_1_3)) : 1) : (var_1_9 == ((signed char) var_1_4)))) && ((var_1_3 <= var_1_1) ? (var_1_12 == ((unsigned long int) var_1_4)) : (var_1_12 == ((unsigned long int) (min ((var_1_11 + var_1_4) , var_1_10)))))) && (((~ var_1_3) < var_1_18) ? (var_1_13 == ((signed char) (max ((var_1_4 + var_1_3) , -5)))) : 1)) && ((((var_1_4 + var_1_9) & var_1_7) <= (var_1_10 - (min (var_1_11 , var_1_16)))) ? (var_1_15 == ((unsigned short int) (var_1_11 + 64))) : (var_1_15 == ((unsigned short int) (max ((max (var_1_10 , (var_1_17 - var_1_4))) , var_1_11)))))) && (var_1_18 == ((unsigned long int) var_1_17))) && (var_1_19 == ((unsigned char) 0))) && (var_1_20 == ((double) var_1_21))
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
