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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch825_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 64;
signed char var_1_11 = 2;
signed char var_1_12 = 32;
signed char var_1_13 = 2;
float var_1_14 = 31.325;
float var_1_15 = 7.4;
float var_1_16 = 7.375;
unsigned short int var_1_17 = 256;
unsigned short int var_1_19 = 24509;
unsigned short int var_1_20 = 32;
unsigned short int var_1_21 = 4;

// Calibration values

// Last'ed variables
signed char last_1_var_1_11 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch825_1loop
	if ((abs (16)) < last_1_var_1_11) {
		var_1_11 = (var_1_12 + var_1_13);
	}


	// From: Req4Batch825_1loop
	var_1_14 = (var_1_15 - var_1_16);


	// From: Req5Batch825_1loop
	if (var_1_14 <= ((var_1_15 - var_1_16) * var_1_14)) {
		var_1_17 = ((var_1_19 - var_1_20) + var_1_21);
	} else {
		var_1_17 = var_1_20;
	}


	// From: Req1Batch825_1loop
	if (var_1_17 >= (8u * var_1_17)) {
		var_1_1 = (! (var_1_4 || (var_1_5 || var_1_6)));
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch825_1loop
	if (var_1_5) {
		var_1_8 = (var_1_17 + var_1_11);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 16383);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_11 = var_1_11;
}

int property() {
	return (((((var_1_17 >= (8u * var_1_17)) ? (var_1_1 == ((unsigned char) (! (var_1_4 || (var_1_5 || var_1_6))))) : (var_1_1 == ((unsigned char) var_1_7))) && (var_1_5 ? (var_1_8 == ((signed long int) (var_1_17 + var_1_11))) : 1)) && (((abs (16)) < last_1_var_1_11) ? (var_1_11 == ((signed char) (var_1_12 + var_1_13))) : 1)) && (var_1_14 == ((float) (var_1_15 - var_1_16)))) && ((var_1_14 <= ((var_1_15 - var_1_16) * var_1_14)) ? (var_1_17 == ((unsigned short int) ((var_1_19 - var_1_20) + var_1_21))) : (var_1_17 == ((unsigned short int) var_1_20)))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
