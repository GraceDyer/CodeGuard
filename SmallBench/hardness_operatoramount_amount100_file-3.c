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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -2;
unsigned char var_1_4 = 128;
signed char var_1_5 = 32;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_9 = 0;
unsigned short int var_1_10 = 5;
unsigned long int var_1_12 = 500;
signed char var_1_13 = -2;
float var_1_14 = 128.5;
float var_1_16 = 99999999999999.05;
float var_1_17 = 1.125;
float var_1_18 = 0.30000000000000004;
double var_1_19 = 128.6;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 128;
unsigned char var_1_22 = 8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 32;
unsigned char var_1_26 = 200;
unsigned char var_1_27 = 5;
unsigned char var_1_28 = 0;
signed long int var_1_29 = -2;
double var_1_31 = 127.8;
double var_1_32 = 24.5;
double var_1_33 = 1000000.75;
double var_1_34 = 5.5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_6 = 0;
unsigned short int last_1_var_1_10 = 5;
unsigned char last_1_var_1_20 = 25;
unsigned char last_1_var_1_28 = 0;
signed long int last_1_var_1_29 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch3Amount100
	if (var_1_4 != (last_1_var_1_20 + last_1_var_1_10)) {
		var_1_6 = ((var_1_4 <= last_1_var_1_20) && (! var_1_7));
	} else {
		if (((max (last_1_var_1_29 , last_1_var_1_29)) > var_1_5) || var_1_7) {
			var_1_6 = var_1_9;
		} else {
			var_1_6 = var_1_7;
		}
	}


	// From: Req5Batch3Amount100
	if (var_1_6 || var_1_6) {
		var_1_14 = (var_1_16 + (abs (min (var_1_17 , var_1_18))));
	} else {
		var_1_14 = var_1_16;
	}


	// From: Req8Batch3Amount100
	unsigned char stepLocal_8 = var_1_26;
	unsigned char stepLocal_7 = last_1_var_1_6;
	unsigned char stepLocal_6 = var_1_24;
	if (var_1_7 && stepLocal_7) {
		if (last_1_var_1_20 > stepLocal_6) {
			if (stepLocal_8 < ((var_1_13 * var_1_4) << last_1_var_1_20)) {
				var_1_28 = var_1_24;
			}
		}
	}


	// From: Req4Batch3Amount100
	signed long int stepLocal_3 = var_1_4 / var_1_13;
	if (var_1_5 != stepLocal_3) {
		var_1_12 = (max (var_1_28 , 8u));
	}


	// From: Req3Batch3Amount100
	unsigned char stepLocal_2 = var_1_9;
	if (stepLocal_2 && ((var_1_4 * last_1_var_1_28) >= (last_1_var_1_29 + last_1_var_1_29))) {
		if (var_1_7) {
			var_1_10 = last_1_var_1_28;
		}
	} else {
		var_1_10 = last_1_var_1_28;
	}


	// From: Req10Batch3Amount100
	if (var_1_16 <= var_1_14) {
		if (var_1_28 == var_1_10) {
			if (var_1_7) {
				var_1_31 = (var_1_32 - var_1_33);
			} else {
				var_1_31 = (var_1_18 + (max (var_1_34 , var_1_17)));
			}
		} else {
			var_1_31 = var_1_16;
		}
	} else {
		var_1_31 = var_1_17;
	}


	// From: Req7Batch3Amount100
	unsigned short int stepLocal_5 = var_1_10;
	signed char stepLocal_4 = var_1_13;
	if ((var_1_14 * var_1_18) > var_1_16) {
		if (var_1_12 < stepLocal_4) {
			var_1_20 = (max ((var_1_21 - var_1_22) , (var_1_23 + var_1_24)));
		} else {
			if (stepLocal_5 < var_1_21) {
				var_1_20 = (min (var_1_23 , var_1_24));
			} else {
				var_1_20 = ((var_1_26 - var_1_27) - var_1_24);
			}
		}
	} else {
		if (var_1_9) {
			var_1_20 = var_1_24;
		} else {
			var_1_20 = var_1_27;
		}
	}


	// From: Req1Batch3Amount100
	unsigned short int stepLocal_1 = var_1_10;
	signed long int stepLocal_0 = var_1_28 / var_1_4;
	if (var_1_10 != stepLocal_0) {
		if (var_1_28 >= stepLocal_1) {
			var_1_1 = ((abs (var_1_5)) + -5);
		} else {
			var_1_1 = var_1_5;
		}
	}


	// From: Req6Batch3Amount100
	if (! var_1_6) {
		if (var_1_31 < (min (var_1_16 , var_1_18))) {
			var_1_19 = (49.5 + (max (var_1_18 , var_1_17)));
		} else {
			var_1_19 = var_1_16;
		}
	} else {
		var_1_19 = var_1_17;
	}


	// From: Req9Batch3Amount100
	unsigned char stepLocal_10 = var_1_26;
	unsigned char stepLocal_9 = var_1_6;
	if (var_1_27 > stepLocal_10) {
		var_1_29 = (var_1_1 - (max (var_1_10 , (min (var_1_28 , var_1_10)))));
	} else {
		if (stepLocal_9 || var_1_7) {
			var_1_29 = var_1_12;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -63);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -128);
	assume_abort_if_not(var_1_13 <= 127);
	assume_abort_if_not(var_1_13 != 0);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427382800e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427382800e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 127);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 190);
	assume_abort_if_not(var_1_26 <= 254);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854765600e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_29 = var_1_29;
}

