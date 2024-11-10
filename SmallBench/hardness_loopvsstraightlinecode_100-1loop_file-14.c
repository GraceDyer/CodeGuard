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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch14100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 16;
unsigned long int var_1_4 = 4042214920;
signed char var_1_6 = -50;
signed char var_1_8 = -4;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed long int var_1_13 = 128;
signed char var_1_14 = -32;
signed char var_1_15 = 0;
signed long int var_1_16 = 128;
unsigned short int var_1_17 = 4;
unsigned char var_1_20 = 64;
unsigned char var_1_22 = 16;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 128;
signed char var_1_29 = 64;
signed char var_1_30 = 64;
double var_1_31 = 63.75;
unsigned long int var_1_32 = 5;
double var_1_33 = 8.6;
double var_1_34 = 2.25;
unsigned long int var_1_35 = 2195589809;
signed long int var_1_36 = -256;
double var_1_37 = 0.88;
float var_1_38 = -0.2;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 16;
unsigned char last_1_var_1_9 = 0;
unsigned char last_1_var_1_20 = 64;
unsigned char last_1_var_1_27 = 128;
double last_1_var_1_31 = 63.75;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch14100_1loop
	unsigned char stepLocal_0 = last_1_var_1_9;
	if ((last_1_var_1_20 > last_1_var_1_1) || stepLocal_0) {
		var_1_6 = var_1_8;
	} else {
		var_1_6 = var_1_8;
	}


	// From: Req7Batch14100_1loop
	if ((max (last_1_var_1_31 , last_1_var_1_31)) < 1.85) {
		var_1_20 = ((var_1_22 + var_1_23) + var_1_15);
	}


	// From: Req9Batch14100_1loop
	if ((min ((var_1_4 / var_1_13) , last_1_var_1_27)) < (min (var_1_22 , 500u))) {
		var_1_27 = (var_1_28 - (min (var_1_15 , var_1_23)));
	}


	// From: Req10Batch14100_1loop
	if (var_1_8 >= -16) {
		var_1_29 = (var_1_22 - (var_1_30 - var_1_23));
	} else {
		var_1_29 = (min (var_1_23 , var_1_15));
	}


	// From: Req12Batch14100_1loop
	var_1_36 = var_1_32;


	// From: Req13Batch14100_1loop
	var_1_37 = var_1_34;


	// From: Req14Batch14100_1loop
	var_1_38 = var_1_33;


	// From: Req1Batch14100_1loop
	if (var_1_36 >= var_1_36) {
		var_1_1 = (var_1_4 - var_1_20);
	} else {
		if ((var_1_36 / 5) <= -64) {
			var_1_1 = var_1_4;
		} else {
			var_1_1 = var_1_4;
		}
	}


	// From: Req4Batch14100_1loop
	if (var_1_4 < var_1_1) {
		if (var_1_4 >= var_1_6) {
			var_1_14 = (2 - var_1_15);
		} else {
			var_1_14 = var_1_8;
		}
	} else {
		var_1_14 = var_1_15;
	}


	// From: Req3Batch14100_1loop
	signed char stepLocal_2 = var_1_14;
	unsigned char stepLocal_1 = var_1_20;
	if ((2 << 1u) > stepLocal_1) {
		var_1_9 = (var_1_10 || (var_1_11 || var_1_12));
	} else {
		if (stepLocal_2 <= ((5 - var_1_27) ^ (var_1_20 / var_1_13))) {
			var_1_9 = var_1_10;
		} else {
			var_1_9 = 1;
		}
	}


	// From: Req5Batch14100_1loop
	if (var_1_29 != (var_1_13 / -16)) {
		if (var_1_1 > (256u * var_1_14)) {
			var_1_16 = var_1_6;
		} else {
			var_1_16 = var_1_29;
		}
	}


	// From: Req6Batch14100_1loop
	unsigned char stepLocal_3 = var_1_11;
	if (stepLocal_3 || (var_1_16 < var_1_20)) {
		if (var_1_38 < (abs (- var_1_38))) {
			var_1_17 = var_1_15;
		} else {
			if (var_1_12) {
				var_1_17 = var_1_15;
			}
		}
	} else {
		var_1_17 = 8;
	}


	// From: Req11Batch14100_1loop
	signed long int stepLocal_6 = 256 << (abs (var_1_32));
	unsigned long int stepLocal_5 = var_1_35 - (var_1_17 + var_1_15);
	if ((var_1_13 & var_1_8) > stepLocal_6) {
		var_1_31 = (var_1_33 - var_1_34);
	} else {
		if (var_1_4 <= stepLocal_5) {
			var_1_31 = (var_1_33 - var_1_34);
		}
	}


	// From: Req8Batch14100_1loop
	unsigned char stepLocal_4 = var_1_27;
	if (((abs (var_1_4)) + (64 * var_1_16)) == stepLocal_4) {
		var_1_24 = (var_1_12 || var_1_26);
	} else {
		var_1_24 = (var_1_12 || var_1_11);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 2147483647);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -2147483648);
	assume_abort_if_not(var_1_13 <= 2147483647);
	assume_abort_if_not(var_1_13 != 0);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 64);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 127);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 63);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 23);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854765600e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967295);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_31 = var_1_31;
}

