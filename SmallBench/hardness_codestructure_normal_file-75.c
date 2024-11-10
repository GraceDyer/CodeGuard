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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 63.6;
unsigned char var_1_2 = 1;
signed long int var_1_3 = -256;
float var_1_4 = 128.75;
float var_1_5 = 25.125;
float var_1_6 = 1000000.75;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 0;
signed long int var_1_10 = 64;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
float var_1_15 = 25.75;
double var_1_16 = 0.4;
double var_1_17 = 0.0;
double var_1_18 = 0.0;
double var_1_19 = 1000000000000.5;
double var_1_20 = 24.8;
signed char var_1_21 = 1;
double var_1_22 = 200.8;
unsigned short int var_1_23 = 40076;
unsigned short int var_1_24 = 8;
unsigned long int var_1_25 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch75normal
	if ((-1 <= var_1_3) || var_1_2) {
		var_1_1 = (var_1_4 + (var_1_5 + var_1_6));
	}


	// From: Req2Batch75normal
	if ((min ((var_1_3 + var_1_8) , (4 | var_1_9))) >= var_1_10) {
		var_1_7 = ((var_1_11 && var_1_12) && var_1_13);
	} else {
		if (var_1_6 == var_1_1) {
			var_1_7 = var_1_14;
		} else {
			var_1_7 = var_1_13;
		}
	}


	// From: Req3Batch75normal
	if (! (var_1_4 < 16.8f)) {
		var_1_15 = var_1_6;
	}


	// From: Req4Batch75normal
	if (var_1_8 > var_1_3) {
		var_1_16 = (((min (var_1_17 , var_1_18)) - var_1_19) - var_1_20);
	} else {
		if (var_1_18 > (var_1_20 + (var_1_19 * var_1_17))) {
			var_1_16 = var_1_6;
		} else {
			var_1_16 = var_1_20;
		}
	}


	// From: Req5Batch75normal
	if ((- (var_1_17 + var_1_15)) >= var_1_1) {
		var_1_21 = (abs (-50));
	}


	// From: Req6Batch75normal
	if (var_1_18 < (var_1_15 * var_1_4)) {
		if ((var_1_23 - var_1_24) < var_1_9) {
			var_1_22 = var_1_5;
		} else {
			var_1_22 = var_1_17;
		}
	} else {
		var_1_22 = var_1_20;
	}


	// From: Req7Batch75normal
	var_1_25 = var_1_23;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -230584.3009213691390e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691390e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -230584.3009213691390e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 2305843.009213691390e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65535);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65535);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 4611686.018427382800e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 4611686.018427382800e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
}



void updateLastVariables() {
}

int property() {
	return ((((((((-1 <= var_1_3) || var_1_2) ? (var_1_1 == ((float) (var_1_4 + (var_1_5 + var_1_6)))) : 1) && (((min ((var_1_3 + var_1_8) , (4 | var_1_9))) >= var_1_10) ? (var_1_7 == ((unsigned char) ((var_1_11 && var_1_12) && var_1_13))) : ((var_1_6 == var_1_1) ? (var_1_7 == ((unsigned char) var_1_14)) : (var_1_7 == ((unsigned char) var_1_13))))) && ((! (var_1_4 < 16.8f)) ? (var_1_15 == ((float) var_1_6)) : 1)) && ((var_1_8 > var_1_3) ? (var_1_16 == ((double) (((min (var_1_17 , var_1_18)) - var_1_19) - var_1_20))) : ((var_1_18 > (var_1_20 + (var_1_19 * var_1_17))) ? (var_1_16 == ((double) var_1_6)) : (var_1_16 == ((double) var_1_20))))) && (((- (var_1_17 + var_1_15)) >= var_1_1) ? (var_1_21 == ((signed char) (abs (-50)))) : 1)) && ((var_1_18 < (var_1_15 * var_1_4)) ? (((var_1_23 - var_1_24) < var_1_9) ? (var_1_22 == ((double) var_1_5)) : (var_1_22 == ((double) var_1_17))) : (var_1_22 == ((double) var_1_20)))) && (var_1_25 == ((unsigned long int) var_1_23))
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
