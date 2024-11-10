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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch94Filler_PE_CO.c", 13, "reach_error"); }
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
signed char var_1_3 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 50;
double var_1_9 = 32.7;
double var_1_10 = 64.25;
double var_1_11 = 10.3;
double var_1_12 = 3.3;
double var_1_13 = 16.5;
double var_1_14 = 7.125;
unsigned short int var_1_15 = 50;
unsigned short int var_1_16 = 16;
unsigned short int var_1_17 = 8;
unsigned short int var_1_18 = 64;
unsigned long int var_1_19 = 16;
signed short int var_1_20 = 100;
signed short int var_1_21 = 2;
signed short int var_1_22 = 8;
signed long int var_1_23 = -4;
unsigned short int var_1_24 = 128;
signed long int var_1_25 = 2;
unsigned short int var_1_26 = 256;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
float var_1_34 = 999999999.85;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
signed short int var_1_37 = -256;
float var_1_38 = 5.25;
float var_1_39 = 500.25;
double var_1_40 = 31.25;
double var_1_41 = 16.6;
double var_1_42 = 128.5;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned long int var_1_45 = 50;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = 50;
unsigned long int last_1_var_1_19 = 16;
unsigned char last_1_var_1_27 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch94Filler_PE_CO
	signed long int stepLocal_1 = -1 << last_1_var_1_19;
	unsigned long int stepLocal_0 = -1000000000 + last_1_var_1_19;
	if (stepLocal_1 < var_1_3) {
		if ((last_1_var_1_19 / var_1_3) > stepLocal_0) {
			var_1_1 = (last_1_var_1_27 || var_1_6);
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req3Batch94Filler_PE_CO
	var_1_9 = ((min (var_1_10 , var_1_11)) + (var_1_12 + (var_1_13 - var_1_14)));


	// From: Req4Batch94Filler_PE_CO
	if (var_1_10 >= var_1_11) {
		var_1_15 = (max ((max ((abs (var_1_16)) , var_1_17)) , var_1_18));
	}


	// From: Req7Batch94Filler_PE_CO
	var_1_25 = -256;


	// From: Req8Batch94Filler_PE_CO
	var_1_26 = var_1_17;


	// From: Req9Batch94Filler_PE_CO
	var_1_27 = var_1_6;


	// From: Req2Batch94Filler_PE_CO
	if (var_1_7 || var_1_1) {
		if ((var_1_26 >= var_1_3) && var_1_1) {
			var_1_8 = (min (var_1_3 , var_1_26));
		} else {
			if (var_1_1) {
				var_1_8 = last_1_var_1_8;
			} else {
				var_1_8 = last_1_var_1_8;
			}
		}
	} else {
		var_1_8 = last_1_var_1_8;
	}


	// From: Req6Batch94Filler_PE_CO
	if (var_1_6 || (var_1_16 <= (var_1_22 / var_1_24))) {
		var_1_23 = (min ((var_1_8 + (var_1_21 + var_1_24)) , (abs (var_1_15))));
	}


	// From: Req5Batch94Filler_PE_CO
	if (((max (var_1_20 , var_1_21)) - var_1_22) >= var_1_23) {
		var_1_19 = (max (var_1_17 , var_1_18));
	}


	// From: CodeObject1
	if ((var_1_19 * var_1_15) == var_1_8) {
		if (var_1_8 > var_1_19) {
			var_1_28 = (((var_1_9 * var_1_9) > (16.6f / var_1_34)) && var_1_35);
		}
	} else {
		if (5 <= (abs (var_1_15))) {
			var_1_28 = ((var_1_9 >= var_1_34) || var_1_36);
		}
	}


	// From: CodeObject2
	if (var_1_36) {
		var_1_37 = (abs (abs (var_1_15)));
	} else {
		if (var_1_9 >= (var_1_38 - var_1_39)) {
			var_1_37 = (max (var_1_15 , var_1_25));
		} else {
			if (var_1_25 > var_1_15) {
				var_1_37 = var_1_15;
			} else {
				var_1_37 = var_1_25;
			}
		}
	}


	// From: CodeObject3
	var_1_40 = var_1_41;


	// From: CodeObject4
	var_1_42 = var_1_41;


	// From: CodeObject5
	if (var_1_34 <= var_1_38) {
		if (var_1_15 < -2) {
			var_1_43 = var_1_36;
		} else {
			var_1_43 = ((var_1_35 || var_1_1) && var_1_44);
		}
	}


	// From: CodeObject6
	if ((var_1_39 - var_1_38) > var_1_41) {
		if (var_1_15 <= var_1_8) {
			var_1_45 = ((var_1_15 + var_1_26) + 5u);
		} else {
			var_1_45 = (max (var_1_15 , var_1_26));
		}
	} else {
		var_1_45 = var_1_26;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691390e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691390e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	assume_abort_if_not(var_1_24 != 0);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	assume_abort_if_not(var_1_34 != 0.0F);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_27 = var_1_27;
}

int property() {
	return ((((((((((-1 << last_1_var_1_19) < var_1_3) ? (((last_1_var_1_19 / var_1_3) > (-1000000000 + last_1_var_1_19)) ? (var_1_1 == ((unsigned char) (last_1_var_1_27 || var_1_6))) : (var_1_1 == ((unsigned char) var_1_7))) : 1) && ((var_1_7 || var_1_1) ? (((var_1_26 >= var_1_3) && var_1_1) ? (var_1_8 == ((signed long int) (min (var_1_3 , var_1_26)))) : (var_1_1 ? (var_1_8 == ((signed long int) last_1_var_1_8)) : (var_1_8 == ((signed long int) last_1_var_1_8)))) : (var_1_8 == ((signed long int) last_1_var_1_8)))) && (var_1_9 == ((double) ((min (var_1_10 , var_1_11)) + (var_1_12 + (var_1_13 - var_1_14)))))) && ((var_1_10 >= var_1_11) ? (var_1_15 == ((unsigned short int) (max ((max ((abs (var_1_16)) , var_1_17)) , var_1_18)))) : 1)) && ((((max (var_1_20 , var_1_21)) - var_1_22) >= var_1_23) ? (var_1_19 == ((unsigned long int) (max (var_1_17 , var_1_18)))) : 1)) && ((var_1_6 || (var_1_16 <= (var_1_22 / var_1_24))) ? (var_1_23 == ((signed long int) (min ((var_1_8 + (var_1_21 + var_1_24)) , (abs (var_1_15)))))) : 1)) && (var_1_25 == ((signed long int) -256))) && (var_1_26 == ((unsigned short int) var_1_17))) && (var_1_27 == ((unsigned char) var_1_6))
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
