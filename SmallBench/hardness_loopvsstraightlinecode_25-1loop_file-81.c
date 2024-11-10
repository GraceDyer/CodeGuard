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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8125_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 9999.5;
unsigned char var_1_2 = 1;
double var_1_3 = 4.5;
double var_1_4 = 2.5;
double var_1_5 = 0.0;
double var_1_6 = 999999999999.3;
signed char var_1_7 = -128;
signed char var_1_11 = -64;
signed char var_1_12 = 5;
signed char var_1_13 = 50;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;

// Calibration values

// Last'ed variables
signed char last_1_var_1_7 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch8125_1loop
	signed long int stepLocal_1 = (min (last_1_var_1_7 , last_1_var_1_7)) + last_1_var_1_7;
	if (last_1_var_1_7 <= stepLocal_1) {
		var_1_12 = (var_1_13 - 1);
	} else {
		var_1_12 = var_1_11;
	}


	// From: Req4Batch8125_1loop
	unsigned char stepLocal_3 = var_1_2;
	unsigned long int stepLocal_2 = max (25u , var_1_12);
	if (stepLocal_3 || var_1_15) {
		if (stepLocal_2 <= var_1_12) {
			if (var_1_2) {
				var_1_14 = var_1_16;
			} else {
				var_1_14 = var_1_17;
			}
		}
	} else {
		var_1_14 = var_1_16;
	}


	// From: Req2Batch8125_1loop
	signed long int stepLocal_0 = var_1_12 ^ var_1_12;
	if ((min (-25 , var_1_12)) != stepLocal_0) {
		if (var_1_14) {
			var_1_7 = var_1_11;
		}
	} else {
		var_1_7 = var_1_11;
	}


	// From: Req1Batch8125_1loop
	if (var_1_14) {
		var_1_1 = (max (var_1_3 , (var_1_4 - (var_1_5 - var_1_6))));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 4611686.018427382800e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
}

int property() {
	return (((var_1_14 ? (var_1_1 == ((double) (max (var_1_3 , (var_1_4 - (var_1_5 - var_1_6)))))) : 1) && (((min (-25 , var_1_12)) != (var_1_12 ^ var_1_12)) ? (var_1_14 ? (var_1_7 == ((signed char) var_1_11)) : 1) : (var_1_7 == ((signed char) var_1_11)))) && ((last_1_var_1_7 <= ((min (last_1_var_1_7 , last_1_var_1_7)) + last_1_var_1_7)) ? (var_1_12 == ((signed char) (var_1_13 - 1))) : (var_1_12 == ((signed char) var_1_11)))) && ((var_1_2 || var_1_15) ? (((max (25u , var_1_12)) <= var_1_12) ? (var_1_2 ? (var_1_14 == ((unsigned char) var_1_16)) : (var_1_14 == ((unsigned char) var_1_17))) : 1) : (var_1_14 == ((unsigned char) var_1_16)))
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
