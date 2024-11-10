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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = -8;
signed short int var_1_9 = -8;
unsigned char var_1_11 = 0;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 128;
unsigned char var_1_15 = 16;
signed long int var_1_16 = -10;
unsigned short int var_1_17 = 5;
double var_1_18 = 4.75;
double var_1_19 = 31.25;
unsigned char var_1_20 = 64;
double var_1_21 = 999999999.2;
double var_1_22 = 3.4;
unsigned char var_1_23 = 1;
signed short int var_1_24 = 16;
unsigned char var_1_25 = 2;
float var_1_27 = 4.25;
unsigned short int var_1_29 = 256;
unsigned long int var_1_30 = 0;
unsigned long int var_1_31 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 0;
unsigned short int last_1_var_1_17 = 5;
unsigned char last_1_var_1_20 = 64;
signed short int last_1_var_1_24 = 16;
unsigned char last_1_var_1_25 = 2;
float last_1_var_1_27 = 4.25;
unsigned short int last_1_var_1_29 = 256;
unsigned long int last_1_var_1_30 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch92Amount100
	if (last_1_var_1_25 > var_1_9) {
		if (var_1_8 != last_1_var_1_20) {
			var_1_13 = (var_1_14 - var_1_15);
		}
	}


	// From: Req6Batch92Amount100
	if ((5.1 - (var_1_21 + var_1_22)) == ((var_1_18 - var_1_19) + 4.5)) {
		if ((var_1_13 - var_1_13) != var_1_14) {
			var_1_20 = ((max (var_1_15 , 5)) + var_1_23);
		}
	}


	// From: Req10Batch92Amount100
	signed long int stepLocal_6 = last_1_var_1_25;
	if (stepLocal_6 != (var_1_23 << last_1_var_1_17)) {
		var_1_29 = (last_1_var_1_25 + (max (var_1_14 , last_1_var_1_17)));
	} else {
		if (! var_1_6) {
			var_1_29 = (last_1_var_1_24 + last_1_var_1_25);
		} else {
			if ((- var_1_21) <= last_1_var_1_27) {
				var_1_29 = 256;
			} else {
				var_1_29 = last_1_var_1_25;
			}
		}
	}


	// From: Req1Batch92Amount100
	if (last_1_var_1_7) {
		if (last_1_var_1_29 > last_1_var_1_25) {
			var_1_1 = (! (! (var_1_5 || var_1_6)));
		}
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req9Batch92Amount100
	unsigned char stepLocal_5 = var_1_13;
	if (stepLocal_5 <= (var_1_15 % (min (var_1_9 , 5)))) {
		if (var_1_1) {
			var_1_27 = 15.4f;
		} else {
			var_1_27 = var_1_21;
		}
	} else {
		var_1_27 = var_1_22;
	}


	// From: Req8Batch92Amount100
	if (last_1_var_1_17 != var_1_23) {
		var_1_25 = (64 + var_1_15);
	}


	// From: Req4Batch92Amount100
	var_1_16 = (var_1_20 + var_1_25);


	// From: Req12Batch92Amount100
	var_1_31 = var_1_14;


	// From: Req2Batch92Amount100
	unsigned long int stepLocal_2 = var_1_31;
	unsigned char stepLocal_1 = var_1_1;
	signed short int stepLocal_0 = var_1_9;
	if (stepLocal_2 > (-64 / (max (var_1_8 , var_1_9)))) {
		if (stepLocal_1 && var_1_1) {
			var_1_7 = (! var_1_11);
		}
	} else {
		if (stepLocal_0 >= ((32 + 10) - var_1_13)) {
			var_1_7 = var_1_5;
		} else {
			var_1_7 = var_1_6;
		}
	}


	// From: Req7Batch92Amount100
	if (var_1_15 <= (1 % var_1_8)) {
		if ((min (var_1_20 , (var_1_8 & var_1_15))) == var_1_23) {
			var_1_24 = var_1_25;
		} else {
			var_1_24 = var_1_15;
		}
	} else {
		var_1_24 = var_1_31;
	}


	// From: Req5Batch92Amount100
	signed long int stepLocal_4 = (var_1_29 * -2) + var_1_8;
	unsigned char stepLocal_3 = var_1_6;
	if ((var_1_20 >> var_1_20) <= stepLocal_4) {
		if (var_1_7 && stepLocal_3) {
			if ((var_1_18 - var_1_19) >= 15.76) {
				var_1_17 = var_1_20;
			} else {
				var_1_17 = 8;
			}
		}
	} else {
		var_1_17 = var_1_14;
	}


	// From: Req11Batch92Amount100
	signed short int stepLocal_8 = var_1_8;
	signed long int stepLocal_7 = var_1_23 | var_1_29;
	if (var_1_29 == stepLocal_8) {
		if (last_1_var_1_30 <= stepLocal_7) {
			var_1_30 = (var_1_20 + var_1_17);
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32768);
	assume_abort_if_not(var_1_8 <= 32767);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32768);
	assume_abort_if_not(var_1_9 <= 32767);
	assume_abort_if_not(var_1_9 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 127);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427387900e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427387900e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_30 = var_1_30;
}

