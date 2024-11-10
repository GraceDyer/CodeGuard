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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
signed long int var_1_2 = -16;
signed long int var_1_3 = 4;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 256;
signed long int var_1_6 = 32;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed short int var_1_9 = -2;
signed short int var_1_10 = -1;
signed short int var_1_11 = 4;
signed short int var_1_12 = -10;
float var_1_13 = 999.4;
float var_1_14 = 100.425;
float var_1_15 = 3.375;
float var_1_16 = 15.9;
signed short int var_1_17 = -10;
signed short int var_1_18 = 18060;
signed short int var_1_19 = 128;
unsigned char var_1_20 = 0;
unsigned long int var_1_21 = 4;
unsigned long int var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 100;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 256;
unsigned char var_1_30 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch50stepLocals
	signed long int stepLocal_1 = max (var_1_2 , var_1_3);
	signed long int stepLocal_0 = var_1_5;
	if (stepLocal_1 <= (var_1_5 - var_1_6)) {
		if (stepLocal_0 < var_1_6) {
			if (var_1_4) {
				var_1_1 = var_1_7;
			} else {
				var_1_1 = var_1_8;
			}
		}
	} else {
		var_1_1 = 0;
	}


	// From: Req2Batch50stepLocals
	if ((var_1_6 > var_1_3) && var_1_1) {
		var_1_9 = var_1_10;
	} else {
		var_1_9 = (max (var_1_10 , (min ((var_1_11 - 10) , var_1_12))));
	}


	// From: Req3Batch50stepLocals
	if (var_1_8) {
		var_1_13 = (min ((var_1_14 + var_1_15) , (min (-0.2f , var_1_16))));
	}


	// From: Req4Batch50stepLocals
	var_1_17 = ((var_1_18 - 25) - var_1_19);


	// From: Req5Batch50stepLocals
	unsigned long int stepLocal_2 = var_1_22 + var_1_3;
	if (((var_1_18 % var_1_21) & (abs (1u))) < stepLocal_2) {
		var_1_20 = (var_1_23 || var_1_24);
	} else {
		var_1_20 = var_1_7;
	}


	// From: Req6Batch50stepLocals
	if (var_1_8) {
		var_1_25 = (var_1_26 + var_1_27);
	}


	// From: Req7Batch50stepLocals
	signed long int stepLocal_3 = ~ var_1_5;
	if (stepLocal_3 > var_1_3) {
		var_1_28 = (! var_1_7);
	} else {
		var_1_28 = (var_1_20 || ((! var_1_23) && (var_1_24 || var_1_7)));
	}


	// From: Req8Batch50stepLocals
	var_1_29 = var_1_27;


	// From: Req9Batch50stepLocals
	var_1_30 = var_1_8;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32767);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32767);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 16382);
	assume_abort_if_not(var_1_18 <= 32766);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 4294967295);
	assume_abort_if_not(var_1_21 != 0);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
}



void updateLastVariables() {
}

int property() {
	return ((((((((((max (var_1_2 , var_1_3)) <= (var_1_5 - var_1_6)) ? ((var_1_5 < var_1_6) ? (var_1_4 ? (var_1_1 == ((unsigned char) var_1_7)) : (var_1_1 == ((unsigned char) var_1_8))) : 1) : (var_1_1 == ((unsigned char) 0))) && (((var_1_6 > var_1_3) && var_1_1) ? (var_1_9 == ((signed short int) var_1_10)) : (var_1_9 == ((signed short int) (max (var_1_10 , (min ((var_1_11 - 10) , var_1_12)))))))) && (var_1_8 ? (var_1_13 == ((float) (min ((var_1_14 + var_1_15) , (min (-0.2f , var_1_16)))))) : 1)) && (var_1_17 == ((signed short int) ((var_1_18 - 25) - var_1_19)))) && ((((var_1_18 % var_1_21) & (abs (1u))) < (var_1_22 + var_1_3)) ? (var_1_20 == ((unsigned char) (var_1_23 || var_1_24))) : (var_1_20 == ((unsigned char) var_1_7)))) && (var_1_8 ? (var_1_25 == ((unsigned char) (var_1_26 + var_1_27))) : 1)) && (((~ var_1_5) > var_1_3) ? (var_1_28 == ((unsigned char) (! var_1_7))) : (var_1_28 == ((unsigned char) (var_1_20 || ((! var_1_23) && (var_1_24 || var_1_7))))))) && (var_1_29 == ((unsigned short int) var_1_27))) && (var_1_30 == ((unsigned char) var_1_8))
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
