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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 32;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed char var_1_4 = -1;
signed char var_1_5 = 4;
signed long int var_1_6 = -100000;
signed long int var_1_7 = 0;
signed long int var_1_8 = 256;
unsigned short int var_1_9 = 35831;
float var_1_10 = 1.875;
float var_1_11 = 5.8;
float var_1_12 = 2.375;
float var_1_13 = 999999999999.75;
signed short int var_1_14 = 32;
signed short int var_1_15 = 25;
signed short int var_1_16 = 23809;
signed short int var_1_17 = 2;
float var_1_18 = 499.25;
signed long int var_1_19 = -4;
unsigned short int var_1_20 = 10;
unsigned short int var_1_21 = 16;
signed char var_1_22 = -10;
signed char var_1_23 = 25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch71stepLocals
	signed long int stepLocal_0 = var_1_4 - var_1_5;
	if (var_1_2) {
		if (stepLocal_0 > ((var_1_6 + var_1_7) * var_1_8)) {
			var_1_1 = (var_1_9 - var_1_5);
		}
	} else {
		if (var_1_3) {
			var_1_1 = 32;
		} else {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch71stepLocals
	var_1_10 = var_1_11;


	// From: Req3Batch71stepLocals
	signed long int stepLocal_1 = var_1_6;
	if (var_1_10 >= ((var_1_11 / var_1_13) / 31.9f)) {
		if (stepLocal_1 > var_1_4) {
			var_1_12 = var_1_11;
		} else {
			var_1_12 = var_1_11;
		}
	}


	// From: Req4Batch71stepLocals
	signed long int stepLocal_2 = var_1_7;
	if (! (var_1_5 < var_1_7)) {
		if (var_1_8 >= stepLocal_2) {
			var_1_14 = ((min (128 , (min (2 , var_1_4)))) + var_1_5);
		} else {
			var_1_14 = ((var_1_5 - var_1_15) + var_1_4);
		}
	} else {
		var_1_14 = (min ((max (var_1_4 , var_1_5)) , (var_1_15 - (var_1_16 - var_1_17))));
	}


	// From: Req5Batch71stepLocals
	var_1_18 = (max ((max (255.5f , var_1_11)) , 5.5f));


	// From: Req6Batch71stepLocals
	if (var_1_3) {
		var_1_19 = (max (var_1_17 , ((min (var_1_5 , var_1_9)) + (max (var_1_16 , var_1_1)))));
	} else {
		var_1_19 = var_1_5;
	}


	// From: Req7Batch71stepLocals
	var_1_20 = var_1_15;


	// From: Req8Batch71stepLocals
	var_1_21 = var_1_5;


	// From: Req9Batch71stepLocals
	var_1_22 = var_1_23;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
}



void updateLastVariables() {
}

int property() {
	return ((((((((var_1_2 ? (((var_1_4 - var_1_5) > ((var_1_6 + var_1_7) * var_1_8)) ? (var_1_1 == ((unsigned short int) (var_1_9 - var_1_5))) : 1) : (var_1_3 ? (var_1_1 == ((unsigned short int) 32)) : (var_1_1 == ((unsigned short int) var_1_5)))) && (var_1_10 == ((float) var_1_11))) && ((var_1_10 >= ((var_1_11 / var_1_13) / 31.9f)) ? ((var_1_6 > var_1_4) ? (var_1_12 == ((float) var_1_11)) : (var_1_12 == ((float) var_1_11))) : 1)) && ((! (var_1_5 < var_1_7)) ? ((var_1_8 >= var_1_7) ? (var_1_14 == ((signed short int) ((min (128 , (min (2 , var_1_4)))) + var_1_5))) : (var_1_14 == ((signed short int) ((var_1_5 - var_1_15) + var_1_4)))) : (var_1_14 == ((signed short int) (min ((max (var_1_4 , var_1_5)) , (var_1_15 - (var_1_16 - var_1_17)))))))) && (var_1_18 == ((float) (max ((max (255.5f , var_1_11)) , 5.5f))))) && (var_1_3 ? (var_1_19 == ((signed long int) (max (var_1_17 , ((min (var_1_5 , var_1_9)) + (max (var_1_16 , var_1_1))))))) : (var_1_19 == ((signed long int) var_1_5)))) && (var_1_20 == ((unsigned short int) var_1_15))) && (var_1_21 == ((unsigned short int) var_1_5))) && (var_1_22 == ((signed char) var_1_23))
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
