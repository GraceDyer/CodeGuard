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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch52100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 128.1;
unsigned char var_1_3 = 5;
float var_1_5 = 31.4;
float var_1_6 = 32.5;
float var_1_7 = 9.6;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 1;
unsigned short int var_1_11 = 64;
unsigned short int var_1_13 = 60712;
unsigned short int var_1_14 = 58826;
double var_1_15 = 999999999.5;
unsigned char var_1_18 = 10;
signed short int var_1_20 = -50;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 128;
unsigned char var_1_23 = 64;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
double var_1_27 = 128.25;
double var_1_28 = 9999999999.15;
double var_1_29 = 31.5;
double var_1_30 = 31.125;
double var_1_31 = 7.5;
double var_1_32 = 4.625;
unsigned long int var_1_33 = 256;
unsigned long int var_1_34 = 3870856286;
signed short int var_1_35 = -2;
signed char var_1_36 = 2;
signed char var_1_37 = 8;
signed char var_1_38 = 4;
unsigned char var_1_39 = 10;
unsigned char var_1_40 = 64;
unsigned char var_1_41 = 64;
signed short int var_1_42 = -500;
signed short int var_1_43 = -10;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_11 = 64;
unsigned char last_1_var_1_21 = 1;
signed short int last_1_var_1_35 = -2;
signed short int last_1_var_1_43 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch52100_1loop
	signed long int stepLocal_1 = -2 / -10000000;
	if (stepLocal_1 != ((var_1_3 + last_1_var_1_43) + last_1_var_1_11)) {
		var_1_8 = (last_1_var_1_21 || var_1_10);
	}


	// From: Req14Batch52100_1loop
	unsigned char stepLocal_6 = var_1_8;
	if (var_1_26) {
		var_1_43 = (max (var_1_40 , (var_1_23 + var_1_37)));
	} else {
		if (var_1_10 || stepLocal_6) {
			var_1_43 = (max (var_1_14 , var_1_13));
		} else {
			var_1_43 = var_1_37;
		}
	}


	// From: Req8Batch52100_1loop
	var_1_27 = ((var_1_28 + (max (var_1_29 , var_1_30))) - (var_1_31 + var_1_32));


	// From: Req10Batch52100_1loop
	var_1_35 = (max (last_1_var_1_35 , var_1_22));


	// From: Req11Batch52100_1loop
	var_1_36 = ((max (var_1_3 , var_1_37)) - var_1_38);


	// From: Req13Batch52100_1loop
	var_1_42 = (var_1_3 - var_1_38);


	// From: Req6Batch52100_1loop
	if (var_1_8) {
		var_1_20 = (abs (min (var_1_3 , var_1_14)));
	} else {
		if (! var_1_10) {
			var_1_20 = var_1_42;
		} else {
			var_1_20 = var_1_3;
		}
	}


	// From: Req9Batch52100_1loop
	if (var_1_27 != var_1_27) {
		if ((var_1_35 / var_1_14) > var_1_13) {
			var_1_33 = (var_1_34 - 2u);
		} else {
			var_1_33 = (var_1_22 + var_1_35);
		}
	}


	// From: Req5Batch52100_1loop
	signed long int stepLocal_3 = -256 / var_1_13;
	signed short int stepLocal_2 = var_1_43;
	if (! var_1_8) {
		if (var_1_42 <= stepLocal_3) {
			if (var_1_42 < stepLocal_2) {
				var_1_18 = var_1_3;
			} else {
				var_1_18 = var_1_3;
			}
		} else {
			var_1_18 = var_1_3;
		}
	} else {
		var_1_18 = var_1_3;
	}


	// From: Req7Batch52100_1loop
	signed long int stepLocal_5 = var_1_22 - var_1_23;
	signed short int stepLocal_4 = var_1_42;
	if (var_1_3 > stepLocal_5) {
		if (var_1_13 >= stepLocal_4) {
			var_1_21 = ((var_1_8 || (var_1_10 && var_1_24)) && (var_1_8 || var_1_25));
		}
	} else {
		var_1_21 = (! var_1_26);
	}


	// From: Req3Batch52100_1loop
	if (! (! var_1_8)) {
		var_1_11 = ((var_1_3 + 128) + var_1_18);
	} else {
		var_1_11 = (((min (var_1_13 , var_1_14)) - var_1_3) - var_1_18);
	}


	// From: Req1Batch52100_1loop
	signed long int stepLocal_0 = 10;
	if (((var_1_18 >> var_1_3) | var_1_35) >= stepLocal_0) {
		var_1_1 = ((min (var_1_5 , var_1_6)) + var_1_7);
	} else {
		var_1_1 = (abs (var_1_5 + var_1_7));
	}


	// From: Req4Batch52100_1loop
	if ((var_1_1 / 24.5) <= var_1_27) {
		if (var_1_21) {
			var_1_15 = (var_1_5 + var_1_6);
		}
	}


	// From: Req12Batch52100_1loop
	if ((var_1_38 - var_1_3) < var_1_11) {
		var_1_39 = (((min (var_1_40 , 100)) + var_1_41) - var_1_38);
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 16);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 49150);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 49150);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 127);
	assume_abort_if_not(var_1_22 <= 255);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427382800e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427382800e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427382800e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427382800e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -1);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 63);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 64);
	assume_abort_if_not(var_1_41 <= 127);
}



