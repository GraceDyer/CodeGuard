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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch67Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 2;
signed char var_1_6 = -2;
signed char var_1_7 = 2;
double var_1_8 = 16.25;
double var_1_9 = 31.5;
double var_1_10 = 127.9;
double var_1_11 = 15.9;
double var_1_12 = 64.75;
unsigned long int var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned short int var_1_15 = 2;
unsigned short int var_1_16 = 25;
unsigned short int var_1_17 = 1;
unsigned long int var_1_18 = 50;
unsigned char var_1_19 = 1;
unsigned short int var_1_20 = 10;
unsigned short int var_1_21 = 10;
float var_1_22 = 15.1;
unsigned long int var_1_23 = 3874754763;
signed long int var_1_24 = -16;
signed char var_1_25 = -10;
signed char var_1_26 = -8;
signed char var_1_27 = 100;
signed char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 0;
unsigned long int var_1_31 = 256;
signed short int var_1_32 = 32;
unsigned long int var_1_33 = 3617747482;
unsigned long int var_1_34 = 100;

// Calibration values

// Last'ed variables
double last_1_var_1_8 = 16.25;
unsigned long int last_1_var_1_13 = 0;
unsigned short int last_1_var_1_15 = 2;
signed long int last_1_var_1_24 = -16;
signed char last_1_var_1_25 = -10;
unsigned long int last_1_var_1_31 = 256;
unsigned long int last_1_var_1_34 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch67Amount100
	if ((last_1_var_1_31 & last_1_var_1_24) <= last_1_var_1_34) {
		var_1_1 = last_1_var_1_25;
	}


	// From: Req5Batch67Amount100
	unsigned long int stepLocal_2 = last_1_var_1_13;
	if (last_1_var_1_15 >= stepLocal_2) {
		if (((var_1_9 + 63.35f) + last_1_var_1_8) >= var_1_12) {
			var_1_15 = (var_1_16 + var_1_17);
		} else {
			var_1_15 = var_1_17;
		}
	} else {
		var_1_15 = 1000;
	}


	// From: Req11Batch67Amount100
	unsigned long int stepLocal_5 = var_1_16 - last_1_var_1_31;
	if (! var_1_19) {
		var_1_29 = (var_1_19 && var_1_30);
	} else {
		if (128 > stepLocal_5) {
			var_1_29 = (var_1_14 && var_1_30);
		}
	}


	// From: Req13Batch67Amount100
	if ((min (var_1_17 , var_1_23)) > var_1_33) {
		if (var_1_30) {
			if (var_1_29) {
				var_1_34 = var_1_21;
			}
		}
	}


	// From: Req7Batch67Amount100
	if (var_1_29) {
		if (var_1_29) {
			var_1_20 = (min ((var_1_16 + var_1_17) , var_1_21));
		}
	}


	// From: Req2Batch67Amount100
	var_1_6 = var_1_7;


	// From: Req8Batch67Amount100
	if (var_1_15 >= (- (var_1_23 - var_1_17))) {
		if (var_1_29) {
			var_1_22 = var_1_9;
		}
	}


	// From: Req6Batch67Amount100
	unsigned char stepLocal_3 = var_1_29;
	if (var_1_11 >= var_1_10) {
		if (stepLocal_3 || var_1_29) {
			if ((max (var_1_22 , var_1_11)) <= var_1_10) {
				var_1_18 = 25u;
			}
		}
	} else {
		var_1_18 = var_1_20;
	}


	// From: Req10Batch67Amount100
	if (! (! var_1_29)) {
		var_1_25 = (min ((max (var_1_7 , (abs (var_1_26)))) , var_1_27));
	} else {
		if (var_1_17 <= var_1_18) {
			var_1_25 = (var_1_28 - 4);
		}
	}


	// From: Req12Batch67Amount100
	unsigned char stepLocal_6 = (var_1_28 / var_1_32) >= var_1_7;
	if (var_1_29 && stepLocal_6) {
		if (var_1_29) {
			if (var_1_10 > var_1_12) {
				var_1_31 = (max ((var_1_33 - var_1_34) , 0u));
			} else {
				var_1_31 = (var_1_18 + var_1_16);
			}
		} else {
			var_1_31 = (abs (var_1_18));
		}
	}


	// From: Req4Batch67Amount100
	if (var_1_29) {
		var_1_13 = var_1_31;
	}


	// From: Req9Batch67Amount100
	unsigned long int stepLocal_4 = max ((max (var_1_1 , var_1_34)) , (var_1_25 * var_1_25));
	if (stepLocal_4 <= (var_1_15 - (min (var_1_21 , var_1_16)))) {
		var_1_24 = (max ((var_1_13 + var_1_7) , var_1_25));
	}


	// From: Req3Batch67Amount100
	signed long int stepLocal_1 = var_1_15 + var_1_20;
	signed long int stepLocal_0 = var_1_24;
	if (var_1_15 == stepLocal_0) {
		var_1_8 = (var_1_9 + var_1_10);
	} else {
		if (var_1_1 <= stepLocal_1) {
			var_1_8 = (abs ((var_1_11 + var_1_12) + 1.00000005E7));
		} else {
			var_1_8 = ((var_1_12 + var_1_11) + var_1_9);
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427382800e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 2147483647);
	assume_abort_if_not(var_1_23 <= 4294967295);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -126);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -1);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32768);
	assume_abort_if_not(var_1_32 <= 32767);
	assume_abort_if_not(var_1_32 != 0);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_34 = var_1_34;
}

