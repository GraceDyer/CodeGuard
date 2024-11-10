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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch7325_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 5.5;
unsigned char var_1_6 = 1;
double var_1_7 = -0.41;
unsigned char var_1_8 = 25;
unsigned char var_1_9 = 100;
unsigned char var_1_10 = 1;
unsigned char var_1_12 = 10;
signed short int var_1_13 = -64;
signed long int var_1_14 = 10;
signed short int var_1_15 = -1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 25;
signed long int last_1_var_1_14 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch7325_while
	signed long int stepLocal_0 = max (last_1_var_1_8 , (last_1_var_1_14 + last_1_var_1_14));
	if (last_1_var_1_14 <= stepLocal_0) {
		if (! var_1_6) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req2Batch7325_while
	if (var_1_6) {
		var_1_8 = (max (var_1_9 , var_1_10));
	} else {
		if (var_1_1 < (var_1_1 + var_1_7)) {
			var_1_8 = var_1_12;
		}
	}


	// From: Req3Batch7325_while
	if ((9.99999999999995E13f + var_1_1) >= var_1_1) {
		var_1_13 = (-4 + var_1_10);
	} else {
		var_1_13 = ((min (var_1_9 , 8)) - 32);
	}


	// From: Req5Batch7325_while
	var_1_15 = var_1_12;


	// From: Req4Batch7325_while
	var_1_14 = var_1_15;
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_14 = var_1_14;
}

int property() {
	return (((((last_1_var_1_14 <= (max (last_1_var_1_8 , (last_1_var_1_14 + last_1_var_1_14)))) ? ((! var_1_6) ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) var_1_7))) : 1) && (var_1_6 ? (var_1_8 == ((unsigned char) (max (var_1_9 , var_1_10)))) : ((var_1_1 < (var_1_1 + var_1_7)) ? (var_1_8 == ((unsigned char) var_1_12)) : 1))) && (((9.99999999999995E13f + var_1_1) >= var_1_1) ? (var_1_13 == ((signed short int) (-4 + var_1_10))) : (var_1_13 == ((signed short int) ((min (var_1_9 , 8)) - 32))))) && (var_1_14 == ((signed long int) var_1_15))) && (var_1_15 == ((signed short int) var_1_12))
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
