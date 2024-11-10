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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7625_while.c", 13, "reach_error"); }
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
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = 4;
float var_1_10 = 16.4;
signed short int var_1_11 = -25;
float var_1_13 = 128.1;
float var_1_14 = 31.4;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 0;
signed long int var_1_17 = 5;

// Calibration values

// Last'ed variables
float last_1_var_1_13 = 128.1;
signed long int last_1_var_1_17 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch7625_while
	if (var_1_5) {
		if (0.4f > (min (last_1_var_1_13 , (var_1_10 - 1.375f)))) {
			var_1_8 = last_1_var_1_17;
		}
	}


	// From: Req6Batch7625_while
	var_1_17 = var_1_8;


	// From: Req4Batch7625_while
	var_1_13 = var_1_14;


	// From: Req5Batch7625_while
	var_1_15 = var_1_16;


	// From: Req1Batch7625_while
	signed long int stepLocal_0 = (- 5) + var_1_17;
	if (stepLocal_0 >= var_1_15) {
		var_1_1 = (! var_1_5);
	} else {
		var_1_1 = ((var_1_5 && var_1_6) || var_1_7);
	}


	// From: Req3Batch7625_while
	if (var_1_10 >= 500.875f) {
		var_1_11 = (min ((max ((abs (-50)) , var_1_8)) , var_1_15));
	} else {
		var_1_11 = var_1_15;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return ((((((((- 5) + var_1_17) >= var_1_15) ? (var_1_1 == ((unsigned char) (! var_1_5))) : (var_1_1 == ((unsigned char) ((var_1_5 && var_1_6) || var_1_7)))) && (var_1_5 ? ((0.4f > (min (last_1_var_1_13 , (var_1_10 - 1.375f)))) ? (var_1_8 == ((signed short int) last_1_var_1_17)) : 1) : 1)) && ((var_1_10 >= 500.875f) ? (var_1_11 == ((signed short int) (min ((max ((abs (-50)) , var_1_8)) , var_1_15)))) : (var_1_11 == ((signed short int) var_1_15)))) && (var_1_13 == ((float) var_1_14))) && (var_1_15 == ((unsigned char) var_1_16))) && (var_1_17 == ((signed long int) var_1_8))
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
