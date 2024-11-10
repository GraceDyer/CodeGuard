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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch15has_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -128;
unsigned char var_1_2 = 1;
unsigned char var_1_6 = 1;
signed char var_1_7 = 8;
unsigned long int var_1_8 = 1;
unsigned long int var_1_9 = 1885310857;
signed long int var_1_10 = -10;
double var_1_11 = 32.6;
double var_1_12 = 9.75;
double var_1_13 = 5.1;
double var_1_14 = 128.1;
double var_1_15 = 63.9;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_10 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch15has_floats
	if (var_1_2) {
		var_1_8 = ((1514707036u + (abs (var_1_9))) - last_1_var_1_10);
	} else {
		var_1_8 = (max (last_1_var_1_10 , var_1_9));
	}


	// From: Req3Batch15has_floats
	if (var_1_2) {
		var_1_10 = (var_1_8 + (abs (var_1_7)));
	}


	// From: Req1Batch15has_floats
	unsigned char stepLocal_1 = var_1_2;
	signed long int stepLocal_0 = var_1_10;
	if (stepLocal_1 || ((~ var_1_10) >= var_1_10)) {
		if (stepLocal_0 < var_1_8) {
			if (! var_1_6) {
				var_1_1 = var_1_7;
			}
		} else {
			var_1_1 = 2;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req4Batch15has_floats
	if (var_1_1 >= var_1_1) {
		var_1_11 = (var_1_12 - (max ((var_1_13 + var_1_14) , var_1_15)));
	} else {
		var_1_11 = (max (var_1_14 , var_1_13));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 1073741824);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
}

int property() {
	return ((((var_1_2 || ((~ var_1_10) >= var_1_10)) ? ((var_1_10 < var_1_8) ? ((! var_1_6) ? (var_1_1 == ((signed char) var_1_7)) : 1) : (var_1_1 == ((signed char) 2))) : (var_1_1 == ((signed char) var_1_7))) && (var_1_2 ? (var_1_8 == ((unsigned long int) ((1514707036u + (abs (var_1_9))) - last_1_var_1_10))) : (var_1_8 == ((unsigned long int) (max (last_1_var_1_10 , var_1_9)))))) && (var_1_2 ? (var_1_10 == ((signed long int) (var_1_8 + (abs (var_1_7))))) : 1)) && ((var_1_1 >= var_1_1) ? (var_1_11 == ((double) (var_1_12 - (max ((var_1_13 + var_1_14) , var_1_15))))) : (var_1_11 == ((double) (max (var_1_14 , var_1_13)))))
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
