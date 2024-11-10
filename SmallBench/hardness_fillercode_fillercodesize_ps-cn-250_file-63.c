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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch63PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 64;
unsigned char var_1_7 = 0;
unsigned short int var_1_11 = 500;
unsigned char var_1_13 = 64;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 8;
double var_1_17 = 7.5;
double var_1_18 = 31.125;
double var_1_19 = 10.5;
double var_1_20 = 0.0;
double var_1_21 = 16.75;
double var_1_22 = 2.5;
double var_1_23 = 64.5;
signed long int var_1_24 = 10;
signed char var_1_26 = 16;
signed char var_1_27 = 4;
signed char var_1_28 = -10;
float var_1_29 = 63.794;
unsigned short int var_1_30 = 1;
signed long int var_1_31 = -2;
unsigned char var_1_32 = 64;
unsigned char var_1_33 = 8;
unsigned long int var_1_34 = 128;
unsigned long int var_1_35 = 50;
unsigned long int var_1_36 = 16;
unsigned long int var_1_37 = 4;
unsigned char var_1_38 = 8;
unsigned char var_1_39 = 10;
double var_1_40 = 8.35;
double var_1_41 = 63.75;
double var_1_42 = -0.125;
double var_1_43 = -0.8;
double var_1_44 = -0.5;
unsigned short int var_1_45 = 50;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 5;
unsigned char var_1_48 = 8;
unsigned char var_1_49 = 2;
float var_1_50 = 7.125;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
double var_1_57 = 128.2;
signed char var_1_58 = 8;
signed char var_1_59 = 0;
signed char var_1_60 = 1;
signed char var_1_61 = 32;
signed char var_1_62 = 25;
signed long int var_1_63 = 0;
unsigned short int var_1_64 = 10;
unsigned short int var_1_65 = 38877;
signed short int var_1_66 = -128;
signed char var_1_67 = 100;
signed char var_1_68 = -64;
unsigned char var_1_69 = 1;
unsigned short int var_1_70 = 256;
float var_1_71 = 1.95;
double var_1_72 = 8.5;
signed short int var_1_73 = 64;
signed short int var_1_74 = -10;
double var_1_75 = 7.75;
double var_1_76 = 3.25;
double var_1_77 = 16.5;
unsigned long int var_1_78 = 256;
signed short int var_1_79 = 10;
unsigned char var_1_80 = 1;
unsigned char var_1_81 = 0;
signed long int var_1_82 = -128;
unsigned char var_1_83 = 0;
unsigned short int var_1_84 = 4;
unsigned char var_1_85 = 0;
float var_1_86 = 0.8;
unsigned char var_1_87 = 0;
unsigned char var_1_88 = 1;
unsigned char var_1_89 = 0;
unsigned char var_1_91 = 1;
signed long int var_1_92 = -4;
float var_1_93 = 128.6;
unsigned short int var_1_94 = 1;
unsigned long int var_1_95 = 64;
signed long int var_1_96 = 2;
unsigned long int var_1_97 = 2531679947;
float var_1_98 = 0.85;
signed short int var_1_99 = -128;
signed char var_1_100 = -1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 64;
unsigned char last_1_var_1_13 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_34 ^ var_1_35) < (var_1_36 | var_1_37)) {
		var_1_33 = (max (var_1_38 , var_1_39));
	} else {
		var_1_33 = (abs (min (var_1_39 , var_1_38)));
	}


	// From: CodeObject2
	if ((-32 & var_1_38) > var_1_35) {
		var_1_40 = (max (var_1_41 , var_1_42));
	} else {
		var_1_40 = (var_1_43 + var_1_44);
	}


	// From: CodeObject3
	if (var_1_44 >= (abs (var_1_41))) {
		if (var_1_36 > var_1_34) {
			if (var_1_33 < var_1_34) {
				var_1_45 = var_1_39;
			}
		}
	} else {
		if (var_1_44 <= (var_1_40 + var_1_43)) {
			var_1_45 = var_1_33;
		}
	}


	// From: CodeObject4
	if (var_1_44 > (var_1_43 + var_1_41)) {
		if (var_1_40 > var_1_42) {
			var_1_46 = (128 - (min (var_1_47 , var_1_48)));
		} else {
			var_1_46 = 128;
		}
	}


	// From: CodeObject5
	var_1_49 = (abs (var_1_39));


	// From: CodeObject6
	var_1_50 = ((abs (var_1_44)) + var_1_43);


	// From: CodeObject7
	if (var_1_40 > (var_1_42 + var_1_44)) {
		if (! (var_1_35 < (var_1_34 & var_1_37))) {
			var_1_51 = (var_1_53 && (var_1_54 && (var_1_52 || var_1_55)));
		} else {
			var_1_51 = (! var_1_56);
		}
	}


	// From: CodeObject8
	if (var_1_39 <= var_1_49) {
		if (var_1_35 <= var_1_48) {
			var_1_57 = (abs (var_1_43));
		}
	} else {
		var_1_57 = (min (32.5 , var_1_42));
	}


	// From: CodeObject9
	if (! var_1_51) {
		if (var_1_40 <= var_1_42) {
			var_1_58 = (abs (var_1_59));
		}
	} else {
		var_1_58 = (((min (var_1_60 , var_1_61)) + (32 - 4)) - var_1_62);
	}


	// From: CodeObject10
	if (var_1_53) {
		var_1_63 = (max (var_1_62 , (min (var_1_47 , 4))));
	}


	// From: CodeObject11
	if (var_1_55) {
		if (var_1_47 < var_1_33) {
			var_1_64 = (max (var_1_61 , var_1_47));
		} else {
			var_1_64 = (var_1_65 - var_1_62);
		}
	}


	// From: CodeObject12
	if (var_1_47 < (var_1_45 * (abs (var_1_46)))) {
		if (((var_1_46 ^ -1000) & var_1_59) > var_1_62) {
			var_1_66 = ((var_1_60 - 25) + (min (var_1_49 , var_1_48)));
		}
	} else {
		var_1_66 = var_1_33;
	}


	// From: CodeObject13
	if (1.000000000001E11 < (var_1_50 / 0.25)) {
		var_1_67 = (min ((max (var_1_60 , var_1_59)) , (abs (var_1_62))));
	}


	// From: CodeObject14
	if (var_1_69) {
		var_1_68 = var_1_60;
	}


	// From: CodeObject15
	if (var_1_53) {
		if (((-100 + var_1_68) * var_1_65) > (max (var_1_35 , var_1_33))) {
			var_1_70 = (abs (var_1_49));
		}
	}


	// From: CodeObject16
	var_1_71 = (max (var_1_41 , var_1_42));


	// From: CodeObject17
	if (var_1_46 > var_1_37) {
		if (var_1_65 >= var_1_70) {
			var_1_72 = (abs (max (var_1_42 , var_1_44)));
		}
	}


	// From: CodeObject18
	if ((var_1_70 / var_1_74) >= (~ var_1_66)) {
		var_1_73 = (abs (var_1_39));
	}


	// From: CodeObject19
	if (var_1_51 || (127.5f > var_1_41)) {
		var_1_75 = (max (var_1_44 , var_1_42));
	} else {
		if ((abs (var_1_76 - var_1_77)) != (- var_1_41)) {
			var_1_75 = (var_1_44 + var_1_43);
		} else {
			var_1_75 = (var_1_44 + var_1_43);
		}
	}


	// From: CodeObject20
	if (var_1_69) {
		var_1_78 = var_1_48;
	}


	// From: CodeObject21
	if (var_1_67 >= (var_1_37 * (var_1_34 ^ var_1_78))) {
		var_1_79 = (min ((var_1_39 - var_1_46) , 256));
	}


	// From: CodeObject22
	if (! (var_1_36 < 128u)) {
		var_1_80 = (var_1_54 && (var_1_81 && (! var_1_55)));
	}


	// From: CodeObject23
	if (var_1_49 >= 0) {
		var_1_82 = ((min (var_1_65 , var_1_45)) - var_1_61);
	}


	// From: CodeObject24
	if (((abs (var_1_45)) << 2) <= ((max (var_1_64 , var_1_33)) + var_1_59)) {
		if (var_1_81) {
			var_1_83 = var_1_55;
		}
	}


	// From: CodeObject25
	if (var_1_51) {
		var_1_84 = var_1_33;
	}


	// From: CodeObject26
	var_1_85 = var_1_38;


	// From: CodeObject27
	var_1_86 = 3.45f;


	// From: CodeObject28
	if (var_1_50 <= var_1_77) {
		if (var_1_88) {
			var_1_87 = (var_1_55 && (var_1_83 || (! var_1_56)));
		}
	} else {
		var_1_87 = (! var_1_55);
	}


	// From: CodeObject29
	if (((5 >> var_1_49) >= -10) || var_1_91) {
		var_1_89 = (var_1_55 && var_1_56);
	}


	// From: CodeObject30
	if (var_1_40 < var_1_86) {
		if (var_1_63 >= var_1_82) {
			if (var_1_81) {
				if (var_1_93 > 5.2f) {
					var_1_92 = var_1_60;
				} else {
					var_1_92 = ((abs (var_1_47)) + (abs (var_1_46)));
				}
			}
		} else {
			var_1_92 = (min (var_1_48 , var_1_61));
		}
	}


	// From: CodeObject31
	if (var_1_65 > var_1_34) {
		var_1_94 = (min (((abs (var_1_65)) - (min (var_1_61 , var_1_62))) , var_1_48));
	} else {
		if ((max (var_1_61 , -10000)) >= var_1_62) {
			var_1_94 = (abs (10));
		}
	}


	// From: CodeObject32
	if (var_1_53) {
		if ((abs (var_1_62)) < (~ (var_1_38 + var_1_96))) {
			if (var_1_82 < (var_1_63 * var_1_61)) {
				var_1_95 = (min ((var_1_97 - var_1_49) , var_1_33));
			}
		}
	} else {
		var_1_95 = (abs (var_1_70));
	}


	// From: CodeObject33
	if (((abs (10)) * var_1_96) == (var_1_66 / var_1_74)) {
		if (var_1_49 >= (- (- var_1_79))) {
			var_1_98 = (var_1_44 + var_1_43);
		} else {
			var_1_98 = var_1_44;
		}
	}


	// From: CodeObject34
	if (var_1_89) {
		var_1_99 = (abs (max (var_1_46 , (abs (var_1_61)))));
	}


	// From: CodeObject35
	var_1_100 = var_1_62;


	// From: Req3Batch63PS_CN_250
	signed long int stepLocal_1 = last_1_var_1_1;
	if (stepLocal_1 != last_1_var_1_13) {
		var_1_13 = (min (var_1_15 , var_1_16));
	}


	// From: Req9Batch63PS_CN_250
	var_1_31 = var_1_13;


	// From: Req4Batch63PS_CN_250
	if (var_1_7) {
		var_1_17 = (min (((var_1_18 + var_1_19) - (var_1_20 - var_1_21)) , (max (var_1_22 , var_1_23))));
	} else {
		var_1_17 = var_1_22;
	}


	// From: Req7Batch63PS_CN_250
	if (var_1_7) {
		var_1_29 = var_1_20;
	}


	// From: Req10Batch63PS_CN_250
	var_1_32 = var_1_16;


	// From: Req8Batch63PS_CN_250
	var_1_30 = var_1_32;


	// From: Req2Batch63PS_CN_250
	unsigned char stepLocal_0 = var_1_13;
	if ((var_1_32 >> var_1_32) < stepLocal_0) {
		var_1_11 = var_1_32;
	}


	// From: Req6Batch63PS_CN_250
	if (var_1_11 >= var_1_30) {
		var_1_26 = (var_1_27 + var_1_28);
	}


	// From: Req1Batch63PS_CN_250
	if (32u < ((var_1_31 + 4u) | var_1_30)) {
		var_1_1 = (var_1_26 + (var_1_26 + var_1_32));
	} else {
		if (! var_1_7) {
			var_1_1 = (min (var_1_26 , (var_1_11 - var_1_32)));
		} else {
			var_1_1 = (var_1_32 - var_1_13);
		}
	}


	// From: Req5Batch63PS_CN_250
	unsigned short int stepLocal_2 = var_1_30;
	if (! var_1_7) {
		var_1_24 = (var_1_11 - (min ((max (var_1_30 , var_1_13)) , (var_1_30 + var_1_15))));
	} else {
		if (var_1_11 < stepLocal_2) {
			var_1_24 = -4;
		} else {
			var_1_24 = var_1_26;
		}
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 4611686.018427382800e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854765600e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854765600e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854765600e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -63);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -63);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 4294967295);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 4294967295);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967295);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 4294967295);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854765600e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854765600e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -461168.6018427382800e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427382800e+12F && var_1_44 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 127);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -126);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 126);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 32767);
	assume_abort_if_not(var_1_65 <= 65534);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 1);
	var_1_74 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_74 >= -32768);
	assume_abort_if_not(var_1_74 <= 32767);
	assume_abort_if_not(var_1_74 != 0);
	var_1_76 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_76 >= 0.0F && var_1_76 <= -1.0e-20F) || (var_1_76 <= 9223372.036854776000e+12F && var_1_76 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_77 >= 0.0F && var_1_77 <= -1.0e-20F) || (var_1_77 <= 9223372.036854776000e+12F && var_1_77 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 1);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 1);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 1);
	var_1_93 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_93 >= -922337.2036854776000e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 9223372.036854776000e+12F && var_1_93 >= 1.0e-20F ));
	var_1_96 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_96 >= -2147483648);
	assume_abort_if_not(var_1_96 <= 2147483647);
	var_1_97 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_97 >= 2147483647);
	assume_abort_if_not(var_1_97 <= 4294967294);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_13 = var_1_13;
}

