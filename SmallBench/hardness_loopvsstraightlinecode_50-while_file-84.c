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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8450_while.c", 13, "reach_error"); }
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

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_15 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch8450_while
	if (last_1_var_1_15 <= (var_1_8 & var_1_4)) {
		if (((- 8) / (var_1_10 - var_1_11)) >= var_1_3) {
			var_1_9 = var_1_3;
		}
	} else {
		var_1_9 = var_1_4;
	}


	// From: Req6Batch8450_while
	signed long int stepLocal_3 = (var_1_4 + var_1_9) & var_1_7;
	if (stepLocal_3 <= (var_1_10 - (min (var_1_11 , var_1_16)))) {
		var_1_15 = (var_1_11 + 64);
	} else {
		var_1_15 = (max ((max (var_1_10 , (var_1_17 - var_1_4))) , var_1_11));
	}


	// From: Req2Batch8450_while
	signed long int stepLocal_1 = -4;
	signed long int stepLocal_0 = -16;
	if (stepLocal_1 > (var_1_5 / (max (var_1_7 , var_1_8)))) {
		if (var_1_4 < stepLocal_0) {
			var_1_6 = (abs (32u));
		}
	}


	// From: Req7Batch8450_while
	var_1_18 = var_1_17;


	// From: Req8Batch8450_while
	var_1_19 = 0;


	// From: Req9Batch8450_while
	var_1_20 = var_1_21;


	// From: Req1Batch8450_while
	if (var_1_19) {
		var_1_1 = (min ((var_1_3 + (1 - var_1_4)) , var_1_5));
	}


	// From: Req4Batch8450_while
	if (var_1_3 <= var_1_1) {
		var_1_12 = var_1_4;
	} else {
		var_1_12 = (min ((var_1_11 + var_1_4) , var_1_10));
	}


	// From: Req5Batch8450_while
	unsigned long int stepLocal_2 = var_1_18;
	if ((~ var_1_3) < stepLocal_2) {
		var_1_13 = (max ((var_1_4 + var_1_3) , -5));
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