int property() {
	return (((((((((((last_1_var_1_7 ? ((last_1_var_1_29 > last_1_var_1_25) ? (var_1_1 == ((unsigned char) (! (! (var_1_5 || var_1_6))))) : 1) : (var_1_1 == ((unsigned char) var_1_6))) && ((var_1_31 > (-64 / (max (var_1_8 , var_1_9)))) ? ((var_1_1 && var_1_1) ? (var_1_7 == ((unsigned char) (! var_1_11))) : 1) : ((var_1_9 >= ((32 + 10) - var_1_13)) ? (var_1_7 == ((unsigned char) var_1_5)) : (var_1_7 == ((unsigned char) var_1_6))))) && ((last_1_var_1_25 > var_1_9) ? ((var_1_8 != last_1_var_1_20) ? (var_1_13 == ((unsigned char) (var_1_14 - var_1_15))) : 1) : 1)) && (var_1_16 == ((signed long int) (var_1_20 + var_1_25)))) && (((var_1_20 >> var_1_20) <= ((var_1_29 * -2) + var_1_8)) ? ((var_1_7 && var_1_6) ? (((var_1_18 - var_1_19) >= 15.76) ? (var_1_17 == ((unsigned short int) var_1_20)) : (var_1_17 == ((unsigned short int) 8))) : 1) : (var_1_17 == ((unsigned short int) var_1_14)))) && (((5.1 - (var_1_21 + var_1_22)) == ((var_1_18 - var_1_19) + 4.5)) ? (((var_1_13 - var_1_13) != var_1_14) ? (var_1_20 == ((unsigned char) ((max (var_1_15 , 5)) + var_1_23))) : 1) : 1)) && ((var_1_15 <= (1 % var_1_8)) ? (((min (var_1_20 , (var_1_8 & var_1_15))) == var_1_23) ? (var_1_24 == ((signed short int) var_1_25)) : (var_1_24 == ((signed short int) var_1_15))) : (var_1_24 == ((signed short int) var_1_31)))) && ((last_1_var_1_17 != var_1_23) ? (var_1_25 == ((unsigned char) (64 + var_1_15))) : 1)) && ((var_1_13 <= (var_1_15 % (min (var_1_9 , 5)))) ? (var_1_1 ? (var_1_27 == ((float) 15.4f)) : (var_1_27 == ((float) var_1_21))) : (var_1_27 == ((float) var_1_22)))) && ((last_1_var_1_25 != (var_1_23 << last_1_var_1_17)) ? (var_1_29 == ((unsigned short int) (last_1_var_1_25 + (max (var_1_14 , last_1_var_1_17))))) : ((! var_1_6) ? (var_1_29 == ((unsigned short int) (last_1_var_1_24 + last_1_var_1_25))) : (((- var_1_21) <= last_1_var_1_27) ? (var_1_29 == ((unsigned short int) 256)) : (var_1_29 == ((unsigned short int) last_1_var_1_25)))))) && ((var_1_29 == var_1_8) ? ((last_1_var_1_30 <= (var_1_23 | var_1_29)) ? (var_1_30 == ((unsigned long int) (var_1_20 + var_1_17))) : 1) : 1)) && (var_1_31 == ((unsigned long int) var_1_14))
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
