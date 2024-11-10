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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 9.5;
double var_1_4 = 16.5;
unsigned short int var_1_5 = 5;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 10000;
unsigned short int var_1_9 = 25268;
unsigned short int var_1_11 = 52309;
unsigned char var_1_12 = 32;
unsigned char var_1_13 = 1;
signed long int var_1_14 = -2;
signed long int var_1_15 = 64;
double var_1_16 = 9.25;
unsigned long int var_1_17 = 10;
unsigned char var_1_19 = 5;
unsigned long int var_1_20 = 100;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 4015996534;
float var_1_24 = 128.575;
float var_1_25 = 64.4;
float var_1_26 = 1.5;
float var_1_27 = 4.4;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 2;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 32;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 64;
unsigned char var_1_36 = 2;
signed char var_1_37 = 2;
unsigned long int var_1_38 = 32;
unsigned short int var_1_39 = 64;
float var_1_41 = 9.8;
float var_1_42 = 999.25;
float var_1_43 = 63.4;
signed long int var_1_44 = -10;
signed short int var_1_45 = 64;
unsigned char var_1_46 = 10;
unsigned short int var_1_47 = 128;
signed short int var_1_50 = -8;
unsigned char var_1_52 = 64;
signed char var_1_53 = 16;
signed long int var_1_54 = -64;
double var_1_55 = 128.2;
unsigned short int var_1_56 = 2;
unsigned short int var_1_57 = 53052;
float var_1_58 = 2.5;
signed char var_1_59 = 8;
float var_1_60 = 2.7;
signed char var_1_61 = -2;
double var_1_62 = 16.7;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 32;
signed long int last_1_var_1_14 = -2;
signed long int last_1_var_1_15 = 64;
unsigned char last_1_var_1_19 = 5;
unsigned char last_1_var_1_28 = 1;
unsigned short int last_1_var_1_39 = 64;
signed long int last_1_var_1_44 = -10;
signed short int last_1_var_1_45 = 64;
unsigned char last_1_var_1_46 = 10;
unsigned short int last_1_var_1_47 = 128;
signed short int last_1_var_1_50 = -8;
unsigned char last_1_var_1_52 = 64;
signed char last_1_var_1_61 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req17Batch50Amount250
	signed long int stepLocal_8 = last_1_var_1_15;
	if (var_1_7) {
		if (stepLocal_8 > last_1_var_1_14) {
			var_1_44 = last_1_var_1_39;
		} else {
			var_1_44 = (abs (abs (last_1_var_1_19)));
		}
	}


	// From: Req14Batch50Amount250
	unsigned short int stepLocal_7 = var_1_11;
	unsigned long int stepLocal_6 = var_1_22 * last_1_var_1_28;
	if (var_1_21) {
		if (2 >= stepLocal_7) {
			if (last_1_var_1_28 >= stepLocal_6) {
				var_1_39 = (var_1_11 - (var_1_36 + (last_1_var_1_28 + last_1_var_1_52)));
			} else {
				var_1_39 = (min ((abs (last_1_var_1_44)) , var_1_32));
			}
		} else {
			var_1_39 = (abs (var_1_8));
		}
	}


	// From: Req22Batch50Amount250
	if ((var_1_11 - last_1_var_1_46) > var_1_36) {
		var_1_52 = (min (8 , var_1_13));
	}


	// From: Req8Batch50Amount250
	if (var_1_7 || var_1_21) {
		var_1_20 = (last_1_var_1_47 + last_1_var_1_61);
	} else {
		if ((last_1_var_1_12 / (var_1_22 - var_1_8)) < (last_1_var_1_39 / var_1_9)) {
			var_1_20 = (64u + last_1_var_1_28);
		} else {
			var_1_20 = (min (var_1_9 , last_1_var_1_50));
		}
	}


	// From: Req10Batch50Amount250
	unsigned long int stepLocal_1 = var_1_20;
	if (var_1_7) {
		var_1_28 = (var_1_29 - (var_1_30 + (max (var_1_31 , var_1_32))));
	} else {
		if (stepLocal_1 < (var_1_30 / var_1_29)) {
			var_1_28 = var_1_30;
		} else {
			var_1_28 = (min (var_1_13 , var_1_29));
		}
	}


	// From: Req6Batch50Amount250
	var_1_17 = (var_1_28 + ((var_1_9 + var_1_28) + var_1_13));


	// From: Req1Batch50Amount250
	unsigned long int stepLocal_0 = var_1_20;
	if (stepLocal_0 > var_1_17) {
		var_1_1 = (abs (var_1_4));
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req3Batch50Amount250
	var_1_12 = var_1_13;


	// From: Req4Batch50Amount250
	var_1_14 = (var_1_13 + (var_1_8 + var_1_9));


	// From: Req7Batch50Amount250
	if (-16 <= var_1_13) {
		var_1_19 = 100;
	} else {
		var_1_19 = 8;
	}


	// From: Req9Batch50Amount250
	var_1_24 = (var_1_25 - (var_1_26 + var_1_27));


	// From: Req11Batch50Amount250
	unsigned char stepLocal_3 = var_1_34;
	unsigned char stepLocal_2 = var_1_34;
	if (var_1_7 || stepLocal_2) {
		if ((min (var_1_4 , var_1_27)) >= var_1_24) {
			if (stepLocal_3 && (var_1_11 > 25)) {
				var_1_33 = ((var_1_35 - (32 - var_1_36)) + var_1_32);
			} else {
				var_1_33 = (var_1_35 + var_1_30);
			}
		} else {
			var_1_33 = (abs (var_1_29 - var_1_35));
		}
	} else {
		var_1_33 = var_1_13;
	}


	// From: Req13Batch50Amount250
	var_1_38 = (min (var_1_8 , var_1_32));


	// From: Req28Batch50Amount250
	if (var_1_21) {
		var_1_59 = var_1_30;
	} else {
		var_1_59 = var_1_30;
	}


	// From: Req29Batch50Amount250
	if (var_1_7) {
		var_1_60 = var_1_4;
	}


	// From: Req30Batch50Amount250
	if (var_1_21) {
		var_1_61 = var_1_32;
	} else {
		var_1_61 = var_1_36;
	}


	// From: Req21Batch50Amount250
	unsigned short int stepLocal_13 = var_1_39;
	unsigned long int stepLocal_12 = var_1_11 * var_1_20;
	if (stepLocal_12 > 5u) {
		var_1_50 = (min ((var_1_32 + var_1_59) , var_1_31));
	} else {
		if ((10 - var_1_32) > stepLocal_13) {
			var_1_50 = ((var_1_52 - var_1_31) + (abs (var_1_13 - var_1_36)));
		}
	}


	// From: Req25Batch50Amount250
	if (var_1_50 <= var_1_8) {
		var_1_55 = (max ((abs (var_1_25)) , var_1_27));
	}


	// From: Req15Batch50Amount250
	if ((var_1_52 % var_1_9) != var_1_50) {
		var_1_41 = (127.76f + 64.2f);
	}


	// From: Req23Batch50Amount250
	signed long int stepLocal_15 = var_1_44;
	unsigned char stepLocal_14 = var_1_38 > 4;
	if (stepLocal_15 < var_1_17) {
		if (stepLocal_14 && ((var_1_43 / var_1_16) < var_1_41)) {
			var_1_53 = (min (var_1_32 , (abs (var_1_36 + var_1_31))));
		} else {
			var_1_53 = (var_1_31 - (var_1_36 + var_1_32));
		}
	} else {
		var_1_53 = ((min (var_1_32 , var_1_31)) - var_1_30);
	}


	// From: Req31Batch50Amount250
	unsigned char stepLocal_18 = var_1_34;
	signed long int stepLocal_17 = 16 * var_1_53;
	if (var_1_7 || stepLocal_18) {
		if (stepLocal_17 > var_1_9) {
			if (var_1_21) {
				var_1_62 = (var_1_27 - var_1_26);
			} else {
				var_1_62 = var_1_43;
			}
		}
	} else {
		var_1_62 = var_1_4;
	}


	// From: Req5Batch50Amount250
	if ((var_1_41 / (abs (var_1_16))) < var_1_4) {
		var_1_15 = (max ((var_1_53 - var_1_9) , last_1_var_1_15));
	} else {
		var_1_15 = (min (var_1_8 , var_1_13));
	}


	// From: Req19Batch50Amount250
	unsigned char stepLocal_9 = var_1_34;
	if ((var_1_26 - (min (var_1_27 , var_1_25))) == (var_1_43 / var_1_16)) {
		if (stepLocal_9 && (var_1_15 == var_1_30)) {
			if (! (var_1_36 >= (var_1_20 ^ var_1_11))) {
				var_1_46 = var_1_30;
			} else {
				var_1_46 = (min ((var_1_29 - 10) , (var_1_36 + var_1_35)));
			}
		}
	}


	// From: Req2Batch50Amount250
	if ((var_1_4 * var_1_62) == var_1_1) {
		if (var_1_7) {
			var_1_5 = (((10000 + var_1_8) + var_1_9) - var_1_28);
		} else {
			var_1_5 = (var_1_11 - var_1_8);
		}
	} else {
		if (var_1_62 >= (var_1_4 + 7.75)) {
			var_1_5 = var_1_9;
		} else {
			var_1_5 = var_1_11;
		}
	}


	// From: Req20Batch50Amount250
	unsigned char stepLocal_11 = var_1_7;
	unsigned short int stepLocal_10 = var_1_5;
	if (stepLocal_10 < var_1_14) {
		if ((var_1_34 && (var_1_24 <= var_1_60)) || stepLocal_11) {
			var_1_47 = var_1_9;
		}
	} else {
		var_1_47 = ((abs (var_1_9 - var_1_35)) + 25);
	}


	// From: Req12Batch50Amount250
	unsigned char stepLocal_5 = var_1_7;
	unsigned char stepLocal_4 = var_1_46;
	if (var_1_21 && stepLocal_5) {
		if (stepLocal_4 != ((var_1_30 << 1) + (var_1_8 << var_1_36))) {
			var_1_37 = (-50 + (min (var_1_32 , var_1_36)));
		}
	}


	// From: Req18Batch50Amount250
	if (var_1_16 > var_1_43) {
		if (var_1_34) {
			var_1_45 = (last_1_var_1_45 - var_1_46);
		}
	}


	// From: Req24Batch50Amount250
	if ((min (-10 , var_1_53)) >= (var_1_32 * (1 / var_1_29))) {
		var_1_54 = (max (var_1_9 , (abs (var_1_33))));
	} else {
		var_1_54 = var_1_46;
	}


	// From: Req26Batch50Amount250
	if (var_1_61 >= var_1_30) {
		if (var_1_7 && var_1_34) {
			var_1_56 = (64 + var_1_31);
		} else {
			if (1.000000002E8 > (var_1_25 * var_1_4)) {
				var_1_56 = ((min (var_1_11 , var_1_57)) - var_1_61);
			} else {
				var_1_56 = var_1_15;
			}
		}
	}


	// From: Req27Batch50Amount250
	unsigned long int stepLocal_16 = 16u + (var_1_45 ^ var_1_38);
	if (stepLocal_16 >= var_1_5) {
		var_1_58 = ((max (var_1_26 , var_1_25)) - var_1_27);
	}


	// From: Req16Batch50Amount250
	if ((min (var_1_24 , (var_1_27 - var_1_26))) > var_1_58) {
		var_1_42 = (var_1_43 + var_1_27);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 8192);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 16384);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 32767);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(var_1_16 != 0.0F);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427382800e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 64);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 63);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 31);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427382800e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427382800e+12F && var_1_43 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 32767);
	assume_abort_if_not(var_1_57 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_61 = var_1_61;
}

