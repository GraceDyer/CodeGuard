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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch90normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -32;
signed long int var_1_3 = 10;
signed long int var_1_4 = 64;
unsigned short int var_1_11 = 64;
unsigned short int var_1_12 = 8;
unsigned short int var_1_13 = 5;
signed short int var_1_14 = 8;
unsigned short int var_1_15 = 62763;
unsigned long int var_1_16 = 25;
float var_1_18 = 63.25;
unsigned char var_1_20 = 0;
float var_1_21 = 7.8;
float var_1_22 = 32.1;
unsigned char var_1_23 = 0;
signed long int var_1_24 = -16;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -32;
unsigned short int last_1_var_1_11 = 64;
signed short int last_1_var_1_14 = 8;
unsigned long int last_1_var_1_16 = 25;
float last_1_var_1_18 = 63.25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch90normal
	if ((last_1_var_1_14 / (min (var_1_3 , var_1_4))) <= (last_1_var_1_1 | last_1_var_1_16)) {
		if ((last_1_var_1_18 * last_1_var_1_18) < last_1_var_1_18) {
			var_1_1 = last_1_var_1_11;
		} else {
			var_1_1 = last_1_var_1_11;
		}
	} else {
		var_1_1 = last_1_var_1_11;
	}


	// From: Req6Batch90normal
	if ((- (- last_1_var_1_18)) != last_1_var_1_18) {
		if (var_1_12 <= (max (last_1_var_1_14 , (- last_1_var_1_14)))) {
			var_1_24 = -50;
		} else {
			var_1_24 = last_1_var_1_14;
		}
	} else {
		var_1_24 = last_1_var_1_14;
	}


	// From: Req3Batch90normal
	if (((var_1_15 - var_1_12) + var_1_24) < var_1_24) {
		var_1_14 = var_1_12;
	}


	// From: Req5Batch90normal
	unsigned short int stepLocal_0 = var_1_13;
	if (var_1_24 < stepLocal_0) {
		if (var_1_20) {
			var_1_18 = ((abs (var_1_21)) + var_1_22);
		} else {
			if (var_1_23) {
				var_1_18 = (var_1_22 + var_1_21);
			} else {
				var_1_18 = -0.75f;
			}
		}
	} else {
		var_1_18 = var_1_21;
	}


	// From: Req2Batch90normal
	if (var_1_18 != (var_1_18 + var_1_18)) {
		var_1_11 = ((var_1_12 + var_1_13) + 32);
	}


	// From: Req4Batch90normal
	if (((var_1_1 * var_1_4) + var_1_1) > var_1_1) {
		if (var_1_14 < var_1_1) {
			var_1_16 = var_1_12;
		}
	} else {
		var_1_16 = 0u;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16384);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65535);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return (((((((last_1_var_1_14 / (min (var_1_3 , var_1_4))) <= (last_1_var_1_1 | last_1_var_1_16)) ? (((last_1_var_1_18 * last_1_var_1_18) < last_1_var_1_18) ? (var_1_1 == ((signed long int) last_1_var_1_11)) : (var_1_1 == ((signed long int) last_1_var_1_11))) : (var_1_1 == ((signed long int) last_1_var_1_11))) && ((var_1_18 != (var_1_18 + var_1_18)) ? (var_1_11 == ((unsigned short int) ((var_1_12 + var_1_13) + 32))) : 1)) && ((((var_1_15 - var_1_12) + var_1_24) < var_1_24) ? (var_1_14 == ((signed short int) var_1_12)) : 1)) && ((((var_1_1 * var_1_4) + var_1_1) > var_1_1) ? ((var_1_14 < var_1_1) ? (var_1_16 == ((unsigned long int) var_1_12)) : 1) : (var_1_16 == ((unsigned long int) 0u)))) && ((var_1_24 < var_1_13) ? (var_1_20 ? (var_1_18 == ((float) ((abs (var_1_21)) + var_1_22))) : (var_1_23 ? (var_1_18 == ((float) (var_1_22 + var_1_21))) : (var_1_18 == ((float) -0.75f)))) : (var_1_18 == ((float) var_1_21)))) && (((- (- last_1_var_1_18)) != last_1_var_1_18) ? ((var_1_12 <= (max (last_1_var_1_14 , (- last_1_var_1_14)))) ? (var_1_24 == ((signed long int) -50)) : (var_1_24 == ((signed long int) last_1_var_1_14))) : (var_1_24 == ((signed long int) last_1_var_1_14)))
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
