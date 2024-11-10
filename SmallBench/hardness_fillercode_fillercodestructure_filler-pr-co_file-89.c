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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch89Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 32;
unsigned char var_1_4 = 0;
unsigned short int var_1_8 = 32;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 5;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
double var_1_16 = 63.75;
double var_1_17 = 8.5;
signed short int var_1_18 = -64;
unsigned char var_1_19 = 32;
unsigned char var_1_23 = 16;
signed short int var_1_24 = -1;
signed short int var_1_25 = 2;
unsigned char var_1_26 = 100;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 64;
signed char var_1_31 = -1;
unsigned short int var_1_32 = 100;
unsigned long int var_1_33 = 0;
float var_1_36 = 16.8;
signed char var_1_38 = 0;
signed long int var_1_39 = -4;
unsigned short int var_1_40 = 256;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 32;
unsigned char last_1_var_1_12 = 32;
signed short int last_1_var_1_18 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch89Filler_PR_CO
	signed long int stepLocal_1 = last_1_var_1_18;
	signed long int stepLocal_0 = last_1_var_1_18;
	if (stepLocal_1 >= (last_1_var_1_18 / var_1_9)) {
		if (stepLocal_0 < (last_1_var_1_1 * 256)) {
			var_1_8 = (min (last_1_var_1_12 , (min (128 , last_1_var_1_12))));
		} else {
			var_1_8 = last_1_var_1_12;
		}
	} else {
		var_1_8 = last_1_var_1_12;
	}


	// From: CodeObject3
	if (var_1_14 && var_1_14) {
		var_1_26 = (var_1_29 - (abs (var_1_30 - var_1_25)));
	}


	// From: CodeObject7
	var_1_38 = var_1_25;


	// From: Req6Batch89Filler_PR_CO
	var_1_18 = var_1_8;


	// From: CodeObject2
	if ((min (var_1_18 , 25)) > (var_1_1 >> (min (var_1_25 , 1)))) {
		if (var_1_18 >= var_1_23) {
			var_1_24 = var_1_18;
		} else {
			var_1_24 = var_1_1;
		}
	}


	// From: Req3Batch89Filler_PR_CO
	if (var_1_10 < var_1_18) {
		if (last_1_var_1_12 <= (5 - last_1_var_1_12)) {
			var_1_12 = var_1_13;
		} else {
			if (last_1_var_1_12 == var_1_8) {
				var_1_12 = var_1_13;
			} else {
				var_1_12 = var_1_13;
			}
		}
	}


	// From: Req4Batch89Filler_PR_CO
	unsigned short int stepLocal_2 = var_1_8;
	if (stepLocal_2 > ((min (var_1_8 , var_1_8)) + var_1_12)) {
		if (! (var_1_8 >= var_1_12)) {
			if (var_1_4) {
				var_1_14 = 0;
			} else {
				var_1_14 = var_1_15;
			}
		} else {
			var_1_14 = var_1_15;
		}
	}


	// From: CodeObject6
	if (var_1_23 > var_1_8) {
		if ((min (var_1_16 , (var_1_16 / var_1_36))) <= var_1_16) {
			var_1_33 = ((abs (var_1_8)) + (var_1_12 + var_1_30));
		}
	}


	// From: Req1Batch89Filler_PR_CO
	if (var_1_18 != var_1_12) {
		if (var_1_14) {
			var_1_1 = (min ((max (-5 , var_1_12)) , (min (var_1_8 , var_1_18))));
		}
	}


	// From: CodeObject8
	var_1_39 = var_1_30;


	// From: CodeObject9
	var_1_40 = var_1_30;


	// From: Req5Batch89Filler_PR_CO
	if (var_1_14) {
		if (var_1_15) {
			var_1_16 = var_1_17;
		} else {
			var_1_16 = (max (((max (25.8 , 7.5)) - 50.25) , var_1_17));
		}
	} else {
		if (var_1_14) {
			var_1_16 = 5.2;
		} else {
			var_1_16 = var_1_17;
		}
	}


	// From: CodeObject1
	if ((var_1_12 & var_1_8) >= var_1_8) {
		var_1_19 = var_1_23;
	}


	// From: CodeObject4
	if (var_1_14) {
		if (var_1_23 >= var_1_8) {
			var_1_31 = var_1_25;
		}
	}


	// From: CodeObject5
	if (var_1_14 && var_1_14) {
		if (var_1_18 < var_1_29) {
			if (var_1_14) {
				var_1_32 = (abs (abs (var_1_30)));
			} else {
				var_1_32 = (var_1_23 + (abs (max (var_1_25 , var_1_8))));
			}
		}
	} else {
		if (var_1_14) {
			var_1_32 = var_1_8;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 9);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 63);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_18 = var_1_18;
}

int property() {
	return ((((((var_1_18 != var_1_12) ? (var_1_14 ? (var_1_1 == ((signed long int) (min ((max (-5 , var_1_12)) , (min (var_1_8 , var_1_18)))))) : 1) : 1) && ((last_1_var_1_18 >= (last_1_var_1_18 / var_1_9)) ? ((last_1_var_1_18 < (last_1_var_1_1 * 256)) ? (var_1_8 == ((unsigned short int) (min (last_1_var_1_12 , (min (128 , last_1_var_1_12)))))) : (var_1_8 == ((unsigned short int) last_1_var_1_12))) : (var_1_8 == ((unsigned short int) last_1_var_1_12)))) && ((var_1_10 < var_1_18) ? ((last_1_var_1_12 <= (5 - last_1_var_1_12)) ? (var_1_12 == ((unsigned char) var_1_13)) : ((last_1_var_1_12 == var_1_8) ? (var_1_12 == ((unsigned char) var_1_13)) : (var_1_12 == ((unsigned char) var_1_13)))) : 1)) && ((var_1_8 > ((min (var_1_8 , var_1_8)) + var_1_12)) ? ((! (var_1_8 >= var_1_12)) ? (var_1_4 ? (var_1_14 == ((unsigned char) 0)) : (var_1_14 == ((unsigned char) var_1_15))) : (var_1_14 == ((unsigned char) var_1_15))) : 1)) && (var_1_14 ? (var_1_15 ? (var_1_16 == ((double) var_1_17)) : (var_1_16 == ((double) (max (((max (25.8 , 7.5)) - 50.25) , var_1_17))))) : (var_1_14 ? (var_1_16 == ((double) 5.2)) : (var_1_16 == ((double) var_1_17))))) && (var_1_18 == ((signed short int) var_1_8))
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
