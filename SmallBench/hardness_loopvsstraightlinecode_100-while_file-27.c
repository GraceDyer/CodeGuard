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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch27100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 32;
signed char var_1_3 = 25;
signed char var_1_4 = 10;
signed char var_1_5 = -10;
signed char var_1_6 = -1;
signed short int var_1_7 = -4;
signed char var_1_8 = 50;
signed short int var_1_9 = 2;
unsigned long int var_1_10 = 128;
unsigned char var_1_11 = 2;
unsigned long int var_1_12 = 2781423228;
unsigned long int var_1_13 = 3552320529;
double var_1_14 = 2.25;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 64;
double var_1_17 = 9.48;
double var_1_18 = 256.05;
float var_1_19 = 1.1;
float var_1_21 = 16.5;
float var_1_22 = 9.4;
unsigned short int var_1_23 = 100;
unsigned char var_1_24 = 5;
unsigned short int var_1_25 = 4;
unsigned short int var_1_26 = 48215;
unsigned short int var_1_27 = 10;
unsigned short int var_1_28 = 1;
signed char var_1_29 = 0;
unsigned long int var_1_30 = 1524073358;
unsigned char var_1_31 = 1;
double var_1_32 = 64.45;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch27100_while
	var_1_7 = (max (var_1_3 , var_1_4));


	// From: Req3Batch27100_while
	signed long int stepLocal_0 = 128 - 256;
	if ((var_1_4 * var_1_3) < stepLocal_0) {
		var_1_8 = (var_1_4 - 4);
	} else {
		var_1_8 = -16;
	}


	// From: Req4Batch27100_while
	var_1_9 = var_1_6;


	// From: Req8Batch27100_while
	signed char stepLocal_4 = var_1_4;
	if (var_1_12 >= stepLocal_4) {
		var_1_23 = var_1_16;
	}


	// From: Req9Batch27100_while
	var_1_24 = (var_1_16 + var_1_3);


	// From: Req11Batch27100_while
	if (var_1_8 != (var_1_11 + var_1_5)) {
		var_1_27 = var_1_15;
	}


	// From: Req14Batch27100_while
	var_1_31 = 0;


	// From: Req15Batch27100_while
	var_1_32 = var_1_17;


	// From: Req1Batch27100_while
	if (! (! var_1_31)) {
		var_1_1 = ((max ((var_1_3 - var_1_4) , var_1_5)) + var_1_6);
	} else {
		if (var_1_31) {
			var_1_1 = var_1_3;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req5Batch27100_while
	signed long int stepLocal_1 = (var_1_9 * 128) / var_1_11;
	if (var_1_31) {
		if (stepLocal_1 != (max ((var_1_4 - var_1_3) , var_1_1))) {
			var_1_10 = ((min (var_1_12 , (var_1_13 - var_1_3))) - var_1_4);
		} else {
			var_1_10 = var_1_11;
		}
	} else {
		var_1_10 = var_1_13;
	}


	// From: Req6Batch27100_while
	signed long int stepLocal_2 = (- var_1_11) / (var_1_15 + var_1_16);
	if (stepLocal_2 <= var_1_3) {
		var_1_14 = (max ((abs (var_1_17)) , var_1_18));
	} else {
		if (var_1_31) {
			var_1_14 = var_1_17;
		}
	}


	// From: Req12Batch27100_while
	unsigned long int stepLocal_5 = var_1_13;
	if ((~ var_1_10) >= stepLocal_5) {
		var_1_28 = (var_1_26 - var_1_4);
	}


	// From: Req10Batch27100_while
	if (-16 <= var_1_27) {
		if (var_1_5 == var_1_28) {
			var_1_25 = (max (var_1_4 , var_1_8));
		}
	} else {
		var_1_25 = ((abs (var_1_26)) - var_1_4);
	}


	// From: Req7Batch27100_while
	unsigned long int stepLocal_3 = var_1_10;
	if (var_1_31) {
		if (stepLocal_3 < (var_1_15 + (var_1_13 + var_1_25))) {
			var_1_19 = (var_1_21 - (var_1_22 + 8.25f));
		} else {
			var_1_19 = var_1_18;
		}
	} else {
		var_1_19 = var_1_22;
	}


	// From: Req13Batch27100_while
	if ((var_1_16 + var_1_3) < ((var_1_6 / var_1_11) | var_1_5)) {
		if ((3214144168u - (var_1_30 - var_1_10)) != (- var_1_27)) {
			var_1_29 = (max ((var_1_3 + var_1_5) , (abs (var_1_6))));
		}
	} else {
		if ((abs (var_1_19 + var_1_22)) < var_1_18) {
			if (var_1_22 <= var_1_19) {
				var_1_29 = var_1_4;
			}
		} else {
			var_1_29 = var_1_6;
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -63);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 255);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 2147483647);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 3221225470);
	assume_abort_if_not(var_1_13 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 128);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 1073741823);
	assume_abort_if_not(var_1_30 <= 2147483647);
}



