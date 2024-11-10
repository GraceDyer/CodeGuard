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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch29Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2] = {
	1, 1
};
float float_Array_0[3] = {
	3.4, 9.3, 2.5
};
unsigned char unsigned_char_Array_0[3] = {
	8, 5, 8
};
unsigned short int unsigned_short_int_Array_0[2] = {
	1, 32
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch29Wrapper_A
	BOOL_unsigned_char_Array_0[0] = BOOL_unsigned_char_Array_0[1];


	// From: Req6Batch29Wrapper_A
	unsigned_char_Array_0[2] = unsigned_char_Array_0[1];


	// From: Req1Batch29Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		float_Array_0[2] = float_Array_0[1];
	} else {
		if (! (float_Array_0[1] < float_Array_0[0])) {
			float_Array_0[2] = (abs (float_Array_0[1]));
		}
	}


	// From: Req2Batch29Wrapper_A
	if ((float_Array_0[2] + 8.125) > (float_Array_0[2] * float_Array_0[1])) {
		unsigned_short_int_Array_0[1] = (max ((unsigned_char_Array_0[2] + unsigned_char_Array_0[2]) , unsigned_char_Array_0[2]));
	} else {
		unsigned_short_int_Array_0[1] = unsigned_char_Array_0[2];
	}


	// From: Req3Batch29Wrapper_A
	signed long int stepLocal_0 = 5 * unsigned_char_Array_0[2];
	if ((min (float_Array_0[1] , float_Array_0[2])) == float_Array_0[2]) {
		if (unsigned_char_Array_0[2] > stepLocal_0) {
			if (float_Array_0[2] < (float_Array_0[2] * 256.5f)) {
				unsigned_short_int_Array_0[0] = unsigned_char_Array_0[2];
			}
		}
	}


	// From: Req4Batch29Wrapper_A
	if (float_Array_0[2] < float_Array_0[1]) {
		unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
}



void updateLastVariables() {
}

int property() {
	return (((((BOOL_unsigned_char_Array_0[0] ? (float_Array_0[2] == ((float) float_Array_0[1])) : ((! (float_Array_0[1] < float_Array_0[0])) ? (float_Array_0[2] == ((float) (abs (float_Array_0[1])))) : 1)) && (((float_Array_0[2] + 8.125) > (float_Array_0[2] * float_Array_0[1])) ? (unsigned_short_int_Array_0[1] == ((unsigned short int) (max ((unsigned_char_Array_0[2] + unsigned_char_Array_0[2]) , unsigned_char_Array_0[2])))) : (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_char_Array_0[2])))) && (((min (float_Array_0[1] , float_Array_0[2])) == float_Array_0[2]) ? ((unsigned_char_Array_0[2] > (5 * unsigned_char_Array_0[2])) ? ((float_Array_0[2] < (float_Array_0[2] * 256.5f)) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[2])) : 1) : 1) : 1)) && ((float_Array_0[2] < float_Array_0[1]) ? (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1])) : 1)) && (BOOL_unsigned_char_Array_0[0] == ((unsigned char) BOOL_unsigned_char_Array_0[1]))) && (unsigned_char_Array_0[2] == ((unsigned char) unsigned_char_Array_0[1]))
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
