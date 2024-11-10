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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5250_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -1;
unsigned long int var_1_7 = 64;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 16;
signed long int var_1_11 = -256;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -50;
signed long int var_1_17 = 128;
unsigned long int var_1_18 = 32;
unsigned long int var_1_19 = 3711233667;
unsigned short int var_1_20 = 128;
unsigned short int var_1_21 = 128;
signed short int var_1_22 = 64;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_7 = 64;
signed long int last_1_var_1_17 = 128;
unsigned short int last_1_var_1_20 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req6Batch5250_1loop
	signed long int stepLocal_6 = -4;
	if (last_1_var_1_17 != stepLocal_6) {
		var_1_17 = ((var_1_8 + (1000000000 - var_1_10)) - ((last_1_var_1_20 + var_1_9) + 50));
	} else {
		var_1_17 = last_1_var_1_20;
	}


	// From: Req8Batch5250_1loop
	var_1_20 = var_1_17;


	// From: Req4Batch5250_1loop
	var_1_12 = (var_1_13 && var_1_14);


	// From: Req9Batch5250_1loop
	var_1_21 = var_1_8;


	// From: Req10Batch5250_1loop
	var_1_22 = -256;


	// From: Req1Batch5250_1loop
	signed short int stepLocal_1 = var_1_22;
	signed short int stepLocal_0 = var_1_22;
	if ((var_1_21 * (~ var_1_22)) >= stepLocal_0) {
		if (stepLocal_1 <= var_1_17) {
			var_1_1 = ((abs (var_1_21)) - var_1_22);
		}
	} else {
		if (var_1_12) {
			var_1_1 = var_1_21;
		} else {
			var_1_1 = var_1_22;
		}
	}


	// From: Req2Batch5250_1loop
	signed long int stepLocal_2 = (min (var_1_8 , var_1_9)) - var_1_10;
	if (last_1_var_1_7 < stepLocal_2) {
		if (var_1_12) {
			var_1_7 = var_1_9;
		}
	}


	// From: Req3Batch5250_1loop
	unsigned short int stepLocal_3 = var_1_20;
	if ((64 - var_1_1) >= stepLocal_3) {
		if (! var_1_12) {
			var_1_11 = var_1_10;
		}
	}


	// From: Req5Batch5250_1loop
	unsigned char stepLocal_5 = var_1_12;
	unsigned char stepLocal_4 = var_1_10;
	if ((var_1_8 < var_1_17) && stepLocal_5) {
		var_1_15 = (max (var_1_10 , (var_1_17 - var_1_11)));
	} else {
		if (stepLocal_4 < var_1_7) {
			var_1_15 = var_1_8;
		} else {
			var_1_15 = var_1_8;
		}
	}


	// From: Req7Batch5250_1loop
	var_1_18 = (var_1_19 - var_1_21);
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 127);
	assume_abort_if_not(var_1_8 <= 255);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 127);
	assume_abort_if_not(var_1_9 <= 255);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
}

int property() {
	return (((((((((((var_1_21 * (~ var_1_22)) >= var_1_22) ? ((var_1_22 <= var_1_17) ? (var_1_1 == ((signed long int) ((abs (var_1_21)) - var_1_22))) : 1) : (var_1_12 ? (var_1_1 == ((signed long int) var_1_21)) : (var_1_1 == ((signed long int) var_1_22)))) && ((last_1_var_1_7 < ((min (var_1_8 , var_1_9)) - var_1_10)) ? (var_1_12 ? (var_1_7 == ((unsigned long int) var_1_9)) : 1) : 1)) && (((64 - var_1_1) >= var_1_20) ? ((! var_1_12) ? (var_1_11 == ((signed long int) var_1_10)) : 1) : 1)) && (var_1_12 == ((unsigned char) (var_1_13 && var_1_14)))) && (((var_1_8 < var_1_17) && var_1_12) ? (var_1_15 == ((signed long int) (max (var_1_10 , (var_1_17 - var_1_11))))) : ((var_1_10 < var_1_7) ? (var_1_15 == ((signed long int) var_1_8)) : (var_1_15 == ((signed long int) var_1_8))))) && ((last_1_var_1_17 != -4) ? (var_1_17 == ((signed long int) ((var_1_8 + (1000000000 - var_1_10)) - ((last_1_var_1_20 + var_1_9) + 50)))) : (var_1_17 == ((signed long int) last_1_var_1_20)))) && (var_1_18 == ((unsigned long int) (var_1_19 - var_1_21)))) && (var_1_20 == ((unsigned short int) var_1_17))) && (var_1_21 == ((unsigned short int) var_1_8))) && (var_1_22 == ((signed short int) -256))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
