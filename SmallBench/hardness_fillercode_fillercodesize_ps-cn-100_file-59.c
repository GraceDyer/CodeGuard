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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch59PS_CN_100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 1;
unsigned char var_1_4 = 25;
unsigned short int var_1_5 = 0;
unsigned short int var_1_6 = 62100;
unsigned short int var_1_7 = 27651;
double var_1_8 = 128.9;
double var_1_10 = 16.5;
double var_1_11 = 25.5;
double var_1_12 = 199.75;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 1;
unsigned short int var_1_17 = 32;
unsigned char var_1_18 = 1;
unsigned long int var_1_19 = 1;
unsigned short int var_1_20 = 25;
signed long int var_1_21 = -10;
unsigned long int var_1_22 = 16;
signed long int var_1_23 = -1;
unsigned short int var_1_24 = 2;
unsigned short int var_1_25 = 64;
unsigned short int var_1_26 = 25;
unsigned short int var_1_27 = 40704;
signed char var_1_28 = 16;
unsigned char var_1_29 = 1;
signed char var_1_30 = -32;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
double var_1_34 = 31.55;
double var_1_35 = 199.875;
double var_1_36 = 5.5;
signed short int var_1_37 = 50;
unsigned short int var_1_38 = 32;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
double var_1_42 = 255.25;
double var_1_43 = 49.625;
signed long int var_1_44 = -200;
unsigned char var_1_45 = 5;
unsigned char var_1_46 = 128;
unsigned char var_1_47 = 10;
unsigned char var_1_48 = 2;
signed short int var_1_49 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_5 = 0;
unsigned char last_1_var_1_15 = 1;
unsigned char last_1_var_1_18 = 1;
unsigned long int last_1_var_1_19 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_21 >> (var_1_22 - 16u)) < (max (8 , var_1_23))) {
		var_1_20 = (max ((var_1_22 + (min (var_1_24 , var_1_25))) , var_1_26));
	} else {
		if (var_1_24 < ((abs (var_1_26)) & var_1_25)) {
			var_1_20 = (min ((abs (var_1_27 - var_1_25)) , var_1_26));
		}
	}


	// From: CodeObject2
	if (var_1_29 || (var_1_27 <= var_1_21)) {
		if (var_1_26 <= (var_1_27 >> var_1_23)) {
			var_1_28 = (abs (var_1_22));
		} else {
			var_1_28 = (abs (var_1_22));
		}
	}


	// From: CodeObject3
	if (var_1_21 >= (~ var_1_22)) {
		if (var_1_32) {
			if (var_1_29 && var_1_33) {
				var_1_31 = var_1_22;
			}
		}
	} else {
		var_1_31 = 2;
	}


	// From: CodeObject4
	if ((var_1_24 >> var_1_21) <= (var_1_20 * (abs (var_1_25)))) {
		var_1_34 = (max (var_1_35 , var_1_36));
	}


	// From: CodeObject5
	if (var_1_32) {
		var_1_37 = (max (-1 , (min (var_1_31 , var_1_30))));
	}


	// From: CodeObject6
	var_1_38 = (36926 - (var_1_31 + var_1_22));


	// From: CodeObject7
	if (var_1_31 < var_1_25) {
		if (var_1_29) {
			var_1_39 = (var_1_40 && var_1_41);
		}
	}


	// From: CodeObject8
	if (var_1_31 == var_1_27) {
		if (256 >= var_1_28) {
			var_1_42 = (max (var_1_36 , var_1_35));
		} else {
			var_1_42 = (min (var_1_36 , (max (var_1_35 , var_1_43))));
		}
	}


	// From: CodeObject9
	if (! var_1_41) {
		if (var_1_40) {
			var_1_44 = (abs (min ((var_1_38 + var_1_25) , (abs (var_1_37)))));
		}
	} else {
		var_1_44 = var_1_28;
	}


	// From: CodeObject10
	if (((var_1_37 + var_1_25) >> var_1_22) >= var_1_21) {
		if ((abs (var_1_24 + 50)) >= 1) {
			var_1_45 = (abs (var_1_22));
		} else {
			if ((min (var_1_31 , (var_1_37 | var_1_26))) >= var_1_22) {
				var_1_45 = (8 + var_1_22);
			} else {
				var_1_45 = (min (var_1_22 , (var_1_46 - (max (var_1_47 , var_1_48)))));
			}
		}
	}


	// From: CodeObject11
	if (var_1_21 <= var_1_25) {
		if ((var_1_31 % var_1_46) <= var_1_28) {
			var_1_49 = (min (var_1_47 , (abs (-64))));
		}
	}


	// From: Req3Batch59PS_CN_100
	unsigned char stepLocal_3 = last_1_var_1_19 < var_1_6;
	if (last_1_var_1_18) {
		if ((! last_1_var_1_15) || stepLocal_3) {
			var_1_8 = (max (127.25 , var_1_10));
		} else {
			var_1_8 = (var_1_11 + var_1_12);
		}
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req5Batch59PS_CN_100
	if (var_1_12 != var_1_8) {
		var_1_15 = (! var_1_16);
	} else {
		var_1_15 = var_1_16;
	}


	// From: Req6Batch59PS_CN_100
	var_1_17 = var_1_4;


	// From: Req7Batch59PS_CN_100
	var_1_18 = var_1_16;


	// From: Req8Batch59PS_CN_100
	var_1_19 = var_1_4;


	// From: Req1Batch59PS_CN_100
	unsigned short int stepLocal_1 = var_1_17;
	unsigned char stepLocal_0 = var_1_17 != (16 / var_1_4);
	if (stepLocal_0 && var_1_15) {
		if (stepLocal_1 > var_1_4) {
			var_1_1 = (var_1_4 + var_1_17);
		} else {
			if (var_1_15) {
				var_1_1 = var_1_17;
			} else {
				var_1_1 = var_1_4;
			}
		}
	} else {
		var_1_1 = var_1_17;
	}


	// From: Req2Batch59PS_CN_100
	unsigned short int stepLocal_2 = var_1_17;
	if (stepLocal_2 < last_1_var_1_5) {
		var_1_5 = (var_1_6 - (var_1_7 - last_1_var_1_5));
	} else {
		if (! var_1_15) {
			var_1_5 = (max (last_1_var_1_5 , (var_1_7 + var_1_4)));
		}
	}


	// From: Req4Batch59PS_CN_100
	unsigned short int stepLocal_5 = var_1_6;
	unsigned short int stepLocal_4 = var_1_5;
	if (stepLocal_4 != ((var_1_6 / var_1_4) * (max (var_1_5 , var_1_19)))) {
		if (var_1_5 <= stepLocal_5) {
			var_1_13 = 32;
		} else {
			var_1_13 = var_1_14;
		}
	} else {
		var_1_13 = var_1_14;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 16383);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854765600e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854765600e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427382800e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 16);
	assume_abort_if_not(var_1_22 <= 32);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 32767);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854765600e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 127);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 127);
}



