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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch42normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 16;
unsigned char var_1_2 = 0;
signed short int var_1_3 = -200;
signed short int var_1_4 = 2;
signed char var_1_5 = -8;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 128;
unsigned char var_1_8 = 1;
float var_1_9 = 9999999999.5;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = 200;
float var_1_14 = -0.8;
float var_1_15 = 127.25;
float var_1_16 = 3.5;
unsigned short int var_1_17 = 16;
unsigned short int var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch42normal
	if (var_1_2) {
		var_1_1 = (max (var_1_3 , var_1_4));
	} else {
		if ((abs (var_1_5)) >= var_1_3) {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch42normal
	if (var_1_5 >= -2) {
		var_1_6 = (var_1_7 - 100);
	}


	// From: Req3Batch42normal
	if ((49.5f <= var_1_9) && (var_1_2 && var_1_10)) {
		if (var_1_1 < var_1_7) {
			var_1_8 = (var_1_2 || var_1_11);
		} else {
			var_1_8 = var_1_11;
		}
	} else {
		var_1_8 = var_1_12;
	}


	// From: Req4Batch42normal
	if (var_1_6 >= (var_1_1 / var_1_7)) {
		if (var_1_1 != (max ((max (var_1_3 , var_1_6)) , var_1_5))) {
			var_1_13 = var_1_7;
		} else {
			var_1_13 = var_1_6;
		}
	} else {
		var_1_13 = var_1_3;
	}


	// From: Req5Batch42normal
	if (((min (var_1_13 , 8)) <= var_1_5) || var_1_2) {
		if (var_1_13 <= var_1_3) {
			var_1_14 = (var_1_15 + var_1_16);
		} else {
			var_1_14 = var_1_16;
		}
	} else {
		var_1_14 = var_1_16;
	}


	// From: Req6Batch42normal
	if (var_1_4 > var_1_3) {
		var_1_17 = (max (25 , (var_1_6 + var_1_18)));
	}


	// From: Req7Batch42normal
	if (var_1_9 <= var_1_15) {
		var_1_19 = (var_1_12 || var_1_20);
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32767);
	assume_abort_if_not(var_1_3 <= 32766);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -127);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 127);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
}



void updateLastVariables() {
}

int property() {
	return ((((((var_1_2 ? (var_1_1 == ((signed short int) (max (var_1_3 , var_1_4)))) : (((abs (var_1_5)) >= var_1_3) ? (var_1_1 == ((signed short int) var_1_5)) : 1)) && ((var_1_5 >= -2) ? (var_1_6 == ((unsigned char) (var_1_7 - 100))) : 1)) && (((49.5f <= var_1_9) && (var_1_2 && var_1_10)) ? ((var_1_1 < var_1_7) ? (var_1_8 == ((unsigned char) (var_1_2 || var_1_11))) : (var_1_8 == ((unsigned char) var_1_11))) : (var_1_8 == ((unsigned char) var_1_12)))) && ((var_1_6 >= (var_1_1 / var_1_7)) ? ((var_1_1 != (max ((max (var_1_3 , var_1_6)) , var_1_5))) ? (var_1_13 == ((signed short int) var_1_7)) : (var_1_13 == ((signed short int) var_1_6))) : (var_1_13 == ((signed short int) var_1_3)))) && ((((min (var_1_13 , 8)) <= var_1_5) || var_1_2) ? ((var_1_13 <= var_1_3) ? (var_1_14 == ((float) (var_1_15 + var_1_16))) : (var_1_14 == ((float) var_1_16))) : (var_1_14 == ((float) var_1_16)))) && ((var_1_4 > var_1_3) ? (var_1_17 == ((unsigned short int) (max (25 , (var_1_6 + var_1_18))))) : 1)) && ((var_1_9 <= var_1_15) ? (var_1_19 == ((unsigned char) (var_1_12 || var_1_20))) : 1)
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
