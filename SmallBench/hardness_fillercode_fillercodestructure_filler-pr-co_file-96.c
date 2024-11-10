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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch96Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 16;
unsigned char var_1_4 = 0;
unsigned char var_1_6 = 1;
signed char var_1_8 = -10;
unsigned short int var_1_9 = 4;
signed char var_1_10 = 8;
unsigned short int var_1_12 = 64314;
unsigned short int var_1_13 = 26169;
signed char var_1_17 = 50;
signed char var_1_18 = 16;
signed char var_1_19 = 5;
signed char var_1_20 = 0;
signed char var_1_21 = 50;
signed char var_1_22 = 16;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
double var_1_27 = 0.25;
double var_1_28 = 10.25;
double var_1_29 = 1000.25;
double var_1_30 = 9.5;
float var_1_31 = 63.5;
unsigned short int var_1_32 = 16;
signed char var_1_35 = 1;
unsigned char var_1_40 = 1;
signed char var_1_41 = 25;
signed char var_1_42 = 32;
unsigned char var_1_43 = 0;
signed long int var_1_44 = -4;
unsigned long int var_1_46 = 4;
unsigned char var_1_47 = 10;
unsigned char var_1_48 = 1;
unsigned long int var_1_49 = 3576445681;
double var_1_50 = 32.5;
double var_1_51 = 0.0;
signed long int var_1_52 = -1;
unsigned short int var_1_53 = 64;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_9 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch96Filler_PR_CO
	if ((- last_1_var_1_9) < (last_1_var_1_9 + -500)) {
		var_1_23 = var_1_20;
	}


	// From: CodeObject3
	if (var_1_23 <= var_1_9) {
		var_1_44 = (var_1_23 + (abs (max (var_1_42 , -1))));
	}


	// From: CodeObject5
	var_1_50 = var_1_51;


	// From: Req3Batch96Filler_PR_CO
	var_1_17 = ((min (var_1_18 , var_1_19)) - (var_1_20 + (var_1_21 - var_1_22)));


	// From: CodeObject1
	if ((var_1_23 <= var_1_23) || var_1_24) {
		if ((abs (5)) < var_1_23) {
			if (var_1_24) {
				var_1_32 = (max ((min (var_1_23 , var_1_23)) , var_1_23));
			}
		}
	}


	// From: CodeObject7
	var_1_53 = var_1_47;


	// From: Req5Batch96Filler_PR_CO
	if (var_1_4) {
		var_1_24 = (! var_1_25);
	} else {
		var_1_24 = (var_1_6 && ((var_1_10 >= var_1_17) && var_1_25));
	}


	// From: Req7Batch96Filler_PR_CO
	var_1_31 = var_1_30;


	// From: Req1Batch96Filler_PR_CO
	if (var_1_23 < var_1_23) {
		if (var_1_24 && var_1_24) {
			if (var_1_24) {
				if (var_1_24 && (var_1_24 || var_1_24)) {
					var_1_1 = -5;
				}
			}
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: CodeObject4
	if (((~ var_1_41) >> (max (var_1_47 , var_1_48))) >= var_1_23) {
		var_1_46 = (var_1_49 - var_1_47);
	}


	// From: Req2Batch96Filler_PR_CO
	signed char stepLocal_0 = var_1_1;
	if (stepLocal_0 < (-1 - var_1_10)) {
		if (var_1_24) {
			var_1_9 = (var_1_10 + (abs (var_1_23)));
		} else {
			var_1_9 = ((var_1_12 - var_1_10) - ((var_1_13 - var_1_23) - (min (var_1_23 , var_1_23))));
		}
	} else {
		var_1_9 = var_1_13;
	}


	// From: CodeObject6
	if ((~ var_1_41) > var_1_9) {
		var_1_52 = (min (((var_1_47 + var_1_9) - (abs (var_1_23))) , var_1_23));
	} else {
		var_1_52 = (min (var_1_23 , var_1_35));
	}


	// From: Req6Batch96Filler_PR_CO
	if (var_1_9 < (var_1_21 + var_1_23)) {
		var_1_27 = ((var_1_28 + var_1_29) + var_1_30);
	} else {
		var_1_27 = var_1_28;
	}


	// From: CodeObject2
	if ((abs (4)) >= var_1_23) {
		if (((abs (var_1_41)) % (min (var_1_35 , var_1_42))) <= (var_1_23 ^ var_1_23)) {
			if ((min ((abs (var_1_41)) , var_1_42)) < var_1_23) {
				var_1_40 = var_1_43;
			} else {
				var_1_40 = var_1_43;
			}
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 49150);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 24575);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 31);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 31);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -230584.3009213691390e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691390e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -230584.3009213691390e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691390e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -461168.6018427382800e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -128);
	assume_abort_if_not(var_1_35 <= 127);
	assume_abort_if_not(var_1_35 != 0);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -128);
	assume_abort_if_not(var_1_42 <= 127);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 32);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 32);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 2147483647);
	assume_abort_if_not(var_1_49 <= 4294967294);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -922337.2036854765600e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return (((((((var_1_23 < var_1_23) ? ((var_1_24 && var_1_24) ? (var_1_24 ? ((var_1_24 && (var_1_24 || var_1_24)) ? (var_1_1 == ((signed char) -5)) : 1) : 1) : (var_1_1 == ((signed char) var_1_8))) : (var_1_1 == ((signed char) var_1_8))) && ((var_1_1 < (-1 - var_1_10)) ? (var_1_24 ? (var_1_9 == ((unsigned short int) (var_1_10 + (abs (var_1_23))))) : (var_1_9 == ((unsigned short int) ((var_1_12 - var_1_10) - ((var_1_13 - var_1_23) - (min (var_1_23 , var_1_23))))))) : (var_1_9 == ((unsigned short int) var_1_13)))) && (var_1_17 == ((signed char) ((min (var_1_18 , var_1_19)) - (var_1_20 + (var_1_21 - var_1_22)))))) && (((- last_1_var_1_9) < (last_1_var_1_9 + -500)) ? (var_1_23 == ((unsigned char) var_1_20)) : 1)) && (var_1_4 ? (var_1_24 == ((unsigned char) (! var_1_25))) : (var_1_24 == ((unsigned char) (var_1_6 && ((var_1_10 >= var_1_17) && var_1_25)))))) && ((var_1_9 < (var_1_21 + var_1_23)) ? (var_1_27 == ((double) ((var_1_28 + var_1_29) + var_1_30))) : (var_1_27 == ((double) var_1_28)))) && (var_1_31 == ((float) var_1_30))
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
