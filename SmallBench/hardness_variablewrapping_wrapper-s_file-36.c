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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch36Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	float var_1_3;
	unsigned char var_1_4;
	float var_1_5;
	unsigned char var_1_7;
	unsigned char var_1_9;
	double var_1_10;
	double var_1_11;
	double var_1_12;
	double var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_16;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	1,
	9999999999.875,
	0,
	4.25,
	1,
	1,
	64.2,
	9.5,
	199.5,
	3.5,
	1,
	2
};

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_14 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch36Wrapper_S
	if ((last_1_WrapperStruct00_var_1_14 >> last_1_WrapperStruct00_var_1_14) < (- last_1_WrapperStruct00_var_1_14)) {
		WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_4 || WrapperStruct00.var_1_9);
	}


	// From: Req4Batch36Wrapper_S
	if (WrapperStruct00.var_1_13 == (- WrapperStruct00.var_1_12)) {
		if (WrapperStruct00.var_1_7 && WrapperStruct00.var_1_7) {
			WrapperStruct00.var_1_14 = WrapperStruct00.var_1_16;
		} else {
			WrapperStruct00.var_1_14 = WrapperStruct00.var_1_16;
		}
	} else {
		WrapperStruct00.var_1_14 = 0;
	}


	// From: Req3Batch36Wrapper_S
	if (WrapperStruct00.var_1_5 > WrapperStruct00.var_1_3) {
		WrapperStruct00.var_1_10 = 4.6;
	} else {
		WrapperStruct00.var_1_10 = (max (WrapperStruct00.var_1_11 , (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13))));
	}


	// From: Req1Batch36Wrapper_S
	unsigned char stepLocal_0 = WrapperStruct00.var_1_10 > WrapperStruct00.var_1_10;
	if (stepLocal_0 && WrapperStruct00.var_1_7) {
		if ((max (WrapperStruct00.var_1_10 , (- WrapperStruct00.var_1_10))) != WrapperStruct00.var_1_10) {
			if (WrapperStruct00.var_1_7) {
				WrapperStruct00.var_1_1 = 10u;
			} else {
				WrapperStruct00.var_1_1 = WrapperStruct00.var_1_14;
			}
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_14;
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_14;
	}
}



void updateVariables() {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 254);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
}

int property() {
	return (((((WrapperStruct00.var_1_10 > WrapperStruct00.var_1_10) && WrapperStruct00.var_1_7) ? (((max (WrapperStruct00.var_1_10 , (- WrapperStruct00.var_1_10))) != WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_7 ? (WrapperStruct00.var_1_1 == ((unsigned long int) 10u)) : (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_14))) : (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_14))) : (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_14))) && (((last_1_WrapperStruct00_var_1_14 >> last_1_WrapperStruct00_var_1_14) < (- last_1_WrapperStruct00_var_1_14)) ? (WrapperStruct00.var_1_7 == ((unsigned char) (WrapperStruct00.var_1_4 || WrapperStruct00.var_1_9))) : 1)) && ((WrapperStruct00.var_1_5 > WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_10 == ((double) 4.6)) : (WrapperStruct00.var_1_10 == ((double) (max (WrapperStruct00.var_1_11 , (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13)))))))) && ((WrapperStruct00.var_1_13 == (- WrapperStruct00.var_1_12)) ? ((WrapperStruct00.var_1_7 && WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_16)) : (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_16))) : (WrapperStruct00.var_1_14 == ((unsigned char) 0)))
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