int property() {
	return ((((((((((var_1_10 != (var_1_28 / var_1_4)) ? ((var_1_28 >= var_1_10) ? (var_1_1 == ((signed char) ((abs (var_1_5)) + -5))) : (var_1_1 == ((signed char) var_1_5))) : 1) && ((var_1_4 != (last_1_var_1_20 + last_1_var_1_10)) ? (var_1_6 == ((unsigned char) ((var_1_4 <= last_1_var_1_20) && (! var_1_7)))) : ((((max (last_1_var_1_29 , last_1_var_1_29)) > var_1_5) || var_1_7) ? (var_1_6 == ((unsigned char) var_1_9)) : (var_1_6 == ((unsigned char) var_1_7))))) && ((var_1_9 && ((var_1_4 * last_1_var_1_28) >= (last_1_var_1_29 + last_1_var_1_29))) ? (var_1_7 ? (var_1_10 == ((unsigned short int) last_1_var_1_28)) : 1) : (var_1_10 == ((unsigned short int) last_1_var_1_28)))) && ((var_1_5 != (var_1_4 / var_1_13)) ? (var_1_12 == ((unsigned long int) (max (var_1_28 , 8u)))) : 1)) && ((var_1_6 || var_1_6) ? (var_1_14 == ((float) (var_1_16 + (abs (min (var_1_17 , var_1_18)))))) : (var_1_14 == ((float) var_1_16)))) && ((! var_1_6) ? ((var_1_31 < (min (var_1_16 , var_1_18))) ? (var_1_19 == ((double) (49.5 + (max (var_1_18 , var_1_17))))) : (var_1_19 == ((double) var_1_16))) : (var_1_19 == ((double) var_1_17)))) && (((var_1_14 * var_1_18) > var_1_16) ? ((var_1_12 < var_1_13) ? (var_1_20 == ((unsigned char) (max ((var_1_21 - var_1_22) , (var_1_23 + var_1_24))))) : ((var_1_10 < var_1_21) ? (var_1_20 == ((unsigned char) (min (var_1_23 , var_1_24)))) : (var_1_20 == ((unsigned char) ((var_1_26 - var_1_27) - var_1_24))))) : (var_1_9 ? (var_1_20 == ((unsigned char) var_1_24)) : (var_1_20 == ((unsigned char) var_1_27))))) && ((var_1_7 && last_1_var_1_6) ? ((last_1_var_1_20 > var_1_24) ? ((var_1_26 < ((var_1_13 * var_1_4) << last_1_var_1_20)) ? (var_1_28 == ((unsigned char) var_1_24)) : 1) : 1) : 1)) && ((var_1_27 > var_1_26) ? (var_1_29 == ((signed long int) (var_1_1 - (max (var_1_10 , (min (var_1_28 , var_1_10))))))) : ((var_1_6 || var_1_7) ? (var_1_29 == ((signed long int) var_1_12)) : 1))) && ((var_1_16 <= var_1_14) ? ((var_1_28 == var_1_10) ? (var_1_7 ? (var_1_31 == ((double) (var_1_32 - var_1_33))) : (var_1_31 == ((double) (var_1_18 + (max (var_1_34 , var_1_17)))))) : (var_1_31 == ((double) var_1_16))) : (var_1_31 == ((double) var_1_17)))
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
