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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch25dependencies.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -256;
signed short int var_1_5 = -256;
double var_1_7 = 256.25;
double var_1_8 = 127.8;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
float var_1_12 = 999.75;
float var_1_13 = 64.5;
float var_1_14 = 127.25;
signed char var_1_15 = -32;
float var_1_16 = 32.7;
unsigned char var_1_17 = 16;
unsigned char var_1_18 = 32;
unsigned short int var_1_19 = 5;
signed long int var_1_21 = 100;
signed short int var_1_22 = 50;
double var_1_23 = 1000000.75;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -256;
signed short int last_1_var_1_5 = -256;
unsigned char last_1_var_1_10 = 0;
unsigned short int last_1_var_1_19 = 5;
signed short int last_1_var_1_22 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch25dependencies
	if (last_1_var_1_10 && (last_1_var_1_5 >= last_1_var_1_1)) {
		if (256 != last_1_var_1_5) {
			var_1_1 = (last_1_var_1_1 + last_1_var_1_5);
		}
	} else {
		if (last_1_var_1_1 >= last_1_var_1_5) {
			var_1_1 = last_1_var_1_5;
		} else {
			var_1_1 = last_1_var_1_1;
		}
	}


	// From: Req3Batch25dependencies
	var_1_10 = (last_1_var_1_10 && var_1_11);


	// From: Req5Batch25dependencies
	if (var_1_8 != (abs (var_1_14))) {
		if (var_1_10) {
			var_1_17 = var_1_18;
		}
	}


	// From: Req8Batch25dependencies
	var_1_22 = last_1_var_1_22;


	// From: Req9Batch25dependencies
	var_1_23 = var_1_14;


	// From: Req6Batch25dependencies
	if (var_1_22 < var_1_18) {
		var_1_19 = last_1_var_1_19;
	} else {
		if ((var_1_10 || var_1_10) || var_1_10) {
			var_1_19 = last_1_var_1_19;
		} else {
			var_1_19 = var_1_22;
		}
	}


	// From: Req7Batch25dependencies
	var_1_21 = var_1_22;


	// From: Req4Batch25dependencies
	if (! (var_1_23 <= var_1_7)) {
		var_1_12 = (min (var_1_13 , var_1_14));
	} else {
		if (((max (var_1_1 , var_1_17)) / var_1_15) < var_1_19) {
			var_1_12 = var_1_13;
		} else {
			var_1_12 = (var_1_16 + 49.6f);
		}
	}


	// From: Req2Batch25dependencies
	if (var_1_10 && var_1_10) {
		var_1_5 = (min (var_1_19 , -100));
	} else {
		if ((var_1_7 - var_1_8) > var_1_12) {
			var_1_5 = var_1_19;
		} else {
			var_1_5 = var_1_19;
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_22 = var_1_22;
}

int property() {
	return (((((((((last_1_var_1_10 && (last_1_var_1_5 >= last_1_var_1_1)) ? ((256 != last_1_var_1_5) ? (var_1_1 == ((signed long int) (last_1_var_1_1 + last_1_var_1_5))) : 1) : ((last_1_var_1_1 >= last_1_var_1_5) ? (var_1_1 == ((signed long int) last_1_var_1_5)) : (var_1_1 == ((signed long int) last_1_var_1_1)))) && ((var_1_10 && var_1_10) ? (var_1_5 == ((signed short int) (min (var_1_19 , -100)))) : (((var_1_7 - var_1_8) > var_1_12) ? (var_1_5 == ((signed short int) var_1_19)) : (var_1_5 == ((signed short int) var_1_19))))) && (var_1_10 == ((unsigned char) (last_1_var_1_10 && var_1_11)))) && ((! (var_1_23 <= var_1_7)) ? (var_1_12 == ((float) (min (var_1_13 , var_1_14)))) : ((((max (var_1_1 , var_1_17)) / var_1_15) < var_1_19) ? (var_1_12 == ((float) var_1_13)) : (var_1_12 == ((float) (var_1_16 + 49.6f)))))) && ((var_1_8 != (abs (var_1_14))) ? (var_1_10 ? (var_1_17 == ((unsigned char) var_1_18)) : 1) : 1)) && ((var_1_22 < var_1_18) ? (var_1_19 == ((unsigned short int) last_1_var_1_19)) : (((var_1_10 || var_1_10) || var_1_10) ? (var_1_19 == ((unsigned short int) last_1_var_1_19)) : (var_1_19 == ((unsigned short int) var_1_22))))) && (var_1_21 == ((signed long int) var_1_22))) && (var_1_22 == ((signed short int) last_1_var_1_22))) && (var_1_23 == ((double) var_1_14))
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
