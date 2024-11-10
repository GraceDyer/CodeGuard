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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 10;
unsigned char var_1_3 = 4;
unsigned char var_1_7 = 0;
signed short int var_1_8 = 100;
unsigned char var_1_9 = 32;
double var_1_10 = 9.2;
double var_1_11 = 0.975;
signed short int var_1_12 = 1;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_8 = 100;
double last_1_var_1_10 = 9.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9Amount25
	if (last_1_var_1_8 <= 16) {
		var_1_1 = var_1_3;
	} else {
		if ((max (last_1_var_1_10 , last_1_var_1_10)) < last_1_var_1_10) {
			if (var_1_7) {
				var_1_1 = var_1_3;
			} else {
				var_1_1 = var_1_3;
			}
		} else {
			var_1_1 = var_1_3;
		}
	}


	// From: Req3Batch9Amount25
	var_1_9 = 64;


	// From: Req4Batch9Amount25
	var_1_10 = var_1_11;


	// From: Req2Batch9Amount25
	if ((10 << var_1_9) < (var_1_3 * var_1_1)) {
		var_1_8 = (var_1_9 + var_1_1);
	}


	// From: Req5Batch9Amount25
	unsigned char stepLocal_0 = var_1_10 > var_1_10;
	if (((var_1_1 + var_1_9) < 10) || stepLocal_0) {
		var_1_12 = (max (var_1_8 , var_1_1));
	} else {
		var_1_12 = var_1_8;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_10 = var_1_10;
}

int property() {
	return (((((last_1_var_1_8 <= 16) ? (var_1_1 == ((unsigned char) var_1_3)) : (((max (last_1_var_1_10 , last_1_var_1_10)) < last_1_var_1_10) ? (var_1_7 ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) var_1_3))) : (var_1_1 == ((unsigned char) var_1_3)))) && (((10 << var_1_9) < (var_1_3 * var_1_1)) ? (var_1_8 == ((signed short int) (var_1_9 + var_1_1))) : 1)) && (var_1_9 == ((unsigned char) 64))) && (var_1_10 == ((double) var_1_11))) && ((((var_1_1 + var_1_9) < 10) || (var_1_10 > var_1_10)) ? (var_1_12 == ((signed short int) (max (var_1_8 , var_1_1)))) : (var_1_12 == ((signed short int) var_1_8)))
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
