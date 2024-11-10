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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch97Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 4;
unsigned char var_1_2 = 0;
unsigned long int var_1_7 = 2819353023;
signed short int var_1_9 = 25;
signed short int var_1_10 = 25;
signed short int var_1_11 = 0;
float var_1_12 = 255.8;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 4;
float var_1_17 = 99999.5;
float var_1_18 = 63.4;
double var_1_19 = 63.5;
double var_1_20 = 9.95;
double var_1_21 = 5.7;
double var_1_22 = 3.85;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 0;
unsigned long int var_1_26 = 16;
unsigned long int var_1_27 = 1840944138;
unsigned short int var_1_28 = 0;
float var_1_29 = 1.1;
signed char var_1_30 = 25;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_23 = 1;
float last_1_var_1_29 = 1.1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch97Amount100
	if (var_1_21 < (256.8 - var_1_20)) {
		var_1_22 = (min (var_1_18 , var_1_17));
	} else {
		var_1_22 = (var_1_17 + (abs (var_1_18)));
	}


	// From: Req6Batch97Amount100
	if ((abs (4.8f)) == var_1_18) {
		var_1_23 = (last_1_var_1_23 && (var_1_2 && var_1_24));
	} else {
		var_1_23 = var_1_24;
	}


	// From: Req8Batch97Amount100
	unsigned long int stepLocal_5 = var_1_26;
	if (stepLocal_5 < var_1_11) {
		if (var_1_24) {
			var_1_28 = (max ((abs (var_1_15)) , var_1_14));
		} else {
			var_1_28 = (min (var_1_14 , var_1_11));
		}
	} else {
		var_1_28 = var_1_11;
	}


	// From: Req9Batch97Amount100
	if (last_1_var_1_29 > 1.9) {
		var_1_29 = var_1_20;
	} else {
		var_1_29 = (abs (var_1_21 - var_1_20));
	}


	// From: Req10Batch97Amount100
	unsigned char stepLocal_6 = var_1_14;
	if (var_1_28 >= stepLocal_6) {
		var_1_30 = (min (var_1_14 , var_1_15));
	} else {
		if (! var_1_23) {
			var_1_30 = (abs (-1));
		}
	}


	// From: Req2Batch97Amount100
	if ((var_1_28 <= (var_1_28 / var_1_7)) || var_1_23) {
		var_1_9 = (var_1_10 - var_1_11);
	} else {
		if (var_1_23 || var_1_23) {
			var_1_9 = var_1_11;
		} else {
			var_1_9 = -8;
		}
	}


	// From: Req7Batch97Amount100
	if (var_1_22 < var_1_17) {
		var_1_25 = (var_1_16 + ((var_1_14 + var_1_28) + var_1_11));
	} else {
		var_1_25 = ((var_1_27 - var_1_16) + var_1_15);
	}


	// From: Req4Batch97Amount100
	signed long int stepLocal_4 = abs (var_1_16 - var_1_14);
	signed long int stepLocal_3 = 64;
	if (var_1_16 >= stepLocal_3) {
		if (var_1_22 != var_1_17) {
			var_1_19 = var_1_17;
		}
	} else {
		if (var_1_25 > stepLocal_4) {
			var_1_19 = (min (((max (499.698 , var_1_20)) - var_1_21) , var_1_17));
		} else {
			var_1_19 = 9.2;
		}
	}


	// From: Req3Batch97Amount100
	if (var_1_23 || (var_1_19 < var_1_19)) {
		if (((var_1_14 - var_1_15) - var_1_16) > var_1_10) {
			var_1_12 = (var_1_17 + var_1_18);
		} else {
			var_1_12 = var_1_18;
		}
	} else {
		var_1_12 = var_1_17;
	}


	// From: Req1Batch97Amount100
	unsigned short int stepLocal_2 = var_1_28;
	unsigned char stepLocal_1 = var_1_23;
	unsigned long int stepLocal_0 = var_1_7 - var_1_28;
	if (stepLocal_1 && var_1_23) {
		if (var_1_12 == var_1_22) {
			var_1_1 = (var_1_28 + 10u);
		}
	} else {
		if (stepLocal_0 <= (abs (var_1_28))) {
			if (var_1_22 != var_1_12) {
				if (var_1_7 < stepLocal_2) {
					var_1_1 = var_1_28;
				} else {
					var_1_1 = var_1_28;
				}
			} else {
				var_1_1 = var_1_28;
			}
		} else {
			var_1_1 = var_1_28;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 2147483647);
	assume_abort_if_not(var_1_7 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 191);
	assume_abort_if_not(var_1_14 <= 255);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 64);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 536870912);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 1073741823);
	assume_abort_if_not(var_1_27 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_29 = var_1_29;
}

