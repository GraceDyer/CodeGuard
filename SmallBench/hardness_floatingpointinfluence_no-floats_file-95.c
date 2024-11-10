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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch95no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -64;
signed long int var_1_3 = 1;
signed long int var_1_4 = 8;
signed long int var_1_5 = 255;
signed long int var_1_6 = 50;
unsigned char var_1_7 = 0;
unsigned long int var_1_8 = 8;
unsigned char var_1_10 = 32;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 2;
signed short int var_1_13 = 0;
unsigned long int var_1_14 = 16;
signed char var_1_16 = -1;
signed char var_1_17 = -16;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch95no_floats
	var_1_1 = (abs (last_1_var_1_7));


	// From: Req2Batch95no_floats
	var_1_3 = ((var_1_4 - var_1_5) + (min (256.5f , (var_1_6 - 16.125f))));


	// From: Req5Batch95no_floats
	var_1_16 = var_1_17;


	// From: Req3Batch95no_floats
	signed long int stepLocal_0 = var_1_16 & var_1_1;
	if ((- (3351680781u - var_1_8)) > stepLocal_0) {
		var_1_7 = ((min (var_1_10 , (abs (var_1_11)))) + var_1_12);
	}


	// From: Req4Batch95no_floats
	if ((var_1_16 / var_1_14) < (var_1_7 >> var_1_7)) {
		var_1_13 = (abs (4 - var_1_11));
	} else {
		if (var_1_16 >= var_1_1) {
			var_1_13 = (-5 + (var_1_12 - var_1_11));
		} else {
			var_1_13 = 256;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967295);
	assume_abort_if_not(var_1_14 != 0);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
}

int property() {
	return ((((var_1_1 == ((signed long int) (abs (last_1_var_1_7)))) && (var_1_3 == ((signed long int) ((var_1_4 - var_1_5) + (min (256.5f , (var_1_6 - 16.125f))))))) && (((- (3351680781u - var_1_8)) > (var_1_16 & var_1_1)) ? (var_1_7 == ((unsigned char) ((min (var_1_10 , (abs (var_1_11)))) + var_1_12))) : 1)) && (((var_1_16 / var_1_14) < (var_1_7 >> var_1_7)) ? (var_1_13 == ((signed short int) (abs (4 - var_1_11)))) : ((var_1_16 >= var_1_1) ? (var_1_13 == ((signed short int) (-5 + (var_1_12 - var_1_11)))) : (var_1_13 == ((signed short int) 256))))) && (var_1_16 == ((signed char) var_1_17))
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
