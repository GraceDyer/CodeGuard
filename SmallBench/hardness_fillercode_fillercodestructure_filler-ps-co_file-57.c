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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch57Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 5;
signed char var_1_2 = -1;
signed char var_1_3 = 10;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
double var_1_7 = 24.8;
double var_1_8 = 500.5;
double var_1_9 = 2.4;
double var_1_10 = 0.4;
double var_1_11 = 255.8;
double var_1_12 = 50.75;
unsigned char var_1_13 = 4;
unsigned char var_1_14 = 200;
unsigned char var_1_15 = 25;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 32;
unsigned long int var_1_20 = 1;
float var_1_21 = 9999999999.2;
double var_1_23 = 10.875;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
float var_1_26 = 1000000000000.6;
unsigned long int var_1_27 = 2609431563;
float var_1_29 = 2.375;
float var_1_30 = 8.8;
float var_1_31 = 2.6;
unsigned short int var_1_32 = 1;
signed char var_1_33 = 50;
signed long int var_1_34 = 100;
signed char var_1_36 = 64;
float var_1_37 = 9.5;
signed char var_1_38 = -2;
signed char var_1_39 = 32;
signed char var_1_40 = 10;
signed long int var_1_41 = 200;
signed char var_1_42 = 2;
signed long int var_1_43 = 2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_24 = var_1_25;


	// From: CodeObject2
	if ((25u | (var_1_27 - 5u)) >= var_1_13) {
		var_1_26 = (abs (abs (var_1_29)));
	} else {
		if (var_1_13 < var_1_27) {
			var_1_26 = var_1_29;
		}
	}


	// From: CodeObject3
	if (var_1_21 < var_1_29) {
		var_1_30 = (max (var_1_29 , var_1_31));
	}


	// From: CodeObject4
	if ((-1 - var_1_33) < ((var_1_1 / var_1_34) & var_1_20)) {
		if ((- (abs (var_1_20))) < (var_1_34 >> var_1_33)) {
			var_1_32 = var_1_33;
		} else {
			var_1_32 = var_1_33;
		}
	} else {
		var_1_32 = 5;
	}


	// From: CodeObject5
	if (var_1_7 < ((var_1_29 / var_1_37) + var_1_21)) {
		if (((var_1_7 >= var_1_29) && var_1_25) && (var_1_31 <= (abs (var_1_21)))) {
			var_1_36 = (abs (var_1_38));
		}
	} else {
		var_1_36 = (max (var_1_38 , (var_1_39 - var_1_40)));
	}


	// From: CodeObject6
	if ((var_1_27 >> var_1_40) <= var_1_13) {
		var_1_41 = (abs (var_1_39));
	}


	// From: CodeObject7
	var_1_42 = var_1_39;


	// From: CodeObject8
	var_1_43 = var_1_13;


	// From: Req2Batch57Filler_PS_CO
	signed char stepLocal_0 = var_1_2;
	if (-256 <= stepLocal_0) {
		var_1_7 = (var_1_8 + ((max (var_1_9 , var_1_10)) + (var_1_11 + var_1_12)));
	} else {
		if (var_1_11 == var_1_9) {
			var_1_7 = var_1_8;
		}
	}


	// From: Req3Batch57Filler_PS_CO
	if (var_1_11 <= var_1_9) {
		var_1_13 = ((max ((var_1_14 - var_1_15) , var_1_16)) - (var_1_17 + (max (var_1_18 , var_1_19))));
	}


	// From: Req1Batch57Filler_PS_CO
	if ((var_1_2 - var_1_3) > (var_1_13 / var_1_5)) {
		var_1_1 = (128 - var_1_3);
	} else {
		if (! var_1_6) {
			var_1_1 = var_1_3;
		} else {
			var_1_1 = var_1_3;
		}
	}


	// From: Req4Batch57Filler_PS_CO
	signed long int stepLocal_1 = (var_1_2 * var_1_13) & var_1_1;
	if (var_1_3 < stepLocal_1) {
		var_1_20 = ((abs (var_1_18)) + var_1_14);
	}


	// From: Req5Batch57Filler_PS_CO
	signed long int stepLocal_2 = var_1_1 & var_1_3;
	if (((max (var_1_1 , var_1_5)) + (var_1_1 / var_1_14)) <= stepLocal_2) {
		if (var_1_6) {
			var_1_21 = var_1_12;
		} else {
			var_1_21 = var_1_10;
		}
	} else {
		var_1_21 = var_1_12;
	}


	// From: Req6Batch57Filler_PS_CO
	unsigned long int stepLocal_3 = var_1_20;
	if (var_1_1 > stepLocal_3) {
		if (! (! var_1_6)) {
			var_1_23 = var_1_8;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 127);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -230584.3009213691390e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 2305843.009213691390e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -230584.3009213691390e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691390e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -115292.1504606845700e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 1152921.504606845700e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -115292.1504606845700e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 1152921.504606845700e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 190);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 64);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 2147483647);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854765600e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854765600e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854765600e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483648);
	assume_abort_if_not(var_1_34 <= 2147483647);
	assume_abort_if_not(var_1_34 != 0);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	assume_abort_if_not(var_1_37 != 0.0F);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -126);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -1);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 126);
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_2 - var_1_3) > (var_1_13 / var_1_5)) ? (var_1_1 == ((unsigned char) (128 - var_1_3))) : ((! var_1_6) ? (var_1_1 == ((unsigned char) var_1_3)) : (var_1_1 == ((unsigned char) var_1_3)))) && ((-256 <= var_1_2) ? (var_1_7 == ((double) (var_1_8 + ((max (var_1_9 , var_1_10)) + (var_1_11 + var_1_12))))) : ((var_1_11 == var_1_9) ? (var_1_7 == ((double) var_1_8)) : 1))) && ((var_1_11 <= var_1_9) ? (var_1_13 == ((unsigned char) ((max ((var_1_14 - var_1_15) , var_1_16)) - (var_1_17 + (max (var_1_18 , var_1_19)))))) : 1)) && ((var_1_3 < ((var_1_2 * var_1_13) & var_1_1)) ? (var_1_20 == ((unsigned long int) ((abs (var_1_18)) + var_1_14))) : 1)) && ((((max (var_1_1 , var_1_5)) + (var_1_1 / var_1_14)) <= (var_1_1 & var_1_3)) ? (var_1_6 ? (var_1_21 == ((float) var_1_12)) : (var_1_21 == ((float) var_1_10))) : (var_1_21 == ((float) var_1_12)))) && ((var_1_1 > var_1_20) ? ((! (! var_1_6)) ? (var_1_23 == ((double) var_1_8)) : 1) : 1)
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
