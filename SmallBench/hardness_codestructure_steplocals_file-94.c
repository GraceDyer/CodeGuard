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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch94stepLocals.c", 13, "reach_error"); }
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
signed char var_1_2 = -25;
signed char var_1_3 = 1;
signed short int var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 50;
double var_1_9 = 32.7;
double var_1_10 = 64.25;
double var_1_11 = 10.3;
double var_1_12 = 3.3;
double var_1_13 = 16.5;
double var_1_14 = 7.125;
unsigned short int var_1_15 = 50;
unsigned short int var_1_16 = 16;
unsigned short int var_1_17 = 8;
unsigned short int var_1_18 = 64;
unsigned long int var_1_19 = 16;
signed short int var_1_20 = 100;
signed short int var_1_21 = 2;
signed short int var_1_22 = 8;
signed long int var_1_23 = -4;
unsigned short int var_1_24 = 128;
signed long int var_1_25 = 2;
unsigned short int var_1_26 = 256;
unsigned char var_1_27 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch94stepLocals
	signed long int stepLocal_1 = -1000000000 + var_1_2;
	signed long int stepLocal_0 = -1 << var_1_2;
	if (stepLocal_0 < var_1_3) {
		if ((var_1_4 / var_1_3) > stepLocal_1) {
			var_1_1 = (var_1_5 || var_1_6);
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req2Batch94stepLocals
	if (var_1_7 || var_1_5) {
		if ((var_1_2 >= var_1_3) && var_1_1) {
			var_1_8 = (min (var_1_3 , var_1_2));
		} else {
			if (var_1_5) {
				var_1_8 = var_1_4;
			} else {
				var_1_8 = var_1_4;
			}
		}
	} else {
		var_1_8 = var_1_4;
	}


	// From: Req3Batch94stepLocals
	var_1_9 = ((min (var_1_10 , var_1_11)) + (var_1_12 + (var_1_13 - var_1_14)));


	// From: Req4Batch94stepLocals
	if (var_1_10 >= var_1_11) {
		var_1_15 = (max ((max ((abs (var_1_16)) , var_1_17)) , var_1_18));
	}


	// From: Req5Batch94stepLocals
	if (((max (var_1_20 , var_1_21)) - var_1_22) >= var_1_2) {
		var_1_19 = (max (var_1_17 , var_1_18));
	}


	// From: Req6Batch94stepLocals
	if (var_1_6 || (var_1_16 <= (var_1_22 / var_1_24))) {
		var_1_23 = (min ((var_1_2 + (var_1_21 + var_1_24)) , (abs (var_1_4))));
	}


	// From: Req7Batch94stepLocals
	var_1_25 = -256;


	// From: Req8Batch94stepLocals
	var_1_26 = var_1_17;


	// From: Req9Batch94stepLocals
	var_1_27 = var_1_6;
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -128);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	assume_abort_if_not(var_1_24 != 0);
}



void updateLastVariables() {
}

int property() {
	return ((((((((((-1 << var_1_2) < var_1_3) ? (((var_1_4 / var_1_3) > (-1000000000 + var_1_2)) ? (var_1_1 == ((unsigned char) (var_1_5 || var_1_6))) : (var_1_1 == ((unsigned char) var_1_7))) : 1) && ((var_1_7 || var_1_5) ? (((var_1_2 >= var_1_3) && var_1_1) ? (var_1_8 == ((signed long int) (min (var_1_3 , var_1_2)))) : (var_1_5 ? (var_1_8 == ((signed long int) var_1_4)) : (var_1_8 == ((signed long int) var_1_4)))) : (var_1_8 == ((signed long int) var_1_4)))) && (var_1_9 == ((double) ((min (var_1_10 , var_1_11)) + (var_1_12 + (var_1_13 - var_1_14)))))) && ((var_1_10 >= var_1_11) ? (var_1_15 == ((unsigned short int) (max ((max ((abs (var_1_16)) , var_1_17)) , var_1_18)))) : 1)) && ((((max (var_1_20 , var_1_21)) - var_1_22) >= var_1_2) ? (var_1_19 == ((unsigned long int) (max (var_1_17 , var_1_18)))) : 1)) && ((var_1_6 || (var_1_16 <= (var_1_22 / var_1_24))) ? (var_1_23 == ((signed long int) (min ((var_1_2 + (var_1_21 + var_1_24)) , (abs (var_1_4)))))) : 1)) && (var_1_25 == ((signed long int) -256))) && (var_1_26 == ((unsigned short int) var_1_17))) && (var_1_27 == ((unsigned char) var_1_6))
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
