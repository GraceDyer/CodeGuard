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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch95PS_CN_10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
double var_1_2 = 32.25;
double var_1_3 = 16.5;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
signed char var_1_7 = -5;
unsigned char var_1_8 = 0;
signed char var_1_9 = -10;
signed short int var_1_10 = 64;
unsigned short int var_1_11 = 0;
float var_1_12 = 64.75;
double var_1_13 = 5.4;
float var_1_14 = 5.625;
unsigned long int var_1_15 = 32;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 0;
unsigned long int var_1_18 = 500;
float var_1_19 = 1.8;
float var_1_20 = 32.5;
signed char var_1_21 = 4;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 10;
unsigned long int var_1_25 = 100000;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_11 = 0;
float last_1_var_1_12 = 64.75;
unsigned long int last_1_var_1_15 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_16 = var_1_17;


	// From: CodeObject2
	var_1_18 = var_1_17;


	// From: CodeObject3
	var_1_19 = var_1_20;


	// From: CodeObject4
	var_1_21 = -8;


	// From: CodeObject5
	var_1_22 = var_1_23;


	// From: CodeObject6
	if (var_1_23 < var_1_16) {
		var_1_24 = (abs (var_1_23));
	}


	// From: CodeObject7
	var_1_25 = var_1_17;


	// From: Req4Batch95PS_CN_10
	unsigned long int stepLocal_1 = var_1_6 - last_1_var_1_15;
	if (stepLocal_1 < ((last_1_var_1_11 ^ last_1_var_1_15) / (max (-8 , var_1_5)))) {
		if (last_1_var_1_12 == last_1_var_1_12) {
			var_1_11 = last_1_var_1_15;
		}
	}


	// From: Req2Batch95PS_CN_10
	if ((var_1_5 <= var_1_4) && var_1_8) {
		if (var_1_8) {
			var_1_7 = (var_1_6 + (min (5 , var_1_9)));
		} else {
			var_1_7 = (min (var_1_6 , var_1_9));
		}
	} else {
		if ((-8 * var_1_11) < var_1_4) {
			var_1_7 = 1;
		} else {
			var_1_7 = var_1_9;
		}
	}


	// From: Req6Batch95PS_CN_10
	if (128 >= last_1_var_1_15) {
		var_1_15 = (var_1_6 + (var_1_4 + var_1_11));
	} else {
		var_1_15 = var_1_7;
	}


	// From: Req5Batch95PS_CN_10
	if (var_1_2 != (var_1_3 / (abs (var_1_13)))) {
		var_1_12 = var_1_14;
	}


	// From: Req1Batch95PS_CN_10
	if ((10.8 + var_1_12) <= (- var_1_12)) {
		var_1_1 = ((min (1 , var_1_4)) + (var_1_5 - var_1_6));
	}


	// From: Req3Batch95PS_CN_10
	unsigned char stepLocal_0 = var_1_4;
	if (-4 >= stepLocal_0) {
		if (var_1_12 == var_1_12) {
			var_1_10 = (var_1_7 + var_1_6);
		} else {
			var_1_10 = var_1_5;
		}
	} else {
		var_1_10 = var_1_4;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -63);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
}



void updateLastVariables() {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((10.8 + var_1_12) <= (- var_1_12)) ? (var_1_1 == ((unsigned char) ((min (1 , var_1_4)) + (var_1_5 - var_1_6)))) : 1) && (((var_1_5 <= var_1_4) && var_1_8) ? (var_1_8 ? (var_1_7 == ((signed char) (var_1_6 + (min (5 , var_1_9))))) : (var_1_7 == ((signed char) (min (var_1_6 , var_1_9))))) : (((-8 * var_1_11) < var_1_4) ? (var_1_7 == ((signed char) 1)) : (var_1_7 == ((signed char) var_1_9))))) && ((-4 >= var_1_4) ? ((var_1_12 == var_1_12) ? (var_1_10 == ((signed short int) (var_1_7 + var_1_6))) : (var_1_10 == ((signed short int) var_1_5))) : (var_1_10 == ((signed short int) var_1_4)))) && (((var_1_6 - last_1_var_1_15) < ((last_1_var_1_11 ^ last_1_var_1_15) / (max (-8 , var_1_5)))) ? ((last_1_var_1_12 == last_1_var_1_12) ? (var_1_11 == ((unsigned short int) last_1_var_1_15)) : 1) : 1)) && ((var_1_2 != (var_1_3 / (abs (var_1_13)))) ? (var_1_12 == ((float) var_1_14)) : 1)) && ((128 >= last_1_var_1_15) ? (var_1_15 == ((unsigned long int) (var_1_6 + (var_1_4 + var_1_11)))) : (var_1_15 == ((unsigned long int) var_1_7)))
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
