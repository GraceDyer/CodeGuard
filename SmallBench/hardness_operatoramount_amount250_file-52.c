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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch52Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 128.1;
unsigned char var_1_3 = 5;
float var_1_5 = 31.4;
float var_1_6 = 32.5;
float var_1_7 = 9.6;
unsigned char var_1_8 = 1;
unsigned char var_1_10 = 1;
unsigned short int var_1_11 = 64;
unsigned short int var_1_13 = 60712;
unsigned short int var_1_14 = 58826;
double var_1_15 = 999999999.5;
unsigned char var_1_18 = 10;
unsigned long int var_1_19 = 3520799115;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 2;
float var_1_22 = 64.75;
float var_1_23 = 999999999999999.4;
float var_1_24 = 3.5;
float var_1_25 = 3.6;
signed short int var_1_26 = 16;
unsigned long int var_1_27 = 2;
unsigned long int var_1_28 = 1855970761;
double var_1_29 = 7.8;
double var_1_30 = 3.6;
float var_1_31 = 64.6;
float var_1_32 = 500.2;
float var_1_33 = 10000.5;
float var_1_34 = 127.5;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 16;
unsigned char var_1_37 = 64;
unsigned short int var_1_38 = 50;
signed long int var_1_41 = 0;
signed long int var_1_42 = -128;
signed long int var_1_43 = -1000;
unsigned char var_1_44 = 25;
unsigned char var_1_46 = 100;
unsigned char var_1_47 = 25;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 0;
signed long int var_1_50 = 8;
unsigned char var_1_51 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
float var_1_57 = 63.875;
double var_1_58 = 127.8;
unsigned long int var_1_59 = 4;
unsigned long int var_1_60 = 4;

// Calibration values

