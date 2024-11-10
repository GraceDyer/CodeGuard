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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9150_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -64;
signed short int var_1_5 = 8;
signed short int var_1_6 = 8;
signed short int var_1_7 = 5;
signed short int var_1_8 = 0;
signed char var_1_9 = 5;
signed char var_1_11 = 16;
signed short int var_1_12 = 25;
signed short int var_1_13 = 64;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 16;
float var_1_17 = 1.2;
float var_1_18 = 5.8;
float var_1_19 = 10.25;
float var_1_20 = 2.5;
signed short int var_1_21 = 200;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
signed char var_1_26 = -5;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -64;
signed short int last_1_var_1_13 = 64;
unsigned char last_1_var_1_15 = 1;
signed char last_1_var_1_26 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9150_while
	if (last_1_var_1_13 == last_1_var_1_1) {
		if (last_1_var_1_1 <= (max (last_1_var_1_13 , last_1_var_1_26))) {
			var_1_1 = (last_1_var_1_1 + (min ((last_1_var_1_15 - last_1_var_1_15) , (last_1_var_1_15 - last_1_var_1_15))));
		} else {
			var_1_1 = (min ((last_1_var_1_15 - last_1_var_1_15) , ((last_1_var_1_15 - last_1_var_1_15) + -256)));
		}
	}


	// From: Req4Batch9150_while
	signed long int stepLocal_3 = (var_1_6 + var_1_8) - var_1_5;
	signed short int stepLocal_2 = var_1_1;
	if (var_1_11 < stepLocal_2) {
		if (var_1_7 == stepLocal_3) {
			var_1_15 = var_1_16;
		} else {
			var_1_15 = var_1_16;
		}
	} else {
		var_1_15 = var_1_16;
	}


	// From: Req5Batch9150_while
	if (var_1_11 < 5) {
		var_1_17 = (max (var_1_18 , (var_1_19 - var_1_20)));
	}


	// From: Req7Batch9150_while
	var_1_24 = var_1_25;


	// From: Req8Batch9150_while
	var_1_26 = var_1_11;


	// From: Req6Batch9150_while
	if (var_1_24) {
		if (var_1_24 && var_1_24) {
			var_1_21 = var_1_15;
		}
	} else {
		var_1_21 = (var_1_15 - 2);
	}


	// From: Req2Batch9150_while
	unsigned char stepLocal_0 = var_1_15;
	if (var_1_24) {
		var_1_9 = var_1_11;
	} else {
		if (stepLocal_0 <= (var_1_21 / var_1_12)) {
			var_1_9 = var_1_11;
		} else {
			var_1_9 = var_1_11;
		}
	}


	// From: Req3Batch9150_while
	signed long int stepLocal_1 = var_1_1 * (var_1_15 % var_1_12);
	if ((- var_1_15) >= stepLocal_1) {
		var_1_13 = var_1_26;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_26 = var_1_26;
}

int property() {
	return ((((((((last_1_var_1_13 == last_1_var_1_1) ? ((last_1_var_1_1 <= (max (last_1_var_1_13 , last_1_var_1_26))) ? (var_1_1 == ((signed short int) (last_1_var_1_1 + (min ((last_1_var_1_15 - last_1_var_1_15) , (last_1_var_1_15 - last_1_var_1_15)))))) : (var_1_1 == ((signed short int) (min ((last_1_var_1_15 - last_1_var_1_15) , ((last_1_var_1_15 - last_1_var_1_15) + -256)))))) : 1) && (var_1_24 ? (var_1_9 == ((signed char) var_1_11)) : ((var_1_15 <= (var_1_21 / var_1_12)) ? (var_1_9 == ((signed char) var_1_11)) : (var_1_9 == ((signed char) var_1_11))))) && (((- var_1_15) >= (var_1_1 * (var_1_15 % var_1_12))) ? (var_1_13 == ((signed short int) var_1_26)) : 1)) && ((var_1_11 < var_1_1) ? ((var_1_7 == ((var_1_6 + var_1_8) - var_1_5)) ? (var_1_15 == ((unsigned char) var_1_16)) : (var_1_15 == ((unsigned char) var_1_16))) : (var_1_15 == ((unsigned char) var_1_16)))) && ((var_1_11 < 5) ? (var_1_17 == ((float) (max (var_1_18 , (var_1_19 - var_1_20))))) : 1)) && (var_1_24 ? ((var_1_24 && var_1_24) ? (var_1_21 == ((signed short int) var_1_15)) : 1) : (var_1_21 == ((signed short int) (var_1_15 - 2))))) && (var_1_24 == ((unsigned char) var_1_25))) && (var_1_26 == ((signed char) var_1_11))
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
