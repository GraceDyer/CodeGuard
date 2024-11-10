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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 1000000000.1;
unsigned char var_1_3 = 1;
float var_1_4 = 8.2;
signed long int var_1_5 = -32;
double var_1_9 = 100.5;
double var_1_12 = 25.25;
double var_1_13 = 63.6;
double var_1_14 = 0.0;
double var_1_15 = 0.8;
signed char var_1_16 = -8;
signed char var_1_17 = 8;
unsigned short int var_1_18 = 2;
unsigned short int var_1_19 = 50;
unsigned short int var_1_20 = 0;

// Calibration values

// Last'ed variables
double last_1_var_1_9 = 100.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch65has_floats
	if (0.625f > last_1_var_1_9) {
		if (var_1_3) {
			var_1_1 = (abs (var_1_4));
		}
	} else {
		var_1_1 = (abs (var_1_4));
	}


	// From: Req4Batch65has_floats
	var_1_16 = var_1_17;


	// From: Req5Batch65has_floats
	var_1_18 = var_1_19;


	// From: Req6Batch65has_floats
	var_1_20 = var_1_19;


	// From: Req3Batch65has_floats
	if (var_1_3) {
		if (var_1_20 >= ((var_1_18 - var_1_20) * 64)) {
			var_1_9 = ((min (var_1_12 , 50.5)) - var_1_13);
		}
	} else {
		if (var_1_1 <= var_1_1) {
			var_1_9 = (var_1_13 - (var_1_14 - var_1_15));
		}
	}


	// From: Req2Batch65has_floats
	if (var_1_4 > var_1_9) {
		var_1_5 = ((max (var_1_20 , -64)) + ((var_1_20 + -2) + var_1_18));
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 4611686.018427382800e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return ((((((0.625f > last_1_var_1_9) ? (var_1_3 ? (var_1_1 == ((float) (abs (var_1_4)))) : 1) : (var_1_1 == ((float) (abs (var_1_4))))) && ((var_1_4 > var_1_9) ? (var_1_5 == ((signed long int) ((max (var_1_20 , -64)) + ((var_1_20 + -2) + var_1_18)))) : 1)) && (var_1_3 ? ((var_1_20 >= ((var_1_18 - var_1_20) * 64)) ? (var_1_9 == ((double) ((min (var_1_12 , 50.5)) - var_1_13))) : 1) : ((var_1_1 <= var_1_1) ? (var_1_9 == ((double) (var_1_13 - (var_1_14 - var_1_15)))) : 1))) && (var_1_16 == ((signed char) var_1_17))) && (var_1_18 == ((unsigned short int) var_1_19))) && (var_1_20 == ((unsigned short int) var_1_19))
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
