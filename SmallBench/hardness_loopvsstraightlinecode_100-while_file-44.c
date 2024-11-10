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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch44100_while.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 0;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 256;
signed short int var_1_10 = -25;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
float var_1_13 = 256.75;
float var_1_15 = 256.25;
float var_1_16 = 8.95;
float var_1_17 = 256.375;
float var_1_18 = 0.0;
float var_1_19 = 3.75;
unsigned short int var_1_20 = 64;
unsigned short int var_1_21 = 0;
float var_1_22 = 100.5;
unsigned short int var_1_23 = 50;
unsigned short int var_1_24 = 64;
double var_1_25 = 32.6;
unsigned char var_1_26 = 1;
unsigned char var_1_28 = 0;
double var_1_29 = 100.4;
signed short int var_1_30 = 2;
signed short int var_1_31 = 16;
signed short int var_1_32 = 8;
signed short int var_1_33 = 2;
double var_1_34 = 0.0;
double var_1_35 = 63.8;
double var_1_36 = 127.75;
double var_1_37 = 0.4;
unsigned long int var_1_38 = 50;
unsigned long int var_1_39 = 3554953517;
unsigned char var_1_40 = 0;
unsigned short int var_1_41 = 4;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch44100_while
	var_1_9 = (min (-10 , var_1_10));


	// From: Req4Batch44100_while
	var_1_11 = ((var_1_8 || var_1_4) && var_1_12);


	// From: Req6Batch44100_while
	var_1_20 = (45013 - var_1_21);


	// From: Req7Batch44100_while
	var_1_22 = (max ((max ((max (var_1_15 , var_1_16)) , var_1_19)) , var_1_17));


	// From: Req8Batch44100_while
	if ((9999999.6 / var_1_18) > var_1_16) {
		var_1_23 = (abs (var_1_21 + var_1_24));
	}


	// From: Req9Batch44100_while
	var_1_25 = (max (((max (var_1_19 , 999.5)) - var_1_17) , var_1_16));


	// From: Req13Batch44100_while
	var_1_40 = var_1_28;


	// From: Req14Batch44100_while
	var_1_41 = 10;


	// From: Req1Batch44100_while
	if (var_1_9 >= var_1_23) {
		var_1_1 = (! var_1_4);
	}


	// From: Req2Batch44100_while
	signed long int stepLocal_0 = var_1_20 - var_1_23;
	if (var_1_20 <= stepLocal_0) {
		var_1_5 = (var_1_1 || var_1_4);
	} else {
		var_1_5 = (! (! var_1_8));
	}


	// From: Req5Batch44100_while
	unsigned short int stepLocal_1 = var_1_23;
	if (var_1_1) {
		if (stepLocal_1 > var_1_23) {
			var_1_13 = (max (var_1_15 , var_1_16));
		}
	} else {
		var_1_13 = (abs (var_1_17 - (var_1_18 - var_1_19)));
	}


	// From: Req11Batch44100_while
	unsigned short int stepLocal_5 = var_1_41;
	signed long int stepLocal_4 = (var_1_30 + var_1_31) - var_1_21;
	signed long int stepLocal_3 = var_1_21 >> (var_1_32 + var_1_33);
	if (var_1_12) {
		if (stepLocal_5 <= (var_1_9 >> var_1_41)) {
			if (stepLocal_4 >= 128) {
				if ((var_1_24 - var_1_41) <= stepLocal_3) {
					var_1_29 = (-0.4 + var_1_19);
				} else {
					var_1_29 = (((min (var_1_18 , var_1_34)) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37));
				}
			}
		}
	}


	// From: Req12Batch44100_while
	signed short int stepLocal_9 = var_1_9;
	signed long int stepLocal_8 = var_1_31 & (var_1_20 * var_1_20);
	signed long int stepLocal_7 = var_1_30 >> var_1_9;
	unsigned short int stepLocal_6 = var_1_20;
	if (var_1_17 >= (- var_1_34)) {
		if (stepLocal_6 <= -1) {
			if ((~ var_1_30) > stepLocal_8) {
				var_1_38 = var_1_24;
			}
		} else {
			var_1_38 = ((var_1_39 - (var_1_20 + 500u)) - 4u);
		}
	} else {
		if (stepLocal_9 <= (var_1_9 ^ var_1_32)) {
			if (var_1_15 <= var_1_13) {
				if ((var_1_24 * var_1_9) <= stepLocal_7) {
					var_1_38 = var_1_41;
				} else {
					var_1_38 = var_1_39;
				}
			} else {
				var_1_38 = var_1_21;
			}
		}
	}


	// From: Req10Batch44100_while
	signed long int stepLocal_2 = var_1_24 * var_1_23;
	if (stepLocal_2 > (var_1_41 - var_1_38)) {
		var_1_26 = (! ((var_1_4 && var_1_12) && var_1_28));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32767);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854765600e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 4611686.018427382800e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 16384);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 16383);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 9);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 8);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 4611686.018427382800e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691390e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 3221225470);
	assume_abort_if_not(var_1_39 <= 4294967294);
}



