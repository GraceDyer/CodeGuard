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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch34Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_3;
	double var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	signed char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	signed char var_1_14;
	signed char var_1_15;
	signed char var_1_16;
	signed char var_1_17;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	16.6,
	1,
	1,
	10.6,
	0,
	1,
	0,
	0,
	10,
	100,
	64,
	100,
	-4,
	32,
	4,
	64
};

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_5 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch34Wrapper_S
	if (last_1_WrapperStruct00_var_1_5) {
		if (last_1_WrapperStruct00_var_1_5) {
			WrapperStruct00.var_1_1 = (abs (WrapperStruct00.var_1_4));
		}
	}


	// From: Req4Batch34Wrapper_S
	if (WrapperStruct00.var_1_1 >= (- (WrapperStruct00.var_1_4 * WrapperStruct00.var_1_1))) {
		WrapperStruct00.var_1_17 = WrapperStruct00.var_1_15;
	}


	// From: Req2Batch34Wrapper_S
	if (WrapperStruct00.var_1_3 || (256 >= (WrapperStruct00.var_1_17 + 4))) {
		WrapperStruct00.var_1_5 = ((WrapperStruct00.var_1_2 || WrapperStruct00.var_1_3) || WrapperStruct00.var_1_7);
	} else {
		WrapperStruct00.var_1_5 = (! (! (WrapperStruct00.var_1_8 || WrapperStruct00.var_1_9)));
	}


	// From: Req3Batch34Wrapper_S
	signed long int stepLocal_1 = (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_12) - (min (WrapperStruct00.var_1_13 , 1));
	signed char stepLocal_0 = WrapperStruct00.var_1_17;
	if (-10 >= stepLocal_0) {
		if (stepLocal_1 > (~ WrapperStruct00.var_1_17)) {
			WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15);
		} else {
			WrapperStruct00.var_1_10 = WrapperStruct00.var_1_16;
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 0);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 63);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 128);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 64);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 127);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 63);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 126);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_5 = WrapperStruct00.var_1_5;
}

int property() {
	return (((last_1_WrapperStruct00_var_1_5 ? (last_1_WrapperStruct00_var_1_5 ? (WrapperStruct00.var_1_1 == ((double) (abs (WrapperStruct00.var_1_4)))) : 1) : 1) && ((WrapperStruct00.var_1_3 || (256 >= (WrapperStruct00.var_1_17 + 4))) ? (WrapperStruct00.var_1_5 == ((unsigned char) ((WrapperStruct00.var_1_2 || WrapperStruct00.var_1_3) || WrapperStruct00.var_1_7))) : (WrapperStruct00.var_1_5 == ((unsigned char) (! (! (WrapperStruct00.var_1_8 || WrapperStruct00.var_1_9))))))) && ((-10 >= WrapperStruct00.var_1_17) ? ((((WrapperStruct00.var_1_11 + WrapperStruct00.var_1_12) - (min (WrapperStruct00.var_1_13 , 1))) > (~ WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_10 == ((signed char) (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15))) : (WrapperStruct00.var_1_10 == ((signed char) WrapperStruct00.var_1_16))) : 1)) && ((WrapperStruct00.var_1_1 >= (- (WrapperStruct00.var_1_4 * WrapperStruct00.var_1_1))) ? (WrapperStruct00.var_1_17 == ((signed char) WrapperStruct00.var_1_15)) : 1)
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