// Last'ed variables
float last_1_var_1_1 = 128.1;
unsigned char last_1_var_1_8 = 1;
unsigned char last_1_var_1_18 = 10;
signed short int last_1_var_1_26 = 16;
double last_1_var_1_29 = 7.8;
float last_1_var_1_31 = 64.6;
unsigned char last_1_var_1_35 = 128;
signed long int last_1_var_1_41 = 0;
signed long int last_1_var_1_43 = -1000;
unsigned char last_1_var_1_44 = 25;
unsigned char last_1_var_1_48 = 1;
signed long int last_1_var_1_50 = 8;
unsigned char last_1_var_1_51 = 1;
unsigned long int last_1_var_1_59 = 4;
unsigned long int last_1_var_1_60 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch52Amount250
	if (last_1_var_1_18 >= last_1_var_1_50) {
		if (((- var_1_28) / var_1_14) >= last_1_var_1_26) {
			var_1_51 = (! (last_1_var_1_48 || (! var_1_49)));
		} else {
			var_1_51 = (((var_1_49 || var_1_53) || (var_1_54 || var_1_55)) || var_1_56);
		}
	} else {
		var_1_51 = (! var_1_10);
	}


	// From: Req20Batch52Amount250
	if (! (last_1_var_1_8 || last_1_var_1_51)) {
		if (! (var_1_14 <= last_1_var_1_43)) {
			var_1_57 = (max (var_1_7 , (abs (9.3f))));
		} else {
			var_1_57 = (10.8f - 255.4f);
		}
	} else {
		if (last_1_var_1_29 == var_1_7) {
			var_1_57 = (var_1_32 - var_1_23);
		} else {
			if (var_1_28 > last_1_var_1_60) {
				var_1_57 = (min (var_1_33 , var_1_5));
			} else {
				var_1_57 = 255.5f;
			}
		}
	}


	// From: Req5Batch52Amount250
	signed long int stepLocal_3 = last_1_var_1_50;
	unsigned short int stepLocal_2 = var_1_13;
	if (! last_1_var_1_8) {
		if (stepLocal_3 <= (-256 / var_1_13)) {
			if ((var_1_19 - (var_1_14 + last_1_var_1_41)) < stepLocal_2) {
				var_1_18 = (var_1_20 - var_1_3);
			} else {
				var_1_18 = (128 - (min (var_1_3 , var_1_21)));
			}
		} else {
			var_1_18 = (min ((var_1_21 + (var_1_3 + 32)) , var_1_20));
		}
	} else {
		var_1_18 = (var_1_20 - var_1_3);
	}


	// From: Req12Batch52Amount250
	unsigned long int stepLocal_8 = last_1_var_1_60;
	if (stepLocal_8 >= last_1_var_1_41) {
		var_1_38 = (min ((min ((min (2 , var_1_3)) , var_1_20)) , (min (var_1_36 , (var_1_13 - 1)))));
	} else {
		var_1_38 = (5 + last_1_var_1_44);
	}


	// From: Req17Batch52Amount250
	if (last_1_var_1_8) {
		var_1_48 = (! (last_1_var_1_48 && var_1_49));
	}


	// From: Req13Batch52Amount250
	if ((last_1_var_1_1 >= last_1_var_1_31) && ((last_1_var_1_60 / var_1_37) > var_1_36)) {
		var_1_41 = ((min (var_1_36 , var_1_3)) - 1);
	} else {
		var_1_41 = (last_1_var_1_35 - last_1_var_1_18);
	}


	// From: Req11Batch52Amount250
	signed long int stepLocal_7 = (~ last_1_var_1_44) >> last_1_var_1_18;
	unsigned char stepLocal_6 = last_1_var_1_51;
	if (var_1_10) {
		var_1_35 = (min ((max ((var_1_3 + var_1_21) , var_1_20)) , var_1_36));
	} else {
		if (stepLocal_6 && last_1_var_1_8) {
			if (stepLocal_7 != (var_1_19 * var_1_3)) {
				var_1_35 = (min (var_1_20 , ((var_1_37 - 1) + var_1_3)));
			} else {
				var_1_35 = (max ((max (var_1_37 , var_1_36)) , var_1_21));
			}
		} else {
			var_1_35 = (var_1_20 - var_1_37);
		}
	}


	// From: Req16Batch52Amount250
	unsigned char stepLocal_10 = last_1_var_1_8;
	unsigned long int stepLocal_9 = last_1_var_1_59;
	if (last_1_var_1_35 >= stepLocal_9) {
		var_1_44 = (var_1_21 + var_1_3);
	} else {
		if ((var_1_37 <= (last_1_var_1_44 * last_1_var_1_35)) && stepLocal_10) {
			if (! last_1_var_1_48) {
				var_1_44 = (abs (min (var_1_3 , (var_1_20 - var_1_21))));
			}
		} else {
			var_1_44 = ((var_1_37 + var_1_46) - (var_1_3 + var_1_47));
		}
	}


	// From: Req22Batch52Amount250
	if (var_1_54) {
		var_1_59 = var_1_37;
	} else {
		var_1_59 = var_1_21;
	}


	// From: Req3Batch52Amount250
	if (! (! var_1_48)) {
		var_1_11 = ((var_1_3 + 128) + var_1_18);
	} else {
		var_1_11 = (((min (var_1_13 , var_1_14)) - var_1_3) - var_1_18);
	}


	// From: Req15Batch52Amount250
	var_1_43 = (max (var_1_13 , (var_1_11 - var_1_14)));


	// From: Req1Batch52Amount250
	signed long int stepLocal_0 = 10;
	if (((var_1_38 >> var_1_3) | var_1_44) >= stepLocal_0) {
		var_1_1 = ((min (var_1_5 , var_1_6)) + var_1_7);
	} else {
		var_1_1 = (abs (var_1_5 + var_1_7));
	}


	// From: Req8Batch52Amount250
	unsigned short int stepLocal_5 = var_1_38;
	if ((max ((var_1_3 >> var_1_41) , -1)) < stepLocal_5) {
		var_1_27 = (2510364339u - ((var_1_28 - var_1_21) - var_1_13));
	}


	// From: Req6Batch52Amount250
	unsigned long int stepLocal_4 = ~ var_1_59;
	if ((var_1_20 - (min (var_1_3 , var_1_21))) > stepLocal_4) {
		var_1_22 = ((max (var_1_23 , var_1_24)) - var_1_25);
	} else {
		var_1_22 = var_1_25;
	}


	// From: Req2Batch52Amount250
	signed long int stepLocal_1 = -2 / -10000000;
	if (stepLocal_1 != ((var_1_3 + var_1_35) + var_1_43)) {
		var_1_8 = (var_1_51 || var_1_10);
	}


	// From: Req18Batch52Amount250
	if (var_1_35 != (- var_1_38)) {
		var_1_50 = (var_1_37 - 4);
	} else {
		if (last_1_var_1_50 > (min (var_1_38 , var_1_44))) {
			var_1_50 = (min (var_1_44 , var_1_35));
		} else {
			if (((0 & var_1_44) * var_1_19) <= var_1_38) {
				var_1_50 = (((var_1_14 + var_1_20) + (var_1_47 - var_1_35)) + (var_1_36 - var_1_3));
			} else {
				var_1_50 = (max ((-1 - (var_1_38 + last_1_var_1_50)) , var_1_27));
			}
		}
	}


	// From: Req10Batch52Amount250
	if ((- var_1_1) <= var_1_22) {
		var_1_31 = (max (var_1_6 , (var_1_5 + var_1_7)));
	} else {
		if (var_1_14 > (256 / var_1_20)) {
			var_1_31 = (min (var_1_7 , var_1_5));
		} else {
			var_1_31 = (((min (var_1_32 , var_1_33)) + var_1_34) - 99.25f);
		}
	}


	// From: Req21Batch52Amount250
	if (var_1_8) {
		var_1_58 = var_1_34;
	} else {
		var_1_58 = var_1_23;
	}


	// From: Req14Batch52Amount250
	if (var_1_24 > var_1_6) {
		if (var_1_51 && (var_1_21 >= (- 1))) {
			var_1_42 = (var_1_14 + (var_1_35 - var_1_50));
		} else {
			var_1_42 = (var_1_3 + (abs (abs (var_1_44))));
		}
	}


	// From: Req4Batch52Amount250
	if ((var_1_57 / 24.5) <= var_1_58) {
		if (var_1_8) {
			var_1_15 = (var_1_5 + var_1_6);
		}
	}


	// From: Req9Batch52Amount250
	if (var_1_23 > (var_1_57 + var_1_24)) {
		if (last_1_var_1_29 >= var_1_15) {
			var_1_29 = var_1_30;
		}
	}


	// From: Req7Batch52Amount250
	if (var_1_48) {
		var_1_26 = (((min (var_1_42 , var_1_21)) + var_1_20) - var_1_3);
	}


	// From: Req23Batch52Amount250
	signed long int stepLocal_11 = (- var_1_41) * (abs (var_1_46));
	if (var_1_32 > (var_1_30 + var_1_31)) {
		if (stepLocal_11 <= var_1_26) {
			var_1_60 = 10u;
		} else {
			var_1_60 = var_1_41;
		}
	} else {
		var_1_60 = var_1_44;
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 16);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 49150);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 49150);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967295);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 127);
	assume_abort_if_not(var_1_20 <= 254);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 1610612735);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854765600e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854765600e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427382800e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427382800e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 63);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 64);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 0);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 0);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 0);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
}

