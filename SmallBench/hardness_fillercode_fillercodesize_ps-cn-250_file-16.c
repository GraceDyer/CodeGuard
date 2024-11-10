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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch16PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -50;
unsigned char var_1_4 = 0;
signed short int var_1_5 = 8;
signed short int var_1_6 = 64;
unsigned short int var_1_7 = 8;
unsigned short int var_1_8 = 256;
signed long int var_1_9 = 2;
signed long int var_1_10 = 1441729073;
unsigned short int var_1_11 = 32;
double var_1_12 = 7.6;
double var_1_13 = 127.8;
signed char var_1_14 = 32;
signed char var_1_15 = 50;
signed char var_1_16 = 0;
signed char var_1_17 = 16;
float var_1_18 = 0.4;
unsigned char var_1_19 = 0;
float var_1_20 = 24.4;
float var_1_21 = 500.5;
float var_1_22 = 99.324;
unsigned short int var_1_23 = 128;
unsigned char var_1_24 = 0;
signed short int var_1_25 = -25;
signed short int var_1_26 = -256;
signed short int var_1_27 = -5;
signed long int var_1_28 = 5;
signed long int var_1_29 = 2;
signed long int var_1_30 = 256;
unsigned char var_1_31 = 128;
unsigned char var_1_32 = 2;
double var_1_33 = 10.5;
signed short int var_1_34 = -2;
double var_1_35 = 8.98;
double var_1_36 = 0.5;
double var_1_37 = 9.2;
signed long int var_1_38 = 16;
float var_1_39 = 50.1;
float var_1_40 = 64.55;
float var_1_41 = 9.9;
float var_1_42 = 9.8;
float var_1_43 = 255.8;
float var_1_44 = 0.875;
unsigned long int var_1_45 = 256;
signed short int var_1_46 = -64;
signed short int var_1_47 = 18245;
float var_1_48 = 5.175;
double var_1_49 = 15.2;
double var_1_50 = 10.75;
double var_1_51 = 100000000000.75;
double var_1_52 = 25.75;
signed short int var_1_53 = 1;
unsigned char var_1_54 = 1;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 0;
unsigned short int var_1_57 = 500;
unsigned short int var_1_58 = 62353;
signed short int var_1_59 = -2;
signed char var_1_60 = 1;
signed short int var_1_61 = 10;
unsigned long int var_1_62 = 1;
unsigned long int var_1_63 = 4038112299;
signed long int var_1_64 = 5;
unsigned char var_1_65 = 1;
float var_1_66 = 499.125;
unsigned char var_1_67 = 0;
signed short int var_1_68 = 4;
signed long int var_1_69 = -4;
unsigned char var_1_70 = 1;
unsigned char var_1_71 = 32;
unsigned char var_1_72 = 50;
unsigned char var_1_73 = 0;
signed short int var_1_74 = 128;
signed long int var_1_75 = 128;
signed long int var_1_76 = 32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_7 = 8;
unsigned short int last_1_var_1_11 = 32;
signed char last_1_var_1_14 = 32;
unsigned short int last_1_var_1_23 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_25 & (var_1_26 + var_1_27)) <= ((var_1_28 | var_1_29) + var_1_30)) {
		var_1_24 = (var_1_31 - var_1_32);
	} else {
		var_1_24 = (abs (var_1_31));
	}


	// From: CodeObject2
	if ((abs (var_1_25)) < var_1_28) {
		if (var_1_27 <= ((abs (var_1_24)) / (min (var_1_31 , var_1_34)))) {
			if ((var_1_25 + 8) <= (var_1_31 / var_1_34)) {
				var_1_33 = var_1_35;
			}
		}
	} else {
		var_1_33 = (min (var_1_35 , (min ((max (var_1_36 , var_1_37)) , 255.1))));
	}


	// From: CodeObject3
	if (((var_1_30 ^ var_1_25) + (var_1_24 + var_1_29)) > (var_1_32 % 5)) {
		var_1_38 = (min ((var_1_26 + var_1_34) , (128 - (abs (var_1_27)))));
	} else {
		var_1_38 = (var_1_32 - (abs (var_1_27)));
	}


	// From: CodeObject4
	if (var_1_37 >= var_1_36) {
		if ((var_1_38 * var_1_27) != var_1_34) {
			var_1_39 = ((abs (min (var_1_36 , var_1_35))) - (max (var_1_40 , (abs (var_1_37)))));
		}
	} else {
		if (var_1_37 >= var_1_35) {
			var_1_39 = (abs (var_1_41 + (max (var_1_42 , var_1_43))));
		} else {
			var_1_39 = (abs (min (var_1_44 , var_1_41)));
		}
	}


	// From: CodeObject5
	if ((var_1_24 - var_1_32) > var_1_30) {
		var_1_45 = (abs (var_1_32));
	}


	// From: CodeObject6
	if ((max (var_1_38 , var_1_27)) >= var_1_26) {
		var_1_46 = (max (var_1_32 , (1 - (abs (var_1_31)))));
	} else {
		if (var_1_39 >= var_1_35) {
			var_1_46 = (var_1_24 - var_1_32);
		} else {
			if (var_1_42 < var_1_44) {
				if (var_1_28 >= ((-1 - var_1_31) | var_1_38)) {
					if ((abs (var_1_36)) <= var_1_40) {
						var_1_46 = (min ((abs (var_1_24)) , ((var_1_47 - 64) - (min (var_1_31 , var_1_32)))));
					}
				}
			}
		}
	}


	// From: CodeObject7
	if (var_1_28 <= var_1_38) {
		var_1_48 = var_1_44;
	} else {
		if ((var_1_36 + var_1_43) >= (- (max (var_1_40 , var_1_44)))) {
			var_1_48 = (abs (max (var_1_43 , 63.6f)));
		} else {
			var_1_48 = var_1_42;
		}
	}


	// From: CodeObject8
	if (var_1_30 >= var_1_29) {
		if ((~ var_1_31) > var_1_47) {
			var_1_49 = (min (var_1_44 , (min (var_1_42 , var_1_43))));
		} else {
			var_1_49 = ((abs (abs (var_1_42))) + ((max (var_1_50 , var_1_51)) + var_1_52));
		}
	}


	// From: CodeObject9
	if (var_1_38 <= ((var_1_25 + 128) | var_1_26)) {
		var_1_53 = (var_1_24 + var_1_31);
	} else {
		var_1_53 = (min (var_1_47 , -2));
	}


	// From: CodeObject10
	if (var_1_46 >= var_1_30) {
		var_1_54 = (var_1_55 && var_1_56);
	} else {
		if ((max ((abs (var_1_34)) , var_1_46)) <= var_1_28) {
			var_1_54 = (! (! var_1_55));
		}
	}


	// From: CodeObject11
	if (var_1_56) {
		if (var_1_41 >= var_1_50) {
			var_1_57 = ((abs (var_1_58)) - (var_1_24 + var_1_32));
		}
	} else {
		var_1_57 = (min (var_1_47 , (max (var_1_58 , (max (var_1_24 , var_1_31))))));
	}


	// From: CodeObject12
	if ((var_1_32 - var_1_60) > (var_1_57 >> var_1_46)) {
		var_1_59 = (var_1_31 - var_1_61);
	} else {
		var_1_59 = var_1_61;
	}


	// From: CodeObject13
	if (var_1_56 && (var_1_40 < 15.5f)) {
		var_1_62 = (abs (var_1_60));
	} else {
		var_1_62 = (var_1_63 - (max ((abs (var_1_47)) , 5u)));
	}


	// From: CodeObject14
	if (var_1_65) {
		if (var_1_25 > var_1_38) {
			if (var_1_28 <= -32) {
				if (var_1_33 >= var_1_40) {
					var_1_64 = ((abs (var_1_47)) - (min ((var_1_61 + var_1_32) , var_1_60)));
				}
			}
		} else {
			if ((var_1_28 * var_1_57) <= var_1_31) {
				var_1_64 = ((abs (var_1_25)) - 256);
			}
		}
	}


	// From: CodeObject15
	if ((abs (var_1_51)) < var_1_35) {
		var_1_66 = ((var_1_50 + var_1_52) + var_1_51);
	} else {
		if (((var_1_63 & var_1_28) < var_1_32) || var_1_56) {
			var_1_66 = ((abs (var_1_50)) + var_1_43);
		}
	}


	// From: CodeObject16
	if (var_1_27 < var_1_61) {
		var_1_67 = (max (1 , var_1_31));
	}


	// From: CodeObject17
	if ((var_1_54 || var_1_65) && var_1_55) {
		var_1_68 = ((abs (var_1_32)) + var_1_67);
	} else {
		if ((var_1_29 / var_1_34) < (var_1_67 ^ var_1_32)) {
			var_1_68 = (min ((abs (var_1_61)) , (128 - var_1_31)));
		} else {
			var_1_68 = var_1_67;
		}
	}


	// From: CodeObject18
	if (var_1_54) {
		var_1_69 = (min (var_1_57 , var_1_47));
	}


	// From: CodeObject19
	if (((- var_1_44) >= var_1_51) || var_1_65) {
		if ((min (var_1_30 , (2 + 1))) > (var_1_62 | var_1_25)) {
			var_1_70 = (max ((min ((var_1_32 + var_1_60) , var_1_31)) , ((50 + var_1_71) + (abs (var_1_72)))));
		}
	} else {
		var_1_70 = (min (var_1_72 , var_1_31));
	}


	// From: CodeObject20
	if (var_1_54) {
		var_1_73 = var_1_72;
	} else {
		var_1_73 = var_1_71;
	}


	// From: CodeObject21
	if (var_1_65) {
		var_1_74 = var_1_72;
	}


	// From: CodeObject22
	if ((var_1_24 | 1) >= var_1_32) {
		var_1_75 = (max ((var_1_57 - var_1_76) , (abs (var_1_46))));
	} else {
		if (10 == var_1_74) {
			var_1_75 = 16;
		}
	}


	// From: Req1Batch16PS_CN_250
	signed long int stepLocal_0 = last_1_var_1_11;
	if ((last_1_var_1_23 / -50) >= stepLocal_0) {
		if (var_1_4) {
			var_1_1 = (var_1_5 - var_1_6);
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: Req8Batch16PS_CN_250
	if (var_1_4 && ((abs (var_1_1)) > var_1_5)) {
		var_1_23 = var_1_6;
	}


	// From: Req3Batch16PS_CN_250
	if (var_1_6 > 128) {
		var_1_9 = (var_1_8 - (var_1_10 - var_1_1));
	}


	// From: Req4Batch16PS_CN_250
	signed long int stepLocal_2 = var_1_5 | var_1_6;
	if (((var_1_9 + var_1_23) * var_1_9) < stepLocal_2) {
		if (var_1_4) {
			var_1_11 = var_1_8;
		}
	} else {
		var_1_11 = var_1_8;
	}


	// From: Req2Batch16PS_CN_250
	signed short int stepLocal_1 = var_1_6;
	if (last_1_var_1_7 < stepLocal_1) {
		var_1_7 = (var_1_6 + var_1_8);
	}


	// From: Req5Batch16PS_CN_250
	unsigned short int stepLocal_4 = var_1_8;
	signed long int stepLocal_3 = var_1_9;
	if (stepLocal_3 < (- var_1_10)) {
		if (stepLocal_4 <= var_1_9) {
			var_1_12 = (var_1_13 - 63.75);
		}
	} else {
		var_1_12 = var_1_13;
	}


	// From: Req6Batch16PS_CN_250
	unsigned short int stepLocal_5 = var_1_8;
	if (last_1_var_1_14 <= stepLocal_5) {
		var_1_14 = (((max (var_1_15 , var_1_16)) - var_1_17) + -2);
	}


	// From: Req7Batch16PS_CN_250
	if (var_1_4 || var_1_19) {
		var_1_18 = (abs (var_1_20 + (var_1_21 + var_1_22)));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32768);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32768);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32768);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 127);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= -32768);
	assume_abort_if_not(var_1_34 <= 32767);
	assume_abort_if_not(var_1_34 != 0);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854765600e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854765600e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854765600e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854765600e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -461168.6018427382800e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427382800e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -461168.6018427382800e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427382800e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854765600e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= 16382);
	assume_abort_if_not(var_1_47 <= 32766);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -230584.3009213691390e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691390e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -230584.3009213691390e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 2305843.009213691390e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -230584.3009213691390e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 2305843.009213691390e+12F && var_1_52 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 32767);
	assume_abort_if_not(var_1_58 <= 65534);
	var_1_60 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 127);
	var_1_61 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 32766);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 2147483647);
	assume_abort_if_not(var_1_63 <= 4294967294);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 1);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 127);
	var_1_76 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 2147483646);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_23 = var_1_23;
}

