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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch66Filler_PS_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 50;
signed char var_1_3 = 8;
signed char var_1_4 = 10;
double var_1_5 = 16.5;
signed char var_1_6 = 64;
signed char var_1_7 = 2;
unsigned short int var_1_8 = 256;
unsigned short int var_1_10 = 63583;
unsigned short int var_1_11 = 33789;
unsigned char var_1_12 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 8;
signed short int var_1_16 = -16;
signed short int var_1_18 = 16;
signed short int var_1_19 = 25;
signed short int var_1_20 = 25;
signed short int var_1_21 = 50;
signed long int var_1_22 = -8;
unsigned long int var_1_26 = 10;
signed long int var_1_28 = -10000;
signed long int var_1_29 = -1263929197;
signed short int var_1_31 = 1;
unsigned char var_1_36 = 32;
double var_1_39 = 3.6;
double var_1_40 = 24.25;
double var_1_41 = 31.25;
unsigned long int var_1_42 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_11 > var_1_7) {
		if (var_1_14) {
			var_1_22 = 8;
		}
	}


	// From: CodeObject2
	var_1_26 = var_1_7;


	// From: CodeObject3
	if ((abs (-256)) < var_1_11) {
		var_1_28 = (5 - ((abs (var_1_29)) - var_1_21));
	} else {
		var_1_28 = var_1_29;
	}


	// From: CodeObject4
	if (var_1_10 > var_1_15) {
		if (var_1_29 < var_1_15) {
			if (var_1_29 <= (-64 & var_1_11)) {
				var_1_31 = (max (var_1_7 , (min (8 , var_1_4))));
			} else {
				var_1_31 = (var_1_20 + (max (4 , var_1_7)));
			}
		}
	}


	// From: CodeObject5
	if ((max ((max (var_1_8 , var_1_18)) , var_1_6)) > var_1_10) {
		if (! (var_1_11 >= 128)) {
			var_1_36 = (abs (8));
		}
	} else {
		var_1_36 = var_1_7;
	}


	// From: CodeObject6
	var_1_39 = (max ((abs (var_1_40)) , (min (var_1_41 , 100.75))));


	// From: CodeObject7
	if (var_1_11 <= (~ (min (var_1_6 , var_1_4)))) {
		if (var_1_12) {
			if (var_1_40 != var_1_41) {
				var_1_42 = (var_1_29 - var_1_7);
			} else {
				var_1_42 = var_1_7;
			}
		} else {
			var_1_42 = var_1_7;
		}
	} else {
		var_1_42 = var_1_7;
	}


	// From: Req3Batch66Filler_PS_CI
	signed char stepLocal_1 = var_1_6;
	unsigned char stepLocal_0 = last_1_var_1_12;
	if (-25 == stepLocal_1) {
		if (last_1_var_1_12 && stepLocal_0) {
			var_1_8 = (max (((var_1_10 - 10) - 16) , (var_1_11 - var_1_7)));
		}
	} else {
		var_1_8 = (max (var_1_7 , var_1_11));
	}


	// From: Req4Batch66Filler_PS_CI
	signed char stepLocal_2 = var_1_7;
	if (var_1_8 >= stepLocal_2) {
		var_1_12 = (! var_1_14);
	}


	// From: Req1Batch66Filler_PS_CI
	if (var_1_12) {
		var_1_1 = (var_1_3 + var_1_4);
	}


	// From: Req2Batch66Filler_PS_CI
	if (var_1_4 >= (var_1_6 - var_1_7)) {
		if (var_1_12) {
			var_1_5 = 8.25;
		}
	}


	// From: Req7Batch66Filler_PS_CI
	signed char stepLocal_4 = var_1_6;
	if (var_1_1 < stepLocal_4) {
		var_1_18 = (var_1_6 - var_1_7);
	} else {
		var_1_18 = (min ((var_1_6 + var_1_4) , var_1_1));
	}


	// From: Req8Batch66Filler_PS_CI
	if (var_1_12) {
		var_1_19 = ((var_1_7 - (min (var_1_20 , var_1_21))) + var_1_6);
	}


	// From: Req5Batch66Filler_PS_CI
	if (-64 > (var_1_6 + var_1_19)) {
		var_1_15 = (var_1_11 - var_1_7);
	} else {
		if (! var_1_12) {
			if (var_1_12) {
				var_1_15 = 4;
			}
		}
	}


	// From: Req6Batch66Filler_PS_CI
	signed long int stepLocal_3 = (max (var_1_11 , var_1_18)) + (var_1_15 / var_1_10);
	if (var_1_19 > stepLocal_3) {
		var_1_16 = var_1_4;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 49150);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16383);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483646);
	assume_abort_if_not(var_1_29 <= -1073741823);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854765600e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
}

int property() {
	return (((((((var_1_12 ? (var_1_1 == ((signed char) (var_1_3 + var_1_4))) : 1) && ((var_1_4 >= (var_1_6 - var_1_7)) ? (var_1_12 ? (var_1_5 == ((double) 8.25)) : 1) : 1)) && ((-25 == var_1_6) ? ((last_1_var_1_12 && last_1_var_1_12) ? (var_1_8 == ((unsigned short int) (max (((var_1_10 - 10) - 16) , (var_1_11 - var_1_7))))) : 1) : (var_1_8 == ((unsigned short int) (max (var_1_7 , var_1_11)))))) && ((var_1_8 >= var_1_7) ? (var_1_12 == ((unsigned char) (! var_1_14))) : 1)) && ((-64 > (var_1_6 + var_1_19)) ? (var_1_15 == ((signed long int) (var_1_11 - var_1_7))) : ((! var_1_12) ? (var_1_12 ? (var_1_15 == ((signed long int) 4)) : 1) : 1))) && ((var_1_19 > ((max (var_1_11 , var_1_18)) + (var_1_15 / var_1_10))) ? (var_1_16 == ((signed short int) var_1_4)) : 1)) && ((var_1_1 < var_1_6) ? (var_1_18 == ((signed short int) (var_1_6 - var_1_7))) : (var_1_18 == ((signed short int) (min ((var_1_6 + var_1_4) , var_1_1)))))) && (var_1_12 ? (var_1_19 == ((signed short int) ((var_1_7 - (min (var_1_20 , var_1_21))) + var_1_6))) : 1)
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
