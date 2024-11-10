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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch46PS_CN_10.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 10;
unsigned short int var_1_6 = 10;
unsigned short int var_1_7 = 52077;
unsigned short int var_1_8 = 47248;
unsigned short int var_1_9 = 50;
float var_1_11 = 63.75;
signed long int var_1_12 = 100000;
unsigned short int var_1_13 = 8;
signed long int var_1_14 = 2;
signed long int var_1_15 = 32;
double var_1_17 = 127.5;
double var_1_18 = 32.75;
signed char var_1_19 = 0;
unsigned long int var_1_20 = 128;
unsigned long int var_1_21 = 32;
unsigned long int var_1_22 = 8;
double var_1_23 = 10.4;
double var_1_24 = 3.9;
float var_1_25 = 16.75;
signed short int var_1_26 = -5;
signed short int var_1_27 = 128;
signed char var_1_28 = -16;
unsigned char var_1_29 = 1;
signed char var_1_30 = 100;
signed char var_1_31 = -100;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
signed short int var_1_34 = 128;
unsigned char var_1_35 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 8;
double last_1_var_1_17 = 127.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_21 = var_1_22;


	// From: CodeObject2
	var_1_23 = var_1_24;


	// From: CodeObject3
	var_1_25 = var_1_24;


	// From: CodeObject4
	var_1_26 = var_1_27;


	// From: CodeObject5
	if (var_1_29) {
		var_1_28 = (min (var_1_30 , var_1_31));
	}


	// From: CodeObject6
	var_1_32 = var_1_33;


	// From: CodeObject7
	var_1_34 = var_1_27;


	// From: CodeObject8
	var_1_35 = var_1_33;


	// From: Req3Batch46PS_CN_10
	if (-100000 >= last_1_var_1_13) {
		var_1_9 = (max ((last_1_var_1_13 + var_1_5) , 64));
	} else {
		if ((last_1_var_1_17 / var_1_11) == 999999.6f) {
			var_1_9 = var_1_7;
		}
	}


	// From: Req1Batch46PS_CN_10
	unsigned char stepLocal_0 = var_1_3;
	if (var_1_2 && stepLocal_0) {
		var_1_1 = (var_1_4 - var_1_5);
	} else {
		var_1_1 = (var_1_4 - var_1_5);
	}


	// From: Req2Batch46PS_CN_10
	if (var_1_1 <= (var_1_5 * var_1_4)) {
		if (var_1_2) {
			var_1_6 = ((min (var_1_7 , var_1_8)) - var_1_5);
		} else {
			var_1_6 = var_1_5;
		}
	} else {
		var_1_6 = var_1_5;
	}


	// From: Req6Batch46PS_CN_10
	var_1_17 = var_1_18;


	// From: Req7Batch46PS_CN_10
	var_1_19 = 5;


	// From: Req8Batch46PS_CN_10
	var_1_20 = var_1_15;


	// From: Req4Batch46PS_CN_10
	if (var_1_1 < var_1_20) {
		if (var_1_5 == (~ (var_1_1 + var_1_20))) {
			var_1_12 = ((max (var_1_5 , (min (-1 , var_1_1)))) - 1000);
		} else {
			var_1_12 = (min (var_1_20 , var_1_8));
		}
	} else {
		var_1_12 = var_1_6;
	}


	// From: Req5Batch46PS_CN_10
	if ((-4 >> (min (var_1_14 , var_1_15))) >= (var_1_7 | (max (var_1_8 , var_1_9)))) {
		if (var_1_3) {
			var_1_13 = var_1_6;
		} else {
			var_1_13 = var_1_4;
		}
	} else {
		var_1_13 = var_1_1;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 32767);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854765600e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32767);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
}

int property() {
	return ((((((((var_1_2 && var_1_3) ? (var_1_1 == ((unsigned char) (var_1_4 - var_1_5))) : (var_1_1 == ((unsigned char) (var_1_4 - var_1_5)))) && ((var_1_1 <= (var_1_5 * var_1_4)) ? (var_1_2 ? (var_1_6 == ((unsigned short int) ((min (var_1_7 , var_1_8)) - var_1_5))) : (var_1_6 == ((unsigned short int) var_1_5))) : (var_1_6 == ((unsigned short int) var_1_5)))) && ((-100000 >= last_1_var_1_13) ? (var_1_9 == ((unsigned short int) (max ((last_1_var_1_13 + var_1_5) , 64)))) : (((last_1_var_1_17 / var_1_11) == 999999.6f) ? (var_1_9 == ((unsigned short int) var_1_7)) : 1))) && ((var_1_1 < var_1_20) ? ((var_1_5 == (~ (var_1_1 + var_1_20))) ? (var_1_12 == ((signed long int) ((max (var_1_5 , (min (-1 , var_1_1)))) - 1000))) : (var_1_12 == ((signed long int) (min (var_1_20 , var_1_8))))) : (var_1_12 == ((signed long int) var_1_6)))) && (((-4 >> (min (var_1_14 , var_1_15))) >= (var_1_7 | (max (var_1_8 , var_1_9)))) ? (var_1_3 ? (var_1_13 == ((unsigned short int) var_1_6)) : (var_1_13 == ((unsigned short int) var_1_4))) : (var_1_13 == ((unsigned short int) var_1_1)))) && (var_1_17 == ((double) var_1_18))) && (var_1_19 == ((signed char) 5))) && (var_1_20 == ((unsigned long int) var_1_15))
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
