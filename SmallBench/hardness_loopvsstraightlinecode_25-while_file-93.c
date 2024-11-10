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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9325_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 255.3;
double var_1_3 = -0.9;
double var_1_4 = 2.6;
double var_1_5 = 128.5;
float var_1_7 = 1.25;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
signed char var_1_11 = -1;
signed char var_1_12 = -10;
signed char var_1_13 = -32;
signed char var_1_14 = -2;
unsigned long int var_1_15 = 500;
unsigned long int var_1_16 = 16;

// Calibration values

// Last'ed variables
float last_1_var_1_1 = 255.3;
unsigned char last_1_var_1_8 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9325_while
	if (((- last_1_var_1_1) / var_1_3) != (var_1_4 / var_1_5)) {
		if (last_1_var_1_8) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch9325_while
	if (var_1_1 != var_1_1) {
		if (var_1_1 < (var_1_1 * 15.25)) {
			var_1_8 = (! var_1_9);
		}
	} else {
		var_1_8 = (! var_1_10);
	}


	// From: Req3Batch9325_while
	if (var_1_1 < var_1_1) {
		if (var_1_10) {
			var_1_11 = var_1_12;
		}
	} else {
		var_1_11 = (var_1_13 + var_1_14);
	}


	// From: Req4Batch9325_while
	var_1_15 = var_1_16;
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
}

int property() {
	return ((((((- last_1_var_1_1) / var_1_3) != (var_1_4 / var_1_5)) ? (last_1_var_1_8 ? (var_1_1 == ((float) var_1_7)) : (var_1_1 == ((float) var_1_7))) : (var_1_1 == ((float) var_1_7))) && ((var_1_1 != var_1_1) ? ((var_1_1 < (var_1_1 * 15.25)) ? (var_1_8 == ((unsigned char) (! var_1_9))) : 1) : (var_1_8 == ((unsigned char) (! var_1_10))))) && ((var_1_1 < var_1_1) ? (var_1_10 ? (var_1_11 == ((signed char) var_1_12)) : 1) : (var_1_11 == ((signed char) (var_1_13 + var_1_14))))) && (var_1_15 == ((unsigned long int) var_1_16))
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
