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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 5;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 128;
signed long int var_1_9 = 1967984875;
float var_1_10 = 256.625;
float var_1_11 = 24.5;
float var_1_12 = 999999.25;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
double var_1_15 = 127.3;
float var_1_16 = 15.8;
double var_1_17 = -0.4;
unsigned long int var_1_18 = 8;
unsigned long int var_1_19 = 2366774301;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 5;
signed char var_1_22 = 0;
signed char var_1_23 = 2;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed long int var_1_29 = -128;
signed char var_1_30 = 5;
signed char var_1_31 = -16;
signed long int var_1_32 = -4;
signed long int var_1_34 = 8;
signed short int var_1_35 = -50;
unsigned long int var_1_36 = 4;
signed long int var_1_37 = -1;
signed long int var_1_38 = -5;
unsigned long int var_1_39 = 8;
unsigned short int var_1_40 = 16;
unsigned short int var_1_41 = 25;
unsigned short int var_1_42 = 256;
unsigned short int var_1_43 = 48844;
unsigned short int var_1_44 = 25575;
unsigned short int var_1_45 = 10000;
unsigned short int var_1_46 = 64;
unsigned long int var_1_47 = 4;
signed char var_1_48 = 2;
signed char var_1_49 = -2;
signed char var_1_50 = -2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 5;
unsigned long int last_1_var_1_18 = 8;
signed char last_1_var_1_22 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_25) {
		var_1_24 = var_1_26;
	} else {
		if (var_1_26) {
			var_1_24 = var_1_27;
		} else {
			var_1_24 = (var_1_27 || var_1_28);
		}
	}


	// From: CodeObject2
	if ((var_1_30 * var_1_31) < (abs (var_1_34))) {
		if (var_1_30 <= var_1_34) {
			var_1_29 = var_1_31;
		} else {
			var_1_29 = var_1_30;
		}
	} else {
		var_1_29 = var_1_31;
	}


	// From: CodeObject3
	if (var_1_34 < (max (var_1_29 , var_1_32))) {
		if (var_1_27) {
			var_1_35 = var_1_31;
		}
	}


	// From: CodeObject4
	if (var_1_29 < (var_1_37 / var_1_38)) {
		var_1_36 = var_1_39;
	} else {
		if (((abs (var_1_30)) / var_1_38) < var_1_31) {
			var_1_36 = var_1_39;
		}
	}


	// From: CodeObject5
	if (var_1_29 > var_1_34) {
		if (var_1_28 && var_1_27) {
			var_1_40 = (min (var_1_41 , var_1_42));
		}
	} else {
		var_1_40 = (var_1_43 - (var_1_44 - (var_1_45 - var_1_46)));
	}


	// From: CodeObject6
	if (var_1_37 >= (~ (max (var_1_46 , var_1_44)))) {
		if (var_1_31 >= (~ var_1_34)) {
			var_1_47 = (var_1_44 + var_1_42);
		}
	}


	// From: CodeObject7
	var_1_48 = var_1_49;


	// From: CodeObject8
	var_1_50 = var_1_49;


	// From: Req5Batch12Filler_PS_CN
	unsigned char stepLocal_2 = var_1_9 >= last_1_var_1_22;
	signed long int stepLocal_1 = last_1_var_1_1;
	if (stepLocal_1 > last_1_var_1_18) {
		var_1_18 = (min (var_1_9 , (var_1_19 - var_1_6)));
	} else {
		if (var_1_20 || stepLocal_2) {
			var_1_18 = var_1_6;
		} else {
			var_1_18 = var_1_7;
		}
	}


	// From: Req1Batch12Filler_PS_CN
	if (last_1_var_1_1 > (var_1_18 * var_1_18)) {
		var_1_1 = (var_1_5 - (var_1_6 + var_1_7));
	} else {
		var_1_1 = (min (var_1_7 , ((abs (16)) + var_1_6)));
	}


	// From: Req6Batch12Filler_PS_CN
	var_1_21 = (abs (var_1_7));


	// From: Req2Batch12Filler_PS_CN
	unsigned char stepLocal_0 = var_1_6;
	if ((- var_1_18) > stepLocal_0) {
		var_1_8 = ((var_1_9 - var_1_21) - var_1_5);
	}


	// From: Req7Batch12Filler_PS_CN
	signed long int stepLocal_3 = var_1_8;
	if (var_1_18 == stepLocal_3) {
		if (! var_1_20) {
			var_1_22 = (max (var_1_6 , (5 - var_1_7)));
		} else {
			var_1_22 = (var_1_7 + var_1_23);
		}
	}


	// From: Req3Batch12Filler_PS_CN
	if (var_1_8 != (min (var_1_6 , var_1_5))) {
		var_1_10 = (max (var_1_11 , var_1_12));
	} else {
		if (var_1_13 || var_1_14) {
			var_1_10 = var_1_11;
		}
	}


	// From: Req4Batch12Filler_PS_CN
	if ((var_1_12 / var_1_16) >= var_1_10) {
		var_1_15 = (var_1_17 + 255.5);
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 64);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 1073741822);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854765600e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854765600e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854765600e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(var_1_16 != 0.0F);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427382800e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -128);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483647);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483648);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483648);
	assume_abort_if_not(var_1_38 <= 2147483647);
	assume_abort_if_not(var_1_38 != 0);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 65534);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 65534);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 32767);
	assume_abort_if_not(var_1_43 <= 65534);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 16383);
	assume_abort_if_not(var_1_44 <= 32767);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 8191);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 8191);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -127);
	assume_abort_if_not(var_1_49 <= 126);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_22 = var_1_22;
}

int property() {
	return (((((((last_1_var_1_1 > (var_1_18 * var_1_18)) ? (var_1_1 == ((unsigned char) (var_1_5 - (var_1_6 + var_1_7)))) : (var_1_1 == ((unsigned char) (min (var_1_7 , ((abs (16)) + var_1_6)))))) && (((- var_1_18) > var_1_6) ? (var_1_8 == ((signed long int) ((var_1_9 - var_1_21) - var_1_5))) : 1)) && ((var_1_8 != (min (var_1_6 , var_1_5))) ? (var_1_10 == ((float) (max (var_1_11 , var_1_12)))) : ((var_1_13 || var_1_14) ? (var_1_10 == ((float) var_1_11)) : 1))) && (((var_1_12 / var_1_16) >= var_1_10) ? (var_1_15 == ((double) (var_1_17 + 255.5))) : 1)) && ((last_1_var_1_1 > last_1_var_1_18) ? (var_1_18 == ((unsigned long int) (min (var_1_9 , (var_1_19 - var_1_6))))) : ((var_1_20 || (var_1_9 >= last_1_var_1_22)) ? (var_1_18 == ((unsigned long int) var_1_6)) : (var_1_18 == ((unsigned long int) var_1_7))))) && (var_1_21 == ((signed short int) (abs (var_1_7))))) && ((var_1_18 == var_1_8) ? ((! var_1_20) ? (var_1_22 == ((signed char) (max (var_1_6 , (5 - var_1_7))))) : (var_1_22 == ((signed char) (var_1_7 + var_1_23)))) : 1)
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