void updateLastVariables() {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return (((((((((var_1_17 != (16 / var_1_4)) && var_1_15) ? ((var_1_17 > var_1_4) ? (var_1_1 == ((unsigned short int) (var_1_4 + var_1_17))) : (var_1_15 ? (var_1_1 == ((unsigned short int) var_1_17)) : (var_1_1 == ((unsigned short int) var_1_4)))) : (var_1_1 == ((unsigned short int) var_1_17))) && ((var_1_17 < last_1_var_1_5) ? (var_1_5 == ((unsigned short int) (var_1_6 - (var_1_7 - last_1_var_1_5)))) : ((! var_1_15) ? (var_1_5 == ((unsigned short int) (max (last_1_var_1_5 , (var_1_7 + var_1_4))))) : 1))) && (last_1_var_1_18 ? (((! last_1_var_1_15) || (last_1_var_1_19 < var_1_6)) ? (var_1_8 == ((double) (max (127.25 , var_1_10)))) : (var_1_8 == ((double) (var_1_11 + var_1_12)))) : (var_1_8 == ((double) var_1_11)))) && ((var_1_5 != ((var_1_6 / var_1_4) * (max (var_1_5 , var_1_19)))) ? ((var_1_5 <= var_1_6) ? (var_1_13 == ((unsigned char) 32)) : (var_1_13 == ((unsigned char) var_1_14))) : (var_1_13 == ((unsigned char) var_1_14)))) && ((var_1_12 != var_1_8) ? (var_1_15 == ((unsigned char) (! var_1_16))) : (var_1_15 == ((unsigned char) var_1_16)))) && (var_1_17 == ((unsigned short int) var_1_4))) && (var_1_18 == ((unsigned char) var_1_16))) && (var_1_19 == ((unsigned long int) var_1_4))
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
