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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6525_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 1000000000.1;
float var_1_2 = 256.75;
unsigned char var_1_3 = 1;
float var_1_4 = 8.2;
signed long int var_1_5 = -32;
signed long int var_1_6 = 4;
signed char var_1_7 = 5;
signed char var_1_8 = 64;
signed char var_1_9 = 16;
signed char var_1_10 = 64;
signed char var_1_11 = -64;
double var_1_12 = 15.9;
double var_1_13 = 1.5;
double var_1_14 = 10000000000.375;
unsigned char var_1_15 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch6525_1loop
	if (0.625f > var_1_2) {
		if (var_1_3) {
			var_1_1 = (abs (var_1_4));
		}
	} else {
		var_1_1 = (abs (var_1_4));
	}


	// From: Req2Batch6525_1loop
	if (var_1_3) {
		var_1_5 = ((10 + var_1_6) - 2);
	}


	// From: Req3Batch6525_1loop
	signed long int stepLocal_0 = var_1_6;
	if (((64 - 25) - (var_1_8 - var_1_9)) >= stepLocal_0) {
		var_1_7 = (max ((var_1_9 - 32) , var_1_10));
	}


	// From: Req4Batch6525_1loop
	if ((var_1_12 - (var_1_13 + var_1_14)) <= var_1_1) {
		if (var_1_3 && var_1_15) {
			var_1_11 = var_1_10;
		} else {
			var_1_11 = var_1_9;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 63);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427387900e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427387900e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
}



void updateLastVariables() {
}

int property() {
	return ((((0.625f > var_1_2) ? (var_1_3 ? (var_1_1 == ((float) (abs (var_1_4)))) : 1) : (var_1_1 == ((float) (abs (var_1_4))))) && (var_1_3 ? (var_1_5 == ((signed long int) ((10 + var_1_6) - 2))) : 1)) && ((((64 - 25) - (var_1_8 - var_1_9)) >= var_1_6) ? (var_1_7 == ((signed char) (max ((var_1_9 - 32) , var_1_10)))) : 1)) && (((var_1_12 - (var_1_13 + var_1_14)) <= var_1_1) ? ((var_1_3 && var_1_15) ? (var_1_11 == ((signed char) var_1_10)) : (var_1_11 == ((signed char) var_1_9))) : 1)
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
