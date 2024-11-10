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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch68Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[1] = {
	0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
double double_Array_0[3] = {
	999.8, 25.5, 9999999999999.729
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
float float_Array_0[3] = {
	32.375, 16.8, 64.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed long int signed_long_int_Array_0[2][2] = {
	{10, 5}, {-10, 32}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
signed short int signed_short_int_Array_0[2][2] = {
	{-25, -64}, {-8, 0}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[1][1]);
unsigned long int unsigned_long_int_Array_0[2] = {
	0, 8
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0__1_ = 5;
signed short int last_1_signed_short_int_Array_0_0__0_ = -25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch68Wrapper_AP
	signed long int stepLocal_2 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + last_1_signed_long_int_Array_0_0__1_;
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if (last_1_signed_short_int_Array_0_0__0_ <= stepLocal_2) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)));
		} else {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer));
		}
	} else {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer));
	}


	// From: Req4Batch68Wrapper_AP
	(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)));


	// From: Req5Batch68Wrapper_AP
	(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));


	// From: Req6Batch68Wrapper_AP
	(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));


	// From: Req7Batch68Wrapper_AP
	(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer));


	// From: Req2Batch68Wrapper_AP
	signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer));
	if (stepLocal_1 != (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) {
		(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)));
	}


	// From: Req1Batch68Wrapper_AP
	unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
	if (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) >= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
		if (stepLocal_0 >= ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) = (abs ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))));
		}
	} else {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) = (max ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))));
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854765600e+12F && double_Array_0[2] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0][0] != 0);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 16383);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= -8191);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 8192);
	signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][1] >= -8191);
	assume_abort_if_not(signed_short_int_Array_0[1][1] <= 8191);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
}



void updateLastVariables() {
	last_1_signed_long_int_Array_0_0__1_ = signed_long_int_Array_0[0][1];
	last_1_signed_short_int_Array_0_0__0_ = signed_short_int_Array_0[0][0];
}

int property() {
	return (((((((((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) >= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) >= ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) == ((signed long int) (abs ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))) : 1) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) == ((signed long int) (max ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) : 1)) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) != (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((last_1_signed_short_int_Array_0_0__0_ <= ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + last_1_signed_long_int_Array_0_0__1_)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))))
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
