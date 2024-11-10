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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch11100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 4.75;
unsigned char var_1_2 = 0;
signed long int var_1_6 = -4;
double var_1_7 = 49.8;
double var_1_8 = 255.625;
unsigned short int var_1_9 = 10;
unsigned short int var_1_11 = 10000;
signed char var_1_12 = 100;
signed char var_1_13 = 16;
unsigned long int var_1_14 = 4;
signed short int var_1_15 = -16;
unsigned char var_1_17 = 5;
double var_1_18 = 64.75;
double var_1_19 = 99.5;
unsigned long int var_1_20 = 32;
unsigned long int var_1_22 = 32;
unsigned long int var_1_23 = 2461517415;
unsigned long int var_1_24 = 1399914902;
unsigned char var_1_25 = 2;
signed long int var_1_26 = 4;
unsigned char var_1_27 = 0;
unsigned short int var_1_28 = 32;
unsigned short int var_1_29 = 36457;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 4.75;
unsigned short int last_1_var_1_9 = 10;
unsigned short int last_1_var_1_11 = 10000;
unsigned long int last_1_var_1_14 = 4;
signed short int last_1_var_1_15 = -16;
unsigned char last_1_var_1_17 = 5;
double last_1_var_1_18 = 64.75;
unsigned long int last_1_var_1_20 = 32;
unsigned long int last_1_var_1_22 = 32;
unsigned char last_1_var_1_25 = 2;
signed long int last_1_var_1_26 = 4;
unsigned short int last_1_var_1_28 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch11100_1loop
	signed long int stepLocal_0 = var_1_6 & 10000;
	if (((last_1_var_1_20 + last_1_var_1_15) | last_1_var_1_9) < stepLocal_0) {
		var_1_1 = var_1_7;
	} else {
		var_1_1 = (max (var_1_7 , var_1_8));
	}


	// From: Req4Batch11100_1loop
	if (last_1_var_1_14 <= last_1_var_1_15) {
		if (((last_1_var_1_26 % var_1_6) * (last_1_var_1_17 / 1000000000u)) >= (min (10u , var_1_13))) {
			var_1_14 = var_1_13;
		} else {
			var_1_14 = last_1_var_1_22;
		}
	} else {
		var_1_14 = last_1_var_1_26;
	}


	// From: Req2Batch11100_1loop
	if (last_1_var_1_20 > last_1_var_1_15) {
		if (last_1_var_1_1 < var_1_7) {
			var_1_9 = last_1_var_1_25;
		}
	} else {
		if (last_1_var_1_14 <= 16) {
			var_1_9 = last_1_var_1_25;
		}
	}


	// From: Req10Batch11100_1loop
	unsigned long int stepLocal_5 = (3423867512u - var_1_13) - var_1_24;
	signed long int stepLocal_4 = 8;
	if (stepLocal_4 > (last_1_var_1_17 & (abs (last_1_var_1_25)))) {
		if (var_1_8 >= last_1_var_1_18) {
			if (((last_1_var_1_28 | last_1_var_1_25) + last_1_var_1_11) < stepLocal_5) {
				var_1_25 = var_1_13;
			}
		}
	} else {
		var_1_25 = var_1_13;
	}


	// From: Req3Batch11100_1loop
	if (! ((var_1_12 - var_1_13) <= (last_1_var_1_11 >> var_1_14))) {
		var_1_11 = var_1_13;
	}


	// From: Req7Batch11100_1loop
	signed char stepLocal_1 = var_1_13;
	if ((var_1_9 + var_1_25) >= stepLocal_1) {
		var_1_18 = (max (var_1_7 , (max (var_1_8 , var_1_19))));
	}


	// From: Req6Batch11100_1loop
	var_1_17 = var_1_13;


	// From: Req9Batch11100_1loop
	if (! var_1_2) {
		var_1_22 = (var_1_23 - var_1_25);
	} else {
		var_1_22 = (var_1_17 + (var_1_24 - var_1_9));
	}


	// From: Req5Batch11100_1loop
	if (var_1_7 >= 4.5) {
		var_1_15 = ((abs (var_1_17)) - (max (var_1_13 , var_1_25)));
	}


	// From: Req12Batch11100_1loop
	var_1_28 = (var_1_29 - (var_1_13 + (abs (var_1_15))));


	// From: Req8Batch11100_1loop
	unsigned long int stepLocal_3 = var_1_22;
	signed char stepLocal_2 = var_1_13;
	if (stepLocal_2 == (var_1_6 * (var_1_12 - 64))) {
		var_1_20 = var_1_17;
	} else {
		if (! (var_1_7 <= (var_1_1 * var_1_8))) {
			if (var_1_28 < stepLocal_3) {
				var_1_20 = var_1_9;
			} else {
				var_1_20 = var_1_9;
			}
		}
	}


	// From: Req11Batch11100_1loop
	unsigned long int stepLocal_7 = var_1_14;
	unsigned long int stepLocal_6 = var_1_23;
	if (var_1_2) {
		if (stepLocal_6 >= var_1_25) {
			if ((var_1_25 - 10) <= stepLocal_7) {
				if (var_1_27) {
					var_1_26 = ((min ((min (var_1_25 , var_1_22)) , var_1_17)) + var_1_17);
				}
			} else {
				var_1_26 = (min (var_1_12 , var_1_17));
			}
		} else {
			var_1_26 = ((-32 + var_1_22) + var_1_14);
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854765600e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 2147483647);
	assume_abort_if_not(var_1_23 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 32767);
	assume_abort_if_not(var_1_29 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_28 = var_1_28;
}

int property() {
	return ((((((((((((((last_1_var_1_20 + last_1_var_1_15) | last_1_var_1_9) < (var_1_6 & 10000)) ? (var_1_1 == ((double) var_1_7)) : (var_1_1 == ((double) (max (var_1_7 , var_1_8))))) && ((last_1_var_1_20 > last_1_var_1_15) ? ((last_1_var_1_1 < var_1_7) ? (var_1_9 == ((unsigned short int) last_1_var_1_25)) : 1) : ((last_1_var_1_14 <= 16) ? (var_1_9 == ((unsigned short int) last_1_var_1_25)) : 1))) && ((! ((var_1_12 - var_1_13) <= (last_1_var_1_11 >> var_1_14))) ? (var_1_11 == ((unsigned short int) var_1_13)) : 1)) && ((last_1_var_1_14 <= last_1_var_1_15) ? ((((last_1_var_1_26 % var_1_6) * (last_1_var_1_17 / 1000000000u)) >= (min (10u , var_1_13))) ? (var_1_14 == ((unsigned long int) var_1_13)) : (var_1_14 == ((unsigned long int) last_1_var_1_22))) : (var_1_14 == ((unsigned long int) last_1_var_1_26)))) && ((var_1_7 >= 4.5) ? (var_1_15 == ((signed short int) ((abs (var_1_17)) - (max (var_1_13 , var_1_25))))) : 1)) && (var_1_17 == ((unsigned char) var_1_13))) && (((var_1_9 + var_1_25) >= var_1_13) ? (var_1_18 == ((double) (max (var_1_7 , (max (var_1_8 , var_1_19)))))) : 1)) && ((var_1_13 == (var_1_6 * (var_1_12 - 64))) ? (var_1_20 == ((unsigned long int) var_1_17)) : ((! (var_1_7 <= (var_1_1 * var_1_8))) ? ((var_1_28 < var_1_22) ? (var_1_20 == ((unsigned long int) var_1_9)) : (var_1_20 == ((unsigned long int) var_1_9))) : 1))) && ((! var_1_2) ? (var_1_22 == ((unsigned long int) (var_1_23 - var_1_25))) : (var_1_22 == ((unsigned long int) (var_1_17 + (var_1_24 - var_1_9)))))) && ((8 > (last_1_var_1_17 & (abs (last_1_var_1_25)))) ? ((var_1_8 >= last_1_var_1_18) ? ((((last_1_var_1_28 | last_1_var_1_25) + last_1_var_1_11) < ((3423867512u - var_1_13) - var_1_24)) ? (var_1_25 == ((unsigned char) var_1_13)) : 1) : 1) : (var_1_25 == ((unsigned char) var_1_13)))) && (var_1_2 ? ((var_1_23 >= var_1_25) ? (((var_1_25 - 10) <= var_1_14) ? (var_1_27 ? (var_1_26 == ((signed long int) ((min ((min (var_1_25 , var_1_22)) , var_1_17)) + var_1_17))) : 1) : (var_1_26 == ((signed long int) (min (var_1_12 , var_1_17))))) : (var_1_26 == ((signed long int) ((-32 + var_1_22) + var_1_14)))) : 1)) && (var_1_28 == ((unsigned short int) (var_1_29 - (var_1_13 + (abs (var_1_15))))))
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
