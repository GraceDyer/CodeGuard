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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch40Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 4.5;
unsigned char var_1_3 = 50;
unsigned char var_1_4 = 32;
unsigned char var_1_6 = 0;
float var_1_10 = 31.5;
signed short int var_1_11 = 200;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 4;
unsigned char var_1_16 = 1;
float var_1_17 = 32.2;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 100;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 32;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 4;
signed short int var_1_24 = -8;
signed short int var_1_26 = 10000;
double var_1_27 = 1.45;
double var_1_28 = 4.4;
double var_1_29 = 4.25;
double var_1_30 = 100000000.4;
double var_1_31 = 24.2;
unsigned long int var_1_32 = 1000000;
float var_1_33 = 31.3;
unsigned long int var_1_34 = 256;
float var_1_35 = 100.25;
float var_1_36 = 0.0;
float var_1_37 = 5.3;
float var_1_38 = 0.0;
float var_1_39 = 0.0;
float var_1_40 = 3.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch40Amount100
	if ((var_1_18 * var_1_19) >= var_1_4) {
		if (var_1_16 || (! var_1_6)) {
			var_1_23 = var_1_18;
		} else {
			var_1_23 = var_1_22;
		}
	} else {
		var_1_23 = var_1_4;
	}


	// From: Req7Batch40Amount100
	var_1_32 = (min (var_1_19 , 25u));


	// From: Req8Batch40Amount100
	unsigned char stepLocal_5 = var_1_20;
	if (stepLocal_5 > var_1_22) {
		var_1_33 = (var_1_30 - var_1_31);
	}


	// From: Req10Batch40Amount100
	unsigned char stepLocal_6 = var_1_21;
	if (var_1_16) {
		if ((4 + var_1_22) <= stepLocal_6) {
			var_1_35 = ((max (var_1_30 , (var_1_36 - var_1_37))) - (var_1_38 - (var_1_39 - var_1_40)));
		} else {
			var_1_35 = var_1_30;
		}
	} else {
		var_1_35 = var_1_36;
	}


	// From: Req1Batch40Amount100
	if ((var_1_23 / (var_1_3 + var_1_4)) == (min (8 , var_1_32))) {
		if ((var_1_32 > var_1_23) && var_1_6) {
			if ((var_1_33 + var_1_33) != var_1_35) {
				var_1_1 = 8.6f;
			}
		} else {
			if ((var_1_23 & var_1_32) != var_1_4) {
				if (var_1_6) {
					var_1_1 = var_1_10;
				}
			} else {
				var_1_1 = var_1_10;
			}
		}
	}


	// From: Req3Batch40Amount100
	signed long int stepLocal_2 = var_1_14 - var_1_15;
	unsigned char stepLocal_1 = var_1_6;
	if (var_1_4 <= stepLocal_2) {
		if (stepLocal_1 || var_1_16) {
			var_1_13 = (abs (var_1_3));
		}
	} else {
		if ((var_1_17 - 64.25f) < (- (var_1_10 * var_1_33))) {
			var_1_13 = (((var_1_18 + var_1_19) - var_1_20) - (var_1_21 + var_1_22));
		}
	}


	// From: Req6Batch40Amount100
	if (var_1_32 >= var_1_20) {
		if (var_1_16) {
			if (var_1_6) {
				var_1_27 = (var_1_28 + var_1_29);
			} else {
				var_1_27 = (abs (var_1_30 - var_1_31));
			}
		}
	}


	// From: Req9Batch40Amount100
	if (! var_1_16) {
		if (var_1_27 < (min (var_1_28 , (var_1_31 - var_1_30)))) {
			if (var_1_6) {
				var_1_34 = var_1_3;
			}
		} else {
			var_1_34 = 0u;
		}
	}


	// From: Req2Batch40Amount100
	unsigned char stepLocal_0 = var_1_4;
	if (stepLocal_0 >= (var_1_32 * var_1_23)) {
		if (var_1_27 > var_1_35) {
			var_1_11 = (max (var_1_23 , var_1_3));
		} else {
			var_1_11 = var_1_23;
		}
	} else {
		var_1_11 = var_1_23;
	}


	// From: Req5Batch40Amount100
	unsigned char stepLocal_4 = var_1_16;
	signed short int stepLocal_3 = var_1_11;
	if ((var_1_13 / var_1_18) > stepLocal_3) {
		if (stepLocal_4 || var_1_6) {
			var_1_24 = ((var_1_15 - (var_1_26 - 1)) + var_1_19);
		} else {
			var_1_24 = var_1_34;
		}
	} else {
		var_1_24 = var_1_26;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 128);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 255);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 95);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 95);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 64);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 8191);
	assume_abort_if_not(var_1_26 <= 16383);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -461168.6018427382800e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -461168.6018427382800e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854765600e+12F && var_1_31 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 4611686.018427382800e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 4611686.018427382800e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854765600e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 2305843.009213691390e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691390e+12F && var_1_40 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((((((((((var_1_23 / (var_1_3 + var_1_4)) == (min (8 , var_1_32))) ? (((var_1_32 > var_1_23) && var_1_6) ? (((var_1_33 + var_1_33) != var_1_35) ? (var_1_1 == ((float) 8.6f)) : 1) : (((var_1_23 & var_1_32) != var_1_4) ? (var_1_6 ? (var_1_1 == ((float) var_1_10)) : 1) : (var_1_1 == ((float) var_1_10)))) : 1) && ((var_1_4 >= (var_1_32 * var_1_23)) ? ((var_1_27 > var_1_35) ? (var_1_11 == ((signed short int) (max (var_1_23 , var_1_3)))) : (var_1_11 == ((signed short int) var_1_23))) : (var_1_11 == ((signed short int) var_1_23)))) && ((var_1_4 <= (var_1_14 - var_1_15)) ? ((var_1_6 || var_1_16) ? (var_1_13 == ((unsigned char) (abs (var_1_3)))) : 1) : (((var_1_17 - 64.25f) < (- (var_1_10 * var_1_33))) ? (var_1_13 == ((unsigned char) (((var_1_18 + var_1_19) - var_1_20) - (var_1_21 + var_1_22)))) : 1))) && (((var_1_18 * var_1_19) >= var_1_4) ? ((var_1_16 || (! var_1_6)) ? (var_1_23 == ((unsigned char) var_1_18)) : (var_1_23 == ((unsigned char) var_1_22))) : (var_1_23 == ((unsigned char) var_1_4)))) && (((var_1_13 / var_1_18) > var_1_11) ? ((var_1_16 || var_1_6) ? (var_1_24 == ((signed short int) ((var_1_15 - (var_1_26 - 1)) + var_1_19))) : (var_1_24 == ((signed short int) var_1_34))) : (var_1_24 == ((signed short int) var_1_26)))) && ((var_1_32 >= var_1_20) ? (var_1_16 ? (var_1_6 ? (var_1_27 == ((double) (var_1_28 + var_1_29))) : (var_1_27 == ((double) (abs (var_1_30 - var_1_31))))) : 1) : 1)) && (var_1_32 == ((unsigned long int) (min (var_1_19 , 25u))))) && ((var_1_20 > var_1_22) ? (var_1_33 == ((float) (var_1_30 - var_1_31))) : 1)) && ((! var_1_16) ? ((var_1_27 < (min (var_1_28 , (var_1_31 - var_1_30)))) ? (var_1_6 ? (var_1_34 == ((unsigned long int) var_1_3)) : 1) : (var_1_34 == ((unsigned long int) 0u))) : 1)) && (var_1_16 ? (((4 + var_1_22) <= var_1_21) ? (var_1_35 == ((float) ((max (var_1_30 , (var_1_36 - var_1_37))) - (var_1_38 - (var_1_39 - var_1_40))))) : (var_1_35 == ((float) var_1_30))) : (var_1_35 == ((float) var_1_36)))
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
