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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch61PS_CN_50.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.5;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 4;
float var_1_7 = 15.8;
float var_1_8 = 64.25;
signed long int var_1_9 = -50;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 3207304078;
unsigned long int var_1_15 = 50;
unsigned long int var_1_16 = 25;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned short int var_1_20 = 1;
unsigned long int var_1_21 = 50;
signed char var_1_22 = -4;
signed char var_1_23 = -10;
unsigned long int var_1_24 = 2;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 1;
signed long int var_1_27 = 25;
unsigned long int var_1_29 = 32;
unsigned long int var_1_30 = 1;
unsigned long int var_1_31 = 8;
unsigned long int var_1_32 = 500;
double var_1_33 = 1.5;
unsigned char var_1_34 = 1;
double var_1_35 = 50.5;
double var_1_36 = 1.9;
unsigned long int var_1_37 = 10000;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
double var_1_40 = 15.5;
double var_1_41 = 0.21999999999999997;
unsigned long int var_1_42 = 128;
signed char var_1_43 = -1;
signed char var_1_44 = 32;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_9 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	var_1_24 = var_1_25;


	// From: CodeObject2
	if (var_1_25 != var_1_24) {
		if ((~ var_1_27) != (-50 >> var_1_25)) {
			var_1_26 = ((max (var_1_29 , var_1_30)) + (abs (max (var_1_31 , var_1_32))));
		} else {
			var_1_26 = (abs (var_1_29 + var_1_32));
		}
	} else {
		var_1_26 = 16u;
	}


	// From: CodeObject3
	if (var_1_34) {
		var_1_33 = (var_1_35 - var_1_36);
	}


	// From: CodeObject4
	if (var_1_35 >= var_1_33) {
		if (var_1_24 > var_1_30) {
			var_1_37 = var_1_32;
		}
	}


	// From: CodeObject5
	if (var_1_30 < ((var_1_26 + 16u) * var_1_37)) {
		if (var_1_34 && (var_1_35 < var_1_36)) {
			if (var_1_34) {
				if (var_1_37 <= var_1_25) {
					var_1_38 = (! var_1_39);
				}
			}
		}
	}


	// From: CodeObject6
	if ((var_1_35 <= 64.5) && var_1_38) {
		var_1_40 = (abs (var_1_41));
	} else {
		var_1_40 = var_1_36;
	}


	// From: CodeObject7
	if (var_1_30 < var_1_26) {
		var_1_42 = (abs (var_1_31));
	}


	// From: CodeObject8
	if (var_1_34) {
		var_1_43 = (max ((abs (-16)) , var_1_44));
	}


	// From: Req2Batch61PS_CN_50
	signed long int stepLocal_0 = last_1_var_1_9;
	if (stepLocal_0 < last_1_var_1_9) {
		var_1_4 = (max (var_1_5 , var_1_6));
	}


	// From: Req7Batch61PS_CN_50
	var_1_21 = var_1_6;


	// From: Req8Batch61PS_CN_50
	var_1_22 = var_1_23;


	// From: Req1Batch61PS_CN_50
	if ((var_1_21 / (abs (64u))) == var_1_4) {
		var_1_1 = (8.8 - 255.2);
	}


	// From: Req4Batch61PS_CN_50
	unsigned long int stepLocal_4 = 4256310412u - 128u;
	if (var_1_4 >= stepLocal_4) {
		var_1_9 = ((abs (var_1_22 + var_1_22)) + var_1_22);
	}


	// From: Req3Batch61PS_CN_50
	signed long int stepLocal_3 = var_1_9;
	unsigned long int stepLocal_2 = max (var_1_21 , var_1_5);
	unsigned long int stepLocal_1 = var_1_21 ^ 4u;
	if (var_1_9 <= stepLocal_2) {
		if (stepLocal_3 < var_1_5) {
			if (var_1_9 >= stepLocal_1) {
				var_1_7 = var_1_8;
			}
		} else {
			var_1_7 = var_1_8;
		}
	} else {
		var_1_7 = var_1_8;
	}


	// From: Req5Batch61PS_CN_50
	if (var_1_21 >= (var_1_14 - (min (var_1_15 , var_1_16)))) {
		if (var_1_16 < var_1_9) {
			var_1_13 = var_1_17;
		} else {
			var_1_13 = var_1_17;
		}
	} else {
		var_1_13 = var_1_18;
	}


	// From: Req6Batch61PS_CN_50
	signed long int stepLocal_5 = (var_1_22 / 2) / var_1_20;
	if (stepLocal_5 >= (~ 100)) {
		if (var_1_13) {
			var_1_19 = (var_1_17 && var_1_18);
		}
	} else {
		if (var_1_17) {
			var_1_19 = var_1_18;
		} else {
			var_1_19 = var_1_18;
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 65535);
	assume_abort_if_not(var_1_20 != 0);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -127);
	assume_abort_if_not(var_1_44 <= 126);
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
}

int property() {
	return (((((((((var_1_21 / (abs (64u))) == var_1_4) ? (var_1_1 == ((double) (8.8 - 255.2))) : 1) && ((last_1_var_1_9 < last_1_var_1_9) ? (var_1_4 == ((unsigned long int) (max (var_1_5 , var_1_6)))) : 1)) && ((var_1_9 <= (max (var_1_21 , var_1_5))) ? ((var_1_9 < var_1_5) ? ((var_1_9 >= (var_1_21 ^ 4u)) ? (var_1_7 == ((float) var_1_8)) : 1) : (var_1_7 == ((float) var_1_8))) : (var_1_7 == ((float) var_1_8)))) && ((var_1_4 >= (4256310412u - 128u)) ? (var_1_9 == ((signed long int) ((abs (var_1_22 + var_1_22)) + var_1_22))) : 1)) && ((var_1_21 >= (var_1_14 - (min (var_1_15 , var_1_16)))) ? ((var_1_16 < var_1_9) ? (var_1_13 == ((unsigned char) var_1_17)) : (var_1_13 == ((unsigned char) var_1_17))) : (var_1_13 == ((unsigned char) var_1_18)))) && ((((var_1_22 / 2) / var_1_20) >= (~ 100)) ? (var_1_13 ? (var_1_19 == ((unsigned char) (var_1_17 && var_1_18))) : 1) : (var_1_17 ? (var_1_19 == ((unsigned char) var_1_18)) : (var_1_19 == ((unsigned char) var_1_18))))) && (var_1_21 == ((unsigned long int) var_1_6))) && (var_1_22 == ((signed char) var_1_23))
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
