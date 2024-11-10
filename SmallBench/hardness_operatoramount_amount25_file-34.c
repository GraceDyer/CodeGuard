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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 16.6;
double var_1_4 = 10.6;
unsigned char var_1_5 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_11 = 0;
signed short int var_1_12 = 32;
signed short int var_1_13 = 0;
unsigned short int var_1_14 = 5;
unsigned short int var_1_15 = 2;
signed long int var_1_16 = -50;
unsigned char var_1_17 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_5 = 0;
unsigned char last_1_var_1_17 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch34Amount25
	if (last_1_var_1_5) {
		if (last_1_var_1_17) {
			var_1_1 = (abs (var_1_4));
		}
	}


	// From: Req4Batch34Amount25
	var_1_12 = (max (128 , var_1_13));


	// From: Req5Batch34Amount25
	var_1_14 = var_1_15;


	// From: Req6Batch34Amount25
	var_1_16 = var_1_13;


	// From: Req7Batch34Amount25
	var_1_17 = var_1_11;


	// From: Req3Batch34Amount25
	if (var_1_17) {
		if (var_1_4 != (var_1_1 * (var_1_1 * var_1_1))) {
			var_1_8 = var_1_11;
		}
	}


	// From: Req2Batch34Amount25
	if (var_1_8 || (256 >= (var_1_12 + 4))) {
		var_1_5 = ((var_1_8 || var_1_8) || var_1_7);
	} else {
		var_1_5 = (! (! 0));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return ((((((last_1_var_1_5 ? (last_1_var_1_17 ? (var_1_1 == ((double) (abs (var_1_4)))) : 1) : 1) && ((var_1_8 || (256 >= (var_1_12 + 4))) ? (var_1_5 == ((unsigned char) ((var_1_8 || var_1_8) || var_1_7))) : (var_1_5 == ((unsigned char) (! (! 0)))))) && (var_1_17 ? ((var_1_4 != (var_1_1 * (var_1_1 * var_1_1))) ? (var_1_8 == ((unsigned char) var_1_11)) : 1) : 1)) && (var_1_12 == ((signed short int) (max (128 , var_1_13))))) && (var_1_14 == ((unsigned short int) var_1_15))) && (var_1_16 == ((signed long int) var_1_13))) && (var_1_17 == ((unsigned char) var_1_11))
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
