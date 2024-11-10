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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch88Wrapper_A.c", 13, "reach_error"); }
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
	1, 0
};
float float_Array_0[2] = {
	1000000.5, 4.5
};
signed char signed_char_Array_0[2][2] = {
	{100, -1}, {-50, -8}
};
signed long int signed_long_int_Array_0[1] = {
	64
};
signed short int signed_short_int_Array_0[1] = {
	-16
};
unsigned char unsigned_char_Array_0[2] = {
	0, 128
};
unsigned long int unsigned_long_int_Array_0[2][2] = {
	{1191097264, 25}, {1801344522, 2568920345}
};

// Calibration values

// Last'ed variables
signed short int last_1_signed_short_int_Array_0_0_ = -16;
unsigned char last_1_unsigned_char_Array_0_0_ = 0;
unsigned long int last_1_unsigned_long_int_Array_0_0__1_ = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch88Wrapper_A
	if (((last_1_signed_short_int_Array_0_0_ | last_1_unsigned_long_int_Array_0_0__1_) > last_1_unsigned_char_Array_0_0_) && BOOL_unsigned_char_Array_0[1]) {
		if (BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) {
			signed_char_Array_0[1][1] = signed_char_Array_0[0][1];
		} else {
			signed_char_Array_0[1][1] = signed_char_Array_0[0][1];
		}
	} else {
		signed_char_Array_0[1][1] = signed_char_Array_0[0][1];
	}


	// From: Req2Batch88Wrapper_A
	if (BOOL_unsigned_char_Array_0[1]) {
		signed_char_Array_0[1][0] = (max (signed_char_Array_0[0][1] , signed_char_Array_0[0][0]));
	}


	// From: Req4Batch88Wrapper_A
	if (unsigned_long_int_Array_0[0][0] <= signed_char_Array_0[1][0]) {
		signed_long_int_Array_0[0] = (abs (signed_char_Array_0[1][0]));
	}


	// From: Req5Batch88Wrapper_A
	signed_short_int_Array_0[0] = 2;


	// From: Req6Batch88Wrapper_A
	float_Array_0[0] = float_Array_0[1];


	// From: Req7Batch88Wrapper_A
	unsigned_char_Array_0[0] = unsigned_char_Array_0[1];


	// From: Req3Batch88Wrapper_A
	unsigned char stepLocal_0 = signed_char_Array_0[1][0] < signed_char_Array_0[1][1];
	if (stepLocal_0 && ((max (signed_char_Array_0[0][0] , signed_char_Array_0[1][0])) == signed_char_Array_0[0][1])) {
		unsigned_long_int_Array_0[0][1] = (unsigned_long_int_Array_0[1][1] - ((max (unsigned_long_int_Array_0[0][0] , unsigned_long_int_Array_0[1][0])) - 1u));
	} else {
		unsigned_long_int_Array_0[0][1] = (unsigned_long_int_Array_0[1][1] - unsigned_long_int_Array_0[1][0]);
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -127);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 1073741823);
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 2147483647);
	unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 1073741823);
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 2147483647);
	unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 4294967294);
}



void updateLastVariables() {
	last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
	last_1_unsigned_char_Array_0_0_ = unsigned_char_Array_0[0];
	last_1_unsigned_long_int_Array_0_0__1_ = unsigned_long_int_Array_0[0][1];
}

int property() {
	return (((((((((last_1_signed_short_int_Array_0_0_ | last_1_unsigned_long_int_Array_0_0__1_) > last_1_unsigned_char_Array_0_0_) && BOOL_unsigned_char_Array_0[1]) ? ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? (signed_char_Array_0[1][1] == ((signed char) signed_char_Array_0[0][1])) : (signed_char_Array_0[1][1] == ((signed char) signed_char_Array_0[0][1]))) : (signed_char_Array_0[1][1] == ((signed char) signed_char_Array_0[0][1]))) && (BOOL_unsigned_char_Array_0[1] ? (signed_char_Array_0[1][0] == ((signed char) (max (signed_char_Array_0[0][1] , signed_char_Array_0[0][0])))) : 1)) && (((signed_char_Array_0[1][0] < signed_char_Array_0[1][1]) && ((max (signed_char_Array_0[0][0] , signed_char_Array_0[1][0])) == signed_char_Array_0[0][1])) ? (unsigned_long_int_Array_0[0][1] == ((unsigned long int) (unsigned_long_int_Array_0[1][1] - ((max (unsigned_long_int_Array_0[0][0] , unsigned_long_int_Array_0[1][0])) - 1u)))) : (unsigned_long_int_Array_0[0][1] == ((unsigned long int) (unsigned_long_int_Array_0[1][1] - unsigned_long_int_Array_0[1][0]))))) && ((unsigned_long_int_Array_0[0][0] <= signed_char_Array_0[1][0]) ? (signed_long_int_Array_0[0] == ((signed long int) (abs (signed_char_Array_0[1][0])))) : 1)) && (signed_short_int_Array_0[0] == ((signed short int) 2))) && (float_Array_0[0] == ((float) float_Array_0[1]))) && (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1]))
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
