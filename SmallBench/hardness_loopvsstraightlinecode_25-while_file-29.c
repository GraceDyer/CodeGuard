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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch2925_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 2.5;
unsigned char var_1_2 = 0;
float var_1_3 = 9.3;
float var_1_4 = 3.4;
unsigned short int var_1_5 = 32;
unsigned short int var_1_6 = 10;
unsigned short int var_1_7 = 64;
unsigned short int var_1_8 = 16;
unsigned short int var_1_9 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch2925_while
	if (var_1_2) {
		var_1_1 = var_1_3;
	} else {
		if (! (var_1_3 < var_1_4)) {
			var_1_1 = (abs (var_1_3));
		}
	}


	// From: Req2Batch2925_while
	if ((var_1_1 + 8.125) > (var_1_1 * var_1_3)) {
		var_1_5 = (max ((var_1_6 + var_1_7) , var_1_8));
	} else {
		var_1_5 = var_1_8;
	}


	// From: Req3Batch2925_while
	signed long int stepLocal_0 = 5 * var_1_8;
	if ((min (var_1_3 , var_1_1)) == var_1_1) {
		if (var_1_6 > stepLocal_0) {
			if (var_1_1 < (var_1_1 * 256.5f)) {
				var_1_9 = var_1_6;
			}
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
}



void updateLastVariables() {
}

int property() {
	return ((var_1_2 ? (var_1_1 == ((float) var_1_3)) : ((! (var_1_3 < var_1_4)) ? (var_1_1 == ((float) (abs (var_1_3)))) : 1)) && (((var_1_1 + 8.125) > (var_1_1 * var_1_3)) ? (var_1_5 == ((unsigned short int) (max ((var_1_6 + var_1_7) , var_1_8)))) : (var_1_5 == ((unsigned short int) var_1_8)))) && (((min (var_1_3 , var_1_1)) == var_1_1) ? ((var_1_6 > (5 * var_1_8)) ? ((var_1_1 < (var_1_1 * 256.5f)) ? (var_1_9 == ((unsigned short int) var_1_6)) : 1) : 1) : 1)
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
