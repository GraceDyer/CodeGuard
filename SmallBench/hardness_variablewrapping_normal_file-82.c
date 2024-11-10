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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 128.75;
unsigned char var_1_2 = 1;
float var_1_3 = 63.5;
float var_1_4 = 255.5;
unsigned char var_1_5 = 32;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 16;
unsigned char var_1_12 = 2;
unsigned char var_1_14 = 5;
unsigned char var_1_15 = 10;
double var_1_16 = 3.75;
unsigned char var_1_17 = 0;
double var_1_18 = 255.5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_5 = 32;
unsigned char last_1_var_1_12 = 2;
unsigned char last_1_var_1_17 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch82normal
	signed long int stepLocal_0 = last_1_var_1_17 | last_1_var_1_12;
	if ((last_1_var_1_5 / -2) >= stepLocal_0) {
		var_1_5 = (abs (var_1_9));
	} else {
		var_1_5 = (var_1_10 - (abs (var_1_11)));
	}


	// From: Req1Batch82normal
	if (! var_1_2) {
		if (var_1_2) {
			var_1_1 = (max (var_1_3 , var_1_4));
		}
	}


	// From: Req4Batch82normal
	var_1_16 = var_1_4;


	// From: Req5Batch82normal
	var_1_17 = var_1_9;


	// From: Req6Batch82normal
	var_1_18 = var_1_3;


	// From: Req3Batch82normal
	unsigned char stepLocal_1 = var_1_9;
	if ((var_1_5 + var_1_11) >= stepLocal_1) {
		if ((max (var_1_4 , (var_1_1 * var_1_3))) <= var_1_1) {
			var_1_12 = (max (var_1_11 , var_1_14));
		} else {
			if (var_1_2) {
				var_1_12 = (var_1_11 + var_1_15);
			}
		}
	} else {
		var_1_12 = var_1_9;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return ((((((! var_1_2) ? (var_1_2 ? (var_1_1 == ((float) (max (var_1_3 , var_1_4)))) : 1) : 1) && (((last_1_var_1_5 / -2) >= (last_1_var_1_17 | last_1_var_1_12)) ? (var_1_5 == ((unsigned char) (abs (var_1_9)))) : (var_1_5 == ((unsigned char) (var_1_10 - (abs (var_1_11))))))) && (((var_1_5 + var_1_11) >= var_1_9) ? (((max (var_1_4 , (var_1_1 * var_1_3))) <= var_1_1) ? (var_1_12 == ((unsigned char) (max (var_1_11 , var_1_14)))) : (var_1_2 ? (var_1_12 == ((unsigned char) (var_1_11 + var_1_15))) : 1)) : (var_1_12 == ((unsigned char) var_1_9)))) && (var_1_16 == ((double) var_1_4))) && (var_1_17 == ((unsigned char) var_1_9))) && (var_1_18 == ((double) var_1_3))
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
