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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch4normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 4;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 10;
double var_1_11 = 15.6;
double var_1_12 = 256.4;
double var_1_13 = 49.15;
unsigned long int var_1_14 = 500;
unsigned long int var_1_15 = 2173307753;
unsigned long int var_1_16 = 3362224480;
signed short int var_1_17 = 16;
signed short int var_1_19 = 16;
signed short int var_1_20 = 4;
signed short int var_1_21 = 0;
signed short int var_1_22 = -25;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_6 = 4;
unsigned short int last_1_var_1_9 = 4;
unsigned long int last_1_var_1_14 = 500;
signed short int last_1_var_1_17 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch4normal
	signed long int stepLocal_0 = last_1_var_1_9;
	if (var_1_5) {
		if ((last_1_var_1_14 * (last_1_var_1_6 + last_1_var_1_17)) > stepLocal_0) {
			var_1_6 = 256;
		}
	}


	// From: Req5Batch4normal
	signed long int stepLocal_3 = last_1_var_1_9;
	if (last_1_var_1_14 >= stepLocal_3) {
		var_1_14 = ((max (var_1_15 , (var_1_16 - var_1_10))) - last_1_var_1_17);
	}


	// From: Req1Batch4normal
	if (var_1_6 <= var_1_14) {
		if ((- var_1_14) > var_1_6) {
			var_1_1 = 0;
		}
	} else {
		var_1_1 = (var_1_4 || var_1_5);
	}


	// From: Req3Batch4normal
	unsigned char stepLocal_2 = var_1_4;
	unsigned long int stepLocal_1 = var_1_14;
	if (stepLocal_2 || var_1_1) {
		var_1_9 = (min (32 , var_1_10));
	} else {
		if (stepLocal_1 >= var_1_6) {
			var_1_9 = var_1_10;
		} else {
			var_1_9 = var_1_10;
		}
	}


	// From: Req6Batch4normal
	unsigned char stepLocal_5 = var_1_1;
	unsigned char stepLocal_4 = var_1_1;
	if (stepLocal_4 && (var_1_5 && (var_1_12 < var_1_13))) {
		if (stepLocal_5 || (last_1_var_1_17 >= (max (var_1_14 , var_1_6)))) {
			var_1_17 = (min (((max (var_1_19 , 256)) + (var_1_20 - var_1_21)) , (var_1_22 + 64)));
		} else {
			var_1_17 = var_1_19;
		}
	}


	// From: Req4Batch4normal
	if (var_1_14 <= var_1_14) {
		if (! var_1_1) {
			var_1_11 = (var_1_12 - var_1_13);
		}
	} else {
		var_1_11 = var_1_12;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 2147483647);
	assume_abort_if_not(var_1_15 <= 4294967294);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 3221225470);
	assume_abort_if_not(var_1_16 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -16383);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= -16383);
	assume_abort_if_not(var_1_22 <= 16383);
}



void updateLastVariables() {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return ((((((var_1_6 <= var_1_14) ? (((- var_1_14) > var_1_6) ? (var_1_1 == ((unsigned char) 0)) : 1) : (var_1_1 == ((unsigned char) (var_1_4 || var_1_5)))) && (var_1_5 ? (((last_1_var_1_14 * (last_1_var_1_6 + last_1_var_1_17)) > last_1_var_1_9) ? (var_1_6 == ((unsigned short int) 256)) : 1) : 1)) && ((var_1_4 || var_1_1) ? (var_1_9 == ((unsigned short int) (min (32 , var_1_10)))) : ((var_1_14 >= var_1_6) ? (var_1_9 == ((unsigned short int) var_1_10)) : (var_1_9 == ((unsigned short int) var_1_10))))) && ((var_1_14 <= var_1_14) ? ((! var_1_1) ? (var_1_11 == ((double) (var_1_12 - var_1_13))) : 1) : (var_1_11 == ((double) var_1_12)))) && ((last_1_var_1_14 >= last_1_var_1_9) ? (var_1_14 == ((unsigned long int) ((max (var_1_15 , (var_1_16 - var_1_10))) - last_1_var_1_17))) : 1)) && ((var_1_1 && (var_1_5 && (var_1_12 < var_1_13))) ? ((var_1_1 || (last_1_var_1_17 >= (max (var_1_14 , var_1_6)))) ? (var_1_17 == ((signed short int) (min (((max (var_1_19 , 256)) + (var_1_20 - var_1_21)) , (var_1_22 + 64))))) : (var_1_17 == ((signed short int) var_1_19))) : 1)
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
