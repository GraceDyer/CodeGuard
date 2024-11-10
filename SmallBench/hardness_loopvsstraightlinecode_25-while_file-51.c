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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5125_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 10.8;
unsigned char var_1_2 = 0;
signed short int var_1_5 = -16;
double var_1_6 = 100.01;
unsigned short int var_1_7 = 50;
signed short int var_1_8 = 5;
unsigned short int var_1_9 = 256;
signed long int var_1_10 = -100;
unsigned long int var_1_12 = 10000000;
unsigned short int var_1_13 = 2;
unsigned short int var_1_14 = 4;
double var_1_15 = 4.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch5125_while
	if (! (var_1_5 >= (abs (var_1_8)))) {
		var_1_7 = (var_1_9 + 1);
	}


	// From: Req4Batch5125_while
	var_1_12 = var_1_9;


	// From: Req5Batch5125_while
	var_1_13 = var_1_14;


	// From: Req6Batch5125_while
	var_1_15 = var_1_6;


	// From: Req1Batch5125_while
	unsigned long int stepLocal_0 = var_1_12;
	if (var_1_2) {
		if (stepLocal_0 >= (var_1_12 / var_1_5)) {
			var_1_1 = (abs (var_1_6));
		} else {
			var_1_1 = var_1_6;
		}
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req3Batch5125_while
	unsigned char stepLocal_1 = (var_1_6 * var_1_15) >= var_1_1;
	if (stepLocal_1 || var_1_2) {
		if (var_1_6 <= var_1_1) {
			var_1_10 = var_1_9;
		}
	} else {
		var_1_10 = -1;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854765600e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
}



void updateLastVariables() {
}

int property() {
	return (((((var_1_2 ? ((var_1_12 >= (var_1_12 / var_1_5)) ? (var_1_1 == ((double) (abs (var_1_6)))) : (var_1_1 == ((double) var_1_6))) : (var_1_1 == ((double) var_1_6))) && ((! (var_1_5 >= (abs (var_1_8)))) ? (var_1_7 == ((unsigned short int) (var_1_9 + 1))) : 1)) && ((((var_1_6 * var_1_15) >= var_1_1) || var_1_2) ? ((var_1_6 <= var_1_1) ? (var_1_10 == ((signed long int) var_1_9)) : 1) : (var_1_10 == ((signed long int) -1)))) && (var_1_12 == ((unsigned long int) var_1_9))) && (var_1_13 == ((unsigned short int) var_1_14))) && (var_1_15 == ((double) var_1_6))
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
