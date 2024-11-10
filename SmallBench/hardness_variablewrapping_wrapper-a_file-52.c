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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch52Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[5] = {
	0, 1, 0, 0, 1
};
double double_Array_0[5] = {
	0.0, 31.1, 25.7, 256.5, 256.6
};
signed short int signed_short_int_Array_0[3] = {
	-1, 32, -4
};
unsigned char unsigned_char_Array_0[1] = {
	16
};
unsigned long int unsigned_long_int_Array_0[1] = {
	8
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch52Wrapper_A
	signed short int stepLocal_0 = signed_short_int_Array_0[1];
	if (stepLocal_0 > ((signed_short_int_Array_0[0] / -256) * 32)) {
		if (BOOL_unsigned_char_Array_0[3]) {
			BOOL_unsigned_char_Array_0[4] = (! (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1]));
		} else {
			BOOL_unsigned_char_Array_0[4] = BOOL_unsigned_char_Array_0[1];
		}
	} else {
		BOOL_unsigned_char_Array_0[4] = BOOL_unsigned_char_Array_0[0];
	}


	// From: Req3Batch52Wrapper_A
	if (BOOL_unsigned_char_Array_0[2]) {
		double_Array_0[2] = (double_Array_0[3] - (max ((double_Array_0[0] - double_Array_0[1]) , double_Array_0[4])));
	}


	// From: Req1Batch52Wrapper_A
	if (double_Array_0[2] < 63.75) {
		signed_short_int_Array_0[2] = (10 - signed_short_int_Array_0[1]);
	} else {
		signed_short_int_Array_0[2] = (4 + signed_short_int_Array_0[0]);
	}


	// From: Req4Batch52Wrapper_A
	if (! (double_Array_0[1] < (127.125 / double_Array_0[0]))) {
		if (signed_short_int_Array_0[2] <= ((signed_short_int_Array_0[0] * signed_short_int_Array_0[1]) + (-2 << unsigned_char_Array_0[0]))) {
			unsigned_long_int_Array_0[0] = signed_short_int_Array_0[1];
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 4611686.018427382800e+12F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427382800e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854765600e+12F && double_Array_0[3] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= 0.0F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854765600e+12F && double_Array_0[4] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 30);
}



void updateLastVariables() {
}

int property() {
	return ((((double_Array_0[2] < 63.75) ? (signed_short_int_Array_0[2] == ((signed short int) (10 - signed_short_int_Array_0[1]))) : (signed_short_int_Array_0[2] == ((signed short int) (4 + signed_short_int_Array_0[0])))) && ((signed_short_int_Array_0[1] > ((signed_short_int_Array_0[0] / -256) * 32)) ? (BOOL_unsigned_char_Array_0[3] ? (BOOL_unsigned_char_Array_0[4] == ((unsigned char) (! (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1])))) : (BOOL_unsigned_char_Array_0[4] == ((unsigned char) BOOL_unsigned_char_Array_0[1]))) : (BOOL_unsigned_char_Array_0[4] == ((unsigned char) BOOL_unsigned_char_Array_0[0])))) && (BOOL_unsigned_char_Array_0[2] ? (double_Array_0[2] == ((double) (double_Array_0[3] - (max ((double_Array_0[0] - double_Array_0[1]) , double_Array_0[4]))))) : 1)) && ((! (double_Array_0[1] < (127.125 / double_Array_0[0]))) ? ((signed_short_int_Array_0[2] <= ((signed_short_int_Array_0[0] * signed_short_int_Array_0[1]) + (-2 << unsigned_char_Array_0[0]))) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) signed_short_int_Array_0[1])) : 1) : 1)
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