int property() {
	return ((((((((((((((var_1_36 >= var_1_36) ? (var_1_1 == ((unsigned long int) (var_1_4 - var_1_20))) : (((var_1_36 / 5) <= -64) ? (var_1_1 == ((unsigned long int) var_1_4)) : (var_1_1 == ((unsigned long int) var_1_4)))) && (((last_1_var_1_20 > last_1_var_1_1) || last_1_var_1_9) ? (var_1_6 == ((signed char) var_1_8)) : (var_1_6 == ((signed char) var_1_8)))) && (((2 << 1u) > var_1_20) ? (var_1_9 == ((unsigned char) (var_1_10 || (var_1_11 || var_1_12)))) : ((var_1_14 <= ((5 - var_1_27) ^ (var_1_20 / var_1_13))) ? (var_1_9 == ((unsigned char) var_1_10)) : (var_1_9 == ((unsigned char) 1))))) && ((var_1_4 < var_1_1) ? ((var_1_4 >= var_1_6) ? (var_1_14 == ((signed char) (2 - var_1_15))) : (var_1_14 == ((signed char) var_1_8))) : (var_1_14 == ((signed char) var_1_15)))) && ((var_1_29 != (var_1_13 / -16)) ? ((var_1_1 > (256u * var_1_14)) ? (var_1_16 == ((signed long int) var_1_6)) : (var_1_16 == ((signed long int) var_1_29))) : 1)) && ((var_1_11 || (var_1_16 < var_1_20)) ? ((var_1_38 < (abs (- var_1_38))) ? (var_1_17 == ((unsigned short int) var_1_15)) : (var_1_12 ? (var_1_17 == ((unsigned short int) var_1_15)) : 1)) : (var_1_17 == ((unsigned short int) 8)))) && (((max (last_1_var_1_31 , last_1_var_1_31)) < 1.85) ? (var_1_20 == ((unsigned char) ((var_1_22 + var_1_23) + var_1_15))) : 1)) && ((((abs (var_1_4)) + (64 * var_1_16)) == var_1_27) ? (var_1_24 == ((unsigned char) (var_1_12 || var_1_26))) : (var_1_24 == ((unsigned char) (var_1_12 || var_1_11))))) && (((min ((var_1_4 / var_1_13) , last_1_var_1_27)) < (min (var_1_22 , 500u))) ? (var_1_27 == ((unsigned char) (var_1_28 - (min (var_1_15 , var_1_23))))) : 1)) && ((var_1_8 >= -16) ? (var_1_29 == ((signed char) (var_1_22 - (var_1_30 - var_1_23)))) : (var_1_29 == ((signed char) (min (var_1_23 , var_1_15)))))) && (((var_1_13 & var_1_8) > (256 << (abs (var_1_32)))) ? (var_1_31 == ((double) (var_1_33 - var_1_34))) : ((var_1_4 <= (var_1_35 - (var_1_17 + var_1_15))) ? (var_1_31 == ((double) (var_1_33 - var_1_34))) : 1))) && (var_1_36 == ((signed long int) var_1_32))) && (var_1_37 == ((double) var_1_34))) && (var_1_38 == ((float) var_1_33))
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