int property() {
	return (((((((((((((((((((((((((((((((var_1_20 > var_1_17) ? (var_1_1 == ((double) (abs (var_1_4)))) : (var_1_1 == ((double) var_1_4))) && (((var_1_4 * var_1_62) == var_1_1) ? (var_1_7 ? (var_1_5 == ((unsigned short int) (((10000 + var_1_8) + var_1_9) - var_1_28))) : (var_1_5 == ((unsigned short int) (var_1_11 - var_1_8)))) : ((var_1_62 >= (var_1_4 + 7.75)) ? (var_1_5 == ((unsigned short int) var_1_9)) : (var_1_5 == ((unsigned short int) var_1_11))))) && (var_1_12 == ((unsigned char) var_1_13))) && (var_1_14 == ((signed long int) (var_1_13 + (var_1_8 + var_1_9))))) && (((var_1_41 / (abs (var_1_16))) < var_1_4) ? (var_1_15 == ((signed long int) (max ((var_1_53 - var_1_9) , last_1_var_1_15)))) : (var_1_15 == ((signed long int) (min (var_1_8 , var_1_13)))))) && (var_1_17 == ((unsigned long int) (var_1_28 + ((var_1_9 + var_1_28) + var_1_13))))) && ((-16 <= var_1_13) ? (var_1_19 == ((unsigned char) 100)) : (var_1_19 == ((unsigned char) 8)))) && ((var_1_7 || var_1_21) ? (var_1_20 == ((unsigned long int) (last_1_var_1_47 + last_1_var_1_61))) : (((last_1_var_1_12 / (var_1_22 - var_1_8)) < (last_1_var_1_39 / var_1_9)) ? (var_1_20 == ((unsigned long int) (64u + last_1_var_1_28))) : (var_1_20 == ((unsigned long int) (min (var_1_9 , last_1_var_1_50))))))) && (var_1_24 == ((float) (var_1_25 - (var_1_26 + var_1_27))))) && (var_1_7 ? (var_1_28 == ((unsigned char) (var_1_29 - (var_1_30 + (max (var_1_31 , var_1_32)))))) : ((var_1_20 < (var_1_30 / var_1_29)) ? (var_1_28 == ((unsigned char) var_1_30)) : (var_1_28 == ((unsigned char) (min (var_1_13 , var_1_29))))))) && ((var_1_7 || var_1_34) ? (((min (var_1_4 , var_1_27)) >= var_1_24) ? ((var_1_34 && (var_1_11 > 25)) ? (var_1_33 == ((unsigned char) ((var_1_35 - (32 - var_1_36)) + var_1_32))) : (var_1_33 == ((unsigned char) (var_1_35 + var_1_30)))) : (var_1_33 == ((unsigned char) (abs (var_1_29 - var_1_35))))) : (var_1_33 == ((unsigned char) var_1_13)))) && ((var_1_21 && var_1_7) ? ((var_1_46 != ((var_1_30 << 1) + (var_1_8 << var_1_36))) ? (var_1_37 == ((signed char) (-50 + (min (var_1_32 , var_1_36))))) : 1) : 1)) && (var_1_38 == ((unsigned long int) (min (var_1_8 , var_1_32))))) && (var_1_21 ? ((2 >= var_1_11) ? ((last_1_var_1_28 >= (var_1_22 * last_1_var_1_28)) ? (var_1_39 == ((unsigned short int) (var_1_11 - (var_1_36 + (last_1_var_1_28 + last_1_var_1_52))))) : (var_1_39 == ((unsigned short int) (min ((abs (last_1_var_1_44)) , var_1_32))))) : (var_1_39 == ((unsigned short int) (abs (var_1_8))))) : 1)) && (((var_1_52 % var_1_9) != var_1_50) ? (var_1_41 == ((float) (127.76f + 64.2f))) : 1)) && (((min (var_1_24 , (var_1_27 - var_1_26))) > var_1_58) ? (var_1_42 == ((float) (var_1_43 + var_1_27))) : 1)) && (var_1_7 ? ((last_1_var_1_15 > last_1_var_1_14) ? (var_1_44 == ((signed long int) last_1_var_1_39)) : (var_1_44 == ((signed long int) (abs (abs (last_1_var_1_19)))))) : 1)) && ((var_1_16 > var_1_43) ? (var_1_34 ? (var_1_45 == ((signed short int) (last_1_var_1_45 - var_1_46))) : 1) : 1)) && (((var_1_26 - (min (var_1_27 , var_1_25))) == (var_1_43 / var_1_16)) ? ((var_1_34 && (var_1_15 == var_1_30)) ? ((! (var_1_36 >= (var_1_20 ^ var_1_11))) ? (var_1_46 == ((unsigned char) var_1_30)) : (var_1_46 == ((unsigned char) (min ((var_1_29 - 10) , (var_1_36 + var_1_35)))))) : 1) : 1)) && ((var_1_5 < var_1_14) ? (((var_1_34 && (var_1_24 <= var_1_60)) || var_1_7) ? (var_1_47 == ((unsigned short int) var_1_9)) : 1) : (var_1_47 == ((unsigned short int) ((abs (var_1_9 - var_1_35)) + 25))))) && (((var_1_11 * var_1_20) > 5u) ? (var_1_50 == ((signed short int) (min ((var_1_32 + var_1_59) , var_1_31)))) : (((10 - var_1_32) > var_1_39) ? (var_1_50 == ((signed short int) ((var_1_52 - var_1_31) + (abs (var_1_13 - var_1_36))))) : 1))) && (((var_1_11 - last_1_var_1_46) > var_1_36) ? (var_1_52 == ((unsigned char) (min (8 , var_1_13)))) : 1)) && ((var_1_44 < var_1_17) ? (((var_1_38 > 4) && ((var_1_43 / var_1_16) < var_1_41)) ? (var_1_53 == ((signed char) (min (var_1_32 , (abs (var_1_36 + var_1_31)))))) : (var_1_53 == ((signed char) (var_1_31 - (var_1_36 + var_1_32))))) : (var_1_53 == ((signed char) ((min (var_1_32 , var_1_31)) - var_1_30))))) && (((min (-10 , var_1_53)) >= (var_1_32 * (1 / var_1_29))) ? (var_1_54 == ((signed long int) (max (var_1_9 , (abs (var_1_33)))))) : (var_1_54 == ((signed long int) var_1_46)))) && ((var_1_50 <= var_1_8) ? (var_1_55 == ((double) (max ((abs (var_1_25)) , var_1_27)))) : 1)) && ((var_1_61 >= var_1_30) ? ((var_1_7 && var_1_34) ? (var_1_56 == ((unsigned short int) (64 + var_1_31))) : ((1.000000002E8 > (var_1_25 * var_1_4)) ? (var_1_56 == ((unsigned short int) ((min (var_1_11 , var_1_57)) - var_1_61))) : (var_1_56 == ((unsigned short int) var_1_15)))) : 1)) && (((16u + (var_1_45 ^ var_1_38)) >= var_1_5) ? (var_1_58 == ((float) ((max (var_1_26 , var_1_25)) - var_1_27))) : 1)) && (var_1_21 ? (var_1_59 == ((signed char) var_1_30)) : (var_1_59 == ((signed char) var_1_30)))) && (var_1_7 ? (var_1_60 == ((float) var_1_4)) : 1)) && (var_1_21 ? (var_1_61 == ((signed char) var_1_32)) : (var_1_61 == ((signed char) var_1_36)))) && ((var_1_7 || var_1_34) ? (((16 * var_1_53) > var_1_9) ? (var_1_21 ? (var_1_62 == ((double) (var_1_27 - var_1_26))) : (var_1_62 == ((double) var_1_43))) : 1) : (var_1_62 == ((double) var_1_4)))
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
