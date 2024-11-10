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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch70Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 31.7;
double var_1_3 = 1.0350000000000001;
unsigned short int var_1_4 = 8;
signed short int var_1_12 = -128;
signed short int var_1_13 = 8;
float var_1_14 = 9.6;
signed long int var_1_15 = -5;
float var_1_16 = 128.6;
double var_1_17 = 5.75;
double var_1_18 = 1.25;
float var_1_19 = 100.4;
float var_1_20 = 64.5;
double var_1_21 = 5.4;
unsigned short int var_1_22 = 256;
signed short int var_1_23 = 16;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 10;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 8;
unsigned char var_1_31 = 128;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 64;
signed long int var_1_37 = 10;
unsigned short int var_1_38 = 25;
unsigned short int var_1_39 = 59136;
unsigned short int var_1_40 = 43689;
double var_1_41 = 4.1;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_12 = -128;
signed long int last_1_var_1_15 = -5;
signed short int last_1_var_1_23 = 16;
unsigned char last_1_var_1_26 = 1;
unsigned char last_1_var_1_30 = 8;
signed long int last_1_var_1_37 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch70Amount100
	if (var_1_18 < var_1_19) {
		var_1_38 = (max (((var_1_39 - last_1_var_1_15) - var_1_35) , (var_1_40 - (abs (last_1_var_1_30)))));
	} else {
		if (var_1_29) {
			if (! last_1_var_1_26) {
				var_1_38 = last_1_var_1_30;
			} else {
				var_1_38 = last_1_var_1_30;
			}
		} else {
			var_1_38 = last_1_var_1_15;
		}
	}


	// From: Req2Batch70Amount100
	signed long int stepLocal_0 = last_1_var_1_23;
	if (! last_1_var_1_26) {
		if ((max ((32 * last_1_var_1_12) , last_1_var_1_12)) <= stepLocal_0) {
			var_1_4 = ((last_1_var_1_12 + (last_1_var_1_12 + last_1_var_1_30)) + (max (last_1_var_1_30 , last_1_var_1_30)));
		} else {
			var_1_4 = last_1_var_1_30;
		}
	} else {
		var_1_4 = last_1_var_1_12;
	}


	// From: Req10Batch70Amount100
	signed long int stepLocal_3 = (~ last_1_var_1_15) | (last_1_var_1_23 * last_1_var_1_30);
	if (stepLocal_3 > 8) {
		if (var_1_27) {
			var_1_26 = (var_1_28 && var_1_29);
		}
	}


	// From: Req11Batch70Amount100
	if (last_1_var_1_26 && (last_1_var_1_37 > var_1_13)) {
		var_1_30 = ((min (var_1_31 , (max (var_1_32 , var_1_33)))) - (max (var_1_25 , (var_1_34 + var_1_35))));
	} else {
		if (last_1_var_1_26) {
			if (var_1_3 >= (abs (- var_1_18))) {
				var_1_30 = (var_1_31 - (var_1_36 - var_1_35));
			} else {
				var_1_30 = ((abs (8)) + var_1_36);
			}
		}
	}


	// From: Req1Batch70Amount100
	if (var_1_26) {
		var_1_1 = (4.2 - (max (9.5 , (abs (var_1_3)))));
	} else {
		var_1_1 = (abs (var_1_3));
	}


	// From: Req4Batch70Amount100
	if (var_1_26) {
		var_1_14 = var_1_3;
	}


	// From: Req7Batch70Amount100
	var_1_21 = (abs (var_1_3));


	// From: Req14Batch70Amount100
	var_1_41 = 16.625;


	// From: Req12Batch70Amount100
	unsigned short int stepLocal_4 = var_1_38;
	if (stepLocal_4 > ((var_1_24 + var_1_36) - var_1_30)) {
		var_1_37 = var_1_24;
	}


	// From: Req8Batch70Amount100
	if (0 <= (var_1_30 << var_1_37)) {
		if (var_1_20 > var_1_41) {
			var_1_22 = var_1_30;
		}
	}


	// From: Req9Batch70Amount100
	signed long int stepLocal_2 = var_1_30 >> var_1_38;
	if ((var_1_24 - var_1_25) > stepLocal_2) {
		var_1_23 = (max ((var_1_25 - var_1_30) , var_1_38));
	}


	// From: Req3Batch70Amount100
	if (var_1_30 >= var_1_4) {
		var_1_12 = (abs (var_1_30));
	}


	// From: Req6Batch70Amount100
	if ((var_1_17 - var_1_18) > var_1_21) {
		var_1_16 = (var_1_19 + var_1_20);
	}


	// From: Req5Batch70Amount100
	unsigned char stepLocal_1 = var_1_30;
	if (stepLocal_1 < var_1_22) {
		var_1_15 = (var_1_4 + 1);
	} else {
		var_1_15 = (abs (var_1_22));
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854765600e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854765600e+12F && var_1_3 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32766);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427382800e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 255);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 127);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 64);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 63);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 49150);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_37 = var_1_37;
}

