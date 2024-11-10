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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 32;
signed char var_1_4 = 16;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 64;
signed char var_1_12 = -10;
signed char var_1_13 = -10;
signed char var_1_14 = -25;
double var_1_15 = 64.875;
double var_1_17 = 1.625;
double var_1_18 = 32.2;
double var_1_19 = 8.6;
double var_1_20 = 10.5;
signed short int var_1_21 = -64;
unsigned char var_1_22 = 25;
unsigned char var_1_23 = 0;
unsigned long int var_1_24 = 5;
double var_1_25 = 0.75;
double var_1_26 = 99999999999999.5;
unsigned char var_1_27 = 4;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 50;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 50;
unsigned char var_1_34 = 64;
signed short int var_1_35 = -64;
signed char var_1_36 = -10;
unsigned char var_1_37 = 2;
signed char var_1_38 = -2;
signed long int var_1_39 = 256;
double var_1_40 = 31.6;
double var_1_41 = 5.4;
signed short int var_1_42 = 5;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_21 = -64;
unsigned char last_1_var_1_22 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_25 = var_1_26;


	// From: CodeObject2
	if ((var_1_26 >= var_1_15) && (var_1_24 >= var_1_22)) {
		if (var_1_30) {
			var_1_27 = (max ((min (var_1_31 , var_1_32)) , (abs (var_1_33))));
		} else {
			var_1_27 = ((abs (128)) - var_1_34);
		}
	}


	// From: CodeObject3
	if (var_1_26 > var_1_15) {
		if (var_1_22 >= var_1_34) {
			var_1_35 = (abs (min ((var_1_33 + var_1_12) , var_1_34)));
		}
	}


	// From: CodeObject4
	if (var_1_33 >= (var_1_23 % (abs (var_1_37)))) {
		if (var_1_32 < var_1_34) {
			if (var_1_30 && ((abs (var_1_31)) <= var_1_37)) {
				var_1_36 = var_1_38;
			}
		}
	}


	// From: CodeObject5
	if (var_1_8 > var_1_23) {
		var_1_39 = (min (var_1_8 , (abs (var_1_24))));
	}


	// From: CodeObject6
	if (var_1_24 < (min (var_1_38 , -64))) {
		var_1_40 = var_1_26;
	} else {
		if ((var_1_37 | var_1_31) < (8 + var_1_8)) {
			var_1_40 = (abs (max ((abs (var_1_26)) , var_1_41)));
		}
	}


	// From: CodeObject7
	var_1_42 = var_1_24;


	// From: Req1Batch13Filler_PS_CO
	signed long int stepLocal_1 = ~ last_1_var_1_21;
	unsigned char stepLocal_0 = var_1_5;
	if (stepLocal_1 != (last_1_var_1_22 >> var_1_4)) {
		if (stepLocal_0 || var_1_6) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = last_1_var_1_22;
		}
	} else {
		var_1_1 = 100;
	}


	// From: Req2Batch13Filler_PS_CO
	if (var_1_9) {
		var_1_8 = (var_1_10 - (var_1_11 - var_1_4));
	}


	// From: Req4Batch13Filler_PS_CO
	unsigned short int stepLocal_3 = var_1_1;
	if (var_1_4 > stepLocal_3) {
		var_1_15 = ((var_1_17 - var_1_18) + ((max (var_1_19 , 499.25)) + var_1_20));
	} else {
		var_1_15 = var_1_17;
	}


	// From: Req6Batch13Filler_PS_CO
	if (((- var_1_11) < 8) || var_1_9) {
		var_1_22 = (var_1_4 + (abs (var_1_11)));
	}


	// From: Req7Batch13Filler_PS_CO
	var_1_23 = (var_1_11 + var_1_4);


	// From: Req8Batch13Filler_PS_CO
	if (var_1_18 <= var_1_20) {
		var_1_24 = (min (var_1_8 , (var_1_8 + var_1_11)));
	} else {
		if (9.99999999999998E13 < var_1_20) {
			var_1_24 = var_1_1;
		}
	}


	// From: Req5Batch13Filler_PS_CO
	if (var_1_6 || var_1_9) {
		if ((var_1_24 % var_1_10) > var_1_22) {
			var_1_21 = ((abs (var_1_11)) + var_1_14);
		}
	}


	// From: Req3Batch13Filler_PS_CO
	signed short int stepLocal_2 = var_1_21;
	if (var_1_10 > stepLocal_2) {
		var_1_12 = ((var_1_4 + var_1_13) + var_1_14);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -31);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -230584.3009213691390e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -230584.3009213691390e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691390e+12F && var_1_20 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 255);
	assume_abort_if_not(var_1_37 != 0);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_22 = var_1_22;
}

int property() {
	return (((((((((~ last_1_var_1_21) != (last_1_var_1_22 >> var_1_4)) ? ((var_1_5 || var_1_6) ? (var_1_1 == ((unsigned short int) var_1_4)) : (var_1_1 == ((unsigned short int) last_1_var_1_22))) : (var_1_1 == ((unsigned short int) 100))) && (var_1_9 ? (var_1_8 == ((unsigned char) (var_1_10 - (var_1_11 - var_1_4)))) : 1)) && ((var_1_10 > var_1_21) ? (var_1_12 == ((signed char) ((var_1_4 + var_1_13) + var_1_14))) : 1)) && ((var_1_4 > var_1_1) ? (var_1_15 == ((double) ((var_1_17 - var_1_18) + ((max (var_1_19 , 499.25)) + var_1_20)))) : (var_1_15 == ((double) var_1_17)))) && ((var_1_6 || var_1_9) ? (((var_1_24 % var_1_10) > var_1_22) ? (var_1_21 == ((signed short int) ((abs (var_1_11)) + var_1_14))) : 1) : 1)) && ((((- var_1_11) < 8) || var_1_9) ? (var_1_22 == ((unsigned char) (var_1_4 + (abs (var_1_11))))) : 1)) && (var_1_23 == ((unsigned char) (var_1_11 + var_1_4)))) && ((var_1_18 <= var_1_20) ? (var_1_24 == ((unsigned long int) (min (var_1_8 , (var_1_8 + var_1_11))))) : ((9.99999999999998E13 < var_1_20) ? (var_1_24 == ((unsigned long int) var_1_1)) : 1))
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
