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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch66Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned short int var_1_1;
	unsigned short int var_1_7;
	unsigned short int var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	signed long int var_1_16;
	unsigned char var_1_18;
	unsigned long int var_1_19;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	8,
	10000,
	38382,
	0,
	0,
	0,
	32,
	2,
	2,
	-1000000,
	100,
	10
};

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_10 = 0;
signed long int last_1_WrapperStruct00_var_1_16 = -1000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch66Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_15;


	// From: Req5Batch66Wrapper_S
	WrapperStruct00.var_1_19 = WrapperStruct00.var_1_12;


	// From: Req2Batch66Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_18;
	unsigned char stepLocal_0 = WrapperStruct00.var_1_11;
	if ((WrapperStruct00.var_1_18 > last_1_WrapperStruct00_var_1_10) || stepLocal_0) {
		if (last_1_WrapperStruct00_var_1_10 != stepLocal_1) {
			WrapperStruct00.var_1_10 = WrapperStruct00.var_1_12;
		} else {
			WrapperStruct00.var_1_10 = (max ((WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14) , (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_15))));
		}
	}


	// From: Req1Batch66Wrapper_S
	if (WrapperStruct00.var_1_10 <= WrapperStruct00.var_1_19) {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_18 + ((WrapperStruct00.var_1_10 + WrapperStruct00.var_1_18) + (WrapperStruct00.var_1_7 - WrapperStruct00.var_1_18)));
	} else {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_7);
	}


	// From: Req3Batch66Wrapper_S
	if (WrapperStruct00.var_1_9 < WrapperStruct00.var_1_10) {
		WrapperStruct00.var_1_16 = (WrapperStruct00.var_1_7 + 16);
	} else {
		if (WrapperStruct00.var_1_11 || (WrapperStruct00.var_1_19 <= last_1_WrapperStruct00_var_1_16)) {
			WrapperStruct00.var_1_16 = WrapperStruct00.var_1_10;
		} else {
			WrapperStruct00.var_1_16 = WrapperStruct00.var_1_1;
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 8191);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 16383);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 65534);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 254);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
	last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}

int property() {
	return (((((WrapperStruct00.var_1_10 <= WrapperStruct00.var_1_19) ? (WrapperStruct00.var_1_1 == ((unsigned short int) (WrapperStruct00.var_1_18 + ((WrapperStruct00.var_1_10 + WrapperStruct00.var_1_18) + (WrapperStruct00.var_1_7 - WrapperStruct00.var_1_18))))) : (WrapperStruct00.var_1_1 == ((unsigned short int) (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_7)))) && (((WrapperStruct00.var_1_18 > last_1_WrapperStruct00_var_1_10) || WrapperStruct00.var_1_11) ? ((last_1_WrapperStruct00_var_1_10 != WrapperStruct00.var_1_18) ? (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_10 == ((unsigned char) (max ((WrapperStruct00.var_1_13 + WrapperStruct00.var_1_14) , (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_15))))))) : 1)) && ((WrapperStruct00.var_1_9 < WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_16 == ((signed long int) (WrapperStruct00.var_1_7 + 16))) : ((WrapperStruct00.var_1_11 || (WrapperStruct00.var_1_19 <= last_1_WrapperStruct00_var_1_16)) ? (WrapperStruct00.var_1_16 == ((signed long int) WrapperStruct00.var_1_10)) : (WrapperStruct00.var_1_16 == ((signed long int) WrapperStruct00.var_1_1))))) && (WrapperStruct00.var_1_18 == ((unsigned char) WrapperStruct00.var_1_15))) && (WrapperStruct00.var_1_19 == ((unsigned long int) WrapperStruct00.var_1_12))
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
