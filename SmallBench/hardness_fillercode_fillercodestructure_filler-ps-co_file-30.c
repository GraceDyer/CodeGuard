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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch30Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 0;
double var_1_5 = 127.5;
double var_1_7 = 10000000000000.125;
double var_1_8 = 1.25;
double var_1_10 = 25.7;
signed long int var_1_11 = -2;
signed long int var_1_13 = 5;
signed long int var_1_14 = 128;
signed long int var_1_15 = 1000;
double var_1_16 = 0.2;
double var_1_17 = 0.25;
double var_1_18 = 99999999999999.5;
signed short int var_1_19 = -64;
double var_1_21 = 100.4;
signed long int var_1_24 = 10;
signed char var_1_25 = -8;
double var_1_26 = 9.75;
signed char var_1_28 = 8;
unsigned long int var_1_29 = 16;
unsigned long int var_1_30 = 1;
float var_1_31 = 16.6;
float var_1_33 = 0.25;
float var_1_34 = 99.8;
signed short int var_1_35 = 256;
unsigned long int var_1_36 = 16;
double var_1_37 = 8.5;
unsigned long int var_1_38 = 3569725445;
unsigned long int var_1_39 = 3551809449;
unsigned long int var_1_40 = 10000000;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed long int last_1_var_1_11 = -2;
signed long int last_1_var_1_15 = 1000;
double last_1_var_1_16 = 0.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (((abs (var_1_5)) - var_1_21) == (var_1_8 * var_1_16)) {
		var_1_19 = -4;
	}


	// From: CodeObject2
	var_1_24 = var_1_11;


	// From: CodeObject3
	if (var_1_21 != var_1_5) {
		if (var_1_5 < (var_1_5 / var_1_26)) {
			var_1_25 = (abs (4));
		} else {
			var_1_25 = 64;
		}
	} else {
		if (var_1_1) {
			var_1_25 = var_1_28;
		} else {
			var_1_25 = var_1_28;
		}
	}


	// From: CodeObject4
	var_1_29 = var_1_30;


	// From: CodeObject5
	if (var_1_16 > var_1_16) {
		if (var_1_1 && var_1_1) {
			if (var_1_16 < var_1_21) {
				var_1_31 = (abs (var_1_33));
			}
		}
	} else {
		if (var_1_1) {
			var_1_31 = ((abs (min (var_1_33 , var_1_34))) - 256.35f);
		}
	}


	// From: CodeObject6
	if (! ((1 + var_1_11) <= var_1_15)) {
		if (var_1_11 > (abs (abs (-5)))) {
			var_1_35 = -128;
		}
	}


	// From: CodeObject7
	if (var_1_21 < var_1_5) {
		if (var_1_21 == (var_1_37 - 199.3)) {
			var_1_36 = ((abs (min (var_1_38 , var_1_39))) - var_1_40);
		} else {
			var_1_36 = 256u;
		}
	}


	// From: Req4Batch30Filler_PS_CO
	if (last_1_var_1_1) {
		if ((max (last_1_var_1_16 , 49.75)) > last_1_var_1_16) {
			var_1_11 = (min (last_1_var_1_15 , (max ((var_1_13 - 5) , var_1_14))));
		}
	} else {
		var_1_11 = last_1_var_1_15;
	}


	// From: Req1Batch30Filler_PS_CO
	signed long int stepLocal_0 = last_1_var_1_11;
	if ((last_1_var_1_11 / (abs (-16))) >= stepLocal_0) {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch30Filler_PS_CO
	signed long int stepLocal_2 = var_1_11;
	unsigned char stepLocal_1 = var_1_1;
	if (var_1_1) {
		if (var_1_11 >= stepLocal_2) {
			if (stepLocal_1 || (var_1_11 < var_1_11)) {
				var_1_5 = var_1_7;
			}
		} else {
			var_1_5 = var_1_7;
		}
	}


	// From: Req5Batch30Filler_PS_CO
	if ((- var_1_11) > (var_1_11 & var_1_13)) {
		if (var_1_11 <= 128) {
			if (var_1_1) {
				var_1_15 = var_1_14;
			} else {
				var_1_15 = var_1_14;
			}
		} else {
			var_1_15 = var_1_14;
		}
	} else {
		var_1_15 = var_1_13;
	}


	// From: Req6Batch30Filler_PS_CO
	if ((min (var_1_5 , last_1_var_1_16)) >= var_1_7) {
		var_1_16 = (var_1_17 + (var_1_18 + 16.75));
	} else {
		var_1_16 = var_1_17;
	}


	// From: Req3Batch30Filler_PS_CO
	if (10.55f < var_1_16) {
		if (var_1_16 > (var_1_7 * var_1_16)) {
			var_1_8 = (max (var_1_7 , var_1_10));
		}
	} else {
		if (var_1_16 > var_1_7) {
			var_1_8 = var_1_10;
		} else {
			var_1_8 = var_1_7;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483647);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854765600e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 2147483647);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_16 = var_1_16;
}

int property() {
	return (((((((last_1_var_1_11 / (abs (-16))) >= last_1_var_1_11) ? (var_1_1 == ((unsigned char) var_1_4)) : 1) && (var_1_1 ? ((var_1_11 >= var_1_11) ? ((var_1_1 || (var_1_11 < var_1_11)) ? (var_1_5 == ((double) var_1_7)) : 1) : (var_1_5 == ((double) var_1_7))) : 1)) && ((10.55f < var_1_16) ? ((var_1_16 > (var_1_7 * var_1_16)) ? (var_1_8 == ((double) (max (var_1_7 , var_1_10)))) : 1) : ((var_1_16 > var_1_7) ? (var_1_8 == ((double) var_1_10)) : (var_1_8 == ((double) var_1_7))))) && (last_1_var_1_1 ? (((max (last_1_var_1_16 , 49.75)) > last_1_var_1_16) ? (var_1_11 == ((signed long int) (min (last_1_var_1_15 , (max ((var_1_13 - 5) , var_1_14)))))) : 1) : (var_1_11 == ((signed long int) last_1_var_1_15)))) && (((- var_1_11) > (var_1_11 & var_1_13)) ? ((var_1_11 <= 128) ? (var_1_1 ? (var_1_15 == ((signed long int) var_1_14)) : (var_1_15 == ((signed long int) var_1_14))) : (var_1_15 == ((signed long int) var_1_14))) : (var_1_15 == ((signed long int) var_1_13)))) && (((min (var_1_5 , last_1_var_1_16)) >= var_1_7) ? (var_1_16 == ((double) (var_1_17 + (var_1_18 + 16.75)))) : (var_1_16 == ((double) var_1_17)))
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
