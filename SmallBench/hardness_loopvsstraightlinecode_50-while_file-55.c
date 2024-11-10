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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5550_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.8;
double var_1_6 = 127.5;
double var_1_7 = 2.6;
double var_1_8 = 4.5;
signed short int var_1_9 = -128;
signed short int var_1_10 = 16;
signed short int var_1_11 = 4;
signed short int var_1_12 = 100;
signed short int var_1_13 = 64;
signed short int var_1_14 = 2;
signed long int var_1_15 = 5;
signed char var_1_17 = -2;
signed char var_1_18 = -4;
signed char var_1_19 = 8;
signed char var_1_20 = 10;
unsigned long int var_1_21 = 25;
unsigned long int var_1_22 = 3797799060;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -4;
signed short int var_1_28 = 24644;
signed char var_1_29 = 1;
signed char var_1_30 = -1;
unsigned char var_1_31 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch5550_while
	var_1_9 = (min ((var_1_10 - var_1_11) , ((var_1_12 + var_1_13) - var_1_14)));


	// From: Req4Batch5550_while
	var_1_17 = (var_1_18 + (var_1_19 - var_1_20));


	// From: Req8Batch5550_while
	var_1_29 = ((abs (var_1_30)) - var_1_20);


	// From: Req9Batch5550_while
	var_1_31 = var_1_26;


	// From: Req1Batch5550_while
	if (var_1_17 <= (var_1_17 * (var_1_29 * var_1_29))) {
		if (var_1_29 > var_1_29) {
			var_1_1 = ((min (var_1_6 , var_1_7)) + var_1_8);
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req6Batch5550_while
	if (var_1_31) {
		var_1_23 = (var_1_24 && var_1_25);
	} else {
		var_1_23 = (var_1_24 && (var_1_25 && var_1_26));
	}


	// From: Req7Batch5550_while
	if ((- (min (var_1_1 , var_1_8))) >= -0.875) {
		if (var_1_31) {
			var_1_27 = (var_1_19 - var_1_12);
		} else {
			var_1_27 = (var_1_13 - (var_1_28 - (var_1_20 + var_1_19)));
		}
	} else {
		var_1_27 = (min (var_1_29 , var_1_28));
	}


	// From: Req3Batch5550_while
	if (var_1_23) {
		var_1_15 = (var_1_14 - var_1_13);
	}


	// From: Req5Batch5550_while
	if (var_1_23) {
		var_1_21 = ((var_1_22 - (1000000000u - var_1_13)) - var_1_14);
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 3221225470);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -126);
	assume_abort_if_not(var_1_30 <= 126);
}



void updateLastVariables() {
}

int property() {
	return (((((((((var_1_17 <= (var_1_17 * (var_1_29 * var_1_29))) ? ((var_1_29 > var_1_29) ? (var_1_1 == ((double) ((min (var_1_6 , var_1_7)) + var_1_8))) : (var_1_1 == ((double) var_1_8))) : (var_1_1 == ((double) var_1_7))) && (var_1_9 == ((signed short int) (min ((var_1_10 - var_1_11) , ((var_1_12 + var_1_13) - var_1_14)))))) && (var_1_23 ? (var_1_15 == ((signed long int) (var_1_14 - var_1_13))) : 1)) && (var_1_17 == ((signed char) (var_1_18 + (var_1_19 - var_1_20))))) && (var_1_23 ? (var_1_21 == ((unsigned long int) ((var_1_22 - (1000000000u - var_1_13)) - var_1_14))) : 1)) && (var_1_31 ? (var_1_23 == ((unsigned char) (var_1_24 && var_1_25))) : (var_1_23 == ((unsigned char) (var_1_24 && (var_1_25 && var_1_26)))))) && (((- (min (var_1_1 , var_1_8))) >= -0.875) ? (var_1_31 ? (var_1_27 == ((signed short int) (var_1_19 - var_1_12))) : (var_1_27 == ((signed short int) (var_1_13 - (var_1_28 - (var_1_20 + var_1_19)))))) : (var_1_27 == ((signed short int) (min (var_1_29 , var_1_28)))))) && (var_1_29 == ((signed char) ((abs (var_1_30)) - var_1_20)))) && (var_1_31 == ((unsigned char) var_1_26))
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