int property() {
	return (((((((((((((var_1_26 ? (var_1_1 == ((double) (4.2 - (max (9.5 , (abs (var_1_3))))))) : (var_1_1 == ((double) (abs (var_1_3))))) && ((! last_1_var_1_26) ? (((max ((32 * last_1_var_1_12) , last_1_var_1_12)) <= last_1_var_1_23) ? (var_1_4 == ((unsigned short int) ((last_1_var_1_12 + (last_1_var_1_12 + last_1_var_1_30)) + (max (last_1_var_1_30 , last_1_var_1_30))))) : (var_1_4 == ((unsigned short int) last_1_var_1_30))) : (var_1_4 == ((unsigned short int) last_1_var_1_12)))) && ((var_1_30 >= var_1_4) ? (var_1_12 == ((signed short int) (abs (var_1_30)))) : 1)) && (var_1_26 ? (var_1_14 == ((float) var_1_3)) : 1)) && ((var_1_30 < var_1_22) ? (var_1_15 == ((signed long int) (var_1_4 + 1))) : (var_1_15 == ((signed long int) (abs (var_1_22)))))) && (((var_1_17 - var_1_18) > var_1_21) ? (var_1_16 == ((float) (var_1_19 + var_1_20))) : 1)) && (var_1_21 == ((double) (abs (var_1_3))))) && ((0 <= (var_1_30 << var_1_37)) ? ((var_1_20 > var_1_41) ? (var_1_22 == ((unsigned short int) var_1_30)) : 1) : 1)) && (((var_1_24 - var_1_25) > (var_1_30 >> var_1_38)) ? (var_1_23 == ((signed short int) (max ((var_1_25 - var_1_30) , var_1_38)))) : 1)) && ((((~ last_1_var_1_15) | (last_1_var_1_23 * last_1_var_1_30)) > 8) ? (var_1_27 ? (var_1_26 == ((unsigned char) (var_1_28 && var_1_29))) : 1) : 1)) && ((last_1_var_1_26 && (last_1_var_1_37 > var_1_13)) ? (var_1_30 == ((unsigned char) ((min (var_1_31 , (max (var_1_32 , var_1_33)))) - (max (var_1_25 , (var_1_34 + var_1_35)))))) : (last_1_var_1_26 ? ((var_1_3 >= (abs (- var_1_18))) ? (var_1_30 == ((unsigned char) (var_1_31 - (var_1_36 - var_1_35)))) : (var_1_30 == ((unsigned char) ((abs (8)) + var_1_36)))) : 1))) && ((var_1_38 > ((var_1_24 + var_1_36) - var_1_30)) ? (var_1_37 == ((signed long int) var_1_24)) : 1)) && ((var_1_18 < var_1_19) ? (var_1_38 == ((unsigned short int) (max (((var_1_39 - last_1_var_1_15) - var_1_35) , (var_1_40 - (abs (last_1_var_1_30))))))) : (var_1_29 ? ((! last_1_var_1_26) ? (var_1_38 == ((unsigned short int) last_1_var_1_30)) : (var_1_38 == ((unsigned short int) last_1_var_1_30))) : (var_1_38 == ((unsigned short int) last_1_var_1_15))))) && (var_1_41 == ((double) 16.625))
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
