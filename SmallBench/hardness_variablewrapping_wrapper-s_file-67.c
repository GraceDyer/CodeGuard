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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch67Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed short int var_1_4;
	signed short int var_1_5;
	unsigned short int var_1_6;
	unsigned short int var_1_7;
	signed long int var_1_8;
	unsigned char var_1_9;
	signed long int var_1_10;
	float var_1_11;
	float var_1_12;
	double var_1_13;
	unsigned short int var_1_14;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	2,
	-64,
	256,
	128,
	256,
	50,
	0,
	-4,
	15.125,
	0.9,
	25.875,
	50
};

// Calibration values

// Last'ed variables
signed short int last_1_WrapperStruct00_var_1_1 = 2;
unsigned short int last_1_WrapperStruct00_var_1_6 = 128;
signed long int last_1_WrapperStruct00_var_1_8 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch67Wrapper_S
	if (! (last_1_WrapperStruct00_var_1_6 <= last_1_WrapperStruct00_var_1_1)) {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5);
	}


	// From: Req2Batch67Wrapper_S
	signed long int stepLocal_0 = 1 * WrapperStruct00.var_1_4;
	if ((WrapperStruct00.var_1_1 >> WrapperStruct00.var_1_5) > stepLocal_0) {
		WrapperStruct00.var_1_6 = (max ((42286 - WrapperStruct00.var_1_7) , 0));
	} else {
		WrapperStruct00.var_1_6 = WrapperStruct00.var_1_7;
	}


	// From: Req4Batch67Wrapper_S
	WrapperStruct00.var_1_11 = WrapperStruct00.var_1_12;


	// From: Req5Batch67Wrapper_S
	WrapperStruct00.var_1_13 = WrapperStruct00.var_1_12;


	// From: Req6Batch67Wrapper_S
	WrapperStruct00.var_1_14 = WrapperStruct00.var_1_7;


	// From: Req3Batch67Wrapper_S
	signed long int stepLocal_2 = WrapperStruct00.var_1_4 / WrapperStruct00.var_1_10;
	unsigned short int stepLocal_1 = WrapperStruct00.var_1_7;
	if (WrapperStruct00.var_1_9) {
		WrapperStruct00.var_1_8 = (min (WrapperStruct00.var_1_6 , last_1_WrapperStruct00_var_1_8));
	} else {
		if (WrapperStruct00.var_1_14 > stepLocal_2) {
			if (stepLocal_1 > WrapperStruct00.var_1_6) {
				WrapperStruct00.var_1_8 = (min (WrapperStruct00.var_1_4 , 100));
			} else {
				WrapperStruct00.var_1_8 = (last_1_WrapperStruct00_var_1_8 - WrapperStruct00.var_1_7);
			}
		} else {
			WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_5);
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 16383);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 16383);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 32767);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_10 != 0);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
	last_1_WrapperStruct00_var_1_6 = WrapperStruct00.var_1_6;
	last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
}

int property() {
	return ((((((! (last_1_WrapperStruct00_var_1_6 <= last_1_WrapperStruct00_var_1_1)) ? (WrapperStruct00.var_1_1 == ((signed short int) (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5))) : 1) && (((WrapperStruct00.var_1_1 >> WrapperStruct00.var_1_5) > (1 * WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_6 == ((unsigned short int) (max ((42286 - WrapperStruct00.var_1_7) , 0)))) : (WrapperStruct00.var_1_6 == ((unsigned short int) WrapperStruct00.var_1_7)))) && (WrapperStruct00.var_1_9 ? (WrapperStruct00.var_1_8 == ((signed long int) (min (WrapperStruct00.var_1_6 , last_1_WrapperStruct00_var_1_8)))) : ((WrapperStruct00.var_1_14 > (WrapperStruct00.var_1_4 / WrapperStruct00.var_1_10)) ? ((WrapperStruct00.var_1_7 > WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_8 == ((signed long int) (min (WrapperStruct00.var_1_4 , 100)))) : (WrapperStruct00.var_1_8 == ((signed long int) (last_1_WrapperStruct00_var_1_8 - WrapperStruct00.var_1_7)))) : (WrapperStruct00.var_1_8 == ((signed long int) (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_5)))))) && (WrapperStruct00.var_1_11 == ((float) WrapperStruct00.var_1_12))) && (WrapperStruct00.var_1_13 == ((double) WrapperStruct00.var_1_12))) && (WrapperStruct00.var_1_14 == ((unsigned short int) WrapperStruct00.var_1_7))
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