int property() {
	return (((((((((((((((((((((((((var_1_38 >> var_1_3) | var_1_44) >= 10) ? (var_1_1 == ((float) ((min (var_1_5 , var_1_6)) + var_1_7))) : (var_1_1 == ((float) (abs (var_1_5 + var_1_7))))) && (((-2 / -10000000) != ((var_1_3 + var_1_35) + var_1_43)) ? (var_1_8 == ((unsigned char) (var_1_51 || var_1_10))) : 1)) && ((! (! var_1_48)) ? (var_1_11 == ((unsigned short int) ((var_1_3 + 128) + var_1_18))) : (var_1_11 == ((unsigned short int) (((min (var_1_13 , var_1_14)) - var_1_3) - var_1_18))))) && (((var_1_57 / 24.5) <= var_1_58) ? (var_1_8 ? (var_1_15 == ((double) (var_1_5 + var_1_6))) : 1) : 1)) && ((! last_1_var_1_8) ? ((last_1_var_1_50 <= (-256 / var_1_13)) ? (((var_1_19 - (var_1_14 + last_1_var_1_41)) < var_1_13) ? (var_1_18 == ((unsigned char) (var_1_20 - var_1_3))) : (var_1_18 == ((unsigned char) (128 - (min (var_1_3 , var_1_21)))))) : (var_1_18 == ((unsigned char) (min ((var_1_21 + (var_1_3 + 32)) , var_1_20))))) : (var_1_18 == ((unsigned char) (var_1_20 - var_1_3))))) && (((var_1_20 - (min (var_1_3 , var_1_21))) > (~ var_1_59)) ? (var_1_22 == ((float) ((max (var_1_23 , var_1_24)) - var_1_25))) : (var_1_22 == ((float) var_1_25)))) && (var_1_48 ? (var_1_26 == ((signed short int) (((min (var_1_42 , var_1_21)) + var_1_20) - var_1_3))) : 1)) && (((max ((var_1_3 >> var_1_41) , -1)) < var_1_38) ? (var_1_27 == ((unsigned long int) (2510364339u - ((var_1_28 - var_1_21) - var_1_13)))) : 1)) && ((var_1_23 > (var_1_57 + var_1_24)) ? ((last_1_var_1_29 >= var_1_15) ? (var_1_29 == ((double) var_1_30)) : 1) : 1)) && (((- var_1_1) <= var_1_22) ? (var_1_31 == ((float) (max (var_1_6 , (var_1_5 + var_1_7))))) : ((var_1_14 > (256 / var_1_20)) ? (var_1_31 == ((float) (min (var_1_7 , var_1_5)))) : (var_1_31 == ((float) (((min (var_1_32 , var_1_33)) + var_1_34) - 99.25f)))))) && (var_1_10 ? (var_1_35 == ((unsigned char) (min ((max ((var_1_3 + var_1_21) , var_1_20)) , var_1_36)))) : ((last_1_var_1_51 && last_1_var_1_8) ? ((((~ last_1_var_1_44) >> last_1_var_1_18) != (var_1_19 * var_1_3)) ? (var_1_35 == ((unsigned char) (min (var_1_20 , ((var_1_37 - 1) + var_1_3))))) : (var_1_35 == ((unsigned char) (max ((max (var_1_37 , var_1_36)) , var_1_21))))) : (var_1_35 == ((unsigned char) (var_1_20 - var_1_37)))))) && ((last_1_var_1_60 >= last_1_var_1_41) ? (var_1_38 == ((unsigned short int) (min ((min ((min (2 , var_1_3)) , var_1_20)) , (min (var_1_36 , (var_1_13 - 1))))))) : (var_1_38 == ((unsigned short int) (5 + last_1_var_1_44))))) && (((last_1_var_1_1 >= last_1_var_1_31) && ((last_1_var_1_60 / var_1_37) > var_1_36)) ? (var_1_41 == ((signed long int) ((min (var_1_36 , var_1_3)) - 1))) : (var_1_41 == ((signed long int) (last_1_var_1_35 - last_1_var_1_18))))) && ((var_1_24 > var_1_6) ? ((var_1_51 && (var_1_21 >= (- 1))) ? (var_1_42 == ((signed long int) (var_1_14 + (var_1_35 - var_1_50)))) : (var_1_42 == ((signed long int) (var_1_3 + (abs (abs (var_1_44))))))) : 1)) && (var_1_43 == ((signed long int) (max (var_1_13 , (var_1_11 - var_1_14)))))) && ((last_1_var_1_35 >= last_1_var_1_59) ? (var_1_44 == ((unsigned char) (var_1_21 + var_1_3))) : (((var_1_37 <= (last_1_var_1_44 * last_1_var_1_35)) && last_1_var_1_8) ? ((! last_1_var_1_48) ? (var_1_44 == ((unsigned char) (abs (min (var_1_3 , (var_1_20 - var_1_21)))))) : 1) : (var_1_44 == ((unsigned char) ((var_1_37 + var_1_46) - (var_1_3 + var_1_47))))))) && (last_1_var_1_8 ? (var_1_48 == ((unsigned char) (! (last_1_var_1_48 && var_1_49)))) : 1)) && ((var_1_35 != (- var_1_38)) ? (var_1_50 == ((signed long int) (var_1_37 - 4))) : ((last_1_var_1_50 > (min (var_1_38 , var_1_44))) ? (var_1_50 == ((signed long int) (min (var_1_44 , var_1_35)))) : ((((0 & var_1_44) * var_1_19) <= var_1_38) ? (var_1_50 == ((signed long int) (((var_1_14 + var_1_20) + (var_1_47 - var_1_35)) + (var_1_36 - var_1_3)))) : (var_1_50 == ((signed long int) (max ((-1 - (var_1_38 + last_1_var_1_50)) , var_1_27)))))))) && ((last_1_var_1_18 >= last_1_var_1_50) ? ((((- var_1_28) / var_1_14) >= last_1_var_1_26) ? (var_1_51 == ((unsigned char) (! (last_1_var_1_48 || (! var_1_49))))) : (var_1_51 == ((unsigned char) (((var_1_49 || var_1_53) || (var_1_54 || var_1_55)) || var_1_56)))) : (var_1_51 == ((unsigned char) (! var_1_10))))) && ((! (last_1_var_1_8 || last_1_var_1_51)) ? ((! (var_1_14 <= last_1_var_1_43)) ? (var_1_57 == ((float) (max (var_1_7 , (abs (9.3f)))))) : (var_1_57 == ((float) (10.8f - 255.4f)))) : ((last_1_var_1_29 == var_1_7) ? (var_1_57 == ((float) (var_1_32 - var_1_23))) : ((var_1_28 > last_1_var_1_60) ? (var_1_57 == ((float) (min (var_1_33 , var_1_5)))) : (var_1_57 == ((float) 255.5f)))))) && (var_1_8 ? (var_1_58 == ((double) var_1_34)) : (var_1_58 == ((double) var_1_23)))) && (var_1_54 ? (var_1_59 == ((unsigned long int) var_1_37)) : (var_1_59 == ((unsigned long int) var_1_21)))) && ((var_1_32 > (var_1_30 + var_1_31)) ? ((((- var_1_41) * (abs (var_1_46))) <= var_1_26) ? (var_1_60 == ((unsigned long int) 10u)) : (var_1_60 == ((unsigned long int) var_1_41))) : (var_1_60 == ((unsigned long int) var_1_44)))
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
