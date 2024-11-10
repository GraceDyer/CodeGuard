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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch37PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 256;
unsigned short int var_1_2 = 51640;
unsigned short int var_1_3 = 5;
float var_1_7 = 128.8;
unsigned char var_1_8 = 2;
float var_1_9 = 256.5;
float var_1_10 = 7.25;
signed char var_1_11 = 64;
signed char var_1_12 = -16;
double var_1_13 = 0.9;
unsigned char var_1_14 = 1;
double var_1_15 = 0.0;
double var_1_16 = 1.275;
unsigned short int var_1_17 = 8;
unsigned short int var_1_18 = 35331;
signed char var_1_19 = -128;
double var_1_20 = 0.0;
double var_1_21 = 0.0;
signed char var_1_22 = -8;
signed char var_1_23 = 50;
unsigned short int var_1_24 = 0;
signed long int var_1_25 = -1;
signed char var_1_26 = 5;
signed long int var_1_27 = 32;
unsigned char var_1_28 = 64;
signed char var_1_29 = -16;
unsigned char var_1_30 = 50;
unsigned char var_1_31 = 128;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned short int var_1_41 = 4;
signed short int var_1_42 = 16;
signed short int var_1_43 = 5;
signed char var_1_44 = 64;
signed char var_1_45 = 10;
signed char var_1_46 = -64;
unsigned short int var_1_47 = 1;
unsigned short int var_1_48 = 51108;
unsigned short int var_1_49 = 29509;
unsigned short int var_1_50 = 200;
unsigned short int var_1_51 = 1;
unsigned char var_1_52 = 0;
float var_1_53 = 32.8;
float var_1_54 = 8.9;
double var_1_55 = 10.2;
double var_1_56 = 0.5;
double var_1_57 = 5.5;
double var_1_58 = 2.25;
double var_1_59 = 199.6;
double var_1_60 = 25.5;
double var_1_61 = 9.4;
double var_1_62 = 0.5;
signed short int var_1_63 = -256;
unsigned char var_1_64 = 10;
signed char var_1_65 = 32;
float var_1_66 = 31.75;
signed long int var_1_67 = -5;
signed char var_1_68 = 2;
signed char var_1_69 = 1;
float var_1_70 = 2.6;
float var_1_71 = 0.0;
unsigned char var_1_72 = 16;
unsigned long int var_1_73 = 2;
signed long int var_1_74 = -16;
unsigned long int var_1_75 = 5;
unsigned long int var_1_77 = 256;
unsigned long int var_1_78 = 3565938610;
signed short int var_1_79 = -4;
unsigned char var_1_80 = 0;
unsigned char var_1_81 = 100;
unsigned char var_1_82 = 64;
unsigned long int var_1_83 = 128;
signed long int var_1_84 = -256;
double var_1_85 = 7.875;
double var_1_86 = 8.5;
unsigned char var_1_87 = 1;
signed short int var_1_88 = -4;
unsigned long int var_1_89 = 256;
signed char var_1_90 = 8;
signed char var_1_91 = -128;
float var_1_92 = 31.1;
double var_1_93 = 255.213;
double var_1_94 = 4.25;
unsigned char var_1_95 = 2;

// Calibration values

