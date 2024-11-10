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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -100;
double var_1_3 = 3.125;
double var_1_4 = 256.25;
unsigned char var_1_5 = 1;
float var_1_8 = 4.1;
unsigned char var_1_9 = 200;
unsigned char var_1_10 = 0;
signed long int var_1_11 = -5;
float var_1_12 = 99.75;
float var_1_13 = 63.5;
double var_1_14 = -0.5;
float var_1_15 = 15.5;
float var_1_16 = 63.5;
float var_1_17 = 99.25;
float var_1_18 = 63.4;
float var_1_19 = 1.725;
float var_1_20 = 1000000000000.8;
signed long int var_1_21 = 64;
signed long int var_1_22 = 1399056672;
signed long int var_1_23 = 1697758330;
unsigned long int var_1_24 = 256;
double var_1_25 = 2.6;
double var_1_26 = 0.0;
double var_1_27 = 7.8;
float var_1_28 = 4.5;
unsigned short int var_1_29 = 8;
unsigned short int var_1_30 = 29656;
unsigned short int var_1_31 = 19030;
unsigned short int var_1_32 = 26379;
float var_1_33 = 15.9;
unsigned char var_1_34 = 1;
signed char var_1_35 = 100;
float var_1_36 = 128.125;
float var_1_37 = 3.8;
float var_1_38 = 50.3;
signed short int var_1_39 = 0;
signed char var_1_40 = -4;
signed char var_1_41 = 25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch5100_1loop
	if (var_1_5) {
		var_1_15 = (var_1_16 + (var_1_17 - var_1_18));
	} else {
		var_1_15 = (var_1_18 - (max ((max (var_1_17 , var_1_19)) , var_1_20)));
	}


	// From: Req6Batch5100_1loop
	if (! (1u <= var_1_9)) {
		var_1_21 = (((max (var_1_22 , var_1_23)) - var_1_10) - var_1_9);
	}


	// From: Req9Batch5100_1loop
	if (var_1_27 < var_1_26) {
		var_1_28 = (var_1_26 - (max (var_1_20 , 200.125f)));
	}


	// From: Req10Batch5100_1loop
	if (var_1_20 < (var_1_3 / var_1_26)) {
		var_1_29 = (var_1_9 + var_1_10);
	} else {
		var_1_29 = (((min (var_1_30 , var_1_31)) + var_1_32) - 32);
	}


	// From: Req12Batch5100_1loop
	var_1_39 = var_1_9;


	// From: Req13Batch5100_1loop
	var_1_40 = var_1_41;


	// From: Req2Batch5100_1loop
	signed long int stepLocal_2 = (var_1_39 % var_1_11) * 500;
	if ((var_1_9 - var_1_10) < stepLocal_2) {
		var_1_8 = var_1_12;
	} else {
		var_1_8 = var_1_12;
	}


	// From: Req3Batch5100_1loop
	unsigned char stepLocal_3 = var_1_21 > var_1_11;
	if (stepLocal_3 || (var_1_10 <= (var_1_40 * var_1_9))) {
		var_1_13 = var_1_12;
	} else {
		var_1_13 = var_1_12;
	}


	// From: Req8Batch5100_1loop
	if (var_1_10 >= var_1_39) {
		var_1_25 = ((var_1_17 + (min (7.6 , var_1_18))) - (5.5369585523483085E18 - 16.25));
	} else {
		var_1_25 = (max (var_1_27 , var_1_20));
	}


	// From: Req1Batch5100_1loop
	unsigned char stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = -256;
	if (var_1_13 > (var_1_3 - var_1_4)) {
		if ((var_1_3 < var_1_4) && stepLocal_1) {
			if (stepLocal_0 >= var_1_29) {
				var_1_1 = var_1_29;
			} else {
				var_1_1 = var_1_29;
			}
		} else {
			var_1_1 = var_1_29;
		}
	} else {
		var_1_1 = var_1_29;
	}


	// From: Req4Batch5100_1loop
	signed long int stepLocal_4 = (var_1_1 | var_1_11) + var_1_40;
	if (var_1_4 <= var_1_8) {
		if (var_1_4 <= var_1_13) {
			if (var_1_29 <= stepLocal_4) {
				var_1_14 = var_1_12;
			}
		}
	}


	// From: Req7Batch5100_1loop
	if ((-25 + (var_1_9 + var_1_1)) <= var_1_10) {
		if (var_1_5) {
			var_1_24 = var_1_10;
		}
	}


	// From: Req11Batch5100_1loop
	if ((var_1_25 < (abs (127.5f))) || ((var_1_8 > var_1_17) || var_1_5)) {
		if (var_1_5 || var_1_34) {
			if ((var_1_10 - var_1_35) >= (var_1_31 << var_1_24)) {
				var_1_33 = (((max (var_1_27 , var_1_36)) + (var_1_37 + var_1_38)) + var_1_16);
			} else {
				var_1_33 = (max (var_1_37 , var_1_19));
			}
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 127);
	assume_abort_if_not(var_1_9 <= 255);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 1073741822);
	assume_abort_if_not(var_1_22 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741822);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 6917529.027641073700e+12F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691390e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 16383);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 16383);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 16384);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -230584.3009213691390e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -115292.1504606845700e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 1152921.504606845700e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -115292.1504606845700e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 1152921.504606845700e+12F && var_1_38 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
}



