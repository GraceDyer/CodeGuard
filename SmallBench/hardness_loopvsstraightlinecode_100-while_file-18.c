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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch18100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 1000000;
double var_1_6 = 49.7;
double var_1_7 = 16.5;
unsigned char var_1_8 = 128;
unsigned char var_1_10 = 2;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 2;
unsigned char var_1_13 = 128;
signed char var_1_14 = 64;
signed char var_1_16 = 10;
signed long int var_1_17 = -128;
signed char var_1_18 = 16;
unsigned long int var_1_20 = 16;
float var_1_21 = 31.5;
double var_1_22 = 5.4;
float var_1_24 = 32.22;
double var_1_25 = 5.9;
double var_1_26 = 0.0;
double var_1_27 = 0.15;
double var_1_28 = 2.5;
double var_1_29 = 255.5;
unsigned long int var_1_30 = 5;
unsigned char var_1_31 = 128;
double var_1_32 = 128.875;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
signed long int var_1_38 = -50;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 128;
signed char last_1_var_1_18 = 16;
float last_1_var_1_21 = 31.5;
unsigned long int last_1_var_1_30 = 5;
signed long int last_1_var_1_38 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch18100_while
	var_1_30 = (max (last_1_var_1_18 , (var_1_12 + (1781986326u - var_1_16))));


	// From: Req4Batch18100_while
	unsigned long int stepLocal_1 = abs (var_1_30);
	if (var_1_12 <= stepLocal_1) {
		var_1_14 = (var_1_12 + (-8 + (2 - var_1_16)));
	}


	// From: Req11Batch18100_while
	if (last_1_var_1_8 >= (last_1_var_1_30 / 32u)) {
		var_1_31 = (var_1_13 - var_1_12);
	} else {
		if (var_1_27 < (var_1_22 / var_1_32)) {
			var_1_31 = ((100 + var_1_33) - var_1_16);
		} else {
			var_1_31 = var_1_16;
		}
	}


	// From: Req13Batch18100_while
	var_1_38 = var_1_31;


	// From: Req12Batch18100_while
	signed long int stepLocal_4 = last_1_var_1_38;
	signed long int stepLocal_3 = min (var_1_10 , (var_1_12 + var_1_11));
	if (last_1_var_1_21 <= (max (var_1_22 , var_1_7))) {
		var_1_34 = (var_1_35 && var_1_36);
	} else {
		if (last_1_var_1_38 <= stepLocal_3) {
			if (var_1_10 <= stepLocal_4) {
				var_1_34 = 0;
			} else {
				var_1_34 = ((var_1_28 != (max (var_1_7 , last_1_var_1_21))) && (! (var_1_35 || var_1_36)));
			}
		} else {
			var_1_34 = var_1_37;
		}
	}


	// From: Req9Batch18100_while
	if ((max (var_1_14 , 256)) >= var_1_10) {
		var_1_25 = (abs (var_1_7));
	} else {
		if (var_1_34) {
			var_1_25 = (var_1_24 - 255.6);
		} else {
			var_1_25 = (var_1_26 + ((var_1_27 + var_1_28) + var_1_29));
		}
	}


	// From: Req8Batch18100_while
	if (var_1_25 <= ((var_1_7 / var_1_22) + var_1_25)) {
		var_1_21 = ((min (9.8f , 24.8f)) - var_1_24);
	} else {
		var_1_21 = var_1_24;
	}


	// From: Req2Batch18100_while
	if (var_1_34) {
		var_1_6 = var_1_7;
	}


	// From: Req7Batch18100_while
	if (var_1_34 || var_1_34) {
		var_1_20 = (var_1_16 + (var_1_12 + var_1_31));
	}


	// From: Req3Batch18100_while
	unsigned char stepLocal_0 = (var_1_20 >= var_1_31) || var_1_34;
	if (var_1_34 || stepLocal_0) {
		var_1_8 = 10;
	} else {
		if (var_1_34) {
			var_1_8 = (var_1_10 + (var_1_11 - var_1_12));
		} else {
			var_1_8 = (var_1_13 - var_1_10);
		}
	}


	// From: Req5Batch18100_while
	if ((var_1_38 >= var_1_16) || (var_1_11 < 4)) {
		var_1_17 = (var_1_13 + 256);
	} else {
		var_1_17 = var_1_20;
	}


	// From: Req1Batch18100_while
	if (var_1_34) {
		if (! (var_1_31 != var_1_20)) {
			var_1_1 = var_1_8;
		} else {
			var_1_1 = var_1_8;
		}
	} else {
		var_1_1 = var_1_8;
	}


	// From: Req6Batch18100_while
	unsigned char stepLocal_2 = var_1_17 < var_1_14;
	if (var_1_34 && stepLocal_2) {
		var_1_18 = (var_1_12 - var_1_16);
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854765600e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 127);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 31);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	assume_abort_if_not(var_1_22 != 0.0F);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -461168.6018427382800e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -115292.1504606845700e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 1152921.504606845700e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -115292.1504606845700e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 1152921.504606845700e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -230584.3009213691390e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691390e+12F && var_1_29 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	assume_abort_if_not(var_1_32 != 0.0F);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 64);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_38 = var_1_38;
}

