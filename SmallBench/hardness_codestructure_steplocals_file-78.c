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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch78stepLocals.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -4;
signed long int var_1_2 = 0;
unsigned char var_1_3 = 64;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 2;
unsigned short int var_1_6 = 10;
unsigned short int var_1_7 = 8;
double var_1_8 = 1.875;
signed long int var_1_9 = -4;
double var_1_10 = 63.5;
double var_1_11 = 255.375;
double var_1_12 = 999999999.525;
double var_1_13 = 63.75;
double var_1_14 = 0.625;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 4;
signed char var_1_17 = 0;
signed char var_1_18 = -2;
signed char var_1_19 = 1;
unsigned short int var_1_20 = 50;
unsigned short int var_1_21 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch78stepLocals
	var_1_1 = (abs (var_1_2));


	// From: Req2Batch78stepLocals
	signed long int stepLocal_0 = var_1_2;
	if (var_1_1 < stepLocal_0) {
		var_1_3 = (max (var_1_4 , var_1_5));
	}


	// From: Req3Batch78stepLocals
	signed long int stepLocal_2 = var_1_2 ^ var_1_1;
	unsigned char stepLocal_1 = var_1_5;
	if (stepLocal_2 < -256) {
		var_1_6 = (abs (max ((max (var_1_5 , var_1_4)) , (var_1_3 + var_1_7))));
	} else {
		if (stepLocal_1 <= 50) {
			var_1_6 = var_1_3;
		}
	}


	// From: Req4Batch78stepLocals
	if (var_1_1 < (var_1_5 % (max (32 , var_1_9)))) {
		var_1_8 = (((max (var_1_10 , var_1_11)) - var_1_12) + (var_1_13 - var_1_14));
	} else {
		if (var_1_13 <= (var_1_14 + var_1_11)) {
			var_1_8 = var_1_12;
		}
	}


	// From: Req5Batch78stepLocals
	if ((abs (var_1_4)) > var_1_1) {
		var_1_15 = (max (var_1_3 , (var_1_5 + var_1_4)));
	}


	// From: Req6Batch78stepLocals
	var_1_16 = (var_1_17 + (var_1_18 + (abs (var_1_19))));


	// From: Req7Batch78stepLocals
	var_1_20 = (max ((var_1_5 + var_1_3) , var_1_4));


	// From: Req8Batch78stepLocals
	signed char stepLocal_3 = var_1_16;
	if (stepLocal_3 == ((var_1_2 * var_1_17) & (var_1_15 * var_1_18))) {
		var_1_21 = (var_1_4 + 128);
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483646);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -31);
	assume_abort_if_not(var_1_18 <= 32);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -31);
	assume_abort_if_not(var_1_19 <= 31);
}



void updateLastVariables() {
}

int property() {
	return (((((((var_1_1 == ((signed long int) (abs (var_1_2)))) && ((var_1_1 < var_1_2) ? (var_1_3 == ((unsigned char) (max (var_1_4 , var_1_5)))) : 1)) && (((var_1_2 ^ var_1_1) < -256) ? (var_1_6 == ((unsigned short int) (abs (max ((max (var_1_5 , var_1_4)) , (var_1_3 + var_1_7)))))) : ((var_1_5 <= 50) ? (var_1_6 == ((unsigned short int) var_1_3)) : 1))) && ((var_1_1 < (var_1_5 % (max (32 , var_1_9)))) ? (var_1_8 == ((double) (((max (var_1_10 , var_1_11)) - var_1_12) + (var_1_13 - var_1_14)))) : ((var_1_13 <= (var_1_14 + var_1_11)) ? (var_1_8 == ((double) var_1_12)) : 1))) && (((abs (var_1_4)) > var_1_1) ? (var_1_15 == ((unsigned short int) (max (var_1_3 , (var_1_5 + var_1_4))))) : 1)) && (var_1_16 == ((signed char) (var_1_17 + (var_1_18 + (abs (var_1_19))))))) && (var_1_20 == ((unsigned short int) (max ((var_1_5 + var_1_3) , var_1_4))))) && ((var_1_16 == ((var_1_2 * var_1_17) & (var_1_15 * var_1_18))) ? (var_1_21 == ((unsigned short int) (var_1_4 + 128))) : 1)
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