int property() {
	return (((((((((last_1_var_1_23 / -50) >= last_1_var_1_11) ? (var_1_4 ? (var_1_1 == ((signed short int) (var_1_5 - var_1_6))) : (var_1_1 == ((signed short int) var_1_5))) : (var_1_1 == ((signed short int) var_1_5))) && ((last_1_var_1_7 < var_1_6) ? (var_1_7 == ((unsigned short int) (var_1_6 + var_1_8))) : 1)) && ((var_1_6 > 128) ? (var_1_9 == ((signed long int) (var_1_8 - (var_1_10 - var_1_1)))) : 1)) && ((((var_1_9 + var_1_23) * var_1_9) < (var_1_5 | var_1_6)) ? (var_1_4 ? (var_1_11 == ((unsigned short int) var_1_8)) : 1) : (var_1_11 == ((unsigned short int) var_1_8)))) && ((var_1_9 < (- var_1_10)) ? ((var_1_8 <= var_1_9) ? (var_1_12 == ((double) (var_1_13 - 63.75))) : 1) : (var_1_12 == ((double) var_1_13)))) && ((last_1_var_1_14 <= var_1_8) ? (var_1_14 == ((signed char) (((max (var_1_15 , var_1_16)) - var_1_17) + -2))) : 1)) && ((var_1_4 || var_1_19) ? (var_1_18 == ((float) (abs (var_1_20 + (var_1_21 + var_1_22))))) : 1)) && ((var_1_4 && ((abs (var_1_1)) > var_1_5)) ? (var_1_23 == ((unsigned short int) var_1_6)) : 1)
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
