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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 10.8;
double var_1_4 = 5.5;
float var_1_5 = 49.2;
double var_1_7 = 49.5;
double var_1_8 = 999999999999.4;
double var_1_9 = 255.3;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -16;
signed long int var_1_15 = 25;
signed long int var_1_16 = -8;
signed long int var_1_17 = 1000000000;
signed long int var_1_18 = 256;
signed long int var_1_19 = 25;
signed long int var_1_20 = 4;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
signed long int var_1_23 = 50;
double var_1_24 = 1000000000.5;
unsigned char var_1_26 = 10;
unsigned char var_1_27 = 10;
float var_1_28 = 15.5;
double var_1_36 = 63.2;
signed long int var_1_37 = 16;
float var_1_38 = 128.5;
double var_1_40 = 255.8;
unsigned long int var_1_41 = 10;

// Calibration values

// Last'ed variables
double last_1_var_1_7 = 49.5;
signed long int last_1_var_1_14 = -16;
signed long int last_1_var_1_23 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch82Filler_PR_CI
	var_1_23 = last_1_var_1_14;


	// From: CodeObject4
	var_1_36 = 63.5;


	// From: Req2Batch82Filler_PR_CI
	var_1_7 = (var_1_4 - (var_1_8 + var_1_9));


	// From: CodeObject7
	if (var_1_22) {
		var_1_40 = (abs (var_1_9));
	} else {
		var_1_40 = (abs (var_1_9));
	}


	// From: CodeObject8
	if (var_1_7 != (abs (var_1_1))) {
		if ((abs (127.4)) < var_1_9) {
			if (var_1_22) {
				var_1_41 = var_1_23;
			}
		} else {
			var_1_41 = var_1_23;
		}
	}


	// From: Req5Batch82Filler_PR_CI
	if (var_1_8 <= (max ((var_1_5 * 1.25) , (last_1_var_1_7 * var_1_9)))) {
		var_1_16 = (((abs (last_1_var_1_23)) + last_1_var_1_23) + ((var_1_17 - var_1_18) - (max (var_1_19 , var_1_20))));
	} else {
		if (var_1_4 <= last_1_var_1_7) {
			var_1_16 = var_1_17;
		}
	}


	// From: Req1Batch82Filler_PR_CI
	signed long int stepLocal_0 = var_1_23;
	if (stepLocal_0 == var_1_16) {
		var_1_1 = (var_1_4 - 4.531);
	} else {
		if ((var_1_4 - var_1_5) > var_1_7) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: CodeObject1
	var_1_24 = var_1_4;


	// From: Req6Batch82Filler_PR_CI
	signed long int stepLocal_1 = (50 / -10) + var_1_23;
	if (stepLocal_1 >= var_1_16) {
		if (var_1_13) {
			var_1_21 = (var_1_11 && var_1_22);
		} else {
			var_1_21 = var_1_11;
		}
	} else {
		var_1_21 = var_1_11;
	}


	// From: CodeObject6
	if ((var_1_1 * var_1_8) != var_1_8) {
		var_1_38 = (var_1_4 - (abs (var_1_8)));
	}


	// From: Req3Batch82Filler_PR_CI
	var_1_10 = (var_1_11 && (var_1_21 || var_1_13));


	// From: CodeObject3
	if (var_1_13) {
		if ((abs (var_1_4)) <= var_1_4) {
			if ((min ((var_1_27 % var_1_17) , var_1_15)) < (var_1_19 * (var_1_20 | var_1_17))) {
				if ((max (var_1_4 , var_1_4)) >= (var_1_8 * var_1_5)) {
					var_1_28 = var_1_4;
				}
			}
		} else {
			var_1_28 = var_1_4;
		}
	}


	// From: CodeObject5
	if (var_1_27 != var_1_17) {
		var_1_37 = ((abs (var_1_27)) - (abs (var_1_17)));
	} else {
		var_1_37 = (abs (max (var_1_17 , var_1_27)));
	}


	// From: Req4Batch82Filler_PR_CI
	if (var_1_8 <= (max (var_1_4 , (var_1_1 + var_1_5)))) {
		if (var_1_10) {
			var_1_14 = (var_1_15 + (8 + var_1_16));
		} else {
			var_1_14 = -256;
		}
	} else {
		var_1_14 = var_1_16;
	}


	// From: CodeObject2
	if (var_1_9 <= var_1_4) {
		var_1_26 = (min (var_1_27 , (abs (128))));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -1073741823);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 536870911);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 536870911);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1073741823);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 254);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_23 = var_1_23;
}

int property() {
	return (((((((var_1_23 == var_1_16) ? (var_1_1 == ((double) (var_1_4 - 4.531))) : (((var_1_4 - var_1_5) > var_1_7) ? (var_1_1 == ((double) var_1_4)) : (var_1_1 == ((double) var_1_4)))) && (var_1_7 == ((double) (var_1_4 - (var_1_8 + var_1_9))))) && (var_1_10 == ((unsigned char) (var_1_11 && (var_1_21 || var_1_13))))) && ((var_1_8 <= (max (var_1_4 , (var_1_1 + var_1_5)))) ? (var_1_10 ? (var_1_14 == ((signed long int) (var_1_15 + (8 + var_1_16)))) : (var_1_14 == ((signed long int) -256))) : (var_1_14 == ((signed long int) var_1_16)))) && ((var_1_8 <= (max ((var_1_5 * 1.25) , (last_1_var_1_7 * var_1_9)))) ? (var_1_16 == ((signed long int) (((abs (last_1_var_1_23)) + last_1_var_1_23) + ((var_1_17 - var_1_18) - (max (var_1_19 , var_1_20)))))) : ((var_1_4 <= last_1_var_1_7) ? (var_1_16 == ((signed long int) var_1_17)) : 1))) && ((((50 / -10) + var_1_23) >= var_1_16) ? (var_1_13 ? (var_1_21 == ((unsigned char) (var_1_11 && var_1_22))) : (var_1_21 == ((unsigned char) var_1_11))) : (var_1_21 == ((unsigned char) var_1_11)))) && (var_1_23 == ((signed long int) last_1_var_1_14))
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
