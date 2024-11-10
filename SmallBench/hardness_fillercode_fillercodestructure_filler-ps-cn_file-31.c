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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch31Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 2;
unsigned char var_1_3 = 5;
unsigned char var_1_4 = 50;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 8;
unsigned long int var_1_9 = 1;
signed char var_1_10 = 4;
signed char var_1_11 = 50;
signed char var_1_12 = 5;
signed char var_1_13 = 16;
signed char var_1_14 = 5;
signed char var_1_15 = 4;
unsigned char var_1_16 = 128;
unsigned short int var_1_17 = 10;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
float var_1_22 = 8.625;
float var_1_23 = 16.5;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
float var_1_27 = 2.5;
float var_1_28 = 7.7;
signed short int var_1_29 = -256;
signed short int var_1_30 = 100;
signed long int var_1_31 = 32;
signed short int var_1_32 = 64;
unsigned short int var_1_33 = 0;
float var_1_34 = 8.6;
signed short int var_1_35 = 128;
unsigned char var_1_36 = 4;
unsigned char var_1_37 = 5;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
double var_1_43 = 24.4;
double var_1_44 = 7.875;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_22 <= var_1_23) {
		var_1_21 = (var_1_24 || (var_1_25 || var_1_26));
	} else {
		var_1_21 = var_1_26;
	}


	// From: CodeObject2
	if (! var_1_25) {
		var_1_27 = (min (4.2f , var_1_28));
	} else {
		if (var_1_22 <= var_1_23) {
			if (((abs (var_1_29)) - var_1_30) < var_1_31) {
				if (var_1_31 < var_1_30) {
					var_1_27 = var_1_28;
				}
			} else {
				var_1_27 = var_1_28;
			}
		}
	}


	// From: CodeObject3
	var_1_32 = -128;


	// From: CodeObject4
	if ((var_1_23 < var_1_34) || var_1_25) {
		if ((var_1_32 / (min (-10 , var_1_35))) >= (min (var_1_31 , var_1_30))) {
			var_1_33 = var_1_30;
		} else {
			var_1_33 = var_1_30;
		}
	}


	// From: CodeObject5
	if (var_1_33 > (var_1_31 | (abs (var_1_35)))) {
		var_1_36 = (max (8 , (max ((max (var_1_37 , var_1_38)) , var_1_39))));
	}


	// From: CodeObject6
	var_1_40 = (var_1_41 && (var_1_26 || var_1_42));


	// From: CodeObject7
	if (var_1_22 > (max (var_1_34 , var_1_28))) {
		if (var_1_22 >= 4.829f) {
			var_1_43 = (1.8 - var_1_44);
		} else {
			if (var_1_25) {
				var_1_43 = var_1_44;
			}
		}
	} else {
		var_1_43 = var_1_44;
	}


	// From: Req2Batch31Filler_PS_CN
	var_1_8 = (min ((var_1_5 + (64 - 16)) , 64));


	// From: Req4Batch31Filler_PS_CN
	if ((var_1_6 + var_1_4) >= var_1_5) {
		if (var_1_6 > var_1_8) {
			var_1_10 = (((abs (var_1_11)) + (var_1_12 + var_1_13)) - (max (var_1_14 , var_1_15)));
		} else {
			var_1_10 = (max ((min (var_1_14 , var_1_12)) , var_1_15));
		}
	}


	// From: Req6Batch31Filler_PS_CN
	var_1_17 = var_1_13;


	// From: Req7Batch31Filler_PS_CN
	signed long int stepLocal_2 = var_1_17 / 64;
	if (var_1_12 <= stepLocal_2) {
		var_1_18 = (! var_1_19);
	} else {
		if (var_1_19) {
			var_1_18 = var_1_20;
		} else {
			var_1_18 = var_1_20;
		}
	}


	// From: Req1Batch31Filler_PS_CN
	if (var_1_18) {
		var_1_1 = (max ((abs (var_1_3)) , var_1_4));
	} else {
		var_1_1 = ((var_1_5 + var_1_6) - var_1_7);
	}


	// From: Req3Batch31Filler_PS_CN
	if ((var_1_8 * var_1_7) >= var_1_3) {
		var_1_9 = (5u + var_1_4);
	} else {
		if (var_1_18) {
			var_1_9 = var_1_4;
		} else {
			var_1_9 = var_1_8;
		}
	}


	// From: Req5Batch31Filler_PS_CN
	unsigned char stepLocal_1 = (-128 | var_1_12) >= (abs (var_1_4));
	unsigned char stepLocal_0 = var_1_3;
	if (stepLocal_1 || var_1_18) {
		if (stepLocal_0 <= 16) {
			var_1_16 = var_1_12;
		} else {
			var_1_16 = var_1_6;
		}
	} else {
		var_1_16 = var_1_12;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 254);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 64);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854765600e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854765600e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32767);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= -32768);
	assume_abort_if_not(var_1_35 <= 32767);
	assume_abort_if_not(var_1_35 != 0);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return ((((((var_1_18 ? (var_1_1 == ((unsigned char) (max ((abs (var_1_3)) , var_1_4)))) : (var_1_1 == ((unsigned char) ((var_1_5 + var_1_6) - var_1_7)))) && (var_1_8 == ((unsigned char) (min ((var_1_5 + (64 - 16)) , 64))))) && (((var_1_8 * var_1_7) >= var_1_3) ? (var_1_9 == ((unsigned long int) (5u + var_1_4))) : (var_1_18 ? (var_1_9 == ((unsigned long int) var_1_4)) : (var_1_9 == ((unsigned long int) var_1_8))))) && (((var_1_6 + var_1_4) >= var_1_5) ? ((var_1_6 > var_1_8) ? (var_1_10 == ((signed char) (((abs (var_1_11)) + (var_1_12 + var_1_13)) - (max (var_1_14 , var_1_15))))) : (var_1_10 == ((signed char) (max ((min (var_1_14 , var_1_12)) , var_1_15))))) : 1)) && ((((-128 | var_1_12) >= (abs (var_1_4))) || var_1_18) ? ((var_1_3 <= 16) ? (var_1_16 == ((unsigned char) var_1_12)) : (var_1_16 == ((unsigned char) var_1_6))) : (var_1_16 == ((unsigned char) var_1_12)))) && (var_1_17 == ((unsigned short int) var_1_13))) && ((var_1_12 <= (var_1_17 / 64)) ? (var_1_18 == ((unsigned char) (! var_1_19))) : (var_1_19 ? (var_1_18 == ((unsigned char) var_1_20)) : (var_1_18 == ((unsigned char) var_1_20))))
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
