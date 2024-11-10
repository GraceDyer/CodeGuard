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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch21Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 4;
signed long int var_1_5 = 1000000000;
signed long int var_1_6 = 1000000000;
unsigned char var_1_9 = 5;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 10;
signed long int var_1_13 = -128;
signed short int var_1_14 = 32;
unsigned char var_1_15 = 0;
unsigned char var_1_17 = 1;
float var_1_18 = 10.55;
float var_1_19 = 49.875;
float var_1_20 = 49.8;
float var_1_21 = 100.6;
float var_1_22 = 3.2;
float var_1_23 = 127.6;
unsigned char var_1_24 = 1;
double var_1_25 = 63.25;
signed long int var_1_27 = 4;
signed short int var_1_28 = 0;
float var_1_29 = 500.3;
signed char var_1_30 = -5;
signed char var_1_31 = -32;
signed char var_1_32 = 16;
signed char var_1_33 = 5;
signed char var_1_34 = 50;
signed char var_1_35 = -25;
signed char var_1_36 = -25;
signed char var_1_37 = 2;
signed char var_1_38 = 4;
double var_1_39 = 999999999.625;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned short int var_1_42 = 64;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_14 = 32;
signed short int last_1_var_1_28 = 0;
signed char last_1_var_1_38 = 4;
unsigned char last_1_var_1_40 = 1;
unsigned short int last_1_var_1_42 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch21Amount100
	signed long int stepLocal_0 = last_1_var_1_38;
	if (stepLocal_0 > (min ((var_1_10 / var_1_11) , (var_1_12 * last_1_var_1_28)))) {
		var_1_14 = ((abs (var_1_11)) + (var_1_10 - var_1_12));
	}


	// From: Req8Batch21Amount100
	unsigned char stepLocal_2 = var_1_11;
	unsigned char stepLocal_1 = var_1_17;
	if (last_1_var_1_40) {
		if ((max (var_1_10 , last_1_var_1_28)) >= stepLocal_2) {
			var_1_25 = 128.8;
		}
	} else {
		if (stepLocal_1 && (last_1_var_1_42 <= last_1_var_1_14)) {
			var_1_25 = var_1_23;
		}
	}


	// From: Req13Batch21Amount100
	var_1_39 = var_1_22;


	// From: Req14Batch21Amount100
	var_1_40 = var_1_41;


	// From: Req15Batch21Amount100
	var_1_42 = var_1_11;


	// From: Req6Batch21Amount100
	if (var_1_39 < (var_1_19 - var_1_20)) {
		if (var_1_6 < var_1_10) {
			var_1_18 = (max (var_1_21 , (var_1_22 + var_1_23)));
		} else {
			var_1_18 = 3.5f;
		}
	} else {
		var_1_18 = var_1_21;
	}


	// From: Req11Batch21Amount100
	if (var_1_21 >= var_1_22) {
		if (var_1_40) {
			var_1_30 = (max (var_1_31 , (max (var_1_32 , var_1_33))));
		} else {
			var_1_30 = -32;
		}
	} else {
		var_1_30 = ((min ((min (var_1_34 , var_1_35)) , var_1_36)) + var_1_37);
	}


	// From: Req12Batch21Amount100
	if ((var_1_23 <= var_1_39) && (var_1_42 <= -128)) {
		var_1_38 = (max (var_1_34 , var_1_32));
	}


	// From: Req7Batch21Amount100
	if (var_1_42 <= -10) {
		if ((max (var_1_18 , var_1_21)) <= var_1_25) {
			var_1_24 = var_1_11;
		} else {
			var_1_24 = 1;
		}
	} else {
		var_1_24 = var_1_12;
	}


	// From: Req2Batch21Amount100
	if (var_1_5 >= var_1_24) {
		var_1_9 = ((var_1_10 + var_1_11) - var_1_12);
	} else {
		var_1_9 = var_1_12;
	}


	// From: Req3Batch21Amount100
	if (! (! (var_1_9 <= var_1_12))) {
		var_1_13 = var_1_9;
	}


	// From: Req1Batch21Amount100
	if ((min (var_1_18 , var_1_39)) > var_1_25) {
		var_1_1 = (((var_1_5 + var_1_6) - var_1_9) - var_1_9);
	} else {
		var_1_1 = var_1_9;
	}


	// From: Req9Batch21Amount100
	if (var_1_40) {
		var_1_27 = (min ((min (var_1_6 , var_1_12)) , var_1_24));
	} else {
		var_1_27 = (var_1_1 + (min (var_1_10 , var_1_6)));
	}


	// From: Req5Batch21Amount100
	if ((min ((var_1_12 - 50) , var_1_14)) != var_1_1) {
		if (var_1_40) {
			var_1_15 = var_1_17;
		}
	}


	// From: Req10Batch21Amount100
	unsigned char stepLocal_3 = var_1_17 || var_1_15;
	if (var_1_25 > var_1_22) {
		if (var_1_23 == (- (var_1_39 / var_1_29))) {
			if ((var_1_24 <= 16) && stepLocal_3) {
				var_1_28 = var_1_30;
			}
		}
	} else {
		var_1_28 = var_1_42;
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 536870911);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 536870911);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 64);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	assume_abort_if_not(var_1_29 != 0.0F);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -63);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -63);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -63);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
}



