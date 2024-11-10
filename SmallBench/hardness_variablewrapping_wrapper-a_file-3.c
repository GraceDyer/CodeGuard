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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch3Wrapper_A.c", 13, "reach_error"); }
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
	{1, 0}, {0, 0}
};
double double_Array_0[5] = {
	127.5, 15.75, 8.5, -0.5, 5.25
};
signed long int signed_long_int_Array_0[5] = {
	-5, -100, 500, -5, -64
};

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_0__0_ = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch3Wrapper_A
	unsigned char stepLocal_0 = last_1_BOOL_unsigned_char_Array_0_0__0_;
	if (! last_1_BOOL_unsigned_char_Array_0_0__0_) {
		if (last_1_BOOL_unsigned_char_Array_0_0__0_ && stepLocal_0) {
			BOOL_unsigned_char_Array_0[1][1] = (BOOL_unsigned_char_Array_0[0][1] || BOOL_unsigned_char_Array_0[1][0]);
		}
	}


	// From: Req3Batch3Wrapper_A
	signed long int stepLocal_2 = signed_long_int_Array_0[3];
	signed long int stepLocal_1 = signed_long_int_Array_0[1];
	if (signed_long_int_Array_0[2] <= stepLocal_2) {
		if (stepLocal_1 >= signed_long_int_Array_0[0]) {
			BOOL_unsigned_char_Array_0[0][0] = (! BOOL_unsigned_char_Array_0[1][0]);
		} else {
			BOOL_unsigned_char_Array_0[0][0] = (BOOL_unsigned_char_Array_0[1][1] || (! BOOL_unsigned_char_Array_0[1][0]));
		}
	}


	// From: Req2Batch3Wrapper_A
	if (! BOOL_unsigned_char_Array_0[0][0]) {
		signed_long_int_Array_0[4] = (signed_long_int_Array_0[3] + signed_long_int_Array_0[2]);
	} else {
		signed_long_int_Array_0[4] = (((abs (signed_long_int_Array_0[0])) + signed_long_int_Array_0[1]) + signed_long_int_Array_0[3]);
	}


	// From: Req4Batch3Wrapper_A
	if (BOOL_unsigned_char_Array_0[0][1]) {
		double_Array_0[0] = (min (((max (double_Array_0[1] , double_Array_0[3])) + double_Array_0[4]) , (abs (min (3.5 , double_Array_0[2])))));
	} else {
		double_Array_0[0] = double_Array_0[4];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -461168.6018427382800e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427382800e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -922337.2036854765600e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854765600e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= -461168.6018427382800e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 4611686.018427382800e+12F && double_Array_0[3] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= -461168.6018427382800e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 4611686.018427382800e+12F && double_Array_0[4] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -536870912);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 536870912);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -536870911);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 536870911);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 1073741823);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 1073741823);
}



void updateLastVariables() {
	last_1_BOOL_unsigned_char_Array_0_0__0_ = BOOL_unsigned_char_Array_0[0][0];
}

int property() {
	return ((((! last_1_BOOL_unsigned_char_Array_0_0__0_) ? ((last_1_BOOL_unsigned_char_Array_0_0__0_ && last_1_BOOL_unsigned_char_Array_0_0__0_) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (BOOL_unsigned_char_Array_0[0][1] || BOOL_unsigned_char_Array_0[1][0]))) : 1) : 1) && ((! BOOL_unsigned_char_Array_0[0][0]) ? (signed_long_int_Array_0[4] == ((signed long int) (signed_long_int_Array_0[3] + signed_long_int_Array_0[2]))) : (signed_long_int_Array_0[4] == ((signed long int) (((abs (signed_long_int_Array_0[0])) + signed_long_int_Array_0[1]) + signed_long_int_Array_0[3]))))) && ((signed_long_int_Array_0[2] <= signed_long_int_Array_0[3]) ? ((signed_long_int_Array_0[1] >= signed_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) (! BOOL_unsigned_char_Array_0[1][0]))) : (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) (BOOL_unsigned_char_Array_0[1][1] || (! BOOL_unsigned_char_Array_0[1][0]))))) : 1)) && (BOOL_unsigned_char_Array_0[0][1] ? (double_Array_0[0] == ((double) (min (((max (double_Array_0[1] , double_Array_0[3])) + double_Array_0[4]) , (abs (min (3.5 , double_Array_0[2]))))))) : (double_Array_0[0] == ((double) double_Array_0[4])))
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
