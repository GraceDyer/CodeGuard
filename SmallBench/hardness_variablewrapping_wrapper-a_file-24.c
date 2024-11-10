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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch24Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{0, 1}, {1, 0}
};
float float_Array_0[2] = {
	2.25, 199.4
};
signed char signed_char_Array_0[5] = {
	-128, 0, 4, 16, 32
};
unsigned char unsigned_char_Array_0[1] = {
	100
};
unsigned short int unsigned_short_int_Array_0[2] = {
	55182, 0
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch24Wrapper_A
	if (! BOOL_unsigned_char_Array_0[1][1]) {
		BOOL_unsigned_char_Array_0[0][0] = BOOL_unsigned_char_Array_0[1][0];
	} else {
		BOOL_unsigned_char_Array_0[0][0] = ((! BOOL_unsigned_char_Array_0[0][1]) || (! (! 0)));
	}


	// From: Req4Batch24Wrapper_A
	unsigned_char_Array_0[0] = signed_char_Array_0[2];


	// From: Req5Batch24Wrapper_A
	float_Array_0[0] = float_Array_0[1];


	// From: Req6Batch24Wrapper_A
	signed_char_Array_0[0] = signed_char_Array_0[3];


	// From: Req1Batch24Wrapper_A
	if (BOOL_unsigned_char_Array_0[0][0] || (64.75f < float_Array_0[0])) {
		if (BOOL_unsigned_char_Array_0[0][0]) {
			signed_char_Array_0[4] = (signed_char_Array_0[3] - signed_char_Array_0[2]);
		} else {
			signed_char_Array_0[4] = (min ((max (signed_char_Array_0[3] , signed_char_Array_0[2])) , signed_char_Array_0[1]));
		}
	} else {
		signed_char_Array_0[4] = signed_char_Array_0[3];
	}


	// From: Req2Batch24Wrapper_A
	if ((max ((float_Array_0[0] * 127.75) , (float_Array_0[0] / 3.4))) >= float_Array_0[0]) {
		unsigned_short_int_Array_0[1] = (min ((unsigned_short_int_Array_0[0] - (22925 - signed_char_Array_0[2])) , unsigned_char_Array_0[0]));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
	BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -127);
	assume_abort_if_not(signed_char_Array_0[1] <= 126);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= 0);
	assume_abort_if_not(signed_char_Array_0[2] <= 126);
	signed_char_Array_0[3] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[3] >= -1);
	assume_abort_if_not(signed_char_Array_0[3] <= 126);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
}



void updateLastVariables() {
}

int property() {
	return ((((((BOOL_unsigned_char_Array_0[0][0] || (64.75f < float_Array_0[0])) ? (BOOL_unsigned_char_Array_0[0][0] ? (signed_char_Array_0[4] == ((signed char) (signed_char_Array_0[3] - signed_char_Array_0[2]))) : (signed_char_Array_0[4] == ((signed char) (min ((max (signed_char_Array_0[3] , signed_char_Array_0[2])) , signed_char_Array_0[1]))))) : (signed_char_Array_0[4] == ((signed char) signed_char_Array_0[3]))) && (((max ((float_Array_0[0] * 127.75) , (float_Array_0[0] / 3.4))) >= float_Array_0[0]) ? (unsigned_short_int_Array_0[1] == ((unsigned short int) (min ((unsigned_short_int_Array_0[0] - (22925 - signed_char_Array_0[2])) , unsigned_char_Array_0[0])))) : 1)) && ((! BOOL_unsigned_char_Array_0[1][1]) ? (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0])) : (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) ((! BOOL_unsigned_char_Array_0[0][1]) || (! (! 0))))))) && (unsigned_char_Array_0[0] == ((unsigned char) signed_char_Array_0[2]))) && (float_Array_0[0] == ((float) float_Array_0[1]))) && (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[3]))
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