// Last'ed variables
float last_1_var_1_10 = 7.25;
double last_1_var_1_13 = 0.9;
unsigned short int last_1_var_1_17 = 8;
signed char last_1_var_1_19 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((~ (- var_1_24)) < var_1_25) {
		if (var_1_25 < -64) {
			var_1_23 = var_1_26;
		}
	}


	// From: CodeObject2
	if (var_1_24 > var_1_25) {
		var_1_27 = (max (var_1_24 , var_1_23));
	}


	// From: CodeObject3
	if (var_1_26 == (abs (abs (var_1_29)))) {
		var_1_28 = (max ((abs (var_1_30)) , (var_1_31 - var_1_32)));
	} else {
		if (var_1_27 >= var_1_26) {
			var_1_28 = (max ((max ((min (var_1_31 , var_1_32)) , var_1_30)) , var_1_33));
		} else {
			var_1_28 = (var_1_32 + var_1_34);
		}
	}


	// From: CodeObject4
	if (var_1_36) {
		if ((var_1_34 - 100) >= var_1_23) {
			var_1_35 = var_1_37;
		}
	} else {
		var_1_35 = (var_1_37 && (var_1_38 && (var_1_39 || var_1_40)));
	}


	// From: CodeObject5
	if ((~ var_1_29) != var_1_34) {
		if (var_1_23 > var_1_24) {
			if ((var_1_27 >> (max (var_1_42 , var_1_43))) >= var_1_25) {
				if (var_1_44 <= ((var_1_34 ^ 2) % (max (var_1_45 , var_1_46)))) {
					var_1_41 = (var_1_34 + (abs (var_1_43)));
				}
			}
		} else {
			var_1_41 = (abs (var_1_42));
		}
	} else {
		if (var_1_29 > var_1_34) {
			var_1_41 = var_1_32;
		} else {
			var_1_41 = var_1_34;
		}
	}


	// From: CodeObject6
	if ((2647880377u - var_1_32) == var_1_34) {
		var_1_47 = (var_1_48 - (var_1_49 - var_1_30));
	} else {
		var_1_47 = (abs (max (var_1_50 , var_1_32)));
	}


	// From: CodeObject7
	if ((~ (abs (var_1_33))) >= var_1_45) {
		var_1_51 = (abs (var_1_50));
	}


	// From: CodeObject8
	if (var_1_27 > (abs (var_1_42))) {
		var_1_52 = (! var_1_37);
	}


	// From: CodeObject9
	if ((var_1_43 ^ var_1_48) >= var_1_29) {
		var_1_53 = (abs (var_1_54));
	} else {
		var_1_53 = (abs (var_1_54));
	}


	// From: CodeObject10
	if (var_1_37) {
		var_1_55 = (var_1_56 - var_1_57);
	} else {
		var_1_55 = ((max (var_1_57 , var_1_56)) - 1.000000000004E11);
	}


	// From: CodeObject11
	if ((var_1_48 - (abs (var_1_34))) > var_1_51) {
		var_1_58 = var_1_56;
	} else {
		var_1_58 = ((max ((var_1_59 - var_1_60) , var_1_61)) + var_1_62);
	}


	// From: CodeObject12
	if (var_1_38) {
		if (256u != (max ((~ var_1_31) , var_1_24))) {
			var_1_63 = var_1_23;
		}
	} else {
		var_1_63 = var_1_23;
	}


	// From: CodeObject13
	if (var_1_23 >= (var_1_49 | var_1_65)) {
		var_1_64 = (min ((max ((abs (var_1_32)) , var_1_34)) , (var_1_31 - var_1_43)));
	}


	// From: CodeObject14
	if (var_1_37) {
		if (var_1_41 > 10) {
			var_1_66 = (abs (abs (var_1_62)));
		} else {
			var_1_66 = 10.8f;
		}
	}


	// From: CodeObject15
	if (var_1_39 || ((var_1_45 / var_1_31) <= (var_1_29 % var_1_46))) {
		var_1_67 = (min (var_1_49 , var_1_34));
	}


	// From: CodeObject16
	if (var_1_45 <= (var_1_29 & var_1_27)) {
		if ((~ var_1_69) > (abs (var_1_48))) {
			var_1_68 = (abs (var_1_42));
		}
	}


	// From: CodeObject17
	if ((abs (var_1_32)) <= var_1_49) {
		var_1_70 = (max (((abs (var_1_60)) - (var_1_71 - var_1_59)) , var_1_61));
	}


	// From: CodeObject18
	if (var_1_31 <= var_1_44) {
		if (var_1_42 >= var_1_31) {
			if (var_1_39 || (var_1_67 >= (abs (var_1_48)))) {
				var_1_72 = (min (var_1_30 , var_1_33));
			} else {
				var_1_72 = (max ((var_1_34 + 32) , var_1_32));
			}
		} else {
			var_1_72 = (abs (var_1_34));
		}
	} else {
		var_1_72 = ((abs (var_1_42)) + var_1_34);
	}


	// From: CodeObject19
	if (var_1_27 > var_1_74) {
		var_1_73 = (abs (var_1_75));
	} else {
		if (var_1_52) {
			if (var_1_74 < var_1_42) {
				if (var_1_77 <= var_1_48) {
					var_1_73 = (var_1_78 - ((abs (1855983405u)) - var_1_43));
				}
			}
		} else {
			var_1_73 = (abs (var_1_34));
		}
	}


	// From: CodeObject20
	if ((var_1_33 & var_1_63) < var_1_47) {
		var_1_79 = ((abs (var_1_30)) - var_1_28);
	}


	// From: CodeObject21
	if (-32 <= ((var_1_67 % var_1_48) & var_1_41)) {
		var_1_80 = (((var_1_81 - 2) + var_1_82) - var_1_32);
	}


	// From: CodeObject22
	if ((var_1_42 / (abs (var_1_45))) > var_1_64) {
		var_1_83 = (abs (max (var_1_30 , (max (var_1_72 , var_1_82)))));
	} else {
		var_1_83 = (abs (var_1_75));
	}


	// From: CodeObject23
	var_1_84 = (max ((var_1_42 - (var_1_32 + var_1_48)) , var_1_45));


	// From: CodeObject24
	if (var_1_62 <= (abs (- var_1_86))) {
		var_1_85 = (max (var_1_54 , var_1_57));
	}


	// From: CodeObject25
	var_1_87 = (! (var_1_40 || var_1_39));


	// From: CodeObject26
	if ((var_1_63 % var_1_31) > var_1_64) {
		if (var_1_38) {
			var_1_88 = (max (var_1_65 , var_1_26));
		}
	}


	// From: CodeObject27
	if (var_1_90 >= ((max (var_1_81 , var_1_34)) - 32)) {
		var_1_89 = (abs (abs (var_1_30)));
	} else {
		var_1_89 = (abs (var_1_50));
	}


	// From: CodeObject28
	if (var_1_39) {
		var_1_91 = (abs (100));
	}


	// From: CodeObject29
	if (var_1_52) {
		var_1_92 = var_1_59;
	}


	// From: CodeObject30
	if (var_1_37) {
		var_1_93 = 3.2;
	} else {
		var_1_93 = var_1_56;
	}


	// From: CodeObject31
	if ((var_1_69 & (var_1_95 % var_1_31)) <= (abs (var_1_88))) {
		if ((var_1_92 != var_1_66) && (var_1_28 < var_1_91)) {
			var_1_94 = var_1_71;
		}
	}


	// From: Req5Batch37PS_CN_250
	signed long int stepLocal_2 = var_1_3 + last_1_var_1_19;
	if (var_1_14) {
		if (last_1_var_1_13 <= var_1_9) {
			var_1_13 = var_1_9;
		} else {
			if ((min (last_1_var_1_17 , (var_1_2 * last_1_var_1_17))) == stepLocal_2) {
				var_1_13 = 8.75;
			} else {
				var_1_13 = (16.5 + ((var_1_15 - 49.35) - var_1_16));
			}
		}
	}


	// From: Req7Batch37PS_CN_250
	if (var_1_13 > ((var_1_20 - var_1_15) - (var_1_21 - var_1_16))) {
		var_1_19 = (max (var_1_12 , var_1_22));
	} else {
		var_1_19 = var_1_12;
	}


	// From: Req6Batch37PS_CN_250
	var_1_17 = (var_1_18 - var_1_3);


	// From: Req3Batch37PS_CN_250
	if ((var_1_17 >= var_1_17) || (var_1_9 > last_1_var_1_10)) {
		var_1_10 = var_1_9;
	}


	// From: Req4Batch37PS_CN_250
	if (var_1_10 >= var_1_10) {
		if (var_1_9 < var_1_10) {
			var_1_11 = var_1_12;
		}
	}


	// From: Req1Batch37PS_CN_250
	if ((var_1_2 - var_1_3) > var_1_17) {
		var_1_1 = (min ((min ((var_1_11 + var_1_3) , var_1_2)) , var_1_17));
	} else {
		var_1_1 = 0;
	}


	// From: Req2Batch37PS_CN_250
	signed long int stepLocal_1 = var_1_1 / (min (2 , var_1_2));
	unsigned short int stepLocal_0 = var_1_3;
	if ((var_1_19 / var_1_8) < stepLocal_1) {
		if (var_1_1 >= stepLocal_0) {
			var_1_7 = 0.75f;
		} else {
			var_1_7 = var_1_9;
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 32767);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854765600e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 2305843.009213691390e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 32767);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 4611686.018427387900e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 4611686.018427387900e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -127);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -127);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 127);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 32);
	var_1_43 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -128);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -128);
	assume_abort_if_not(var_1_45 <= 127);
	assume_abort_if_not(var_1_45 != 0);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -128);
	assume_abort_if_not(var_1_46 <= 127);
	assume_abort_if_not(var_1_46 != 0);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65534);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 16383);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_50 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 65534);
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -922337.2036854765600e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854765600e+12F && var_1_54 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 0.0F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854765600e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= -461168.6018427382800e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 4611686.018427382800e+12F && var_1_62 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -128);
	assume_abort_if_not(var_1_65 <= 127);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -128);
	assume_abort_if_not(var_1_69 <= 127);
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= 4611686.018427382800e+12F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 9223372.036854765600e+12F && var_1_71 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_74 >= -2147483648);
	assume_abort_if_not(var_1_74 <= 2147483647);
	var_1_75 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 4294967294);
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 4294967295);
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 2147483647);
	assume_abort_if_not(var_1_78 <= 4294967294);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 95);
	assume_abort_if_not(var_1_81 <= 127);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 64);
	assume_abort_if_not(var_1_82 <= 127);
	var_1_86 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_86 >= -922337.2036854776000e+13F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 9223372.036854776000e+12F && var_1_86 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_90 >= -128);
	assume_abort_if_not(var_1_90 <= 127);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 255);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_19 = var_1_19;
}