int property() {
	return ((((((((((((var_1_34 ? ((! (var_1_31 != var_1_20)) ? (var_1_1 == ((unsigned long int) var_1_8)) : (var_1_1 == ((unsigned long int) var_1_8))) : (var_1_1 == ((unsigned long int) var_1_8))) && (var_1_34 ? (var_1_6 == ((double) var_1_7)) : 1)) && ((var_1_34 || ((var_1_20 >= var_1_31) || var_1_34)) ? (var_1_8 == ((unsigned char) 10)) : (var_1_34 ? (var_1_8 == ((unsigned char) (var_1_10 + (var_1_11 - var_1_12)))) : (var_1_8 == ((unsigned char) (var_1_13 - var_1_10)))))) && ((var_1_12 <= (abs (var_1_30))) ? (var_1_14 == ((signed char) (var_1_12 + (-8 + (2 - var_1_16))))) : 1)) && (((var_1_38 >= var_1_16) || (var_1_11 < 4)) ? (var_1_17 == ((signed long int) (var_1_13 + 256))) : (var_1_17 == ((signed long int) var_1_20)))) && ((var_1_34 && (var_1_17 < var_1_14)) ? (var_1_18 == ((signed char) (var_1_12 - var_1_16))) : 1)) && ((var_1_34 || var_1_34) ? (var_1_20 == ((unsigned long int) (var_1_16 + (var_1_12 + var_1_31)))) : 1)) && ((var_1_25 <= ((var_1_7 / var_1_22) + var_1_25)) ? (var_1_21 == ((float) ((min (9.8f , 24.8f)) - var_1_24))) : (var_1_21 == ((float) var_1_24)))) && (((max (var_1_14 , 256)) >= var_1_10) ? (var_1_25 == ((double) (abs (var_1_7)))) : (var_1_34 ? (var_1_25 == ((double) (var_1_24 - 255.6))) : (var_1_25 == ((double) (var_1_26 + ((var_1_27 + var_1_28) + var_1_29))))))) && (var_1_30 == ((unsigned long int) (max (last_1_var_1_18 , (var_1_12 + (1781986326u - var_1_16))))))) && ((last_1_var_1_8 >= (last_1_var_1_30 / 32u)) ? (var_1_31 == ((unsigned char) (var_1_13 - var_1_12))) : ((var_1_27 < (var_1_22 / var_1_32)) ? (var_1_31 == ((unsigned char) ((100 + var_1_33) - var_1_16))) : (var_1_31 == ((unsigned char) var_1_16))))) && ((last_1_var_1_21 <= (max (var_1_22 , var_1_7))) ? (var_1_34 == ((unsigned char) (var_1_35 && var_1_36))) : ((last_1_var_1_38 <= (min (var_1_10 , (var_1_12 + var_1_11)))) ? ((var_1_10 <= last_1_var_1_38) ? (var_1_34 == ((unsigned char) 0)) : (var_1_34 == ((unsigned char) ((var_1_28 != (max (var_1_7 , last_1_var_1_21))) && (! (var_1_35 || var_1_36)))))) : (var_1_34 == ((unsigned char) var_1_37))))) && (var_1_38 == ((signed long int) var_1_31))
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
