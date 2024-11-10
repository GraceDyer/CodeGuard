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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch38Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned short int var_1_1;
	unsigned short int var_1_2;
	unsigned short int var_1_3;
	unsigned short int var_1_4;
	unsigned long int var_1_5;
	unsigned long int var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	double var_1_10;
	double var_1_11;
	unsigned short int var_1_12;
	unsigned char var_1_13;
	unsigned short int var_1_14;
	unsigned short int var_1_15;
	unsigned short int var_1_16;
	unsigned short int var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	0,
	56507,
	52902,
	8,
	16,
	1771558822,
	7.25,
	31.2,
	32.71,
	0.4,
	7.75,
	32,
	0,
	20114,
	32,
	16773,
	25,
	0,
	1
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch38Wrapper_S
	WrapperStruct00.var_1_1 = ((max (WrapperStruct00.var_1_2 , WrapperStruct00.var_1_3)) - WrapperStruct00.var_1_4);


	// From: Req2Batch38Wrapper_S
	unsigned short int stepLocal_0 = WrapperStruct00.var_1_2;
	if (WrapperStruct00.var_1_4 > stepLocal_0) {
		WrapperStruct00.var_1_5 = (((WrapperStruct00.var_1_6 - WrapperStruct00.var_1_3) + 2144048120u) - WrapperStruct00.var_1_2);
	}


	// From: Req3Batch38Wrapper_S
	WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_8 + (WrapperStruct00.var_1_9 + (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11)));


	// From: Req4Batch38Wrapper_S
	if (! WrapperStruct00.var_1_13) {
		WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_3 - (WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15));
	} else {
		if (WrapperStruct00.var_1_13) {
			WrapperStruct00.var_1_12 = ((27636 + WrapperStruct00.var_1_16) - (max ((16853 - 10) , WrapperStruct00.var_1_14)));
		} else {
			WrapperStruct00.var_1_12 = WrapperStruct00.var_1_3;
		}
	}


	// From: Req5Batch38Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_19;
	if ((WrapperStruct00.var_1_13 && WrapperStruct00.var_1_18) && stepLocal_1) {
		WrapperStruct00.var_1_17 = (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_14);
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 65534);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 65534);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 1610612735);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -230584.3009213691390e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 2305843.009213691390e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -115292.1504606845700e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 1152921.504606845700e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -115292.1504606845700e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 1152921.504606845700e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 16383);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 32767);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 16383);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 16384);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 32767);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 1);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 1);
}



void updateLastVariables() {
}

int property() {
	return ((((WrapperStruct00.var_1_1 == ((unsigned short int) ((max (WrapperStruct00.var_1_2 , WrapperStruct00.var_1_3)) - WrapperStruct00.var_1_4))) && ((WrapperStruct00.var_1_4 > WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_5 == ((unsigned long int) (((WrapperStruct00.var_1_6 - WrapperStruct00.var_1_3) + 2144048120u) - WrapperStruct00.var_1_2))) : 1)) && (WrapperStruct00.var_1_7 == ((double) (WrapperStruct00.var_1_8 + (WrapperStruct00.var_1_9 + (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11)))))) && ((! WrapperStruct00.var_1_13) ? (WrapperStruct00.var_1_12 == ((unsigned short int) (WrapperStruct00.var_1_3 - (WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15)))) : (WrapperStruct00.var_1_13 ? (WrapperStruct00.var_1_12 == ((unsigned short int) ((27636 + WrapperStruct00.var_1_16) - (max ((16853 - 10) , WrapperStruct00.var_1_14))))) : (WrapperStruct00.var_1_12 == ((unsigned short int) WrapperStruct00.var_1_3))))) && (((WrapperStruct00.var_1_13 && WrapperStruct00.var_1_18) && WrapperStruct00.var_1_19) ? (WrapperStruct00.var_1_17 == ((unsigned short int) (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_14))) : 1)
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
