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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch88PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 15.8;
float var_1_2 = 9.5;
float var_1_4 = 127.6;
double var_1_5 = 100000000000000.5;
double var_1_6 = 100000000000000.7;
double var_1_7 = 256.75;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
signed char var_1_12 = 0;
signed char var_1_13 = 2;
unsigned char var_1_14 = 1;
unsigned char var_1_16 = 10;
unsigned char var_1_18 = 4;
unsigned char var_1_19 = 8;
unsigned char var_1_20 = 8;
unsigned short int var_1_21 = 128;
unsigned char var_1_22 = 0;
unsigned short int var_1_24 = 34649;
unsigned long int var_1_25 = 32;
signed char var_1_26 = -128;
signed char var_1_27 = 10;
signed long int var_1_28 = 32;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
signed long int var_1_31 = -10000000;
signed char var_1_32 = 4;
signed char var_1_33 = 32;
signed char var_1_34 = 1;
unsigned long int var_1_35 = 5;
unsigned long int var_1_36 = 5;
unsigned long int var_1_37 = 5;
unsigned long int var_1_38 = 1000000000;
unsigned long int var_1_39 = 1955564829;
unsigned char var_1_40 = 16;
unsigned char var_1_41 = 16;
unsigned char var_1_42 = 128;
unsigned long int var_1_43 = 0;
double var_1_44 = 4.75;
double var_1_45 = 9.6;
double var_1_46 = 25.125;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
double var_1_49 = 50.75;
unsigned char var_1_50 = 1;
double var_1_51 = 255.35;
double var_1_52 = 64.8;
unsigned short int var_1_53 = 4;
float var_1_54 = 8.8;
float var_1_55 = 64.75;
float var_1_56 = 64.6;
float var_1_57 = 0.25;
float var_1_58 = 64.6;
signed char var_1_59 = 32;
unsigned short int var_1_60 = 2;
unsigned long int var_1_61 = 1;
signed char var_1_62 = -16;
double var_1_63 = 2.451;
signed char var_1_64 = 16;
unsigned long int var_1_65 = 64;
unsigned long int var_1_66 = 4;
unsigned long int var_1_67 = 4035324974;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 128;
unsigned short int var_1_70 = 10000;
unsigned long int var_1_71 = 10;
unsigned long int var_1_72 = 64;
float var_1_73 = 32.5;
unsigned char var_1_74 = 1;
unsigned char var_1_75 = 1;
unsigned char var_1_76 = 1;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
double var_1_79 = 3.5;
double var_1_80 = 256.75;
double var_1_81 = 15.5;
double var_1_82 = 31.45;
unsigned short int var_1_83 = 256;
unsigned short int var_1_84 = 256;
signed long int var_1_85 = -25;
unsigned char var_1_86 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 0;
unsigned short int last_1_var_1_21 = 128;
unsigned char last_1_var_1_22 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_29 && var_1_30) {
		if ((256 % var_1_31) >= (min (var_1_28 , var_1_26))) {
			if (var_1_27 <= (var_1_32 - (var_1_33 + var_1_34))) {
				var_1_25 = (min (var_1_33 , ((var_1_34 + var_1_35) + (min (var_1_36 , var_1_37)))));
			} else {
				if (-100 >= var_1_26) {
					var_1_25 = (((var_1_38 - 64u) + var_1_33) + (min ((var_1_39 - 5u) , var_1_34)));
				} else {
					if (var_1_36 <= var_1_39) {
						var_1_25 = ((max (var_1_36 , (var_1_35 + var_1_33))) + (var_1_39 - var_1_34));
					} else {
						if (-8 != var_1_35) {
							var_1_25 = (abs (var_1_34 + (var_1_39 - var_1_35)));
						}
					}
				}
			}
		} else {
			var_1_25 = var_1_34;
		}
	} else {
		var_1_25 = var_1_39;
	}


	// From: CodeObject2
	if (((abs (var_1_34)) - (abs (var_1_32))) <= var_1_36) {
		var_1_40 = (abs (abs (abs (var_1_41))));
	} else {
		if (! var_1_30) {
			var_1_40 = (min ((var_1_42 - 4) , var_1_33));
		}
	}


	// From: CodeObject3
	if ((~ var_1_40) != var_1_35) {
		var_1_43 = (abs (min (4u , var_1_35)));
	} else {
		if (! ((var_1_44 * var_1_45) < 1.4)) {
			if ((var_1_45 * var_1_44) >= var_1_46) {
				var_1_43 = 256u;
			} else {
				var_1_43 = (abs (var_1_39));
			}
		} else {
			if (var_1_39 > (~ var_1_40)) {
				var_1_43 = var_1_33;
			} else {
				var_1_43 = var_1_34;
			}
		}
	}


	// From: CodeObject4
	if (var_1_44 > (abs (var_1_45))) {
		var_1_47 = (var_1_29 && var_1_48);
	}


	// From: CodeObject5
	if (var_1_50) {
		if (var_1_35 <= ((4u & var_1_40) / var_1_42)) {
			var_1_49 = (abs (max ((abs (var_1_51)) , var_1_52)));
		}
	}


	// From: CodeObject6
	if (var_1_34 > var_1_31) {
		if (var_1_50) {
			var_1_53 = ((abs (var_1_41)) + (abs (var_1_42)));
		} else {
			var_1_53 = (abs (var_1_34));
		}
	} else {
		var_1_53 = (var_1_42 + 1);
	}


	// From: CodeObject7
	if ((var_1_32 >= var_1_31) || (var_1_33 <= var_1_39)) {
		var_1_54 = (max (var_1_51 , var_1_52));
	} else {
		var_1_54 = (abs (min (var_1_51 , (var_1_55 - var_1_56))));
	}


	// From: CodeObject8
	if (var_1_45 > ((min (1.5 , var_1_52)) + 128.23)) {
		var_1_57 = ((4.5f + var_1_58) - var_1_56);
	}


	// From: CodeObject9
	if (var_1_47) {
		if (var_1_28 >= var_1_53) {
			if (var_1_51 < var_1_56) {
				var_1_59 = var_1_34;
			}
		}
	}


	// From: CodeObject10
	if (var_1_38 > (- (var_1_39 | var_1_61))) {
		if (var_1_54 >= var_1_45) {
			var_1_60 = (min (var_1_34 , var_1_41));
		} else {
			var_1_60 = (abs (var_1_33));
		}
	}


	// From: CodeObject11
	if (var_1_63 >= var_1_49) {
		if (var_1_46 > var_1_45) {
			var_1_62 = (max (var_1_33 , var_1_34));
		} else {
			if (128.6 < var_1_44) {
				var_1_62 = (min (var_1_34 , var_1_33));
			} else {
				var_1_62 = (min ((abs (max (var_1_34 , var_1_33))) , var_1_64));
			}
		}
	}


	// From: CodeObject12
	if ((max (var_1_45 , 7.25)) > (min (var_1_58 , var_1_57))) {
		if (((var_1_34 >> var_1_64) ^ var_1_39) >= (abs (25u >> var_1_27))) {
			var_1_65 = (max (var_1_41 , (abs (var_1_40))));
		}
	}


	// From: CodeObject13
	if (! ((10 ^ var_1_34) > var_1_40)) {
		if (! (! var_1_50)) {
			if (var_1_51 <= var_1_49) {
				var_1_66 = (abs (var_1_40));
			}
		} else {
			if (var_1_44 >= (max (9.5 , 0.0))) {
				var_1_66 = (var_1_67 - (max (var_1_34 , 16u)));
			} else {
				var_1_66 = (abs (var_1_38));
			}
		}
	}


	// From: CodeObject14
	if (var_1_38 <= (min (var_1_39 , var_1_61))) {
		if ((abs (abs (var_1_40))) != var_1_32) {
			var_1_68 = (max (var_1_33 , var_1_41));
		} else {
			if ((- var_1_45) <= var_1_52) {
				var_1_68 = ((max (var_1_69 , var_1_42)) - var_1_33);
			}
		}
	}


	// From: CodeObject15
	if (var_1_50) {
		var_1_70 = (min (var_1_42 , var_1_68));
	}


	// From: CodeObject16
	if ((var_1_31 % var_1_67) > (abs (var_1_25))) {
		var_1_71 = (max (var_1_72 , (abs (var_1_36))));
	}


	// From: CodeObject17
	if (4.5 == var_1_44) {
		if (var_1_65 >= var_1_66) {
			var_1_73 = (abs (var_1_58));
		}
	}


	// From: CodeObject18
	if (! ((~ var_1_39) < var_1_37)) {
		var_1_74 = (! ((var_1_75 && var_1_76) && var_1_77));
	} else {
		if (var_1_75) {
			var_1_74 = ((var_1_30 && var_1_48) || var_1_78);
		} else {
			var_1_74 = var_1_76;
		}
	}


	// From: CodeObject19
	if (var_1_80 < var_1_81) {
		if (var_1_45 <= (max (var_1_58 , var_1_63))) {
			if (var_1_54 > (var_1_57 * var_1_56)) {
				var_1_79 = ((min (var_1_55 , var_1_58)) - 256.4);
			}
		}
	} else {
		var_1_79 = var_1_82;
	}


	// From: CodeObject20
	if (var_1_30) {
		var_1_83 = var_1_33;
	} else {
		var_1_83 = var_1_69;
	}


	// From: CodeObject21
	if (var_1_77) {
		var_1_84 = var_1_33;
	} else {
		var_1_84 = var_1_34;
	}


	// From: CodeObject22
	if (0.19999999999999996 >= var_1_56) {
		var_1_85 = var_1_35;
	}


	// From: CodeObject23
	if (var_1_51 >= var_1_58) {
		if (var_1_50) {
			var_1_86 = (! (var_1_48 || var_1_78));
		} else {
			var_1_86 = (var_1_78 || var_1_48);
		}
	}


	// From: Req1Batch88PS_CN_250
	if (64.5f <= var_1_2) {
		if (last_1_var_1_8) {
			if (var_1_2 == var_1_4) {
				var_1_1 = (var_1_5 + (min ((max (var_1_6 , var_1_7)) , 50.25)));
			} else {
				var_1_1 = var_1_7;
			}
		} else {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch88PS_CN_250
	if (var_1_1 > ((var_1_1 * var_1_5) + 5.3)) {
		if ((var_1_7 + var_1_1) < var_1_6) {
			var_1_8 = var_1_9;
		} else {
			var_1_8 = var_1_10;
		}
	} else {
		var_1_8 = var_1_11;
	}


	// From: Req4Batch88PS_CN_250
	signed long int stepLocal_0 = (last_1_var_1_22 / var_1_16) * last_1_var_1_21;
	if (last_1_var_1_21 < stepLocal_0) {
		var_1_14 = ((var_1_18 + var_1_19) + var_1_20);
	} else {
		var_1_14 = var_1_18;
	}


	// From: Req6Batch88PS_CN_250
	signed long int stepLocal_3 = var_1_18 << var_1_14;
	signed long int stepLocal_2 = (var_1_14 | var_1_18) / (var_1_24 - 1);
	if (var_1_19 == stepLocal_3) {
		if (last_1_var_1_22 >= stepLocal_2) {
			var_1_22 = 2;
		} else {
			var_1_22 = var_1_20;
		}
	} else {
		var_1_22 = 64;
	}


	// From: Req3Batch88PS_CN_250
	if (((- var_1_1) / 24.75) < var_1_6) {
		if (var_1_7 >= var_1_1) {
			var_1_12 = var_1_13;
		} else {
			var_1_12 = var_1_13;
		}
	}


	// From: Req5Batch88PS_CN_250
	unsigned char stepLocal_1 = var_1_10;
	if (var_1_8 && stepLocal_1) {
		var_1_21 = (max ((abs (var_1_19)) , 2));
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 255);
	assume_abort_if_not(var_1_16 != 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 64);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 32767);
	assume_abort_if_not(var_1_24 <= 65535);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -128);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483648);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	assume_abort_if_not(var_1_31 != 0);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -1);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 64);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1073741823);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 536870912);
	assume_abort_if_not(var_1_38 <= 1073741824);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 1073741823);
	assume_abort_if_not(var_1_39 <= 2147483647);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -922337.2036854765600e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854765600e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= -922337.2036854765600e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854765600e+12F && var_1_52 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 9223372.036854765600e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854765600e+12F && var_1_56 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427382800e+12F && var_1_58 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 4294967295);
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -922337.2036854776000e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 9223372.036854776000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -127);
	assume_abort_if_not(var_1_64 <= 126);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 2147483647);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 127);
	assume_abort_if_not(var_1_69 <= 254);
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 4294967294);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 1);
	assume_abort_if_not(var_1_75 <= 1);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 1);
	assume_abort_if_not(var_1_76 <= 1);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 1);
	assume_abort_if_not(var_1_77 <= 1);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 0);
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= -922337.2036854776000e+13F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854776000e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= -922337.2036854776000e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 9223372.036854776000e+12F && var_1_81 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= -922337.2036854765600e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854765600e+12F && var_1_82 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_22 = var_1_22;
}

