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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch19no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 8;
unsigned char var_1_2 = 128;
unsigned char var_1_3 = 64;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 5;
signed char var_1_7 = 4;
signed char var_1_8 = 100;
unsigned char var_1_9 = 1;
signed long int var_1_10 = -8;
signed long int var_1_11 = 10;
signed long int var_1_12 = -25;
signed long int var_1_13 = -16;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_11 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch19no_floats
	if (var_1_7 < var_1_3) {
		if (last_1_var_1_11 > var_1_7) {
			var_1_10 = (var_1_3 - var_1_8);
		}
	} else {
		if ((var_1_8 + (abs (var_1_2))) > var_1_7) {
			var_1_10 = var_1_8;
		}
	}


	// From: Req4Batch19no_floats
	var_1_13 = var_1_7;


	// From: Req3Batch19no_floats
	signed long int stepLocal_1 = var_1_2 / var_1_12;
	if (((var_1_10 * var_1_13) + var_1_8) > stepLocal_1) {
		if (var_1_9) {
			var_1_11 = var_1_2;
		}
	} else {
		var_1_11 = var_1_7;
	}


	// From: Req1Batch19no_floats
	signed long int stepLocal_0 = var_1_11;
	if (((var_1_2 - var_1_3) << (var_1_4 + var_1_5)) <= stepLocal_0) {
		var_1_1 = (max (var_1_4 , (abs (var_1_8))));
	} else {
		if (var_1_9) {
			var_1_1 = var_1_5;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 127);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 12);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 11);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
}



void updateLastVariables() {
	last_1_var_1_11 = var_1_11;
}

int property() {
	return ((((((var_1_2 - var_1_3) << (var_1_4 + var_1_5)) <= var_1_11) ? (var_1_1 == ((signed char) (max (var_1_4 , (abs (var_1_8)))))) : (var_1_9 ? (var_1_1 == ((signed char) var_1_5)) : 1)) && ((var_1_7 < var_1_3) ? ((last_1_var_1_11 > var_1_7) ? (var_1_10 == ((signed long int) (var_1_3 - var_1_8))) : 1) : (((var_1_8 + (abs (var_1_2))) > var_1_7) ? (var_1_10 == ((signed long int) var_1_8)) : 1))) && ((((var_1_10 * var_1_13) + var_1_8) > (var_1_2 / var_1_12)) ? (var_1_9 ? (var_1_11 == ((signed long int) var_1_2)) : 1) : (var_1_11 == ((signed long int) var_1_7)))) && (var_1_13 == ((signed long int) var_1_7))
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
