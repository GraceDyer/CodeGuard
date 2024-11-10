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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch41Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed char var_1_1;
	unsigned char var_1_5;
	signed char var_1_6;
	signed char var_1_7;
	unsigned short int var_1_8;
	unsigned char var_1_11;
	double var_1_12;
	double var_1_13;
	signed long int var_1_14;
	signed char var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_17;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	-16,
	0,
	-8,
	5,
	2,
	0,
	8.5,
	999999999999.6,
	10,
	-1,
	16,
	64
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed long int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);

// Calibration values

// Last'ed variables
signed char last_1_WrapperStruct00_var_1_1 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch41Wrapper_SP
	if ((*(WrapperStruct00_var_1_5_Pointer)) && (last_1_WrapperStruct00_var_1_1 <= last_1_WrapperStruct00_var_1_1)) {
		(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
	}


	// From: Req3Batch41Wrapper_SP
	(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) - 8.3);


	// From: Req4Batch41Wrapper_SP
	unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_13_Pointer)) >= (*(WrapperStruct00_var_1_12_Pointer));
	if ((*(WrapperStruct00_var_1_5_Pointer)) && stepLocal_1) {
		(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
	} else {
		(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
	}


	// From: Req2Batch41Wrapper_SP
	if ((*(WrapperStruct00_var_1_5_Pointer))) {
		(*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer)));
	} else {
		if (((*(WrapperStruct00_var_1_16_Pointer)) > (*(WrapperStruct00_var_1_14_Pointer))) || (*(WrapperStruct00_var_1_11_Pointer))) {
			(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
		} else {
			(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
		}
	}


	// From: Req1Batch41Wrapper_SP
	unsigned long int stepLocal_0 = ((*(WrapperStruct00_var_1_8_Pointer)) & 0u) * (*(WrapperStruct00_var_1_16_Pointer));
	if (stepLocal_0 > (*(WrapperStruct00_var_1_8_Pointer))) {
		if ((*(WrapperStruct00_var_1_5_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = ((16 + (*(WrapperStruct00_var_1_6_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer)));
		} else {
			(*(WrapperStruct00_var_1_1_Pointer)) = (abs ((*(WrapperStruct00_var_1_6_Pointer))));
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -31);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 31);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
	assume_abort_if_not(WrapperStruct00.var_1_15 != 0);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 254);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}

int property() {
	return ((((((((*(WrapperStruct00_var_1_8_Pointer)) & 0u) * (*(WrapperStruct00_var_1_16_Pointer))) > (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_5_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) ((16 + (*(WrapperStruct00_var_1_6_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (abs ((*(WrapperStruct00_var_1_6_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_6_Pointer))))) && ((*(WrapperStruct00_var_1_5_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer))))) : ((((*(WrapperStruct00_var_1_16_Pointer)) > (*(WrapperStruct00_var_1_14_Pointer))) || (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_16_Pointer)))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_16_Pointer))))))) && ((*(WrapperStruct00_var_1_12_Pointer)) == ((double) ((*(WrapperStruct00_var_1_13_Pointer)) - 8.3)))) && (((*(WrapperStruct00_var_1_5_Pointer)) && ((*(WrapperStruct00_var_1_13_Pointer)) >= (*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_16_Pointer)))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_15_Pointer)))))) && (((*(WrapperStruct00_var_1_5_Pointer)) && (last_1_WrapperStruct00_var_1_1 <= last_1_WrapperStruct00_var_1_1)) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_17_Pointer)))) : 1)
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
