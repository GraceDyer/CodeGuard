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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch30Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_2;
	signed short int var_1_5;
	signed short int var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	signed long int var_1_10;
	float var_1_11;
	float var_1_13;
	float var_1_14;
	float var_1_15;
	float var_1_16;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	64,
	0,
	8,
	-32,
	128,
	10,
	2,
	0,
	32.5,
	127.8,
	999.25,
	1000000000.5,
	256.6
};

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct00_var_1_10 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch30Wrapper_S
	signed long int stepLocal_0 = (last_1_WrapperStruct00_var_1_10 / WrapperStruct00.var_1_5) % WrapperStruct00.var_1_6;
	if (WrapperStruct00.var_1_2) {
		if (last_1_WrapperStruct00_var_1_10 > stepLocal_0) {
			WrapperStruct00.var_1_1 = (max ((min (WrapperStruct00.var_1_7 , WrapperStruct00.var_1_8)) , WrapperStruct00.var_1_9));
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_9;
	}


	// From: Req2Batch30Wrapper_S
	unsigned char stepLocal_2 = WrapperStruct00.var_1_1;
	signed long int stepLocal_1 = WrapperStruct00.var_1_1 + WrapperStruct00.var_1_1;
	if (stepLocal_1 < WrapperStruct00.var_1_6) {
		if (WrapperStruct00.var_1_2) {
			if (WrapperStruct00.var_1_5 > stepLocal_2) {
				WrapperStruct00.var_1_10 = WrapperStruct00.var_1_1;
			}
		} else {
			WrapperStruct00.var_1_10 = WrapperStruct00.var_1_8;
		}
	} else {
		WrapperStruct00.var_1_10 = WrapperStruct00.var_1_9;
	}


	// From: Req3Batch30Wrapper_S
	unsigned char stepLocal_4 = WrapperStruct00.var_1_1;
	signed long int stepLocal_3 = (WrapperStruct00.var_1_9 / WrapperStruct00.var_1_5) << WrapperStruct00.var_1_6;
	if (stepLocal_4 > WrapperStruct00.var_1_10) {
		if (WrapperStruct00.var_1_1 <= stepLocal_3) {
			WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14);
		}
	} else {
		WrapperStruct00.var_1_11 = ((abs (WrapperStruct00.var_1_13)) - WrapperStruct00.var_1_15);
	}


	// From: Req4Batch30Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_15;
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 254);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 254);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}

int property() {
	return (((WrapperStruct00.var_1_2 ? ((last_1_WrapperStruct00_var_1_10 > ((last_1_WrapperStruct00_var_1_10 / WrapperStruct00.var_1_5) % WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_1 == ((unsigned char) (max ((min (WrapperStruct00.var_1_7 , WrapperStruct00.var_1_8)) , WrapperStruct00.var_1_9)))) : 1) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_9))) && (((WrapperStruct00.var_1_1 + WrapperStruct00.var_1_1) < WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_2 ? ((WrapperStruct00.var_1_5 > WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_10 == ((signed long int) WrapperStruct00.var_1_1)) : 1) : (WrapperStruct00.var_1_10 == ((signed long int) WrapperStruct00.var_1_8))) : (WrapperStruct00.var_1_10 == ((signed long int) WrapperStruct00.var_1_9)))) && ((WrapperStruct00.var_1_1 > WrapperStruct00.var_1_10) ? ((WrapperStruct00.var_1_1 <= ((WrapperStruct00.var_1_9 / WrapperStruct00.var_1_5) << WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_11 == ((float) (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14))) : 1) : (WrapperStruct00.var_1_11 == ((float) ((abs (WrapperStruct00.var_1_13)) - WrapperStruct00.var_1_15))))) && (WrapperStruct00.var_1_16 == ((float) WrapperStruct00.var_1_15))
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
