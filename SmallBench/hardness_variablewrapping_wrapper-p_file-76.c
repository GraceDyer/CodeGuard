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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch76Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_3 = 8;
unsigned char* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = -2;
signed long int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 31.5;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 100000000000000.9;
double* var_1_7_Pointer = &(var_1_7);
signed char var_1_8 = -4;
signed char* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 5;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = 10;
signed char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = 5;
signed char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);

// Calibration values

// Last'ed variables
signed char last_1_var_1_8 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch76Wrapper_P
	signed long int stepLocal_0 = (- 5) + last_1_var_1_8;
	if (stepLocal_0 >= last_1_var_1_8) {
		(*(var_1_1_Pointer)) = (! (*(var_1_5_Pointer)));
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
	}


	// From: Req3Batch76Wrapper_P
	if (-25 >= (*(var_1_3_Pointer))) {
		(*(var_1_8_Pointer)) = (min ((*(var_1_9_Pointer)) , (*(var_1_10_Pointer))));
	} else {
		if ((*(var_1_10_Pointer)) == (*(var_1_4_Pointer))) {
			(*(var_1_8_Pointer)) = ((*(var_1_11_Pointer)) - 16);
		} else {
			if ((*(var_1_1_Pointer))) {
				(*(var_1_8_Pointer)) = (*(var_1_9_Pointer));
			}
		}
	}


	// From: Req2Batch76Wrapper_P
	signed char stepLocal_1 = (*(var_1_8_Pointer));
	if (stepLocal_1 <= (*(var_1_8_Pointer))) {
		if ((*(var_1_1_Pointer))) {
			(*(var_1_6_Pointer)) = (3.17 - (max (127.2 , (*(var_1_7_Pointer)))));
		}
	}


	// From: Req4Batch76Wrapper_P
	if ((*(var_1_1_Pointer))) {
		if (((*(var_1_7_Pointer)) >= 24.2) || (*(var_1_5_Pointer))) {
			(*(var_1_12_Pointer)) = ((*(var_1_5_Pointer)) || (! (*(var_1_13_Pointer))));
		} else {
			(*(var_1_12_Pointer)) = (*(var_1_5_Pointer));
		}
	} else {
		(*(var_1_12_Pointer)) = (*(var_1_13_Pointer));
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854765600e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
}

int property() {
	return ((((((- 5) + last_1_var_1_8) >= last_1_var_1_8) ? ((*(var_1_1_Pointer)) == ((unsigned char) (! (*(var_1_5_Pointer))))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_5_Pointer))))) && (((*(var_1_8_Pointer)) <= (*(var_1_8_Pointer))) ? ((*(var_1_1_Pointer)) ? ((*(var_1_6_Pointer)) == ((double) (3.17 - (max (127.2 , (*(var_1_7_Pointer))))))) : 1) : 1)) && ((-25 >= (*(var_1_3_Pointer))) ? ((*(var_1_8_Pointer)) == ((signed char) (min ((*(var_1_9_Pointer)) , (*(var_1_10_Pointer)))))) : (((*(var_1_10_Pointer)) == (*(var_1_4_Pointer))) ? ((*(var_1_8_Pointer)) == ((signed char) ((*(var_1_11_Pointer)) - 16))) : ((*(var_1_1_Pointer)) ? ((*(var_1_8_Pointer)) == ((signed char) (*(var_1_9_Pointer)))) : 1)))) && ((*(var_1_1_Pointer)) ? ((((*(var_1_7_Pointer)) >= 24.2) || (*(var_1_5_Pointer))) ? ((*(var_1_12_Pointer)) == ((unsigned char) ((*(var_1_5_Pointer)) || (! (*(var_1_13_Pointer)))))) : ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_5_Pointer))))) : ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_13_Pointer)))))
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