void updateLastVariables() {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_43 = var_1_43;
}

int property() {
	return ((((((((((((((((var_1_18 >> var_1_3) | var_1_35) >= 10) ? (var_1_1 == ((float) ((min (var_1_5 , var_1_6)) + var_1_7))) : (var_1_1 == ((float) (abs (var_1_5 + var_1_7))))) && (((-2 / -10000000) != ((var_1_3 + last_1_var_1_43) + last_1_var_1_11)) ? (var_1_8 == ((unsigned char) (last_1_var_1_21 || var_1_10))) : 1)) && ((! (! var_1_8)) ? (var_1_11 == ((unsigned short int) ((var_1_3 + 128) + var_1_18))) : (var_1_11 == ((unsigned short int) (((min (var_1_13 , var_1_14)) - var_1_3) - var_1_18))))) && (((var_1_1 / 24.5) <= var_1_27) ? (var_1_21 ? (var_1_15 == ((double) (var_1_5 + var_1_6))) : 1) : 1)) && ((! var_1_8) ? ((var_1_42 <= (-256 / var_1_13)) ? ((var_1_42 < var_1_43) ? (var_1_18 == ((unsigned char) var_1_3)) : (var_1_18 == ((unsigned char) var_1_3))) : (var_1_18 == ((unsigned char) var_1_3))) : (var_1_18 == ((unsigned char) var_1_3)))) && (var_1_8 ? (var_1_20 == ((signed short int) (abs (min (var_1_3 , var_1_14))))) : ((! var_1_10) ? (var_1_20 == ((signed short int) var_1_42)) : (var_1_20 == ((signed short int) var_1_3))))) && ((var_1_3 > (var_1_22 - var_1_23)) ? ((var_1_13 >= var_1_42) ? (var_1_21 == ((unsigned char) ((var_1_8 || (var_1_10 && var_1_24)) && (var_1_8 || var_1_25)))) : 1) : (var_1_21 == ((unsigned char) (! var_1_26))))) && (var_1_27 == ((double) ((var_1_28 + (max (var_1_29 , var_1_30))) - (var_1_31 + var_1_32))))) && ((var_1_27 != var_1_27) ? (((var_1_35 / var_1_14) > var_1_13) ? (var_1_33 == ((unsigned long int) (var_1_34 - 2u))) : (var_1_33 == ((unsigned long int) (var_1_22 + var_1_35)))) : 1)) && (var_1_35 == ((signed short int) (max (last_1_var_1_35 , var_1_22))))) && (var_1_36 == ((signed char) ((max (var_1_3 , var_1_37)) - var_1_38)))) && (((var_1_38 - var_1_3) < var_1_11) ? (var_1_39 == ((unsigned char) (((min (var_1_40 , 100)) + var_1_41) - var_1_38))) : 1)) && (var_1_42 == ((signed short int) (var_1_3 - var_1_38)))) && (var_1_26 ? (var_1_43 == ((signed short int) (max (var_1_40 , (var_1_23 + var_1_37))))) : ((var_1_10 || var_1_8) ? (var_1_43 == ((signed short int) (max (var_1_14 , var_1_13)))) : (var_1_43 == ((signed short int) var_1_37))))
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
