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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch35has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 4.8;
float var_1_4 = 255.1;
float var_1_5 = -0.6;
signed short int var_1_6 = -10;
unsigned char var_1_8 = 1;
signed char var_1_11 = -2;
signed char var_1_12 = 10;
signed char var_1_13 = 5;
signed char var_1_14 = -1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 5;
unsigned char var_1_19 = 64;
unsigned char var_1_20 = 5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_18 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch35has_floats
	signed long int stepLocal_0 = ~ last_1_var_1_18;
	if (last_1_var_1_18 >= stepLocal_0) {
		var_1_1 = (var_1_4 + var_1_5);
	}


	// From: Req5Batch35has_floats
	unsigned char stepLocal_1 = (var_1_1 * var_1_5) >= var_1_4;
	if (var_1_17 && stepLocal_1) {
		var_1_18 = (2 + ((var_1_19 - var_1_20) + 32));
	} else {
		var_1_18 = var_1_19;
	}


	// From: Req4Batch35has_floats
	if (var_1_8) {
		var_1_15 = (! var_1_16);
	} else {
		var_1_15 = (! var_1_17);
	}


	// From: Req3Batch35has_floats
	if (var_1_15) {
		var_1_11 = ((var_1_12 + (min (10 , var_1_13))) + var_1_14);
	}


	// From: Req2Batch35has_floats
	if (var_1_15) {
		if (var_1_15) {
			var_1_6 = (var_1_11 + var_1_11);
		} else {
			var_1_6 = (var_1_11 + var_1_11);
		}
	} else {
		var_1_6 = var_1_11;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427382800e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -31);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 32);
	assume_abort_if_not(var_1_19 <= 64);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32);
}



void updateLastVariables() {
	last_1_var_1_18 = var_1_18;
}

int property() {
	return (((((last_1_var_1_18 >= (~ last_1_var_1_18)) ? (var_1_1 == ((float) (var_1_4 + var_1_5))) : 1) && (var_1_15 ? (var_1_15 ? (var_1_6 == ((signed short int) (var_1_11 + var_1_11))) : (var_1_6 == ((signed short int) (var_1_11 + var_1_11)))) : (var_1_6 == ((signed short int) var_1_11)))) && (var_1_15 ? (var_1_11 == ((signed char) ((var_1_12 + (min (10 , var_1_13))) + var_1_14))) : 1)) && (var_1_8 ? (var_1_15 == ((unsigned char) (! var_1_16))) : (var_1_15 == ((unsigned char) (! var_1_17))))) && ((var_1_17 && ((var_1_1 * var_1_5) >= var_1_4)) ? (var_1_18 == ((unsigned char) (2 + ((var_1_19 - var_1_20) + 32)))) : (var_1_18 == ((unsigned char) var_1_19)))
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
