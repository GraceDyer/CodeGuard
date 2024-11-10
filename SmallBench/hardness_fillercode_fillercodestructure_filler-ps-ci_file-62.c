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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch62Filler_PS_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 5.25;
signed long int var_1_3 = -25;
signed long int var_1_4 = -128;
double var_1_6 = 2.75;
double var_1_7 = 24.5;
double var_1_8 = 199.5;
float var_1_9 = 32.8;
unsigned char var_1_10 = 1;
float var_1_11 = 15.4;
float var_1_12 = 0.0;
unsigned long int var_1_13 = 2;
float var_1_16 = 127.6;
signed long int var_1_17 = 128;
unsigned char var_1_19 = 10;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 64;
double var_1_22 = 15.95;
unsigned long int var_1_23 = 4127848294;
unsigned long int var_1_24 = 256;
unsigned char var_1_27 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
double var_1_32 = 32.7;
unsigned char var_1_34 = 1;
unsigned long int var_1_35 = 1000;
signed char var_1_39 = -32;
signed char var_1_40 = 16;
signed char var_1_41 = 4;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
float var_1_44 = 99999999999.2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_20) {
		var_1_24 = (max ((min ((abs (var_1_19)) , 64u)) , 32u));
	}


	// From: CodeObject2
	if (var_1_19 <= 32u) {
		if (var_1_19 < var_1_19) {
			var_1_27 = (var_1_10 || (var_1_10 || var_1_29));
		}
	} else {
		if ((~ var_1_19) < var_1_19) {
			var_1_27 = 0;
		} else {
			var_1_27 = var_1_30;
		}
	}


	// From: CodeObject3
	var_1_31 = var_1_30;


	// From: CodeObject4
	if (var_1_19 <= var_1_19) {
		var_1_32 = (abs (abs (var_1_8)));
	}


	// From: CodeObject5
	var_1_34 = (! (var_1_10 && var_1_30));


	// From: CodeObject6
	if (((var_1_3 >> var_1_19) % -10) >= var_1_19) {
		if ((var_1_12 - (abs (var_1_6))) != var_1_7) {
			var_1_35 = (min (var_1_19 , var_1_19));
		}
	}


	// From: CodeObject7
	if (-32 >= var_1_19) {
		var_1_39 = (max ((5 + var_1_40) , var_1_41));
	}


	// From: CodeObject8
	if (var_1_10) {
		var_1_42 = (var_1_10 && (var_1_30 || var_1_43));
	}


	// From: CodeObject9
	if (var_1_12 < (min (var_1_6 , var_1_7))) {
		var_1_44 = (var_1_8 + var_1_11);
	}


	// From: Req4Batch62Filler_PS_CI
	if (var_1_12 <= (var_1_7 * 5.8f)) {
		var_1_16 = (min ((max (var_1_12 , var_1_7)) , var_1_8));
	} else {
		var_1_16 = var_1_6;
	}


	// From: Req6Batch62Filler_PS_CI
	if (var_1_10 || var_1_20) {
		var_1_19 = (max (var_1_21 , 32));
	}


	// From: Req7Batch62Filler_PS_CI
	if (var_1_10) {
		if ((var_1_19 | var_1_19) != (var_1_23 - var_1_19)) {
			var_1_22 = 4.75;
		}
	}


	// From: Req1Batch62Filler_PS_CI
	signed long int stepLocal_0 = (var_1_3 % var_1_4) * var_1_19;
	if (var_1_19 > stepLocal_0) {
		var_1_1 = (var_1_6 - (var_1_7 + var_1_8));
	} else {
		var_1_1 = (var_1_6 - (var_1_8 + var_1_7));
	}


	// From: Req3Batch62Filler_PS_CI
	if (! var_1_10) {
		var_1_13 = (50u + var_1_19);
	} else {
		var_1_13 = (var_1_19 + var_1_19);
	}


	// From: Req5Batch62Filler_PS_CI
	if (var_1_8 < (var_1_22 / var_1_12)) {
		if (var_1_22 > var_1_6) {
			var_1_17 = var_1_19;
		}
	}


	// From: Req2Batch62Filler_PS_CI
	if (var_1_10 || (var_1_19 == var_1_13)) {
		var_1_9 = ((127.5f - (max (var_1_8 , var_1_7))) + (16.1f + var_1_11));
	} else {
		var_1_9 = (min (((var_1_12 - var_1_7) - var_1_6) , var_1_11));
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
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 4611686.018427382800e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 2147483647);
	assume_abort_if_not(var_1_23 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_19 > ((var_1_3 % var_1_4) * var_1_19)) ? (var_1_1 == ((double) (var_1_6 - (var_1_7 + var_1_8)))) : (var_1_1 == ((double) (var_1_6 - (var_1_8 + var_1_7))))) && ((var_1_10 || (var_1_19 == var_1_13)) ? (var_1_9 == ((float) ((127.5f - (max (var_1_8 , var_1_7))) + (16.1f + var_1_11)))) : (var_1_9 == ((float) (min (((var_1_12 - var_1_7) - var_1_6) , var_1_11)))))) && ((! var_1_10) ? (var_1_13 == ((unsigned long int) (50u + var_1_19))) : (var_1_13 == ((unsigned long int) (var_1_19 + var_1_19))))) && ((var_1_12 <= (var_1_7 * 5.8f)) ? (var_1_16 == ((float) (min ((max (var_1_12 , var_1_7)) , var_1_8)))) : (var_1_16 == ((float) var_1_6)))) && ((var_1_8 < (var_1_22 / var_1_12)) ? ((var_1_22 > var_1_6) ? (var_1_17 == ((signed long int) var_1_19)) : 1) : 1)) && ((var_1_10 || var_1_20) ? (var_1_19 == ((unsigned char) (max (var_1_21 , 32)))) : 1)) && (var_1_10 ? (((var_1_19 | var_1_19) != (var_1_23 - var_1_19)) ? (var_1_22 == ((double) 4.75)) : 1) : 1)
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
