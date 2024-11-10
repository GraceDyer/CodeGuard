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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch40PS_CN_25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 128;
signed short int var_1_4 = -200;
unsigned short int var_1_8 = 5;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 16;
unsigned char var_1_15 = 50;
unsigned short int var_1_16 = 1;
float var_1_17 = 25.4;
float var_1_20 = 1.6;
unsigned short int var_1_21 = 0;
float var_1_24 = 128.5;
double var_1_25 = -0.5;
signed long int var_1_26 = 4;
signed char var_1_27 = 2;
signed char var_1_28 = -16;
signed char var_1_29 = 0;
unsigned char var_1_30 = 0;
float var_1_31 = 127.75;
float var_1_32 = 15.5;
unsigned long int var_1_33 = 16;
signed long int var_1_34 = 256;
unsigned char var_1_35 = 0;
signed short int var_1_36 = 8;
signed long int var_1_37 = 256;
unsigned long int var_1_38 = 500;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 1;
float last_1_var_1_24 = 128.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_27 = ((abs (var_1_28)) - var_1_29);


	// From: CodeObject2
	if (-32 <= var_1_28) {
		var_1_30 = var_1_29;
	}


	// From: CodeObject3
	var_1_31 = var_1_32;


	// From: CodeObject4
	var_1_33 = var_1_30;


	// From: CodeObject5
	if (var_1_31 > var_1_32) {
		if (var_1_35) {
			var_1_34 = (abs (var_1_30));
		}
	} else {
		if (((var_1_36 - var_1_29) * var_1_27) > var_1_28) {
			var_1_34 = var_1_30;
		} else {
			var_1_34 = var_1_37;
		}
	}


	// From: CodeObject6
	if (var_1_34 < var_1_37) {
		var_1_38 = (abs (var_1_30 + var_1_29));
	} else {
		var_1_38 = var_1_30;
	}


	// From: Req3Batch40PS_CN_25
	if ((last_1_var_1_9 && var_1_11) && (50 > var_1_8)) {
		if ((- last_1_var_1_24) < last_1_var_1_24) {
			if (last_1_var_1_9) {
				var_1_12 = 5;
			}
		}
	} else {
		var_1_12 = var_1_15;
	}


	// From: Req2Batch40PS_CN_25
	unsigned char stepLocal_1 = var_1_10;
	if ((var_1_12 != var_1_4) || stepLocal_1) {
		var_1_9 = var_1_11;
	}


	// From: Req9Batch40PS_CN_25
	var_1_26 = var_1_12;


	// From: Req6Batch40PS_CN_25
	if ((var_1_9 && var_1_11) && var_1_9) {
		var_1_21 = (var_1_26 + (var_1_15 + (max (var_1_12 , var_1_12))));
	} else {
		var_1_21 = ((23370 - var_1_15) + var_1_12);
	}


	// From: Req7Batch40PS_CN_25
	signed long int stepLocal_2 = -4;
	if (! (-4 < var_1_12)) {
		var_1_24 = var_1_20;
	} else {
		if (stepLocal_2 > var_1_21) {
			var_1_24 = 10.6f;
		}
	}


	// From: Req4Batch40PS_CN_25
	var_1_16 = (min (((max (256 , var_1_12)) + var_1_12) , var_1_15));


	// From: Req8Batch40PS_CN_25
	var_1_25 = var_1_20;


	// From: Req1Batch40PS_CN_25
	unsigned short int stepLocal_0 = var_1_16;
	if (((var_1_16 * var_1_16) / var_1_4) <= stepLocal_0) {
		var_1_1 = var_1_12;
	} else {
		var_1_1 = (var_1_12 + var_1_12);
	}


	// From: Req5Batch40PS_CN_25
	if ((var_1_16 - (abs (var_1_1))) < (var_1_12 - var_1_16)) {
		var_1_17 = var_1_20;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854765600e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -126);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854765600e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483647);
	assume_abort_if_not(var_1_37 <= 2147483646);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_24 = var_1_24;
}

int property() {
	return (((((((((((var_1_16 * var_1_16) / var_1_4) <= var_1_16) ? (var_1_1 == ((unsigned short int) var_1_12)) : (var_1_1 == ((unsigned short int) (var_1_12 + var_1_12)))) && (((var_1_12 != var_1_4) || var_1_10) ? (var_1_9 == ((unsigned char) var_1_11)) : 1)) && (((last_1_var_1_9 && var_1_11) && (50 > var_1_8)) ? (((- last_1_var_1_24) < last_1_var_1_24) ? (last_1_var_1_9 ? (var_1_12 == ((unsigned char) 5)) : 1) : 1) : (var_1_12 == ((unsigned char) var_1_15)))) && (var_1_16 == ((unsigned short int) (min (((max (256 , var_1_12)) + var_1_12) , var_1_15))))) && (((var_1_16 - (abs (var_1_1))) < (var_1_12 - var_1_16)) ? (var_1_17 == ((float) var_1_20)) : 1)) && (((var_1_9 && var_1_11) && var_1_9) ? (var_1_21 == ((unsigned short int) (var_1_26 + (var_1_15 + (max (var_1_12 , var_1_12)))))) : (var_1_21 == ((unsigned short int) ((23370 - var_1_15) + var_1_12))))) && ((! (-4 < var_1_12)) ? (var_1_24 == ((float) var_1_20)) : ((-4 > var_1_21) ? (var_1_24 == ((float) 10.6f)) : 1))) && (var_1_25 == ((double) var_1_20))) && (var_1_26 == ((signed long int) var_1_12))
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
