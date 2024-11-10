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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6no_floats.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 0;
unsigned short int var_1_4 = 32;
unsigned short int var_1_6 = 10;
signed long int var_1_7 = 4;
signed long int var_1_8 = 2;
signed long int var_1_9 = 0;
signed long int var_1_10 = 64;
signed long int var_1_11 = 0;
signed long int var_1_12 = 0;
unsigned short int var_1_13 = 36833;
unsigned char var_1_14 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
signed long int var_1_18 = -32;
unsigned long int var_1_20 = 50;
unsigned long int var_1_21 = 2655070710;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_14 = 0;
signed long int last_1_var_1_18 = -32;
unsigned long int last_1_var_1_20 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch6no_floats
	if ((var_1_4 - last_1_var_1_20) == last_1_var_1_18) {
		if (((var_1_9 - var_1_10) - var_1_11) > var_1_12) {
			var_1_6 = (var_1_13 - var_1_8);
		}
	} else {
		var_1_6 = var_1_13;
	}


	// From: Req4Batch6no_floats
	if (var_1_13 > var_1_6) {
		var_1_18 = ((min (var_1_6 , var_1_13)) - var_1_6);
	}


	// From: Req3Batch6no_floats
	if (last_1_var_1_14) {
		var_1_14 = (var_1_16 && var_1_17);
	}


	// From: Req5Batch6no_floats
	var_1_20 = (min ((abs (last_1_var_1_20)) , (var_1_21 - var_1_7)));


	// From: Req1Batch6no_floats
	unsigned long int stepLocal_1 = var_1_20;
	unsigned long int stepLocal_0 = var_1_20;
	if (((max (var_1_18 , var_1_18)) / var_1_4) > stepLocal_1) {
		if (stepLocal_0 == var_1_18) {
			var_1_1 = 1000000000u;
		} else {
			var_1_1 = 128u;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	assume_abort_if_not(var_1_4 != 0);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 17);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 16);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 2147483647);
	assume_abort_if_not(var_1_21 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((((max (var_1_18 , var_1_18)) / var_1_4) > var_1_20) ? ((var_1_20 == var_1_18) ? (var_1_1 == ((unsigned long int) 1000000000u)) : (var_1_1 == ((unsigned long int) 128u))) : 1) && (((var_1_4 - last_1_var_1_20) == last_1_var_1_18) ? ((((var_1_9 - var_1_10) - var_1_11) > var_1_12) ? (var_1_6 == ((unsigned short int) (var_1_13 - var_1_8))) : 1) : (var_1_6 == ((unsigned short int) var_1_13)))) && (last_1_var_1_14 ? (var_1_14 == ((unsigned char) (var_1_16 && var_1_17))) : 1)) && ((var_1_13 > var_1_6) ? (var_1_18 == ((signed long int) ((min (var_1_6 , var_1_13)) - var_1_6))) : 1)) && (var_1_20 == ((unsigned long int) (min ((abs (last_1_var_1_20)) , (var_1_21 - var_1_7)))))
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
