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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch77PS_CN_50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 2;
float var_1_2 = 255.5;
float var_1_3 = 99.8;
signed char var_1_4 = -25;
float var_1_6 = 255.25;
unsigned short int var_1_7 = 16;
signed char var_1_8 = -10;
signed char var_1_9 = -8;
unsigned short int var_1_10 = 8;
unsigned short int var_1_11 = 10000;
unsigned short int var_1_12 = 5;
signed short int var_1_13 = 200;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 35895;
unsigned short int var_1_17 = 18336;
unsigned char var_1_18 = 0;
signed long int var_1_19 = -50;
unsigned char var_1_20 = 10;
signed long int var_1_21 = 4;
unsigned char var_1_22 = 100;
unsigned char var_1_23 = 16;
signed long int var_1_24 = -256;
unsigned char var_1_25 = 1;
float var_1_26 = 128.75;
float var_1_27 = 25.02;
float var_1_28 = 3.5;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 25;
unsigned char var_1_31 = 1;
signed char var_1_32 = 1;
unsigned char var_1_33 = 200;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 8;
unsigned short int var_1_37 = 500;
unsigned char var_1_38 = 32;
unsigned short int var_1_39 = 25;

// Calibration values

// Last'ed variables
signed char last_1_var_1_8 = -10;
unsigned char last_1_var_1_15 = 0;
signed long int last_1_var_1_19 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_21 <= -1) {
		var_1_20 = (abs (abs (var_1_22)));
	}


	// From: CodeObject2
	var_1_23 = var_1_22;


	// From: CodeObject3
	if (var_1_20 >= (var_1_23 & (var_1_22 >> var_1_21))) {
		var_1_24 = (var_1_22 - (abs (var_1_20)));
	} else {
		if (var_1_20 > (var_1_23 ^ var_1_22)) {
			var_1_24 = (min (var_1_20 , var_1_23));
		}
	}


	// From: CodeObject4
	if (var_1_24 >= (-128 & var_1_21)) {
		if (((max (var_1_26 , var_1_27)) <= var_1_28) && var_1_29) {
			var_1_25 = var_1_22;
		}
	} else {
		var_1_25 = var_1_22;
	}


	// From: CodeObject5
	if (var_1_29) {
		var_1_30 = (max (var_1_22 , 10));
	} else {
		if (! var_1_31) {
			if ((var_1_24 % var_1_32) <= var_1_20) {
				var_1_30 = (var_1_33 - (max (var_1_34 , (var_1_35 - var_1_36))));
			}
		}
	}


	// From: CodeObject6
	if ((max (var_1_25 , var_1_30)) > var_1_32) {
		if (! var_1_31) {
			if (var_1_31) {
				var_1_37 = (abs (min (var_1_22 , 128)));
			}
		}
	}


	// From: CodeObject7
	var_1_38 = var_1_34;


	// From: CodeObject8
	var_1_39 = var_1_30;


	// From: Req1Batch77PS_CN_50
	signed long int stepLocal_0 = abs (var_1_4);
	if (stepLocal_0 <= last_1_var_1_8) {
		if ((- var_1_3) > (max (var_1_2 , var_1_6))) {
			var_1_1 = var_1_7;
		} else {
			var_1_1 = var_1_7;
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch77PS_CN_50
	if ((- var_1_7) < (var_1_1 * var_1_4)) {
		var_1_8 = var_1_9;
	}


	// From: Req4Batch77PS_CN_50
	if ((var_1_6 * var_1_2) <= var_1_3) {
		if (last_1_var_1_15) {
			var_1_13 = (-10 + var_1_12);
		} else {
			var_1_13 = var_1_4;
		}
	}


	// From: Req5Batch77PS_CN_50
	signed long int stepLocal_1 = var_1_16 - (var_1_17 - 256);
	if (var_1_3 != var_1_6) {
		if (var_1_13 >= stepLocal_1) {
			var_1_15 = var_1_18;
		} else {
			var_1_15 = var_1_18;
		}
	} else {
		var_1_15 = var_1_18;
	}


	// From: Req3Batch77PS_CN_50
	var_1_10 = (50 + ((var_1_11 + 10000) - var_1_12));


	// From: Req6Batch77PS_CN_50
	unsigned short int stepLocal_4 = var_1_1;
	signed long int stepLocal_3 = var_1_7 + (128 + var_1_1);
	signed long int stepLocal_2 = - var_1_10;
	if (var_1_1 < stepLocal_2) {
		if (stepLocal_3 <= last_1_var_1_19) {
			var_1_19 = var_1_4;
		}
	} else {
		if (stepLocal_4 < ((min (var_1_10 , var_1_17)) / var_1_11)) {
			var_1_19 = (max (var_1_7 , var_1_9));
		} else {
			var_1_19 = var_1_16;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -127);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 8191);
	assume_abort_if_not(var_1_11 <= 16384);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65535);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 16383);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	assume_abort_if_not(var_1_32 != 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 63);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return (((((((abs (var_1_4)) <= last_1_var_1_8) ? (((- var_1_3) > (max (var_1_2 , var_1_6))) ? (var_1_1 == ((unsigned short int) var_1_7)) : (var_1_1 == ((unsigned short int) var_1_7))) : (var_1_1 == ((unsigned short int) var_1_7))) && (((- var_1_7) < (var_1_1 * var_1_4)) ? (var_1_8 == ((signed char) var_1_9)) : 1)) && (var_1_10 == ((unsigned short int) (50 + ((var_1_11 + 10000) - var_1_12))))) && (((var_1_6 * var_1_2) <= var_1_3) ? (last_1_var_1_15 ? (var_1_13 == ((signed short int) (-10 + var_1_12))) : (var_1_13 == ((signed short int) var_1_4))) : 1)) && ((var_1_3 != var_1_6) ? ((var_1_13 >= (var_1_16 - (var_1_17 - 256))) ? (var_1_15 == ((unsigned char) var_1_18)) : (var_1_15 == ((unsigned char) var_1_18))) : (var_1_15 == ((unsigned char) var_1_18)))) && ((var_1_1 < (- var_1_10)) ? (((var_1_7 + (128 + var_1_1)) <= last_1_var_1_19) ? (var_1_19 == ((signed long int) var_1_4)) : 1) : ((var_1_1 < ((min (var_1_10 , var_1_17)) / var_1_11)) ? (var_1_19 == ((signed long int) (max (var_1_7 , var_1_9)))) : (var_1_19 == ((signed long int) var_1_16))))
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