int property() {
	return ((((((((((((((last_1_var_1_31 & last_1_var_1_24) <= last_1_var_1_34) ? (var_1_1 == ((signed short int) last_1_var_1_25)) : 1) && (var_1_6 == ((signed char) var_1_7))) && ((var_1_15 == var_1_24) ? (var_1_8 == ((double) (var_1_9 + var_1_10))) : ((var_1_1 <= (var_1_15 + var_1_20)) ? (var_1_8 == ((double) (abs ((var_1_11 + var_1_12) + 1.00000005E7)))) : (var_1_8 == ((double) ((var_1_12 + var_1_11) + var_1_9)))))) && (var_1_29 ? (var_1_13 == ((unsigned long int) var_1_31)) : 1)) && ((last_1_var_1_15 >= last_1_var_1_13) ? ((((var_1_9 + 63.35f) + last_1_var_1_8) >= var_1_12) ? (var_1_15 == ((unsigned short int) (var_1_16 + var_1_17))) : (var_1_15 == ((unsigned short int) var_1_17))) : (var_1_15 == ((unsigned short int) 1000)))) && ((var_1_11 >= var_1_10) ? ((var_1_29 || var_1_29) ? (((max (var_1_22 , var_1_11)) <= var_1_10) ? (var_1_18 == ((unsigned long int) 25u)) : 1) : 1) : (var_1_18 == ((unsigned long int) var_1_20)))) && (var_1_29 ? (var_1_29 ? (var_1_20 == ((unsigned short int) (min ((var_1_16 + var_1_17) , var_1_21)))) : 1) : 1)) && ((var_1_15 >= (- (var_1_23 - var_1_17))) ? (var_1_29 ? (var_1_22 == ((float) var_1_9)) : 1) : 1)) && (((max ((max (var_1_1 , var_1_34)) , (var_1_25 * var_1_25))) <= (var_1_15 - (min (var_1_21 , var_1_16)))) ? (var_1_24 == ((signed long int) (max ((var_1_13 + var_1_7) , var_1_25)))) : 1)) && ((! (! var_1_29)) ? (var_1_25 == ((signed char) (min ((max (var_1_7 , (abs (var_1_26)))) , var_1_27)))) : ((var_1_17 <= var_1_18) ? (var_1_25 == ((signed char) (var_1_28 - 4))) : 1))) && ((! var_1_19) ? (var_1_29 == ((unsigned char) (var_1_19 && var_1_30))) : ((128 > (var_1_16 - last_1_var_1_31)) ? (var_1_29 == ((unsigned char) (var_1_14 && var_1_30))) : 1))) && ((var_1_29 && ((var_1_28 / var_1_32) >= var_1_7)) ? (var_1_29 ? ((var_1_10 > var_1_12) ? (var_1_31 == ((unsigned long int) (max ((var_1_33 - var_1_34) , 0u)))) : (var_1_31 == ((unsigned long int) (var_1_18 + var_1_16)))) : (var_1_31 == ((unsigned long int) (abs (var_1_18))))) : 1)) && (((min (var_1_17 , var_1_23)) > var_1_33) ? (var_1_30 ? (var_1_29 ? (var_1_34 == ((unsigned long int) var_1_21)) : 1) : 1) : 1)
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
