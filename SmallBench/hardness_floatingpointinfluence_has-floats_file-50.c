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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50has_floats.c", 13, "reach_error"); }
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
double var_1_2 = 8.875;
double var_1_3 = 63.5;
double var_1_4 = 16.6;
double var_1_5 = 127.8;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
signed short int var_1_12 = -2;
signed short int var_1_13 = 64;
signed short int var_1_14 = 2;
signed short int var_1_15 = 4;
signed short int var_1_16 = 26204;
signed short int var_1_17 = 5;
signed long int var_1_18 = -5;
signed long int var_1_19 = 100;
signed long int var_1_20 = 0;
signed long int var_1_21 = 128;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_18 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch50has_floats
	signed long int stepLocal_1 = last_1_var_1_18;
	if (stepLocal_1 >= 0) {
		var_1_12 = (max (var_1_13 , var_1_14));
	} else {
		var_1_12 = (max (var_1_13 , (var_1_15 - (var_1_16 - var_1_17))));
	}


	// From: Req3Batch50has_floats
	signed long int stepLocal_3 = var_1_15 - var_1_19;
	signed short int stepLocal_2 = var_1_12;
	if (var_1_12 > stepLocal_3) {
		if (var_1_13 < stepLocal_2) {
			var_1_18 = ((var_1_17 + (var_1_16 + var_1_20)) - var_1_21);
		}
	} else {
		var_1_18 = var_1_14;
	}


	// From: Req1Batch50has_floats
	signed long int stepLocal_0 = max (var_1_12 , var_1_18);
	if ((min ((var_1_2 + var_1_3) , (var_1_4 - var_1_5))) != 31.9) {
		if (stepLocal_0 < var_1_18) {
			if (var_1_9) {
				var_1_1 = var_1_10;
			} else {
				var_1_1 = var_1_10;
			}
		} else {
			var_1_1 = var_1_10;
		}
	} else {
		var_1_1 = var_1_11;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -32767);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 536870911);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483646);
}



void updateLastVariables() {
	last_1_var_1_18 = var_1_18;
}

int property() {
	return ((((min ((var_1_2 + var_1_3) , (var_1_4 - var_1_5))) != 31.9) ? (((max (var_1_12 , var_1_18)) < var_1_18) ? (var_1_9 ? (var_1_1 == ((unsigned char) var_1_10)) : (var_1_1 == ((unsigned char) var_1_10))) : (var_1_1 == ((unsigned char) var_1_10))) : (var_1_1 == ((unsigned char) var_1_11))) && ((last_1_var_1_18 >= 0) ? (var_1_12 == ((signed short int) (max (var_1_13 , var_1_14)))) : (var_1_12 == ((signed short int) (max (var_1_13 , (var_1_15 - (var_1_16 - var_1_17)))))))) && ((var_1_12 > (var_1_15 - var_1_19)) ? ((var_1_13 < var_1_12) ? (var_1_18 == ((signed long int) ((var_1_17 + (var_1_16 + var_1_20)) - var_1_21))) : 1) : (var_1_18 == ((signed long int) var_1_14)))
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
