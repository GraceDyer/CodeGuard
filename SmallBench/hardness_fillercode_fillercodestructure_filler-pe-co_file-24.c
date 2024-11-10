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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch24Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 15.8;
double var_1_4 = 10.5;
double var_1_5 = 1.55;
signed char var_1_8 = -10;
signed char var_1_10 = -16;
signed char var_1_11 = -4;
signed char var_1_12 = -16;
double var_1_13 = 128.55;
double var_1_14 = 2.3;
double var_1_15 = 4.8;
unsigned long int var_1_16 = 0;
signed long int var_1_17 = 5;
signed long int var_1_18 = 256;
unsigned long int var_1_19 = 50;
unsigned long int var_1_20 = 1;
signed short int var_1_21 = -50;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned long int var_1_31 = 200;
unsigned long int var_1_34 = 50;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 10;
double var_1_37 = 15.5;
double var_1_38 = 99.375;
signed long int var_1_39 = -10;
unsigned long int var_1_42 = 10000;
unsigned long int var_1_43 = 4251471014;
signed short int var_1_44 = 64;
unsigned char var_1_45 = 1;
unsigned long int var_1_46 = 25;
signed long int var_1_47 = -50;
unsigned char var_1_48 = 0;
double var_1_49 = 16.5;

// Calibration values

// Last'ed variables
signed char last_1_var_1_8 = -10;
signed short int last_1_var_1_21 = -50;
unsigned char last_1_var_1_23 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch24Filler_PE_CO
	if (last_1_var_1_21 <= (min (last_1_var_1_21 , last_1_var_1_8))) {
		if (last_1_var_1_23) {
			var_1_8 = (-16 + (min (var_1_10 , (var_1_11 + var_1_12))));
		}
	} else {
		var_1_8 = var_1_12;
	}


	// From: Req6Batch24Filler_PE_CO
	var_1_23 = var_1_24;


	// From: Req3Batch24Filler_PE_CO
	if (128u >= var_1_8) {
		if (! var_1_23) {
			var_1_13 = ((var_1_14 - var_1_15) + 0.25);
		} else {
			var_1_13 = var_1_14;
		}
	} else {
		if (var_1_23) {
			var_1_13 = var_1_5;
		}
	}


	// From: Req4Batch24Filler_PE_CO
	if (var_1_8 >= ((1329162249 - var_1_17) - var_1_18)) {
		var_1_16 = ((min ((max (var_1_17 , var_1_18)) , var_1_19)) + var_1_20);
	} else {
		if (var_1_23) {
			var_1_16 = var_1_18;
		} else {
			var_1_16 = var_1_19;
		}
	}


	// From: Req5Batch24Filler_PE_CO
	if ((min (var_1_12 , var_1_18)) <= (var_1_11 + var_1_8)) {
		if (var_1_11 >= (var_1_18 & var_1_16)) {
			var_1_21 = 8;
		} else {
			if (var_1_19 < var_1_8) {
				var_1_21 = 64;
			}
		}
	}


	// From: Req1Batch24Filler_PE_CO
	unsigned char stepLocal_1 = var_1_23;
	signed char stepLocal_0 = var_1_8;
	if (stepLocal_0 >= var_1_16) {
		var_1_1 = (var_1_4 - (abs (var_1_5)));
	} else {
		if (var_1_23 || stepLocal_1) {
			var_1_1 = 128.75;
		}
	}


	// From: CodeObject1
	if (32 >= var_1_21) {
		var_1_25 = ((var_1_23 || (var_1_28 && var_1_29)) && var_1_30);
	}


	// From: CodeObject2
	if (var_1_16 > (max ((16u | var_1_16) , var_1_16))) {
		if (var_1_29) {
			var_1_31 = var_1_34;
		}
	}


	// From: CodeObject3
	if ((var_1_16 & -10) < var_1_16) {
		if ((~ (min (var_1_16 , var_1_16))) > var_1_34) {
			if ((min (var_1_16 , (var_1_16 * var_1_16))) < (var_1_16 ^ var_1_34)) {
				if (var_1_30) {
					var_1_35 = var_1_36;
				}
			}
		}
	}


	// From: CodeObject4
	var_1_37 = var_1_38;


	// From: CodeObject5
	if (! var_1_30) {
		var_1_39 = var_1_16;
	} else {
		var_1_39 = (var_1_16 + (max (var_1_36 , (var_1_8 + var_1_21))));
	}


	// From: CodeObject6
	var_1_42 = ((var_1_43 - var_1_36) - var_1_21);


	// From: CodeObject7
	if ((var_1_16 / var_1_45) > (abs (var_1_36))) {
		var_1_44 = (min (var_1_45 , (abs (abs (var_1_8)))));
	} else {
		var_1_44 = var_1_8;
	}


	// From: CodeObject8
	var_1_46 = var_1_43;


	// From: CodeObject9
	var_1_47 = var_1_8;


	// From: CodeObject10
	var_1_48 = var_1_30;


	// From: CodeObject11
	var_1_49 = var_1_38;
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -63);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 32);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 31);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1073741824);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854765600e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 3221225470);
	assume_abort_if_not(var_1_43 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 255);
	assume_abort_if_not(var_1_45 != 0);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_23 = var_1_23;
}

int property() {
	return ((((((var_1_8 >= var_1_16) ? (var_1_1 == ((double) (var_1_4 - (abs (var_1_5))))) : ((var_1_23 || var_1_23) ? (var_1_1 == ((double) 128.75)) : 1)) && ((last_1_var_1_21 <= (min (last_1_var_1_21 , last_1_var_1_8))) ? (last_1_var_1_23 ? (var_1_8 == ((signed char) (-16 + (min (var_1_10 , (var_1_11 + var_1_12)))))) : 1) : (var_1_8 == ((signed char) var_1_12)))) && ((128u >= var_1_8) ? ((! var_1_23) ? (var_1_13 == ((double) ((var_1_14 - var_1_15) + 0.25))) : (var_1_13 == ((double) var_1_14))) : (var_1_23 ? (var_1_13 == ((double) var_1_5)) : 1))) && ((var_1_8 >= ((1329162249 - var_1_17) - var_1_18)) ? (var_1_16 == ((unsigned long int) ((min ((max (var_1_17 , var_1_18)) , var_1_19)) + var_1_20))) : (var_1_23 ? (var_1_16 == ((unsigned long int) var_1_18)) : (var_1_16 == ((unsigned long int) var_1_19))))) && (((min (var_1_12 , var_1_18)) <= (var_1_11 + var_1_8)) ? ((var_1_11 >= (var_1_18 & var_1_16)) ? (var_1_21 == ((signed short int) 8)) : ((var_1_19 < var_1_8) ? (var_1_21 == ((signed short int) 64)) : 1)) : 1)) && (var_1_23 == ((unsigned char) var_1_24))
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
