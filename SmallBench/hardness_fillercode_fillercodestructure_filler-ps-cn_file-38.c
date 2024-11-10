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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch38Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 4;
signed long int var_1_11 = 100;
signed long int var_1_12 = 8;
unsigned short int var_1_13 = 128;
double var_1_14 = 64.5;
signed short int var_1_15 = 4;
signed long int var_1_16 = -8;
double var_1_17 = 255.5;
double var_1_18 = 0.6;
double var_1_19 = 1000000000000.5;
double var_1_20 = 999999.25;
signed short int var_1_21 = -64;
signed char var_1_25 = -128;
signed char var_1_26 = -8;
unsigned char var_1_27 = 32;
double var_1_28 = 128.375;
double var_1_29 = 25.2;
double var_1_30 = 255.5;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 25;
unsigned char var_1_33 = 128;
double var_1_34 = 499.6;
double var_1_35 = 3.5;
unsigned char var_1_36 = 200;
unsigned short int var_1_37 = 2;
signed long int var_1_38 = -2;
unsigned short int var_1_41 = 36532;
unsigned short int var_1_42 = 32367;
signed char var_1_43 = -2;
signed char var_1_44 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_8 = 4;
signed short int last_1_var_1_21 = -64;
signed char last_1_var_1_25 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_30 >= (abs (max (var_1_29 , var_1_28)))) {
		if (var_1_28 <= var_1_29) {
			var_1_27 = (abs (var_1_31));
		} else {
			var_1_27 = 50;
		}
	} else {
		var_1_27 = var_1_32;
	}


	// From: CodeObject2
	if (var_1_29 >= (min (var_1_28 , var_1_30))) {
		var_1_33 = (min (var_1_31 , var_1_32));
	}


	// From: CodeObject3
	var_1_34 = var_1_35;


	// From: CodeObject4
	if (var_1_29 >= var_1_30) {
		if (-16 > var_1_31) {
			var_1_36 = 16;
		}
	}


	// From: CodeObject5
	if (-2 > ((abs (var_1_36)) | (-10 * var_1_38))) {
		var_1_37 = (max ((min (25 , var_1_36)) , (abs (var_1_32 + var_1_27))));
	} else {
		if ((abs (var_1_27)) <= (abs (var_1_36))) {
			if ((var_1_27 * (max (var_1_33 , var_1_38))) <= var_1_36) {
				var_1_37 = (abs (var_1_27));
			}
		} else {
			var_1_37 = (var_1_41 - (var_1_42 - var_1_32));
		}
	}


	// From: CodeObject6
	if (var_1_42 > var_1_41) {
		if (var_1_31 >= (var_1_42 << (abs (1)))) {
			var_1_43 = var_1_44;
		} else {
			var_1_43 = var_1_44;
		}
	}


	// From: Req5Batch38Filler_PS_CN
	if ((last_1_var_1_8 + 4u) <= (last_1_var_1_8 >> var_1_15)) {
		var_1_21 = (min ((last_1_var_1_25 + last_1_var_1_25) , last_1_var_1_25));
	} else {
		var_1_21 = last_1_var_1_25;
	}


	// From: Req3Batch38Filler_PS_CN
	signed long int stepLocal_1 = (max (-1 , var_1_11)) - var_1_12;
	signed long int stepLocal_0 = last_1_var_1_21 + last_1_var_1_21;
	if ((last_1_var_1_21 * last_1_var_1_21) < stepLocal_1) {
		if (stepLocal_0 < var_1_12) {
			var_1_8 = var_1_13;
		}
	} else {
		var_1_8 = var_1_13;
	}


	// From: Req6Batch38Filler_PS_CN
	if (! (var_1_21 > var_1_8)) {
		if (var_1_4) {
			var_1_25 = var_1_26;
		}
	}


	// From: Req4Batch38Filler_PS_CN
	if ((8 / var_1_15) < (64 / var_1_16)) {
		if (var_1_8 >= var_1_15) {
			var_1_14 = (var_1_17 - var_1_18);
		} else {
			var_1_14 = (var_1_18 - (64.25 + (max (var_1_19 , var_1_20))));
		}
	} else {
		var_1_14 = var_1_18;
	}


	// From: Req1Batch38Filler_PS_CN
	if ((- var_1_14) <= var_1_14) {
		var_1_1 = var_1_4;
	} else {
		if (var_1_14 <= var_1_14) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req2Batch38Filler_PS_CN
	if (var_1_14 < (max (var_1_14 , (128.5 * var_1_14)))) {
		var_1_7 = (var_1_1 && (! 1));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32768);
	assume_abort_if_not(var_1_15 <= 32767);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483648);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 32767);
	assume_abort_if_not(var_1_41 <= 65534);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 16383);
	assume_abort_if_not(var_1_42 <= 32767);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -127);
	assume_abort_if_not(var_1_44 <= 126);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_25 = var_1_25;
}

int property() {
	return (((((((- var_1_14) <= var_1_14) ? (var_1_1 == ((unsigned char) var_1_4)) : ((var_1_14 <= var_1_14) ? (var_1_1 == ((unsigned char) var_1_6)) : (var_1_1 == ((unsigned char) var_1_4)))) && ((var_1_14 < (max (var_1_14 , (128.5 * var_1_14)))) ? (var_1_7 == ((unsigned char) (var_1_1 && (! 1)))) : 1)) && (((last_1_var_1_21 * last_1_var_1_21) < ((max (-1 , var_1_11)) - var_1_12)) ? (((last_1_var_1_21 + last_1_var_1_21) < var_1_12) ? (var_1_8 == ((unsigned short int) var_1_13)) : 1) : (var_1_8 == ((unsigned short int) var_1_13)))) && (((8 / var_1_15) < (64 / var_1_16)) ? ((var_1_8 >= var_1_15) ? (var_1_14 == ((double) (var_1_17 - var_1_18))) : (var_1_14 == ((double) (var_1_18 - (64.25 + (max (var_1_19 , var_1_20))))))) : (var_1_14 == ((double) var_1_18)))) && (((last_1_var_1_8 + 4u) <= (last_1_var_1_8 >> var_1_15)) ? (var_1_21 == ((signed short int) (min ((last_1_var_1_25 + last_1_var_1_25) , last_1_var_1_25)))) : (var_1_21 == ((signed short int) last_1_var_1_25)))) && ((! (var_1_21 > var_1_8)) ? (var_1_4 ? (var_1_25 == ((signed char) var_1_26)) : 1) : 1)
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