int property() {
	return ((((((((((32u < ((var_1_31 + 4u) | var_1_30)) ? (var_1_1 == ((signed long int) (var_1_26 + (var_1_26 + var_1_32)))) : ((! var_1_7) ? (var_1_1 == ((signed long int) (min (var_1_26 , (var_1_11 - var_1_32))))) : (var_1_1 == ((signed long int) (var_1_32 - var_1_13))))) && (((var_1_32 >> var_1_32) < var_1_13) ? (var_1_11 == ((unsigned short int) var_1_32)) : 1)) && ((last_1_var_1_1 != last_1_var_1_13) ? (var_1_13 == ((unsigned char) (min (var_1_15 , var_1_16)))) : 1)) && (var_1_7 ? (var_1_17 == ((double) (min (((var_1_18 + var_1_19) - (var_1_20 - var_1_21)) , (max (var_1_22 , var_1_23)))))) : (var_1_17 == ((double) var_1_22)))) && ((! var_1_7) ? (var_1_24 == ((signed long int) (var_1_11 - (min ((max (var_1_30 , var_1_13)) , (var_1_30 + var_1_15)))))) : ((var_1_11 < var_1_30) ? (var_1_24 == ((signed long int) -4)) : (var_1_24 == ((signed long int) var_1_26))))) && ((var_1_11 >= var_1_30) ? (var_1_26 == ((signed char) (var_1_27 + var_1_28))) : 1)) && (var_1_7 ? (var_1_29 == ((float) var_1_20)) : 1)) && (var_1_30 == ((unsigned short int) var_1_32))) && (var_1_31 == ((signed long int) var_1_13))) && (var_1_32 == ((unsigned char) var_1_16))
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
