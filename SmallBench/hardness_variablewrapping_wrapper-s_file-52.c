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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch52Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed short int var_1_3;
	signed short int var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	double var_1_10;
	double var_1_11;
	double var_1_12;
	double var_1_13;
	double var_1_14;
	unsigned long int var_1_15;
	unsigned char var_1_16;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	-4,
	32,
	-1,
	1,
	0,
	0,
	1,
	0,
	25.7,
	256.5,
	0.0,
	31.1,
	256.6,
	8,
	16
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch52Wrapper_S
	signed short int stepLocal_0 = WrapperStruct00.var_1_3;
	if (stepLocal_0 > ((WrapperStruct00.var_1_4 / -256) * 32)) {
		if (WrapperStruct00.var_1_6) {
			WrapperStruct00.var_1_5 = (! (WrapperStruct00.var_1_7 && WrapperStruct00.var_1_8));
		} else {
			WrapperStruct00.var_1_5 = WrapperStruct00.var_1_8;
		}
	} else {
		WrapperStruct00.var_1_5 = WrapperStruct00.var_1_9;
	}


	// From: Req3Batch52Wrapper_S
	if (WrapperStruct00.var_1_7) {
		WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_11 - (max ((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) , WrapperStruct00.var_1_14)));
	}


	// From: Req1Batch52Wrapper_S
	if (WrapperStruct00.var_1_10 < 63.75) {
		WrapperStruct00.var_1_1 = (10 - WrapperStruct00.var_1_3);
	} else {
		WrapperStruct00.var_1_1 = (4 + WrapperStruct00.var_1_4);
	}


	// From: Req4Batch52Wrapper_S
	if (! (WrapperStruct00.var_1_13 < (127.125 / WrapperStruct00.var_1_12))) {
		if (WrapperStruct00.var_1_1 <= ((WrapperStruct00.var_1_4 * WrapperStruct00.var_1_3) + (-2 << WrapperStruct00.var_1_16))) {
			WrapperStruct00.var_1_15 = WrapperStruct00.var_1_3;
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 32766);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 16383);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 4611686.018427382800e+12F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 30);
}



void updateLastVariables() {
}

int property() {
	return ((((WrapperStruct00.var_1_10 < 63.75) ? (WrapperStruct00.var_1_1 == ((signed short int) (10 - WrapperStruct00.var_1_3))) : (WrapperStruct00.var_1_1 == ((signed short int) (4 + WrapperStruct00.var_1_4)))) && ((WrapperStruct00.var_1_3 > ((WrapperStruct00.var_1_4 / -256) * 32)) ? (WrapperStruct00.var_1_6 ? (WrapperStruct00.var_1_5 == ((unsigned char) (! (WrapperStruct00.var_1_7 && WrapperStruct00.var_1_8)))) : (WrapperStruct00.var_1_5 == ((unsigned char) WrapperStruct00.var_1_8))) : (WrapperStruct00.var_1_5 == ((unsigned char) WrapperStruct00.var_1_9)))) && (WrapperStruct00.var_1_7 ? (WrapperStruct00.var_1_10 == ((double) (WrapperStruct00.var_1_11 - (max ((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) , WrapperStruct00.var_1_14))))) : 1)) && ((! (WrapperStruct00.var_1_13 < (127.125 / WrapperStruct00.var_1_12))) ? ((WrapperStruct00.var_1_1 <= ((WrapperStruct00.var_1_4 * WrapperStruct00.var_1_3) + (-2 << WrapperStruct00.var_1_16))) ? (WrapperStruct00.var_1_15 == ((unsigned long int) WrapperStruct00.var_1_3)) : 1) : 1)
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
