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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch26Filler_PS_CO.c", 13, "reach_error"); }
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
signed long int var_1_4 = -64;
signed char var_1_9 = 10;
unsigned char var_1_10 = 0;
signed char var_1_11 = -1;
unsigned short int var_1_12 = 10000;
float var_1_13 = 5.4;
float var_1_14 = 1.4;
unsigned short int var_1_18 = 32;
double var_1_20 = 1.5;
double var_1_21 = 2.75;
unsigned char var_1_22 = 5;
unsigned short int var_1_23 = 55712;
unsigned char var_1_24 = 5;
signed short int var_1_25 = 10;
float var_1_26 = 64.2;
unsigned short int var_1_27 = 64;
unsigned char var_1_31 = 0;
float var_1_33 = 2.5;
float var_1_34 = 50.5;
unsigned long int var_1_35 = 10;
unsigned char var_1_36 = 0;
unsigned long int var_1_37 = 2924974040;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
signed long int var_1_43 = 256;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned long int var_1_46 = 32;
unsigned long int var_1_47 = 1000000000;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 16;
signed char last_1_var_1_9 = 10;
unsigned short int last_1_var_1_12 = 10000;
double last_1_var_1_20 = 1.5;
unsigned char last_1_var_1_22 = 5;
signed short int last_1_var_1_25 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_9 < (var_1_22 - (abs (var_1_25)))) {
		if (var_1_31) {
			var_1_27 = var_1_22;
		}
	}


	// From: CodeObject2
	if (var_1_1 < var_1_12) {
		var_1_33 = var_1_34;
	} else {
		var_1_33 = var_1_34;
	}


	// From: CodeObject3
	if (var_1_31) {
		var_1_35 = (max (var_1_22 , var_1_25));
	} else {
		if (var_1_36) {
			if (-8 < var_1_22) {
				var_1_35 = (abs (var_1_37 - var_1_25));
			}
		}
	}


	// From: CodeObject4
	if (var_1_20 >= (- 255.45f)) {
		var_1_38 = ((! var_1_39) && var_1_40);
	} else {
		if (var_1_40) {
			var_1_38 = var_1_39;
		}
	}


	// From: CodeObject5
	if ((abs (var_1_22)) < (var_1_12 % var_1_43)) {
		var_1_41 = ((! (var_1_40 && var_1_44)) || (var_1_39 && var_1_45));
	} else {
		var_1_41 = var_1_44;
	}


	// From: CodeObject6
	if (var_1_36) {
		var_1_46 = (var_1_12 + (abs (var_1_22)));
	} else {
		var_1_46 = (abs (abs (var_1_22)));
	}


	// From: CodeObject7
	if (var_1_44) {
		if (var_1_45) {
			if (var_1_41) {
				var_1_47 = (abs (abs (var_1_12)));
			}
		} else {
			var_1_47 = var_1_22;
		}
	}


	// From: Req2Batch26Filler_PS_CO
	if (! var_1_10) {
		if ((max (last_1_var_1_22 , last_1_var_1_25)) >= last_1_var_1_12) {
			var_1_9 = (-16 + var_1_11);
		} else {
			var_1_9 = var_1_11;
		}
	} else {
		var_1_9 = var_1_11;
	}


	// From: Req3Batch26Filler_PS_CO
	unsigned char stepLocal_2 = var_1_10;
	signed long int stepLocal_1 = last_1_var_1_22;
	if (((var_1_13 - var_1_14) != (min (last_1_var_1_20 , last_1_var_1_20))) || stepLocal_2) {
		if (stepLocal_1 >= last_1_var_1_12) {
			var_1_12 = ((min (last_1_var_1_22 , last_1_var_1_22)) + 32);
		} else {
			var_1_12 = last_1_var_1_22;
		}
	}


	// From: Req5Batch26Filler_PS_CO
	unsigned long int stepLocal_5 = last_1_var_1_1;
	signed long int stepLocal_4 = var_1_4 + last_1_var_1_9;
	unsigned short int stepLocal_3 = var_1_18;
	if (stepLocal_5 > last_1_var_1_12) {
		if (last_1_var_1_1 >= stepLocal_4) {
			if (stepLocal_3 == (var_1_23 - 8)) {
				var_1_22 = var_1_24;
			} else {
				var_1_22 = var_1_24;
			}
		} else {
			var_1_22 = var_1_24;
		}
	} else {
		var_1_22 = var_1_24;
	}


	// From: Req4Batch26Filler_PS_CO
	if (var_1_11 > (var_1_22 * (var_1_12 + var_1_22))) {
		var_1_20 = var_1_21;
	}


	// From: Req6Batch26Filler_PS_CO
	if ((var_1_20 / var_1_26) > var_1_13) {
		var_1_25 = (max ((min (var_1_9 , var_1_24)) , 2));
	} else {
		var_1_25 = var_1_11;
	}


	// From: Req1Batch26Filler_PS_CO
	signed long int stepLocal_0 = (var_1_25 + var_1_9) / var_1_4;
	if (stepLocal_0 == var_1_25) {
		var_1_1 = ((min (var_1_12 , var_1_22)) + var_1_22);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854765600e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854765600e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854765600e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 2147483647);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483648);
	assume_abort_if_not(var_1_43 <= 2147483647);
	assume_abort_if_not(var_1_43 != 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_25 = var_1_25;
}

int property() {
	return ((((((((var_1_25 + var_1_9) / var_1_4) == var_1_25) ? (var_1_1 == ((unsigned long int) ((min (var_1_12 , var_1_22)) + var_1_22))) : 1) && ((! var_1_10) ? (((max (last_1_var_1_22 , last_1_var_1_25)) >= last_1_var_1_12) ? (var_1_9 == ((signed char) (-16 + var_1_11))) : (var_1_9 == ((signed char) var_1_11))) : (var_1_9 == ((signed char) var_1_11)))) && ((((var_1_13 - var_1_14) != (min (last_1_var_1_20 , last_1_var_1_20))) || var_1_10) ? ((last_1_var_1_22 >= last_1_var_1_12) ? (var_1_12 == ((unsigned short int) ((min (last_1_var_1_22 , last_1_var_1_22)) + 32))) : (var_1_12 == ((unsigned short int) last_1_var_1_22))) : 1)) && ((var_1_11 > (var_1_22 * (var_1_12 + var_1_22))) ? (var_1_20 == ((double) var_1_21)) : 1)) && ((last_1_var_1_1 > last_1_var_1_12) ? ((last_1_var_1_1 >= (var_1_4 + last_1_var_1_9)) ? ((var_1_18 == (var_1_23 - 8)) ? (var_1_22 == ((unsigned char) var_1_24)) : (var_1_22 == ((unsigned char) var_1_24))) : (var_1_22 == ((unsigned char) var_1_24))) : (var_1_22 == ((unsigned char) var_1_24)))) && (((var_1_20 / var_1_26) > var_1_13) ? (var_1_25 == ((signed short int) (max ((min (var_1_9 , var_1_24)) , 2)))) : (var_1_25 == ((signed short int) var_1_11)))
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
