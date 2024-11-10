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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch43Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	float var_1_2;
	float var_1_3;
	float var_1_4;
	float var_1_5;
	signed short int var_1_7;
	signed short int var_1_8;
	signed short int var_1_9;
	signed short int var_1_10;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned short int var_1_15;
	unsigned short int var_1_16;
	unsigned short int var_1_17;
	signed char var_1_18;
	signed char var_1_19;
	unsigned char var_1_20;
	unsigned char var_1_21;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	64,
	4.5,
	64.8,
	64.4,
	0.2,
	10000,
	1,
	50,
	8,
	2,
	100,
	128,
	23647,
	32,
	0,
	-50,
	0,
	0
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
float* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned short int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned short int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
signed char* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
unsigned char* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
unsigned char* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch43Wrapper_SP
	(*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));


	// From: Req6Batch43Wrapper_SP
	(*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_21_Pointer));


	// From: Req2Batch43Wrapper_SP
	signed char stepLocal_1 = (*(WrapperStruct00_var_1_18_Pointer));
	signed long int stepLocal_0 = (*(WrapperStruct00_var_1_9_Pointer)) / (*(WrapperStruct00_var_1_7_Pointer));
	if (stepLocal_1 > ((*(WrapperStruct00_var_1_8_Pointer)) << (*(WrapperStruct00_var_1_10_Pointer)))) {
		if (stepLocal_0 > -25) {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
		} else {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
		}
	}


	// From: Req3Batch43Wrapper_SP
	signed long int stepLocal_2 = (*(WrapperStruct00_var_1_7_Pointer)) ^ (*(WrapperStruct00_var_1_18_Pointer));
	if ((*(WrapperStruct00_var_1_14_Pointer)) >= stepLocal_2) {
		(*(WrapperStruct00_var_1_15_Pointer)) = ((*(WrapperStruct00_var_1_14_Pointer)) + ((*(WrapperStruct00_var_1_16_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer))));
	}


	// From: Req1Batch43Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) != (max ((*(WrapperStruct00_var_1_3_Pointer)) , ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))))) {
		if ((*(WrapperStruct00_var_1_20_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = ((((*(WrapperStruct00_var_1_7_Pointer)) - 32) + ((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer)))) - (*(WrapperStruct00_var_1_13_Pointer)));
		}
	} else {
		if ((*(WrapperStruct00_var_1_20_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
		} else {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
		}
	}


	// From: Req4Batch43Wrapper_SP
	(*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_1_Pointer));
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 8191);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 16383);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 8192);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 8191);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 32766);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 254);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 16383);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 32767);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 126);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_21 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_21 <= 0);
}



void updateLastVariables() {
}

int property() {
	return (((((((*(WrapperStruct00_var_1_2_Pointer)) != (max ((*(WrapperStruct00_var_1_3_Pointer)) , ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))))) ? ((*(WrapperStruct00_var_1_20_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) ((((*(WrapperStruct00_var_1_7_Pointer)) - 32) + ((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer)))) - (*(WrapperStruct00_var_1_13_Pointer))))) : 1) : ((*(WrapperStruct00_var_1_20_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_18_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_13_Pointer)))))) && (((*(WrapperStruct00_var_1_18_Pointer)) > ((*(WrapperStruct00_var_1_8_Pointer)) << (*(WrapperStruct00_var_1_10_Pointer)))) ? ((((*(WrapperStruct00_var_1_9_Pointer)) / (*(WrapperStruct00_var_1_7_Pointer))) > -25) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_14_Pointer)))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_14_Pointer))))) : 1)) && (((*(WrapperStruct00_var_1_14_Pointer)) >= ((*(WrapperStruct00_var_1_7_Pointer)) ^ (*(WrapperStruct00_var_1_18_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_14_Pointer)) + ((*(WrapperStruct00_var_1_16_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer)))))) : 1)) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_1_Pointer))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_19_Pointer))))) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_21_Pointer))))
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
