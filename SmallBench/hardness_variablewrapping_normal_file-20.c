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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch20normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 0.6;
unsigned char var_1_2 = 0;
float var_1_3 = 0.0;
float var_1_4 = 2.95;
float var_1_5 = 8.5;
float var_1_6 = 999999999999.4;
double var_1_7 = 10.2;
double var_1_8 = 4.6;
unsigned long int var_1_9 = 256;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 3724367395;
unsigned long int var_1_12 = 25;
unsigned long int var_1_13 = 1;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch20normal
	if (var_1_2) {
		var_1_1 = ((var_1_3 - var_1_4) - var_1_5);
	} else {
		var_1_1 = (var_1_4 + var_1_6);
	}


	// From: Req2Batch20normal
	var_1_7 = ((15.5 + var_1_4) - (var_1_3 - var_1_8));


	// From: Req4Batch20normal
	unsigned long int stepLocal_2 = var_1_13;
	signed long int stepLocal_1 = 5;
	if (stepLocal_1 >= var_1_11) {
		if (var_1_1 >= var_1_8) {
			var_1_14 = (128 - 16);
		} else {
			if (stepLocal_2 >= (abs (var_1_12))) {
				var_1_14 = (var_1_15 - var_1_16);
			} else {
				var_1_14 = var_1_16;
			}
		}
	}


	// From: Req3Batch20normal
	unsigned char stepLocal_0 = var_1_2;
	if (var_1_10 || stepLocal_0) {
		var_1_9 = ((var_1_11 - var_1_14) - var_1_14);
	} else {
		var_1_9 = (var_1_14 + (abs (var_1_14)));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 4611686.018427382800e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427382800e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 3221225470);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 127);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
}



void updateLastVariables() {
}

int property() {
	return (((var_1_2 ? (var_1_1 == ((float) ((var_1_3 - var_1_4) - var_1_5))) : (var_1_1 == ((float) (var_1_4 + var_1_6)))) && (var_1_7 == ((double) ((15.5 + var_1_4) - (var_1_3 - var_1_8))))) && ((var_1_10 || var_1_2) ? (var_1_9 == ((unsigned long int) ((var_1_11 - var_1_14) - var_1_14))) : (var_1_9 == ((unsigned long int) (var_1_14 + (abs (var_1_14))))))) && ((5 >= var_1_11) ? ((var_1_1 >= var_1_8) ? (var_1_14 == ((unsigned char) (128 - 16))) : ((var_1_13 >= (abs (var_1_12))) ? (var_1_14 == ((unsigned char) (var_1_15 - var_1_16))) : (var_1_14 == ((unsigned char) var_1_16)))) : 1)
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
