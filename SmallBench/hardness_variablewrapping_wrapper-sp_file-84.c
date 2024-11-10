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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch84Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned short int var_1_8;
	unsigned char var_1_9;
	unsigned short int var_1_10;
	signed short int var_1_11;
	unsigned char var_1_13;
	unsigned char var_1_14;
	signed short int var_1_15;
	signed short int var_1_16;
	float var_1_17;
	float var_1_18;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	128,
	25,
	64,
	8,
	0,
	64,
	1,
	27843,
	-4,
	128,
	5,
	28020,
	128,
	10000000000000.926,
	1000000.6
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed short int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
float* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
float* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);

// Calibration values

// Last'ed variables
unsigned short int last_1_WrapperStruct00_var_1_8 = 64;
signed short int last_1_WrapperStruct00_var_1_11 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch84Wrapper_SP
	signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_11;
	if (stepLocal_0 != last_1_WrapperStruct00_var_1_8) {
		(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (max ((min ((*(WrapperStruct00_var_1_5_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer)))) , (*(WrapperStruct00_var_1_7_Pointer)))));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
	}


	// From: Req2Batch84Wrapper_SP
	if ((*(WrapperStruct00_var_1_9_Pointer))) {
		(*(WrapperStruct00_var_1_8_Pointer)) = (((*(WrapperStruct00_var_1_10_Pointer)) + 23103) - (32 + (*(WrapperStruct00_var_1_6_Pointer))));
	}


	// From: Req4Batch84Wrapper_SP
	if (! ((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_10_Pointer)))) {
		(*(WrapperStruct00_var_1_16_Pointer)) = (32 - 8);
	} else {
		(*(WrapperStruct00_var_1_16_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer)));
	}


	// From: Req5Batch84Wrapper_SP
	(*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));


	// From: Req3Batch84Wrapper_SP
	if ((*(WrapperStruct00_var_1_1_Pointer)) < (*(WrapperStruct00_var_1_16_Pointer))) {
		if (((- 8) / ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer)))) >= (*(WrapperStruct00_var_1_6_Pointer))) {
			(*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_16_Pointer)) - ((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))));
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 127);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 127);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 127);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 16383);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 32767);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 255);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 126);
	assume_abort_if_not(WrapperStruct00.var_1_14 != 127);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 16383);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 32766);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_18 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
	last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
}

int property() {
	return (((((last_1_WrapperStruct00_var_1_11 != last_1_WrapperStruct00_var_1_8) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_4_Pointer)) + (max ((min ((*(WrapperStruct00_var_1_5_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer)))) , (*(WrapperStruct00_var_1_7_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_4_Pointer))))) && ((*(WrapperStruct00_var_1_9_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) (((*(WrapperStruct00_var_1_10_Pointer)) + 23103) - (32 + (*(WrapperStruct00_var_1_6_Pointer)))))) : 1)) && (((*(WrapperStruct00_var_1_1_Pointer)) < (*(WrapperStruct00_var_1_16_Pointer))) ? ((((- 8) / ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer)))) >= (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_16_Pointer)) - ((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer)))))) : 1) : 1)) && ((! ((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed short int) (32 - 8))) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_4_Pointer))))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((float) (*(WrapperStruct00_var_1_18_Pointer))))
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
