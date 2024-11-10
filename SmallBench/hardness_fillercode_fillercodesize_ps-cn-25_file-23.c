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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch23PS_CN_25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
float var_1_4 = 1.4;
float var_1_7 = 9.25;
float var_1_8 = 1.2;
float var_1_9 = 0.0;
float var_1_10 = 3.1;
float var_1_11 = 500.5;
signed long int var_1_12 = 0;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 8;
unsigned char var_1_17 = 64;
unsigned long int var_1_18 = 25;
signed char var_1_19 = -100;
signed short int var_1_20 = -4;
unsigned short int var_1_21 = 200;
unsigned short int var_1_22 = 54878;
double var_1_23 = 9999.8;
float var_1_24 = -0.25;
signed char var_1_25 = 50;
signed char var_1_26 = 100;
signed char var_1_27 = -4;
unsigned char var_1_28 = 1;
float var_1_29 = 127.4;
float var_1_30 = -0.5;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
signed long int var_1_33 = -8;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 2;
unsigned long int var_1_36 = 256;
signed long int var_1_37 = 16;
float var_1_38 = 199.6;

// Calibration values

// Last'ed variables
signed char last_1_var_1_19 = -100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_26 = var_1_27;


	// From: CodeObject2
	if ((abs (min (var_1_29 , var_1_30))) <= 31.75f) {
		if (var_1_29 > var_1_30) {
			var_1_28 = var_1_31;
		}
	} else {
		var_1_28 = var_1_32;
	}


	// From: CodeObject3
	if (var_1_30 > var_1_29) {
		if (var_1_29 <= var_1_30) {
			var_1_33 = var_1_27;
		}
	}


	// From: CodeObject4
	if ((var_1_33 >> var_1_26) <= var_1_27) {
		if (var_1_31) {
			var_1_34 = var_1_35;
		}
	}


	// From: CodeObject5
	var_1_36 = var_1_35;


	// From: CodeObject6
	if ((max (var_1_30 , var_1_29)) > (abs (var_1_38))) {
		var_1_37 = 1000000;
	}


	// From: Req1Batch23PS_CN_25
	if (var_1_2) {
		var_1_1 = var_1_3;
	}


	// From: Req6Batch23PS_CN_25
	signed long int stepLocal_4 = 5;
	if (stepLocal_4 <= var_1_17) {
		var_1_21 = (var_1_22 - var_1_17);
	} else {
		if (var_1_1) {
			if (var_1_1) {
				var_1_21 = var_1_17;
			} else {
				var_1_21 = var_1_17;
			}
		}
	}


	// From: Req7Batch23PS_CN_25
	var_1_23 = var_1_10;


	// From: Req8Batch23PS_CN_25
	var_1_24 = 31.75f;


	// From: Req9Batch23PS_CN_25
	var_1_25 = -5;


	// From: Req2Batch23PS_CN_25
	unsigned char stepLocal_0 = var_1_1;
	if ((var_1_23 <= var_1_23) || stepLocal_0) {
		var_1_4 = (max (31.5f , (min (var_1_7 , var_1_8))));
	} else {
		var_1_4 = ((var_1_9 - var_1_10) - var_1_11);
	}


	// From: Req3Batch23PS_CN_25
	signed long int stepLocal_3 = (200 - var_1_13) - var_1_14;
	unsigned char stepLocal_2 = var_1_13;
	unsigned char stepLocal_1 = var_1_13;
	if (stepLocal_3 != var_1_25) {
		var_1_12 = (var_1_13 + (min (var_1_14 , var_1_21)));
	} else {
		if ((var_1_25 / (128 - var_1_17)) < stepLocal_2) {
			if (stepLocal_1 >= var_1_25) {
				var_1_12 = var_1_14;
			} else {
				var_1_12 = var_1_17;
			}
		} else {
			var_1_12 = var_1_17;
		}
	}


	// From: Req4Batch23PS_CN_25
	if ((- (var_1_13 / var_1_17)) > var_1_25) {
		var_1_18 = var_1_13;
	}


	// From: Req5Batch23PS_CN_25
	if ((last_1_var_1_19 / (min (var_1_17 , var_1_20))) > var_1_21) {
		var_1_19 = (max (var_1_17 , var_1_13));
	} else {
		var_1_19 = var_1_17;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 0);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= 4611686.018427382800e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 64);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 126);
	assume_abort_if_not(var_1_17 != 127);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	assume_abort_if_not(var_1_20 != 0);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 32767);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_19 = var_1_19;
}

int property() {
	return ((((((((var_1_2 ? (var_1_1 == ((unsigned char) var_1_3)) : 1) && (((var_1_23 <= var_1_23) || var_1_1) ? (var_1_4 == ((float) (max (31.5f , (min (var_1_7 , var_1_8)))))) : (var_1_4 == ((float) ((var_1_9 - var_1_10) - var_1_11))))) && ((((200 - var_1_13) - var_1_14) != var_1_25) ? (var_1_12 == ((signed long int) (var_1_13 + (min (var_1_14 , var_1_21))))) : (((var_1_25 / (128 - var_1_17)) < var_1_13) ? ((var_1_13 >= var_1_25) ? (var_1_12 == ((signed long int) var_1_14)) : (var_1_12 == ((signed long int) var_1_17))) : (var_1_12 == ((signed long int) var_1_17))))) && (((- (var_1_13 / var_1_17)) > var_1_25) ? (var_1_18 == ((unsigned long int) var_1_13)) : 1)) && (((last_1_var_1_19 / (min (var_1_17 , var_1_20))) > var_1_21) ? (var_1_19 == ((signed char) (max (var_1_17 , var_1_13)))) : (var_1_19 == ((signed char) var_1_17)))) && ((5 <= var_1_17) ? (var_1_21 == ((unsigned short int) (var_1_22 - var_1_17))) : (var_1_1 ? (var_1_1 ? (var_1_21 == ((unsigned short int) var_1_17)) : (var_1_21 == ((unsigned short int) var_1_17))) : 1))) && (var_1_23 == ((double) var_1_10))) && (var_1_24 == ((float) 31.75f))) && (var_1_25 == ((signed char) -5))
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
