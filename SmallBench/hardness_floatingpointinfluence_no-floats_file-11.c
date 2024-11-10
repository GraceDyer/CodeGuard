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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch11no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -16;
signed long int var_1_2 = 50;
signed long int var_1_3 = 7;
signed char var_1_7 = 10;
signed long int var_1_8 = 32;
signed long int var_1_9 = 1000000;
signed long int var_1_10 = 2;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 5;
unsigned char var_1_15 = 200;
unsigned char var_1_16 = 10;
unsigned char var_1_17 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_11 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch11no_floats
	if (var_1_3 >= var_1_2) {
		if (last_1_var_1_11) {
			if (! last_1_var_1_11) {
				var_1_8 = (max (var_1_9 , (10.25f + var_1_10)));
			} else {
				var_1_8 = var_1_9;
			}
		}
	}


	// From: Req3Batch11no_floats
	if (var_1_8 <= var_1_8) {
		var_1_11 = (var_1_12 || var_1_13);
	}


	// From: Req1Batch11no_floats
	unsigned char stepLocal_0 = var_1_11;
	if ((var_1_2 - 5.25) < (var_1_8 * (var_1_8 * 199.4))) {
		if (stepLocal_0 && var_1_11) {
			if (var_1_8 < var_1_8) {
				var_1_1 = var_1_7;
			} else {
				var_1_1 = var_1_7;
			}
		}
	}


	// From: Req4Batch11no_floats
	if (! var_1_11) {
		var_1_14 = (min ((min (var_1_15 , (max (var_1_16 , 5)))) , var_1_17));
	} else {
		var_1_14 = var_1_16;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
}



void updateLastVariables() {
	last_1_var_1_11 = var_1_11;
}

int property() {
	return (((((var_1_2 - 5.25) < (var_1_8 * (var_1_8 * 199.4))) ? ((var_1_11 && var_1_11) ? ((var_1_8 < var_1_8) ? (var_1_1 == ((signed char) var_1_7)) : (var_1_1 == ((signed char) var_1_7))) : 1) : 1) && ((var_1_3 >= var_1_2) ? (last_1_var_1_11 ? ((! last_1_var_1_11) ? (var_1_8 == ((signed long int) (max (var_1_9 , (10.25f + var_1_10))))) : (var_1_8 == ((signed long int) var_1_9))) : 1) : 1)) && ((var_1_8 <= var_1_8) ? (var_1_11 == ((unsigned char) (var_1_12 || var_1_13))) : 1)) && ((! var_1_11) ? (var_1_14 == ((unsigned char) (min ((min (var_1_15 , (max (var_1_16 , 5)))) , var_1_17)))) : (var_1_14 == ((unsigned char) var_1_16)))
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
