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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch89Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 128;
unsigned long int var_1_5 = 2082256544;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 2478717280;
signed short int var_1_8 = 256;
unsigned char var_1_11 = 100;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 100;
unsigned char var_1_14 = 16;
double var_1_15 = -0.5;
double var_1_16 = 99.6;
double var_1_17 = 10.75;
double var_1_18 = 5.5;
signed short int var_1_19 = 128;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 2;
unsigned char var_1_22 = 128;
unsigned short int var_1_23 = 256;
unsigned short int var_1_24 = 37558;
unsigned long int var_1_25 = 10000;
double var_1_27 = 4.2;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 25;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 8;
unsigned char var_1_38 = 10;
unsigned long int var_1_39 = 1000000;
signed long int var_1_40 = 32;
unsigned short int var_1_41 = 0;
unsigned long int var_1_42 = 100;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 128;
signed short int last_1_var_1_8 = 256;
unsigned long int last_1_var_1_25 = 10000;
unsigned char last_1_var_1_35 = 25;
unsigned long int last_1_var_1_39 = 1000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch89Amount100
	if ((last_1_var_1_35 / (max (var_1_12 , var_1_13))) == (last_1_var_1_1 * (last_1_var_1_39 * var_1_5))) {
		var_1_11 = (min (var_1_14 , 10));
	}


	// From: Req5Batch89Amount100
	var_1_15 = (var_1_16 - (max ((abs (var_1_17)) , var_1_18)));


	// From: Req10Batch89Amount100
	var_1_29 = (! var_1_30);


	// From: Req11Batch89Amount100
	if (var_1_29) {
		var_1_31 = (! var_1_30);
	} else {
		var_1_31 = (var_1_32 || (var_1_33 || var_1_34));
	}


	// From: Req13Batch89Amount100
	var_1_39 = (4u + 10u);


	// From: Req15Batch89Amount100
	var_1_41 = var_1_12;


	// From: Req16Batch89Amount100
	var_1_42 = var_1_7;


	// From: Req7Batch89Amount100
	unsigned char stepLocal_5 = var_1_17 > var_1_18;
	unsigned long int stepLocal_4 = var_1_42;
	if (var_1_18 < var_1_15) {
		if (stepLocal_4 >= 200) {
			var_1_21 = (min (25 , var_1_14));
		} else {
			if (var_1_31 || stepLocal_5) {
				var_1_21 = (abs (var_1_22 - 1));
			} else {
				var_1_21 = var_1_22;
			}
		}
	}


	// From: Req9Batch89Amount100
	unsigned long int stepLocal_6 = var_1_7;
	if (stepLocal_6 < var_1_41) {
		var_1_25 = (min (last_1_var_1_25 , var_1_22));
	} else {
		if ((var_1_17 / var_1_27) <= var_1_15) {
			var_1_25 = var_1_42;
		} else {
			var_1_25 = 10000000u;
		}
	}


	// From: Req1Batch89Amount100
	unsigned long int stepLocal_0 = var_1_39;
	if (stepLocal_0 != var_1_21) {
		if (var_1_29) {
			var_1_1 = ((var_1_5 + 1668503833u) - (50u + 256u));
		}
	}


	// From: Req3Batch89Amount100
	if (var_1_29 && var_1_31) {
		if (var_1_5 < var_1_7) {
			if (var_1_41 <= (5u ^ last_1_var_1_8)) {
				var_1_8 = var_1_21;
			} else {
				var_1_8 = var_1_21;
			}
		} else {
			var_1_8 = var_1_21;
		}
	} else {
		var_1_8 = var_1_21;
	}


	// From: Req8Batch89Amount100
	if (! var_1_29) {
		var_1_23 = (var_1_24 - var_1_1);
	}


	// From: Req12Batch89Amount100
	signed long int stepLocal_8 = min (var_1_11 , 8);
	signed long int stepLocal_7 = 64;
	if (var_1_21 > stepLocal_7) {
		if (var_1_8 < stepLocal_8) {
			var_1_35 = (var_1_36 + (max (var_1_37 , var_1_38)));
		} else {
			var_1_35 = (max ((min ((var_1_22 - var_1_38) , var_1_14)) , var_1_37));
		}
	}


	// From: Req2Batch89Amount100
	unsigned long int stepLocal_2 = var_1_5;
	unsigned char stepLocal_1 = var_1_31;
	if (var_1_23 > stepLocal_2) {
		if ((var_1_5 < var_1_23) || stepLocal_1) {
			var_1_6 = (var_1_7 - var_1_5);
		}
	}


	// From: Req6Batch89Amount100
	unsigned long int stepLocal_3 = var_1_5 - (var_1_12 + var_1_14);
	if (stepLocal_3 == (var_1_7 / (max (var_1_13 , var_1_20)))) {
		var_1_19 = (((max (var_1_35 , 4)) - var_1_13) + var_1_12);
	} else {
		var_1_19 = var_1_14;
	}


	// From: Req14Batch89Amount100
	var_1_40 = (min (var_1_37 , var_1_35));
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 1073741823);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 2147483647);
	assume_abort_if_not(var_1_7 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 255);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 255);
	assume_abort_if_not(var_1_13 != 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 4294967295);
	assume_abort_if_not(var_1_20 != 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 127);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 32767);
	assume_abort_if_not(var_1_24 <= 65534);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	assume_abort_if_not(var_1_27 != 0.0F);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_39 = var_1_39;
}

