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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch17Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 25;
unsigned char var_1_2 = 25;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 4;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 7.3;
double var_1_12 = 1.25;
double var_1_13 = 128.8;
signed char var_1_14 = -1;
signed char var_1_15 = 10;
signed short int var_1_16 = 8;
unsigned long int var_1_18 = 128;
unsigned long int var_1_19 = 3963666122;
float var_1_20 = 15.875;
float var_1_21 = 4.2;
float var_1_22 = 5.5;
signed short int var_1_23 = -10;
unsigned long int var_1_30 = 1000000000;
unsigned long int var_1_31 = 4155847319;
float var_1_33 = 99.25;
signed long int var_1_34 = 10;
unsigned char var_1_35 = 16;
unsigned char var_1_36 = 100;
signed long int var_1_39 = -128;
signed long int var_1_40 = 1792665454;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 1;
signed char last_1_var_1_14 = -1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch17Filler_PE_CO
	unsigned char stepLocal_0 = last_1_var_1_8;
	if (stepLocal_0 && last_1_var_1_8) {
		if (last_1_var_1_8) {
			var_1_5 = ((abs (last_1_var_1_14)) - (min (var_1_4 , var_1_2)));
		} else {
			var_1_5 = 8;
		}
	}


	// From: Req3Batch17Filler_PE_CO
	if (var_1_5 < var_1_3) {
		var_1_8 = ((var_1_7 || (last_1_var_1_8 || var_1_9)) && var_1_10);
	} else {
		var_1_8 = (! var_1_10);
	}


	// From: Req1Batch17Filler_PE_CO
	var_1_1 = (50 + (min (var_1_2 , (min (var_1_3 , var_1_4)))));


	// From: Req5Batch17Filler_PE_CO
	if ((64.4f + 1.5f) <= var_1_13) {
		if (var_1_1 >= var_1_4) {
			var_1_14 = var_1_15;
		}
	}


	// From: Req7Batch17Filler_PE_CO
	unsigned char stepLocal_3 = var_1_9 && var_1_8;
	if (stepLocal_3 || (var_1_8 && var_1_10)) {
		var_1_18 = (var_1_19 - (min ((1991720936u - var_1_1) , var_1_2)));
	} else {
		var_1_18 = var_1_2;
	}


	// From: Req4Batch17Filler_PE_CO
	signed long int stepLocal_1 = 8 + var_1_14;
	if (var_1_4 == stepLocal_1) {
		var_1_11 = (max (var_1_12 , var_1_13));
	}


	// From: Req6Batch17Filler_PE_CO
	unsigned long int stepLocal_2 = var_1_18 * (var_1_15 & var_1_1);
	if (var_1_12 >= 9.6) {
		if (var_1_10) {
			var_1_16 = (2 - var_1_1);
		} else {
			if (stepLocal_2 <= var_1_3) {
				var_1_16 = var_1_18;
			} else {
				var_1_16 = var_1_4;
			}
		}
	}


	// From: CodeObject1
	var_1_20 = (min (var_1_21 , var_1_22));


	// From: CodeObject2
	if (128u <= var_1_5) {
		if ((var_1_11 >= var_1_21) && ((var_1_5 * var_1_1) < (min (var_1_18 , var_1_5)))) {
			if (var_1_1 > var_1_5) {
				var_1_23 = (abs (4));
			} else {
				if (var_1_8) {
					var_1_23 = var_1_1;
				} else {
					var_1_23 = var_1_1;
				}
			}
		} else {
			var_1_23 = 5;
		}
	}


	// From: CodeObject3
	if (var_1_1 >= var_1_16) {
		var_1_30 = ((abs (var_1_31)) - var_1_1);
	}


	// From: CodeObject4
	var_1_33 = var_1_21;


	// From: CodeObject5
	if (var_1_8) {
		var_1_34 = (abs (var_1_14));
	}


	// From: CodeObject6
	if (var_1_31 > var_1_1) {
		var_1_35 = var_1_36;
	} else {
		if ((var_1_36 - (max (var_1_1 , var_1_1))) < (abs (var_1_1))) {
			if ((var_1_5 | var_1_14) < var_1_1) {
				var_1_35 = var_1_36;
			}
		}
	}


	// From: CodeObject7
	if (var_1_14 > (var_1_1 >> var_1_16)) {
		if (var_1_8) {
			var_1_39 = (abs (var_1_1));
		} else {
			var_1_39 = (max ((256 - (var_1_40 - var_1_1)) , var_1_1));
		}
	} else {
		var_1_39 = var_1_18;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854765600e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= 1073741823);
	assume_abort_if_not(var_1_40 <= 2147483646);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_14 = var_1_14;
}

int property() {
	return ((((((var_1_1 == ((unsigned char) (50 + (min (var_1_2 , (min (var_1_3 , var_1_4))))))) && ((last_1_var_1_8 && last_1_var_1_8) ? (last_1_var_1_8 ? (var_1_5 == ((signed long int) ((abs (last_1_var_1_14)) - (min (var_1_4 , var_1_2))))) : (var_1_5 == ((signed long int) 8))) : 1)) && ((var_1_5 < var_1_3) ? (var_1_8 == ((unsigned char) ((var_1_7 || (last_1_var_1_8 || var_1_9)) && var_1_10))) : (var_1_8 == ((unsigned char) (! var_1_10))))) && ((var_1_4 == (8 + var_1_14)) ? (var_1_11 == ((double) (max (var_1_12 , var_1_13)))) : 1)) && (((64.4f + 1.5f) <= var_1_13) ? ((var_1_1 >= var_1_4) ? (var_1_14 == ((signed char) var_1_15)) : 1) : 1)) && ((var_1_12 >= 9.6) ? (var_1_10 ? (var_1_16 == ((signed short int) (2 - var_1_1))) : (((var_1_18 * (var_1_15 & var_1_1)) <= var_1_3) ? (var_1_16 == ((signed short int) var_1_18)) : (var_1_16 == ((signed short int) var_1_4)))) : 1)) && (((var_1_9 && var_1_8) || (var_1_8 && var_1_10)) ? (var_1_18 == ((unsigned long int) (var_1_19 - (min ((1991720936u - var_1_1) , var_1_2))))) : (var_1_18 == ((unsigned long int) var_1_2)))
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
