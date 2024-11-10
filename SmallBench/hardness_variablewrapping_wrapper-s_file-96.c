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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch96Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned short int var_1_1;
	unsigned char var_1_2;
	unsigned short int var_1_3;
	unsigned short int var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_9;
	unsigned char var_1_10;
	double var_1_11;
	double var_1_13;
	double var_1_14;
	signed long int var_1_15;
	float var_1_16;
	signed char var_1_17;
	signed char var_1_18;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	8,
	0,
	8,
	1000,
	1,
	0,
	0,
	0,
	4.575,
	2.75,
	128.5,
	-1000000000,
	99999.25,
	1,
	50
};

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_5 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch96Wrapper_S
	if (! last_1_WrapperStruct00_var_1_5) {
		WrapperStruct00.var_1_1 = (min (WrapperStruct00.var_1_3 , WrapperStruct00.var_1_4));
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
	}


	// From: Req2Batch96Wrapper_S
	unsigned char stepLocal_0 = WrapperStruct00.var_1_6;
	if (WrapperStruct00.var_1_2) {
		if (stepLocal_0 && ((WrapperStruct00.var_1_3 >= 16) || last_1_WrapperStruct00_var_1_5)) {
			if (WrapperStruct00.var_1_6) {
				WrapperStruct00.var_1_5 = ((WrapperStruct00.var_1_1 < WrapperStruct00.var_1_1) && WrapperStruct00.var_1_9);
			} else {
				WrapperStruct00.var_1_5 = WrapperStruct00.var_1_10;
			}
		}
	}


	// From: Req4Batch96Wrapper_S
	WrapperStruct00.var_1_15 = WrapperStruct00.var_1_1;


	// From: Req5Batch96Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_13;


	// From: Req6Batch96Wrapper_S
	WrapperStruct00.var_1_17 = WrapperStruct00.var_1_18;


	// From: Req3Batch96Wrapper_S
	if ((abs (WrapperStruct00.var_1_15)) > WrapperStruct00.var_1_15) {
		if ((WrapperStruct00.var_1_15 / -5) >= ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_15) - (min (WrapperStruct00.var_1_1 , WrapperStruct00.var_1_3)))) {
			WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14);
		} else {
			WrapperStruct00.var_1_11 = WrapperStruct00.var_1_14;
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 65534);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 65534);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 126);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_5 = WrapperStruct00.var_1_5;
}

int property() {
	return ((((((! last_1_WrapperStruct00_var_1_5) ? (WrapperStruct00.var_1_1 == ((unsigned short int) (min (WrapperStruct00.var_1_3 , WrapperStruct00.var_1_4)))) : (WrapperStruct00.var_1_1 == ((unsigned short int) WrapperStruct00.var_1_4))) && (WrapperStruct00.var_1_2 ? ((WrapperStruct00.var_1_6 && ((WrapperStruct00.var_1_3 >= 16) || last_1_WrapperStruct00_var_1_5)) ? (WrapperStruct00.var_1_6 ? (WrapperStruct00.var_1_5 == ((unsigned char) ((WrapperStruct00.var_1_1 < WrapperStruct00.var_1_1) && WrapperStruct00.var_1_9))) : (WrapperStruct00.var_1_5 == ((unsigned char) WrapperStruct00.var_1_10))) : 1) : 1)) && (((abs (WrapperStruct00.var_1_15)) > WrapperStruct00.var_1_15) ? (((WrapperStruct00.var_1_15 / -5) >= ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_15) - (min (WrapperStruct00.var_1_1 , WrapperStruct00.var_1_3)))) ? (WrapperStruct00.var_1_11 == ((double) (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14))) : (WrapperStruct00.var_1_11 == ((double) WrapperStruct00.var_1_14))) : 1)) && (WrapperStruct00.var_1_15 == ((signed long int) WrapperStruct00.var_1_1))) && (WrapperStruct00.var_1_16 == ((float) WrapperStruct00.var_1_13))) && (WrapperStruct00.var_1_17 == ((signed char) WrapperStruct00.var_1_18))
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