void updateLastVariables() {
}

int property() {
	return (((((((((((((((! (! var_1_31)) ? (var_1_1 == ((signed char) ((max ((var_1_3 - var_1_4) , var_1_5)) + var_1_6))) : (var_1_31 ? (var_1_1 == ((signed char) var_1_3)) : (var_1_1 == ((signed char) var_1_4)))) && (var_1_7 == ((signed short int) (max (var_1_3 , var_1_4))))) && (((var_1_4 * var_1_3) < (128 - 256)) ? (var_1_8 == ((signed char) (var_1_4 - 4))) : (var_1_8 == ((signed char) -16)))) && (var_1_9 == ((signed short int) var_1_6))) && (var_1_31 ? ((((var_1_9 * 128) / var_1_11) != (max ((var_1_4 - var_1_3) , var_1_1))) ? (var_1_10 == ((unsigned long int) ((min (var_1_12 , (var_1_13 - var_1_3))) - var_1_4))) : (var_1_10 == ((unsigned long int) var_1_11))) : (var_1_10 == ((unsigned long int) var_1_13)))) && ((((- var_1_11) / (var_1_15 + var_1_16)) <= var_1_3) ? (var_1_14 == ((double) (max ((abs (var_1_17)) , var_1_18)))) : (var_1_31 ? (var_1_14 == ((double) var_1_17)) : 1))) && (var_1_31 ? ((var_1_10 < (var_1_15 + (var_1_13 + var_1_25))) ? (var_1_19 == ((float) (var_1_21 - (var_1_22 + 8.25f)))) : (var_1_19 == ((float) var_1_18))) : (var_1_19 == ((float) var_1_22)))) && ((var_1_12 >= var_1_4) ? (var_1_23 == ((unsigned short int) var_1_16)) : 1)) && (var_1_24 == ((unsigned char) (var_1_16 + var_1_3)))) && ((-16 <= var_1_27) ? ((var_1_5 == var_1_28) ? (var_1_25 == ((unsigned short int) (max (var_1_4 , var_1_8)))) : 1) : (var_1_25 == ((unsigned short int) ((abs (var_1_26)) - var_1_4))))) && ((var_1_8 != (var_1_11 + var_1_5)) ? (var_1_27 == ((unsigned short int) var_1_15)) : 1)) && (((~ var_1_10) >= var_1_13) ? (var_1_28 == ((unsigned short int) (var_1_26 - var_1_4))) : 1)) && (((var_1_16 + var_1_3) < ((var_1_6 / var_1_11) | var_1_5)) ? (((3214144168u - (var_1_30 - var_1_10)) != (- var_1_27)) ? (var_1_29 == ((signed char) (max ((var_1_3 + var_1_5) , (abs (var_1_6)))))) : 1) : (((abs (var_1_19 + var_1_22)) < var_1_18) ? ((var_1_22 <= var_1_19) ? (var_1_29 == ((signed char) var_1_4)) : 1) : (var_1_29 == ((signed char) var_1_6))))) && (var_1_31 == ((unsigned char) 0))) && (var_1_32 == ((double) var_1_17))
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
