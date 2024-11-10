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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch26Amount25.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -1;
signed short int var_1_4 = 1;
signed short int var_1_5 = -10;
double var_1_6 = 10.4;
double var_1_7 = 100000000000000.2;
double var_1_8 = 99.4;
double var_1_9 = 49.825;
unsigned short int var_1_10 = 50;
unsigned char var_1_11 = 0;
double var_1_12 = 4.3;
double var_1_13 = 2.875;
unsigned short int var_1_14 = 64;
unsigned short int var_1_15 = 50;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch26Amount25
	var_1_6 = (var_1_7 - (var_1_8 + var_1_9));


	// From: Req1Batch26Amount25
	if (var_1_6 > var_1_6) {
		var_1_1 = (max (var_1_4 , var_1_5));
	} else {
		var_1_1 = (min (-4 , var_1_5));
	}


	// From: Req3Batch26Amount25
	signed long int stepLocal_1 = 100;
	unsigned char stepLocal_0 = var_1_8 <= (var_1_7 + var_1_9);
	if (var_1_11 || stepLocal_0) {
		if (((var_1_7 + var_1_6) / (max (var_1_12 , var_1_13))) <= var_1_9) {
			if (var_1_6 > 2.5) {
				if (stepLocal_1 > var_1_1) {
					var_1_10 = var_1_14;
				} else {
					var_1_10 = var_1_15;
				}
			} else {
				var_1_10 = var_1_14;
			}
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
}



void updateLastVariables() {
}

int property() {
	return (((var_1_6 > var_1_6) ? (var_1_1 == ((signed short int) (max (var_1_4 , var_1_5)))) : (var_1_1 == ((signed short int) (min (-4 , var_1_5))))) && (var_1_6 == ((double) (var_1_7 - (var_1_8 + var_1_9))))) && ((var_1_11 || (var_1_8 <= (var_1_7 + var_1_9))) ? ((((var_1_7 + var_1_6) / (max (var_1_12 , var_1_13))) <= var_1_9) ? ((var_1_6 > 2.5) ? ((100 > var_1_1) ? (var_1_10 == ((unsigned short int) var_1_14)) : (var_1_10 == ((unsigned short int) var_1_15))) : (var_1_10 == ((unsigned short int) var_1_14))) : 1) : 1)
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
