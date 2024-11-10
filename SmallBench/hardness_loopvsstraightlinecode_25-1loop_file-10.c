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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1025_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 5;
unsigned long int var_1_2 = 8;
double var_1_3 = 9.15;
double var_1_6 = 1000000.875;
double var_1_7 = 49.25;
double var_1_8 = 1000000000.8;
double var_1_9 = 7.85;
double var_1_10 = 15.5;
double var_1_11 = 49.875;
unsigned char var_1_12 = 4;
unsigned char var_1_13 = 0;
unsigned short int var_1_14 = 42290;
unsigned short int var_1_15 = 2;
unsigned char var_1_16 = 32;
double var_1_17 = 64.4;
signed long int var_1_18 = 0;
signed char var_1_19 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch1025_1loop
	var_1_17 = (var_1_8 + var_1_9);


	// From: Req5Batch1025_1loop
	var_1_18 = var_1_15;


	// From: Req6Batch1025_1loop
	var_1_19 = 8;


	// From: Req3Batch1025_1loop
	unsigned long int stepLocal_1 = var_1_2;
	if (var_1_13) {
		if ((var_1_18 / (var_1_14 - var_1_15)) <= stepLocal_1) {
			var_1_12 = var_1_16;
		} else {
			var_1_12 = 16;
		}
	} else {
		var_1_12 = var_1_16;
	}


	// From: Req1Batch1025_1loop
	var_1_1 = var_1_12;


	// From: Req2Batch1025_1loop
	unsigned char stepLocal_0 = var_1_12;
	if (stepLocal_0 < var_1_1) {
		var_1_3 = -0.5;
	} else {
		if ((- var_1_17) == (var_1_6 - var_1_7)) {
			var_1_3 = (var_1_8 + (var_1_9 - (max (var_1_10 , var_1_11))));
		} else {
			var_1_3 = 50.125;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65535);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 32766);
	assume_abort_if_not(var_1_15 != 32767);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
}



void updateLastVariables() {
}

int property() {
	return (((((var_1_1 == ((unsigned long int) var_1_12)) && ((var_1_12 < var_1_1) ? (var_1_3 == ((double) -0.5)) : (((- var_1_17) == (var_1_6 - var_1_7)) ? (var_1_3 == ((double) (var_1_8 + (var_1_9 - (max (var_1_10 , var_1_11)))))) : (var_1_3 == ((double) 50.125))))) && (var_1_13 ? (((var_1_18 / (var_1_14 - var_1_15)) <= var_1_2) ? (var_1_12 == ((unsigned char) var_1_16)) : (var_1_12 == ((unsigned char) 16))) : (var_1_12 == ((unsigned char) var_1_16)))) && (var_1_17 == ((double) (var_1_8 + var_1_9)))) && (var_1_18 == ((signed long int) var_1_15))) && (var_1_19 == ((signed char) 8))
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