void updateLastVariables() {
	last_1_var_1_14 = var_1_14;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_42 = var_1_42;
}

int property() {
	return ((((((((((((((((min (var_1_18 , var_1_39)) > var_1_25) ? (var_1_1 == ((signed long int) (((var_1_5 + var_1_6) - var_1_9) - var_1_9))) : (var_1_1 == ((signed long int) var_1_9))) && ((var_1_5 >= var_1_24) ? (var_1_9 == ((unsigned char) ((var_1_10 + var_1_11) - var_1_12))) : (var_1_9 == ((unsigned char) var_1_12)))) && ((! (! (var_1_9 <= var_1_12))) ? (var_1_13 == ((signed long int) var_1_9)) : 1)) && ((last_1_var_1_38 > (min ((var_1_10 / var_1_11) , (var_1_12 * last_1_var_1_28)))) ? (var_1_14 == ((signed short int) ((abs (var_1_11)) + (var_1_10 - var_1_12)))) : 1)) && (((min ((var_1_12 - 50) , var_1_14)) != var_1_1) ? (var_1_40 ? (var_1_15 == ((unsigned char) var_1_17)) : 1) : 1)) && ((var_1_39 < (var_1_19 - var_1_20)) ? ((var_1_6 < var_1_10) ? (var_1_18 == ((float) (max (var_1_21 , (var_1_22 + var_1_23))))) : (var_1_18 == ((float) 3.5f))) : (var_1_18 == ((float) var_1_21)))) && ((var_1_42 <= -10) ? (((max (var_1_18 , var_1_21)) <= var_1_25) ? (var_1_24 == ((unsigned char) var_1_11)) : (var_1_24 == ((unsigned char) 1))) : (var_1_24 == ((unsigned char) var_1_12)))) && (last_1_var_1_40 ? (((max (var_1_10 , last_1_var_1_28)) >= var_1_11) ? (var_1_25 == ((double) 128.8)) : 1) : ((var_1_17 && (last_1_var_1_42 <= last_1_var_1_14)) ? (var_1_25 == ((double) var_1_23)) : 1))) && (var_1_40 ? (var_1_27 == ((signed long int) (min ((min (var_1_6 , var_1_12)) , var_1_24)))) : (var_1_27 == ((signed long int) (var_1_1 + (min (var_1_10 , var_1_6))))))) && ((var_1_25 > var_1_22) ? ((var_1_23 == (- (var_1_39 / var_1_29))) ? (((var_1_24 <= 16) && (var_1_17 || var_1_15)) ? (var_1_28 == ((signed short int) var_1_30)) : 1) : 1) : (var_1_28 == ((signed short int) var_1_42)))) && ((var_1_21 >= var_1_22) ? (var_1_40 ? (var_1_30 == ((signed char) (max (var_1_31 , (max (var_1_32 , var_1_33)))))) : (var_1_30 == ((signed char) -32))) : (var_1_30 == ((signed char) ((min ((min (var_1_34 , var_1_35)) , var_1_36)) + var_1_37))))) && (((var_1_23 <= var_1_39) && (var_1_42 <= -128)) ? (var_1_38 == ((signed char) (max (var_1_34 , var_1_32)))) : 1)) && (var_1_39 == ((double) var_1_22))) && (var_1_40 == ((unsigned char) var_1_41))) && (var_1_42 == ((unsigned short int) var_1_11))
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