int property() {
	return ((((((((((var_1_23 && var_1_23) ? ((var_1_12 == var_1_22) ? (var_1_1 == ((unsigned long int) (var_1_28 + 10u))) : 1) : (((var_1_7 - var_1_28) <= (abs (var_1_28))) ? ((var_1_22 != var_1_12) ? ((var_1_7 < var_1_28) ? (var_1_1 == ((unsigned long int) var_1_28)) : (var_1_1 == ((unsigned long int) var_1_28))) : (var_1_1 == ((unsigned long int) var_1_28))) : (var_1_1 == ((unsigned long int) var_1_28)))) && (((var_1_28 <= (var_1_28 / var_1_7)) || var_1_23) ? (var_1_9 == ((signed short int) (var_1_10 - var_1_11))) : ((var_1_23 || var_1_23) ? (var_1_9 == ((signed short int) var_1_11)) : (var_1_9 == ((signed short int) -8))))) && ((var_1_23 || (var_1_19 < var_1_19)) ? ((((var_1_14 - var_1_15) - var_1_16) > var_1_10) ? (var_1_12 == ((float) (var_1_17 + var_1_18))) : (var_1_12 == ((float) var_1_18))) : (var_1_12 == ((float) var_1_17)))) && ((var_1_16 >= 64) ? ((var_1_22 != var_1_17) ? (var_1_19 == ((double) var_1_17)) : 1) : ((var_1_25 > (abs (var_1_16 - var_1_14))) ? (var_1_19 == ((double) (min (((max (499.698 , var_1_20)) - var_1_21) , var_1_17)))) : (var_1_19 == ((double) 9.2))))) && ((var_1_21 < (256.8 - var_1_20)) ? (var_1_22 == ((double) (min (var_1_18 , var_1_17)))) : (var_1_22 == ((double) (var_1_17 + (abs (var_1_18))))))) && (((abs (4.8f)) == var_1_18) ? (var_1_23 == ((unsigned char) (last_1_var_1_23 && (var_1_2 && var_1_24)))) : (var_1_23 == ((unsigned char) var_1_24)))) && ((var_1_22 < var_1_17) ? (var_1_25 == ((unsigned long int) (var_1_16 + ((var_1_14 + var_1_28) + var_1_11)))) : (var_1_25 == ((unsigned long int) ((var_1_27 - var_1_16) + var_1_15))))) && ((var_1_26 < var_1_11) ? (var_1_24 ? (var_1_28 == ((unsigned short int) (max ((abs (var_1_15)) , var_1_14)))) : (var_1_28 == ((unsigned short int) (min (var_1_14 , var_1_11))))) : (var_1_28 == ((unsigned short int) var_1_11)))) && ((last_1_var_1_29 > 1.9) ? (var_1_29 == ((float) var_1_20)) : (var_1_29 == ((float) (abs (var_1_21 - var_1_20)))))) && ((var_1_28 >= var_1_14) ? (var_1_30 == ((signed char) (min (var_1_14 , var_1_15)))) : ((! var_1_23) ? (var_1_30 == ((signed char) (abs (-1)))) : 1))
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