void updateLastVariables() {
}

int property() {
	return (((((((((((((var_1_13 > (var_1_3 - var_1_4)) ? (((var_1_3 < var_1_4) && var_1_5) ? ((-256 >= var_1_29) ? (var_1_1 == ((signed long int) var_1_29)) : (var_1_1 == ((signed long int) var_1_29))) : (var_1_1 == ((signed long int) var_1_29))) : (var_1_1 == ((signed long int) var_1_29))) && (((var_1_9 - var_1_10) < ((var_1_39 % var_1_11) * 500)) ? (var_1_8 == ((float) var_1_12)) : (var_1_8 == ((float) var_1_12)))) && (((var_1_21 > var_1_11) || (var_1_10 <= (var_1_40 * var_1_9))) ? (var_1_13 == ((float) var_1_12)) : (var_1_13 == ((float) var_1_12)))) && ((var_1_4 <= var_1_8) ? ((var_1_4 <= var_1_13) ? ((var_1_29 <= ((var_1_1 | var_1_11) + var_1_40)) ? (var_1_14 == ((double) var_1_12)) : 1) : 1) : 1)) && (var_1_5 ? (var_1_15 == ((float) (var_1_16 + (var_1_17 - var_1_18)))) : (var_1_15 == ((float) (var_1_18 - (max ((max (var_1_17 , var_1_19)) , var_1_20))))))) && ((! (1u <= var_1_9)) ? (var_1_21 == ((signed long int) (((max (var_1_22 , var_1_23)) - var_1_10) - var_1_9))) : 1)) && (((-25 + (var_1_9 + var_1_1)) <= var_1_10) ? (var_1_5 ? (var_1_24 == ((unsigned long int) var_1_10)) : 1) : 1)) && ((var_1_10 >= var_1_39) ? (var_1_25 == ((double) ((var_1_17 + (min (7.6 , var_1_18))) - (5.5369585523483085E18 - 16.25)))) : (var_1_25 == ((double) (max (var_1_27 , var_1_20)))))) && ((var_1_27 < var_1_26) ? (var_1_28 == ((float) (var_1_26 - (max (var_1_20 , 200.125f))))) : 1)) && ((var_1_20 < (var_1_3 / var_1_26)) ? (var_1_29 == ((unsigned short int) (var_1_9 + var_1_10))) : (var_1_29 == ((unsigned short int) (((min (var_1_30 , var_1_31)) + var_1_32) - 32))))) && (((var_1_25 < (abs (127.5f))) || ((var_1_8 > var_1_17) || var_1_5)) ? ((var_1_5 || var_1_34) ? (((var_1_10 - var_1_35) >= (var_1_31 << var_1_24)) ? (var_1_33 == ((float) (((max (var_1_27 , var_1_36)) + (var_1_37 + var_1_38)) + var_1_16))) : (var_1_33 == ((float) (max (var_1_37 , var_1_19))))) : 1) : 1)) && (var_1_39 == ((signed short int) var_1_9))) && (var_1_40 == ((signed char) var_1_41))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
