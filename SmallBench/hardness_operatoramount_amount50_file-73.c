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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73Amount50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 7.325;
double var_1_3 = 63.8;
double var_1_4 = 256.6;
double var_1_5 = 2.375;
double var_1_6 = 25.8;
unsigned char var_1_7 = 1;
double var_1_8 = 1.5;
unsigned long int var_1_9 = 32;
unsigned long int var_1_10 = 3567543019;
float var_1_12 = 31.875;
signed long int var_1_13 = 128;
unsigned char var_1_16 = 4;
unsigned char var_1_18 = 16;
signed long int var_1_19 = 64;
unsigned char var_1_20 = 0;
signed long int var_1_21 = 1897833385;
unsigned char var_1_22 = 2;
signed char var_1_23 = -5;
signed char var_1_24 = -4;
signed char var_1_25 = 2;
signed long int var_1_26 = -1000000;

// Calibration values

// Last'ed variables
float last_1_var_1_12 = 31.875;
signed long int last_1_var_1_13 = 128;
unsigned char last_1_var_1_16 = 4;
signed long int last_1_var_1_19 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch73Amount50
	if ((max ((last_1_var_1_19 / 2) , (~ last_1_var_1_16))) <= var_1_10) {
		var_1_12 = var_1_8;
	}


	// From: Req1Batch73Amount50
	if (var_1_12 > ((var_1_3 - var_1_4) / (max (var_1_5 , var_1_6)))) {
		if (var_1_7) {
			var_1_1 = var_1_8;
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req5Batch73Amount50
	if (var_1_3 >= (last_1_var_1_12 * var_1_4)) {
		var_1_16 = var_1_18;
	}


	// From: Req7Batch73Amount50
	var_1_22 = (abs (var_1_18));


	// From: Req8Batch73Amount50
	if (var_1_1 > var_1_5) {
		var_1_23 = (abs (min (var_1_24 , var_1_25)));
	} else {
		var_1_23 = var_1_24;
	}


	// From: Req9Batch73Amount50
	var_1_26 = var_1_25;


	// From: Req2Batch73Amount50
	if (var_1_1 < (var_1_4 - var_1_3)) {
		var_1_9 = (var_1_10 - var_1_16);
	}


	// From: Req4Batch73Amount50
	signed long int stepLocal_0 = var_1_26 >> var_1_10;
	if (stepLocal_0 < last_1_var_1_13) {
		var_1_13 = (min (var_1_26 , var_1_22));
	}


	// From: Req6Batch73Amount50
	if (var_1_7 && var_1_20) {
		var_1_19 = ((1827081742 - var_1_13) - (var_1_21 - (var_1_18 + var_1_16)));
	} else {
		if (2u >= (max (var_1_21 , var_1_9))) {
			var_1_19 = var_1_22;
		} else {
			var_1_19 = var_1_22;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -126);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -126);
	assume_abort_if_not(var_1_25 <= 126);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return (((((((((var_1_12 > ((var_1_3 - var_1_4) / (max (var_1_5 , var_1_6)))) ? (var_1_7 ? (var_1_1 == ((double) var_1_8)) : (var_1_1 == ((double) var_1_8))) : (var_1_1 == ((double) var_1_8))) && ((var_1_1 < (var_1_4 - var_1_3)) ? (var_1_9 == ((unsigned long int) (var_1_10 - var_1_16))) : 1)) && (((max ((last_1_var_1_19 / 2) , (~ last_1_var_1_16))) <= var_1_10) ? (var_1_12 == ((float) var_1_8)) : 1)) && (((var_1_26 >> var_1_10) < last_1_var_1_13) ? (var_1_13 == ((signed long int) (min (var_1_26 , var_1_22)))) : 1)) && ((var_1_3 >= (last_1_var_1_12 * var_1_4)) ? (var_1_16 == ((unsigned char) var_1_18)) : 1)) && ((var_1_7 && var_1_20) ? (var_1_19 == ((signed long int) ((1827081742 - var_1_13) - (var_1_21 - (var_1_18 + var_1_16))))) : ((2u >= (max (var_1_21 , var_1_9))) ? (var_1_19 == ((signed long int) var_1_22)) : (var_1_19 == ((signed long int) var_1_22))))) && (var_1_22 == ((unsigned char) (abs (var_1_18))))) && ((var_1_1 > var_1_5) ? (var_1_23 == ((signed char) (abs (min (var_1_24 , var_1_25))))) : (var_1_23 == ((signed char) var_1_24)))) && (var_1_26 == ((signed long int) var_1_25))
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