int property() {
	return ((((((64.5f <= var_1_2) ? (last_1_var_1_8 ? ((var_1_2 == var_1_4) ? (var_1_1 == ((double) (var_1_5 + (min ((max (var_1_6 , var_1_7)) , 50.25))))) : (var_1_1 == ((double) var_1_7))) : (var_1_1 == ((double) var_1_5))) : 1) && ((var_1_1 > ((var_1_1 * var_1_5) + 5.3)) ? (((var_1_7 + var_1_1) < var_1_6) ? (var_1_8 == ((unsigned char) var_1_9)) : (var_1_8 == ((unsigned char) var_1_10))) : (var_1_8 == ((unsigned char) var_1_11)))) && ((((- var_1_1) / 24.75) < var_1_6) ? ((var_1_7 >= var_1_1) ? (var_1_12 == ((signed char) var_1_13)) : (var_1_12 == ((signed char) var_1_13))) : 1)) && ((last_1_var_1_21 < ((last_1_var_1_22 / var_1_16) * last_1_var_1_21)) ? (var_1_14 == ((unsigned char) ((var_1_18 + var_1_19) + var_1_20))) : (var_1_14 == ((unsigned char) var_1_18)))) && ((var_1_8 && var_1_10) ? (var_1_21 == ((unsigned short int) (max ((abs (var_1_19)) , 2)))) : 1)) && ((var_1_19 == (var_1_18 << var_1_14)) ? ((last_1_var_1_22 >= ((var_1_14 | var_1_18) / (var_1_24 - 1))) ? (var_1_22 == ((unsigned char) 2)) : (var_1_22 == ((unsigned char) var_1_20))) : (var_1_22 == ((unsigned char) 64)))
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
