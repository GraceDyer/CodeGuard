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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6PS_CN_50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 100.25;
double var_1_5 = 1.9;
double var_1_6 = 7.5;
double var_1_7 = 64.25;
signed long int var_1_8 = 2;
signed long int var_1_9 = 1000000000;
signed long int var_1_10 = 1000000000;
signed long int var_1_11 = 1957998270;
float var_1_12 = 50.25;
float var_1_13 = 9.8;
float var_1_14 = 25.5;
float var_1_15 = 3.5;
signed long int var_1_16 = -500;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
signed long int var_1_20 = -4;
unsigned char var_1_21 = 0;
signed short int var_1_22 = 8;
signed short int var_1_23 = -200;
signed long int var_1_24 = 0;
unsigned short int var_1_25 = 32;
signed long int var_1_26 = 10;
signed short int var_1_27 = 0;
signed short int var_1_28 = -128;
signed short int var_1_29 = 16;
signed short int var_1_30 = 10;
unsigned char var_1_31 = 1;
unsigned long int var_1_32 = 32;
unsigned long int var_1_33 = 5;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 10;
unsigned short int var_1_37 = 256;
signed long int var_1_38 = 10;
signed char var_1_39 = 16;
double var_1_40 = 256.5;
double var_1_41 = 15.5;
unsigned long int var_1_42 = 10;
double var_1_43 = 5.602;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 100.25;
signed long int last_1_var_1_8 = 2;
float last_1_var_1_12 = 50.25;
signed long int last_1_var_1_16 = -500;
unsigned char last_1_var_1_17 = 1;
unsigned char last_1_var_1_19 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_21) {
		if (var_1_22 <= var_1_23) {
			var_1_20 = 10;
		}
	}


	// From: CodeObject2
	if ((min (var_1_23 , (8 ^ var_1_22))) >= (abs (var_1_26))) {
		var_1_25 = 8;
	}


	// From: CodeObject3
	if (var_1_23 >= ((abs (var_1_28)) - var_1_29)) {
		if (var_1_23 != var_1_29) {
			var_1_27 = var_1_30;
		} else {
			if (var_1_21 || var_1_31) {
				var_1_27 = var_1_30;
			}
		}
	}


	// From: CodeObject4
	var_1_32 = var_1_25;


	// From: CodeObject5
	if (var_1_21) {
		var_1_33 = (abs (10000000u));
	} else {
		var_1_33 = (max ((abs (var_1_25)) , var_1_29));
	}


	// From: CodeObject6
	if (var_1_25 > (var_1_24 + var_1_33)) {
		var_1_34 = (max (var_1_35 , var_1_36));
	}


	// From: CodeObject7
	if (var_1_25 > (min (var_1_27 , (max (var_1_29 , var_1_24))))) {
		if (-256 != var_1_35) {
			var_1_37 = (abs (abs (var_1_35)));
		}
	}


	// From: CodeObject8
	if (500 != var_1_28) {
		if (var_1_39 != var_1_33) {
			var_1_38 = (abs (var_1_39));
		}
	}


	// From: CodeObject9
	var_1_40 = var_1_41;


	// From: CodeObject10
	var_1_42 = var_1_37;


	// From: CodeObject11
	var_1_43 = var_1_41;


	// From: Req7Batch6PS_CN_50
	if (last_1_var_1_17) {
		if (var_1_7 > ((abs (var_1_5)) * (last_1_var_1_1 * 63.375))) {
			var_1_19 = var_1_18;
		}
	} else {
		var_1_19 = var_1_18;
	}


	// From: Req5Batch6PS_CN_50
	if ((max ((- var_1_15) , (last_1_var_1_12 * var_1_6))) < var_1_5) {
		if (var_1_11 != (min (last_1_var_1_8 , var_1_10))) {
			if (last_1_var_1_19) {
				var_1_16 = last_1_var_1_8;
			}
		}
	}


	// From: Req2Batch6PS_CN_50
	var_1_8 = (((var_1_9 + var_1_10) - last_1_var_1_16) - (var_1_11 - (abs (last_1_var_1_16))));


	// From: Req3Batch6PS_CN_50
	signed long int stepLocal_1 = min (var_1_16 , var_1_9);
	if (stepLocal_1 >= (var_1_16 - var_1_11)) {
		var_1_12 = var_1_7;
	}


	// From: Req6Batch6PS_CN_50
	var_1_17 = (((var_1_16 * var_1_9) >= (max (var_1_16 , var_1_8))) || var_1_18);


	// From: Req4Batch6PS_CN_50
	signed long int stepLocal_2 = var_1_16;
	if (stepLocal_2 < var_1_11) {
		var_1_13 = ((7.3868261718112563E18f - (var_1_14 + var_1_15)) - 5.4f);
	} else {
		var_1_13 = (var_1_15 + (min (var_1_14 , var_1_5)));
	}


	// From: Req1Batch6PS_CN_50
	signed long int stepLocal_0 = var_1_8;
	if (var_1_19) {
		if (stepLocal_0 >= var_1_8) {
			var_1_1 = (var_1_5 + var_1_6);
		} else {
			var_1_1 = (4.125 - var_1_7);
		}
	} else {
		var_1_1 = var_1_5;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 536870911);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 536870911);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 1073741823);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691390e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= -32768);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32768);
	assume_abort_if_not(var_1_23 <= 32767);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483648);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483647);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32767);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -128);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return ((((((var_1_19 ? ((var_1_8 >= var_1_8) ? (var_1_1 == ((double) (var_1_5 + var_1_6))) : (var_1_1 == ((double) (4.125 - var_1_7)))) : (var_1_1 == ((double) var_1_5))) && (var_1_8 == ((signed long int) (((var_1_9 + var_1_10) - last_1_var_1_16) - (var_1_11 - (abs (last_1_var_1_16))))))) && (((min (var_1_16 , var_1_9)) >= (var_1_16 - var_1_11)) ? (var_1_12 == ((float) var_1_7)) : 1)) && ((var_1_16 < var_1_11) ? (var_1_13 == ((float) ((7.3868261718112563E18f - (var_1_14 + var_1_15)) - 5.4f))) : (var_1_13 == ((float) (var_1_15 + (min (var_1_14 , var_1_5))))))) && (((max ((- var_1_15) , (last_1_var_1_12 * var_1_6))) < var_1_5) ? ((var_1_11 != (min (last_1_var_1_8 , var_1_10))) ? (last_1_var_1_19 ? (var_1_16 == ((signed long int) last_1_var_1_8)) : 1) : 1) : 1)) && (var_1_17 == ((unsigned char) (((var_1_16 * var_1_9) >= (max (var_1_16 , var_1_8))) || var_1_18)))) && (last_1_var_1_17 ? ((var_1_7 > ((abs (var_1_5)) * (last_1_var_1_1 * 63.375))) ? (var_1_19 == ((unsigned char) var_1_18)) : 1) : (var_1_19 == ((unsigned char) var_1_18)))
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
