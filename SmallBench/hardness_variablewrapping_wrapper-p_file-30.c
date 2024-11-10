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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch30Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 64;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
signed short int var_1_5 = 8;
signed short int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = -32;
signed short int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 128;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 10;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 2;
unsigned char* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = 0;
signed long int* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 32.5;
float* var_1_11_Pointer = &(var_1_11);
float var_1_13 = 127.8;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 999.25;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 1000000000.5;
float* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 256.6;
float* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables
signed long int last_1_var_1_10 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch30Wrapper_P
	signed long int stepLocal_0 = (last_1_var_1_10 / (*(var_1_5_Pointer))) % (*(var_1_6_Pointer));
	if ((*(var_1_2_Pointer))) {
		if (last_1_var_1_10 > stepLocal_0) {
			(*(var_1_1_Pointer)) = (max ((min ((*(var_1_7_Pointer)) , (*(var_1_8_Pointer)))) , (*(var_1_9_Pointer))));
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_9_Pointer));
	}


	// From: Req2Batch30Wrapper_P
	unsigned char stepLocal_2 = (*(var_1_1_Pointer));
	signed long int stepLocal_1 = (*(var_1_1_Pointer)) + (*(var_1_1_Pointer));
	if (stepLocal_1 < (*(var_1_6_Pointer))) {
		if ((*(var_1_2_Pointer))) {
			if ((*(var_1_5_Pointer)) > stepLocal_2) {
				(*(var_1_10_Pointer)) = (*(var_1_1_Pointer));
			}
		} else {
			(*(var_1_10_Pointer)) = (*(var_1_8_Pointer));
		}
	} else {
		(*(var_1_10_Pointer)) = (*(var_1_9_Pointer));
	}


	// From: Req3Batch30Wrapper_P
	unsigned char stepLocal_4 = (*(var_1_1_Pointer));
	signed long int stepLocal_3 = ((*(var_1_9_Pointer)) / (*(var_1_5_Pointer))) << (*(var_1_6_Pointer));
	if (stepLocal_4 > (*(var_1_10_Pointer))) {
		if ((*(var_1_1_Pointer)) <= stepLocal_3) {
			(*(var_1_11_Pointer)) = ((*(var_1_13_Pointer)) + (*(var_1_14_Pointer)));
		}
	} else {
		(*(var_1_11_Pointer)) = ((abs ((*(var_1_13_Pointer)))) - (*(var_1_15_Pointer)));
	}


	// From: Req4Batch30Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_15_Pointer));
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32768);
	assume_abort_if_not(var_1_6 <= 32767);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -461168.6018427382800e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427382800e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
}

int property() {
	return ((((*(var_1_2_Pointer)) ? ((last_1_var_1_10 > ((last_1_var_1_10 / (*(var_1_5_Pointer))) % (*(var_1_6_Pointer)))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (max ((min ((*(var_1_7_Pointer)) , (*(var_1_8_Pointer)))) , (*(var_1_9_Pointer)))))) : 1) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_9_Pointer))))) && ((((*(var_1_1_Pointer)) + (*(var_1_1_Pointer))) < (*(var_1_6_Pointer))) ? ((*(var_1_2_Pointer)) ? (((*(var_1_5_Pointer)) > (*(var_1_1_Pointer))) ? ((*(var_1_10_Pointer)) == ((signed long int) (*(var_1_1_Pointer)))) : 1) : ((*(var_1_10_Pointer)) == ((signed long int) (*(var_1_8_Pointer))))) : ((*(var_1_10_Pointer)) == ((signed long int) (*(var_1_9_Pointer)))))) && (((*(var_1_1_Pointer)) > (*(var_1_10_Pointer))) ? (((*(var_1_1_Pointer)) <= (((*(var_1_9_Pointer)) / (*(var_1_5_Pointer))) << (*(var_1_6_Pointer)))) ? ((*(var_1_11_Pointer)) == ((float) ((*(var_1_13_Pointer)) + (*(var_1_14_Pointer))))) : 1) : ((*(var_1_11_Pointer)) == ((float) ((abs ((*(var_1_13_Pointer)))) - (*(var_1_15_Pointer))))))) && ((*(var_1_16_Pointer)) == ((float) (*(var_1_15_Pointer))))
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