int property() {
	return ((((((((var_1_2 - var_1_3) > var_1_17) ? (var_1_1 == ((signed long int) (min ((min ((var_1_11 + var_1_3) , var_1_2)) , var_1_17)))) : (var_1_1 == ((signed long int) 0))) && (((var_1_19 / var_1_8) < (var_1_1 / (min (2 , var_1_2)))) ? ((var_1_1 >= var_1_3) ? (var_1_7 == ((float) 0.75f)) : (var_1_7 == ((float) var_1_9))) : 1)) && (((var_1_17 >= var_1_17) || (var_1_9 > last_1_var_1_10)) ? (var_1_10 == ((float) var_1_9)) : 1)) && ((var_1_10 >= var_1_10) ? ((var_1_9 < var_1_10) ? (var_1_11 == ((signed char) var_1_12)) : 1) : 1)) && (var_1_14 ? ((last_1_var_1_13 <= var_1_9) ? (var_1_13 == ((double) var_1_9)) : (((min (last_1_var_1_17 , (var_1_2 * last_1_var_1_17))) == (var_1_3 + last_1_var_1_19)) ? (var_1_13 == ((double) 8.75)) : (var_1_13 == ((double) (16.5 + ((var_1_15 - 49.35) - var_1_16)))))) : 1)) && (var_1_17 == ((unsigned short int) (var_1_18 - var_1_3)))) && ((var_1_13 > ((var_1_20 - var_1_15) - (var_1_21 - var_1_16))) ? (var_1_19 == ((signed char) (max (var_1_12 , var_1_22)))) : (var_1_19 == ((signed char) var_1_12)))
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