void updateLastVariables() {
}

int property() {
	return ((((((((((((((var_1_9 >= var_1_23) ? (var_1_1 == ((unsigned char) (! var_1_4))) : 1) && ((var_1_20 <= (var_1_20 - var_1_23)) ? (var_1_5 == ((unsigned char) (var_1_1 || var_1_4))) : (var_1_5 == ((unsigned char) (! (! var_1_8)))))) && (var_1_9 == ((signed short int) (min (-10 , var_1_10))))) && (var_1_11 == ((unsigned char) ((var_1_8 || var_1_4) && var_1_12)))) && (var_1_1 ? ((var_1_23 > var_1_23) ? (var_1_13 == ((float) (max (var_1_15 , var_1_16)))) : 1) : (var_1_13 == ((float) (abs (var_1_17 - (var_1_18 - var_1_19))))))) && (var_1_20 == ((unsigned short int) (45013 - var_1_21)))) && (var_1_22 == ((float) (max ((max ((max (var_1_15 , var_1_16)) , var_1_19)) , var_1_17))))) && (((9999999.6 / var_1_18) > var_1_16) ? (var_1_23 == ((unsigned short int) (abs (var_1_21 + var_1_24)))) : 1)) && (var_1_25 == ((double) (max (((max (var_1_19 , 999.5)) - var_1_17) , var_1_16))))) && (((var_1_24 * var_1_23) > (var_1_41 - var_1_38)) ? (var_1_26 == ((unsigned char) (! ((var_1_4 && var_1_12) && var_1_28)))) : 1)) && (var_1_12 ? ((var_1_41 <= (var_1_9 >> var_1_41)) ? ((((var_1_30 + var_1_31) - var_1_21) >= 128) ? (((var_1_24 - var_1_41) <= (var_1_21 >> (var_1_32 + var_1_33))) ? (var_1_29 == ((double) (-0.4 + var_1_19))) : (var_1_29 == ((double) (((min (var_1_18 , var_1_34)) - var_1_19) - ((var_1_35 + var_1_36) + var_1_37))))) : 1) : 1) : 1)) && ((var_1_17 >= (- var_1_34)) ? ((var_1_20 <= -1) ? (((~ var_1_30) > (var_1_31 & (var_1_20 * var_1_20))) ? (var_1_38 == ((unsigned long int) var_1_24)) : 1) : (var_1_38 == ((unsigned long int) ((var_1_39 - (var_1_20 + 500u)) - 4u)))) : ((var_1_9 <= (var_1_9 ^ var_1_32)) ? ((var_1_15 <= var_1_13) ? (((var_1_24 * var_1_9) <= (var_1_30 >> var_1_9)) ? (var_1_38 == ((unsigned long int) var_1_41)) : (var_1_38 == ((unsigned long int) var_1_39))) : (var_1_38 == ((unsigned long int) var_1_21))) : 1))) && (var_1_40 == ((unsigned char) var_1_28))) && (var_1_41 == ((unsigned short int) 10))
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
