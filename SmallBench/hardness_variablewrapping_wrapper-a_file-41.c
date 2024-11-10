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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch41Wrapper_A.c", 13, "reach_error"); }
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
	0, 0
};
double double_Array_0[2] = {
	8.5, 999999999999.6
};
signed char signed_char_Array_0[2][2] = {
	{5, -8}, {-1, -16}
};
signed long int signed_long_int_Array_0[1] = {
	10
};
unsigned char unsigned_char_Array_0[2] = {
	16, 64
};
unsigned short int unsigned_short_int_Array_0[1] = {
	2
};

// Calibration values

// Last'ed variables
signed char last_1_signed_char_Array_0_1__1_ = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch41Wrapper_A
	if (BOOL_unsigned_char_Array_0[1] && (last_1_signed_char_Array_0_1__1_ <= last_1_signed_char_Array_0_1__1_)) {
		unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
	}


	// From: Req3Batch41Wrapper_A
	double_Array_0[0] = (double_Array_0[1] - 8.3);


	// From: Req4Batch41Wrapper_A
	unsigned char stepLocal_1 = double_Array_0[1] >= double_Array_0[0];
	if (BOOL_unsigned_char_Array_0[1] && stepLocal_1) {
		signed_long_int_Array_0[0] = unsigned_char_Array_0[0];
	} else {
		signed_long_int_Array_0[0] = signed_char_Array_0[1][0];
	}


	// From: Req2Batch41Wrapper_A
	if (BOOL_unsigned_char_Array_0[1]) {
		unsigned_short_int_Array_0[0] = (unsigned_char_Array_0[0] + unsigned_char_Array_0[0]);
	} else {
		if ((unsigned_char_Array_0[0] > signed_long_int_Array_0[0]) || BOOL_unsigned_char_Array_0[0]) {
			unsigned_short_int_Array_0[0] = unsigned_char_Array_0[0];
		} else {
			unsigned_short_int_Array_0[0] = unsigned_char_Array_0[0];
		}
	}


	// From: Req1Batch41Wrapper_A
	unsigned long int stepLocal_0 = (unsigned_short_int_Array_0[0] & 0u) * unsigned_char_Array_0[0];
	if (stepLocal_0 > unsigned_short_int_Array_0[0]) {
		if (BOOL_unsigned_char_Array_0[1]) {
			signed_char_Array_0[1][1] = ((16 + signed_char_Array_0[0][1]) + signed_char_Array_0[0][0]);
		} else {
			signed_char_Array_0[1][1] = (abs (signed_char_Array_0[0][1]));
		}
	} else {
		signed_char_Array_0[1][1] = signed_char_Array_0[0][1];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= -63);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 63);
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= -128);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 127);
	assume_abort_if_not(signed_char_Array_0[1][0] != 0);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -31);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 31);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
}



void updateLastVariables() {
	last_1_signed_char_Array_0_1__1_ = signed_char_Array_0[1][1];
}

int property() {
	return (((((((unsigned_short_int_Array_0[0] & 0u) * unsigned_char_Array_0[0]) > unsigned_short_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[1] ? (signed_char_Array_0[1][1] == ((signed char) ((16 + signed_char_Array_0[0][1]) + signed_char_Array_0[0][0]))) : (signed_char_Array_0[1][1] == ((signed char) (abs (signed_char_Array_0[0][1]))))) : (signed_char_Array_0[1][1] == ((signed char) signed_char_Array_0[0][1]))) && (BOOL_unsigned_char_Array_0[1] ? (unsigned_short_int_Array_0[0] == ((unsigned short int) (unsigned_char_Array_0[0] + unsigned_char_Array_0[0]))) : (((unsigned_char_Array_0[0] > signed_long_int_Array_0[0]) || BOOL_unsigned_char_Array_0[0]) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[0])) : (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[0]))))) && (double_Array_0[0] == ((double) (double_Array_0[1] - 8.3)))) && ((BOOL_unsigned_char_Array_0[1] && (double_Array_0[1] >= double_Array_0[0])) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[0])) : (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[1][0])))) && ((BOOL_unsigned_char_Array_0[1] && (last_1_signed_char_Array_0_1__1_ <= last_1_signed_char_Array_0_1__1_)) ? (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1])) : 1)
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
