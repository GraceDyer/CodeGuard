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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9250_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 100;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 53946;
unsigned short int var_1_11 = 1;
unsigned long int var_1_12 = 8;
double var_1_13 = 8.25;
signed long int var_1_14 = -256;
double var_1_15 = 0.19999999999999996;
signed long int var_1_16 = -16;
signed char var_1_17 = 1;
signed char var_1_18 = 4;
signed char var_1_19 = 64;
signed long int var_1_20 = 1;
signed long int var_1_21 = 1000000000;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 100;
unsigned long int last_1_var_1_12 = 8;
double last_1_var_1_13 = 8.25;
signed long int last_1_var_1_16 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch9250_1loop
	unsigned char stepLocal_0 = last_1_var_1_13 >= last_1_var_1_13;
	if ((last_1_var_1_12 == last_1_var_1_1) && stepLocal_0) {
		if (var_1_6) {
			if (var_1_7) {
				var_1_1 = (min (var_1_8 , var_1_9));
			} else {
				var_1_1 = (max (var_1_9 , var_1_8));
			}
		} else {
			var_1_1 = ((max (46167 , var_1_10)) - var_1_11);
		}
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req2Batch9250_1loop
	if (((min (var_1_11 , 16)) >> var_1_10) >= last_1_var_1_16) {
		if (var_1_7) {
			var_1_12 = var_1_10;
		}
	}


	// From: Req5Batch9250_1loop
	var_1_17 = (4 - (min (var_1_18 , (var_1_19 - 1))));


	// From: Req6Batch9250_1loop
	unsigned long int stepLocal_4 = var_1_12;
	if (var_1_6) {
		var_1_20 = ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10);
	} else {
		if ((~ var_1_19) == stepLocal_4) {
			var_1_20 = var_1_1;
		} else {
			var_1_20 = var_1_10;
		}
	}


	// From: Req4Batch9250_1loop
	unsigned char stepLocal_3 = var_1_6;
	unsigned char stepLocal_2 = var_1_6;
	if (stepLocal_2 && (var_1_9 < (var_1_10 + var_1_20))) {
		if (var_1_7 && stepLocal_3) {
			var_1_16 = var_1_10;
		}
	} else {
		var_1_16 = var_1_8;
	}


	// From: Req3Batch9250_1loop
	signed long int stepLocal_1 = (min (var_1_10 , var_1_1)) + (var_1_9 % var_1_14);
	if (stepLocal_1 >= (min (var_1_16 , var_1_8))) {
		var_1_13 = var_1_15;
	} else {
		var_1_13 = var_1_15;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 63);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 536870911);
	assume_abort_if_not(var_1_21 <= 1073741823);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
}

int property() {
	return (((((((last_1_var_1_12 == last_1_var_1_1) && (last_1_var_1_13 >= last_1_var_1_13)) ? (var_1_6 ? (var_1_7 ? (var_1_1 == ((unsigned short int) (min (var_1_8 , var_1_9)))) : (var_1_1 == ((unsigned short int) (max (var_1_9 , var_1_8))))) : (var_1_1 == ((unsigned short int) ((max (46167 , var_1_10)) - var_1_11)))) : (var_1_1 == ((unsigned short int) var_1_10))) && ((((min (var_1_11 , 16)) >> var_1_10) >= last_1_var_1_16) ? (var_1_7 ? (var_1_12 == ((unsigned long int) var_1_10)) : 1) : 1)) && ((((min (var_1_10 , var_1_1)) + (var_1_9 % var_1_14)) >= (min (var_1_16 , var_1_8))) ? (var_1_13 == ((double) var_1_15)) : (var_1_13 == ((double) var_1_15)))) && ((var_1_6 && (var_1_9 < (var_1_10 + var_1_20))) ? ((var_1_7 && var_1_6) ? (var_1_16 == ((signed long int) var_1_10)) : 1) : (var_1_16 == ((signed long int) var_1_8)))) && (var_1_17 == ((signed char) (4 - (min (var_1_18 , (var_1_19 - 1))))))) && (var_1_6 ? (var_1_20 == ((signed long int) ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10))) : (((~ var_1_19) == var_1_12) ? (var_1_20 == ((signed long int) var_1_1)) : (var_1_20 == ((signed long int) var_1_10))))
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