int property() {
	return ((((((((((((((((var_1_39 != var_1_21) ? (var_1_29 ? (var_1_1 == ((unsigned long int) ((var_1_5 + 1668503833u) - (50u + 256u)))) : 1) : 1) && ((var_1_23 > var_1_5) ? (((var_1_5 < var_1_23) || var_1_31) ? (var_1_6 == ((unsigned long int) (var_1_7 - var_1_5))) : 1) : 1)) && ((var_1_29 && var_1_31) ? ((var_1_5 < var_1_7) ? ((var_1_41 <= (5u ^ last_1_var_1_8)) ? (var_1_8 == ((signed short int) var_1_21)) : (var_1_8 == ((signed short int) var_1_21))) : (var_1_8 == ((signed short int) var_1_21))) : (var_1_8 == ((signed short int) var_1_21)))) && (((last_1_var_1_35 / (max (var_1_12 , var_1_13))) == (last_1_var_1_1 * (last_1_var_1_39 * var_1_5))) ? (var_1_11 == ((unsigned char) (min (var_1_14 , 10)))) : 1)) && (var_1_15 == ((double) (var_1_16 - (max ((abs (var_1_17)) , var_1_18)))))) && (((var_1_5 - (var_1_12 + var_1_14)) == (var_1_7 / (max (var_1_13 , var_1_20)))) ? (var_1_19 == ((signed short int) (((max (var_1_35 , 4)) - var_1_13) + var_1_12))) : (var_1_19 == ((signed short int) var_1_14)))) && ((var_1_18 < var_1_15) ? ((var_1_42 >= 200) ? (var_1_21 == ((unsigned char) (min (25 , var_1_14)))) : ((var_1_31 || (var_1_17 > var_1_18)) ? (var_1_21 == ((unsigned char) (abs (var_1_22 - 1)))) : (var_1_21 == ((unsigned char) var_1_22)))) : 1)) && ((! var_1_29) ? (var_1_23 == ((unsigned short int) (var_1_24 - var_1_1))) : 1)) && ((var_1_7 < var_1_41) ? (var_1_25 == ((unsigned long int) (min (last_1_var_1_25 , var_1_22)))) : (((var_1_17 / var_1_27) <= var_1_15) ? (var_1_25 == ((unsigned long int) var_1_42)) : (var_1_25 == ((unsigned long int) 10000000u))))) && (var_1_29 == ((unsigned char) (! var_1_30)))) && (var_1_29 ? (var_1_31 == ((unsigned char) (! var_1_30))) : (var_1_31 == ((unsigned char) (var_1_32 || (var_1_33 || var_1_34)))))) && ((var_1_21 > 64) ? ((var_1_8 < (min (var_1_11 , 8))) ? (var_1_35 == ((unsigned char) (var_1_36 + (max (var_1_37 , var_1_38))))) : (var_1_35 == ((unsigned char) (max ((min ((var_1_22 - var_1_38) , var_1_14)) , var_1_37))))) : 1)) && (var_1_39 == ((unsigned long int) (4u + 10u)))) && (var_1_40 == ((signed long int) (min (var_1_37 , var_1_35))))) && (var_1_41 == ((unsigned short int) var_1_12))) && (var_1_42 == ((unsigned long int) var_1_7))
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
