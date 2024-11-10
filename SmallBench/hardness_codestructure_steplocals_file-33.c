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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 8;
unsigned char var_1_2 = 10;
signed long int var_1_3 = 64;
signed long int var_1_4 = 50;
signed short int var_1_5 = -10;
signed short int var_1_6 = 25;
unsigned short int var_1_7 = 256;
double var_1_8 = 4.58;
double var_1_9 = -0.1;
unsigned char var_1_10 = 1;
signed short int var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
signed char var_1_14 = -16;
signed char var_1_15 = 8;
signed char var_1_16 = 8;
signed char var_1_17 = 10;
signed char var_1_18 = 0;
unsigned long int var_1_19 = 16;
signed char var_1_20 = 10;
signed char var_1_21 = -50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch33stepLocals
	signed long int stepLocal_1 = - var_1_2;
	signed long int stepLocal_0 = var_1_4;
	if (stepLocal_1 >= (-10 + (min (var_1_3 , var_1_4)))) {
		if ((~ (var_1_3 | var_1_2)) >= stepLocal_0) {
			var_1_1 = var_1_2;
		}
	} else {
		var_1_1 = var_1_2;
	}


	// From: Req2Batch33stepLocals
	var_1_5 = (max (var_1_2 , var_1_6));


	// From: Req3Batch33stepLocals
	unsigned char stepLocal_2 = var_1_10;
	if (((32.6 * var_1_8) >= var_1_9) && stepLocal_2) {
		var_1_7 = var_1_2;
	}


	// From: Req4Batch33stepLocals
	if (! (! (var_1_3 == var_1_5))) {
		var_1_11 = ((max (0 , var_1_2)) + 100);
	}


	// From: Req5Batch33stepLocals
	var_1_12 = (! ((var_1_2 < var_1_4) || var_1_13));


	// From: Req6Batch33stepLocals
	var_1_14 = (((max (var_1_15 , 1)) - var_1_16) + (var_1_17 - (4 + var_1_18)));


	// From: Req7Batch33stepLocals
	if (var_1_14 >= var_1_11) {
		if ((var_1_17 + (- 256u)) >= (var_1_4 % (abs (500u)))) {
			if (var_1_14 >= ((max (var_1_15 , var_1_1)) / (min (var_1_20 , var_1_21)))) {
				var_1_19 = var_1_17;
			} else {
				var_1_19 = var_1_7;
			}
		} else {
			var_1_19 = var_1_16;
		}
	} else {
		var_1_19 = var_1_18;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32767);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 31);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -128);
	assume_abort_if_not(var_1_20 <= 127);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -128);
	assume_abort_if_not(var_1_21 <= 127);
	assume_abort_if_not(var_1_21 != 0);
}



void updateLastVariables() {
}

int property() {
	return ((((((((- var_1_2) >= (-10 + (min (var_1_3 , var_1_4)))) ? (((~ (var_1_3 | var_1_2)) >= var_1_4) ? (var_1_1 == ((unsigned short int) var_1_2)) : 1) : (var_1_1 == ((unsigned short int) var_1_2))) && (var_1_5 == ((signed short int) (max (var_1_2 , var_1_6))))) && ((((32.6 * var_1_8) >= var_1_9) && var_1_10) ? (var_1_7 == ((unsigned short int) var_1_2)) : 1)) && ((! (! (var_1_3 == var_1_5))) ? (var_1_11 == ((signed short int) ((max (0 , var_1_2)) + 100))) : 1)) && (var_1_12 == ((unsigned char) (! ((var_1_2 < var_1_4) || var_1_13))))) && (var_1_14 == ((signed char) (((max (var_1_15 , 1)) - var_1_16) + (var_1_17 - (4 + var_1_18)))))) && ((var_1_14 >= var_1_11) ? (((var_1_17 + (- 256u)) >= (var_1_4 % (abs (500u)))) ? ((var_1_14 >= ((max (var_1_15 , var_1_1)) / (min (var_1_20 , var_1_21)))) ? (var_1_19 == ((unsigned long int) var_1_17)) : (var_1_19 == ((unsigned long int) var_1_7))) : (var_1_19 == ((unsigned long int) var_1_16))) : (var_1_19 == ((unsigned long int) var_1_18)))
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
