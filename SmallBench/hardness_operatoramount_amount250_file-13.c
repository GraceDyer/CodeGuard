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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 1;
signed short int var_1_5 = 25;
signed char var_1_9 = -10;
signed char var_1_10 = -16;
signed char var_1_11 = -10;
signed char var_1_12 = -25;
double var_1_13 = 64.875;
double var_1_15 = 1.625;
double var_1_16 = 32.2;
double var_1_17 = 8.6;
double var_1_18 = 10.5;
signed long int var_1_19 = 1994586494;
unsigned long int var_1_21 = 50;
unsigned long int var_1_22 = 1000000000;
unsigned char var_1_24 = 0;
float var_1_25 = 31.6;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
double var_1_30 = 5.5;
unsigned short int var_1_31 = 100;
unsigned short int var_1_32 = 35973;
unsigned short int var_1_35 = 43883;
signed short int var_1_37 = 5;
float var_1_38 = 999999999999.5;
float var_1_39 = 0.0;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 128;
unsigned char var_1_42 = 128;
unsigned char var_1_43 = 4;
unsigned char var_1_44 = 4;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
signed short int var_1_47 = -1;
signed short int var_1_48 = 10000;
signed short int var_1_49 = 10000;
unsigned short int var_1_50 = 100;
unsigned short int var_1_51 = 32;
float var_1_53 = 1000.5;
unsigned char var_1_54 = 50;
unsigned char var_1_55 = 64;
unsigned char var_1_56 = 100;
unsigned char var_1_57 = 64;
signed short int var_1_58 = -32;
double var_1_59 = 256.5;
float var_1_60 = 50.75;
float var_1_61 = 63.6;
unsigned long int var_1_62 = 5;
unsigned char var_1_63 = 1;
float var_1_64 = 9.125;
unsigned char var_1_65 = 0;
unsigned long int var_1_66 = 100;
signed long int var_1_68 = 2;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_37 = 5;
signed short int last_1_var_1_47 = -1;
unsigned short int last_1_var_1_50 = 100;
unsigned short int last_1_var_1_51 = 32;
unsigned char last_1_var_1_63 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch13Amount250
	if ((max (var_1_35 , (var_1_12 >> last_1_var_1_51))) > last_1_var_1_37) {
		var_1_40 = (min ((min (var_1_41 , (var_1_42 - var_1_43))) , (max (var_1_44 , (min (var_1_45 , var_1_46))))));
	} else {
		var_1_40 = var_1_42;
	}


	// From: Req1Batch13Amount250
	if ((last_1_var_1_47 <= last_1_var_1_50) || last_1_var_1_63) {
		var_1_1 = 0;
	}


	// From: Req6Batch13Amount250
	if ((9.5f / var_1_25) != var_1_18) {
		if (! var_1_1) {
			if (var_1_16 > (- var_1_15)) {
				var_1_24 = (var_1_26 || var_1_27);
			} else {
				var_1_24 = ((var_1_27 && var_1_26) || (! (! var_1_28)));
			}
		} else {
			var_1_24 = (var_1_26 || var_1_27);
		}
	} else {
		var_1_24 = var_1_29;
	}


	// From: Req13Batch13Amount250
	unsigned char stepLocal_9 = var_1_46;
	if (stepLocal_9 <= (max (var_1_22 , var_1_19))) {
		var_1_50 = (abs (var_1_41));
	} else {
		var_1_50 = (var_1_32 - var_1_45);
	}


	// From: Req16Batch13Amount250
	var_1_54 = ((var_1_55 + var_1_56) - (var_1_57 - 32));


	// From: Req23Batch13Amount250
	if (var_1_24) {
		var_1_65 = var_1_28;
	}


	// From: Req9Batch13Amount250
	unsigned char stepLocal_7 = (var_1_35 - var_1_54) >= 16;
	if (stepLocal_7 && var_1_1) {
		var_1_37 = (abs (var_1_10 + (max (var_1_12 , var_1_11))));
	}


	// From: Req12Batch13Amount250
	var_1_47 = (((var_1_48 + var_1_49) - var_1_42) - (16 + var_1_37));


	// From: Req22Batch13Amount250
	signed short int stepLocal_19 = var_1_37;
	if (var_1_49 <= stepLocal_19) {
		var_1_64 = (min (var_1_16 , var_1_61));
	}


	// From: Req3Batch13Amount250
	unsigned char stepLocal_0 = var_1_54;
	if (var_1_37 > stepLocal_0) {
		var_1_9 = ((var_1_10 + var_1_11) + var_1_12);
	}


	// From: Req4Batch13Amount250
	signed long int stepLocal_2 = var_1_54 - (var_1_19 - var_1_50);
	signed char stepLocal_1 = var_1_9;
	if (var_1_40 > stepLocal_1) {
		var_1_13 = ((var_1_15 - var_1_16) + ((max (var_1_17 , 499.25)) + var_1_18));
	} else {
		if ((2 | 32) <= stepLocal_2) {
			var_1_13 = (min (4.8 , var_1_17));
		} else {
			var_1_13 = (var_1_18 + var_1_16);
		}
	}


	// From: Req8Batch13Amount250
	signed long int stepLocal_6 = var_1_35 - var_1_40;
	signed long int stepLocal_5 = var_1_40 + var_1_9;
	if (var_1_27) {
		var_1_31 = (max (var_1_40 , (var_1_32 - (max (var_1_54 , var_1_54)))));
	} else {
		if (stepLocal_5 != var_1_54) {
			if (var_1_32 < stepLocal_6) {
				var_1_31 = var_1_40;
			}
		} else {
			var_1_31 = var_1_40;
		}
	}


	// From: Req20Batch13Amount250
	if (! (var_1_64 <= var_1_25)) {
		var_1_62 = var_1_31;
	} else {
		var_1_62 = var_1_56;
	}


	// From: Req25Batch13Amount250
	unsigned short int stepLocal_21 = var_1_31;
	signed long int stepLocal_20 = var_1_40 * 100;
	if (stepLocal_21 < var_1_45) {
		if ((max (128 , (var_1_55 / -64))) > stepLocal_20) {
			var_1_68 = var_1_48;
		} else {
			var_1_68 = var_1_40;
		}
	}


	// From: Req14Batch13Amount250
	signed long int stepLocal_11 = var_1_9 + (var_1_50 * var_1_54);
	signed long int stepLocal_10 = var_1_19;
	if (var_1_35 >= stepLocal_10) {
		var_1_51 = var_1_40;
	} else {
		if (stepLocal_11 <= -2) {
			var_1_51 = (var_1_32 - 256);
		}
	}


	// From: Req21Batch13Amount250
	if ((var_1_64 + 128.5f) == (var_1_39 / var_1_25)) {
		var_1_63 = ((var_1_24 && var_1_24) || var_1_29);
	} else {
		var_1_63 = var_1_29;
	}


	// From: Req2Batch13Amount250
	if (var_1_63 || var_1_24) {
		var_1_5 = (min (50 , var_1_40));
	} else {
		if (var_1_24) {
			var_1_5 = (var_1_40 - var_1_54);
		}
	}


	// From: Req7Batch13Amount250
	if (var_1_29 || var_1_1) {
		var_1_30 = ((abs (var_1_16)) - var_1_15);
	} else {
		if (! var_1_63) {
			var_1_30 = var_1_18;
		} else {
			var_1_30 = var_1_16;
		}
	}


	// From: Req15Batch13Amount250
	signed short int stepLocal_15 = var_1_48;
	unsigned char stepLocal_14 = (var_1_15 * 1000000.25) != (min (1000000.25 , var_1_25));
	signed long int stepLocal_13 = 0;
	unsigned short int stepLocal_12 = var_1_51;
	if (stepLocal_12 <= var_1_42) {
		if (stepLocal_14 && (var_1_40 >= (var_1_12 / var_1_48))) {
			if (var_1_54 >= stepLocal_13) {
				var_1_53 = var_1_39;
			} else {
				var_1_53 = (var_1_16 - var_1_39);
			}
		} else {
			var_1_53 = ((max ((var_1_16 - var_1_15) , var_1_18)) + var_1_17);
		}
	} else {
		if (var_1_43 <= stepLocal_15) {
			var_1_53 = var_1_15;
		} else {
			var_1_53 = (max (var_1_17 , var_1_39));
		}
	}


	// From: Req17Batch13Amount250
	unsigned short int stepLocal_16 = var_1_51;
	if ((var_1_17 * var_1_25) < var_1_53) {
		var_1_58 = (min (var_1_57 , var_1_12));
	} else {
		if (var_1_65) {
			var_1_58 = var_1_57;
		} else {
			if (stepLocal_16 == var_1_56) {
				var_1_58 = (var_1_56 + var_1_47);
			} else {
				var_1_58 = (8 - (var_1_56 + var_1_49));
			}
		}
	}


	// From: Req19Batch13Amount250
	unsigned long int stepLocal_18 = var_1_62;
	unsigned char stepLocal_17 = var_1_54 >= var_1_57;
	if (var_1_55 >= stepLocal_18) {
		if (stepLocal_17 && var_1_26) {
			var_1_60 = (var_1_18 + (max (var_1_61 , var_1_16)));
		} else {
			var_1_60 = (max (var_1_15 , var_1_16));
		}
	} else {
		var_1_60 = var_1_39;
	}


	// From: Req24Batch13Amount250
	if (var_1_63) {
		var_1_66 = var_1_35;
	} else {
		var_1_66 = var_1_54;
	}


	// From: Req5Batch13Amount250
	signed short int stepLocal_4 = var_1_58;
	unsigned char stepLocal_3 = var_1_40;
	if (stepLocal_4 >= (var_1_54 * var_1_50)) {
		if (var_1_63) {
			var_1_21 = (((var_1_22 - var_1_40) + var_1_50) + (abs (var_1_19)));
		} else {
			var_1_21 = (min ((abs (var_1_19)) , (var_1_22 + (var_1_40 + var_1_50))));
		}
	} else {
		if (stepLocal_3 < var_1_19) {
			var_1_21 = (var_1_22 + var_1_40);
		} else {
			var_1_21 = (var_1_19 + (max (var_1_50 , var_1_22)));
		}
	}


	// From: Req10Batch13Amount250
	signed long int stepLocal_8 = var_1_68;
	if (var_1_58 > stepLocal_8) {
		var_1_38 = (var_1_16 - var_1_15);
	} else {
		var_1_38 = (var_1_15 - (max (var_1_16 , (var_1_39 - 64.5f))));
	}


	// From: Req18Batch13Amount250
	if (var_1_35 == var_1_66) {
		if (var_1_19 < (abs (var_1_54))) {
			var_1_59 = (max (var_1_39 , (var_1_15 - var_1_16)));
		}
	} else {
		if ((min (var_1_40 , var_1_9)) > var_1_11) {
			if (var_1_28) {
				var_1_59 = (max ((min ((7.8 - var_1_39) , var_1_16)) , (max (var_1_18 , var_1_15))));
			} else {
				if ((~ var_1_43) >= (~ -25)) {
					var_1_59 = (var_1_15 - (var_1_39 - (min (var_1_16 , 15.6))));
				} else {
					var_1_59 = (2.5 + 2.875);
				}
			}
		}
	}
}



void updateVariables() {
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427382800e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 536870912);
	assume_abort_if_not(var_1_22 <= 1073741824);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	assume_abort_if_not(var_1_25 != 0.0F);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 32767);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65535);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 4611686.018427382800e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= 8191);
	assume_abort_if_not(var_1_48 <= 16383);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 8191);
	assume_abort_if_not(var_1_49 <= 16383);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 63);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 64);
	assume_abort_if_not(var_1_56 <= 127);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 63);
	assume_abort_if_not(var_1_57 <= 127);
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -461168.6018427382800e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427382800e+12F && var_1_61 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_37 = var_1_37;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_63 = var_1_63;
}

int property() {
	return ((((((((((((((((((((((((((last_1_var_1_47 <= last_1_var_1_50) || last_1_var_1_63) ? (var_1_1 == ((unsigned char) 0)) : 1) && ((var_1_63 || var_1_24) ? (var_1_5 == ((signed short int) (min (50 , var_1_40)))) : (var_1_24 ? (var_1_5 == ((signed short int) (var_1_40 - var_1_54))) : 1))) && ((var_1_37 > var_1_54) ? (var_1_9 == ((signed char) ((var_1_10 + var_1_11) + var_1_12))) : 1)) && ((var_1_40 > var_1_9) ? (var_1_13 == ((double) ((var_1_15 - var_1_16) + ((max (var_1_17 , 499.25)) + var_1_18)))) : (((2 | 32) <= (var_1_54 - (var_1_19 - var_1_50))) ? (var_1_13 == ((double) (min (4.8 , var_1_17)))) : (var_1_13 == ((double) (var_1_18 + var_1_16)))))) && ((var_1_58 >= (var_1_54 * var_1_50)) ? (var_1_63 ? (var_1_21 == ((unsigned long int) (((var_1_22 - var_1_40) + var_1_50) + (abs (var_1_19))))) : (var_1_21 == ((unsigned long int) (min ((abs (var_1_19)) , (var_1_22 + (var_1_40 + var_1_50))))))) : ((var_1_40 < var_1_19) ? (var_1_21 == ((unsigned long int) (var_1_22 + var_1_40))) : (var_1_21 == ((unsigned long int) (var_1_19 + (max (var_1_50 , var_1_22)))))))) && (((9.5f / var_1_25) != var_1_18) ? ((! var_1_1) ? ((var_1_16 > (- var_1_15)) ? (var_1_24 == ((unsigned char) (var_1_26 || var_1_27))) : (var_1_24 == ((unsigned char) ((var_1_27 && var_1_26) || (! (! var_1_28)))))) : (var_1_24 == ((unsigned char) (var_1_26 || var_1_27)))) : (var_1_24 == ((unsigned char) var_1_29)))) && ((var_1_29 || var_1_1) ? (var_1_30 == ((double) ((abs (var_1_16)) - var_1_15))) : ((! var_1_63) ? (var_1_30 == ((double) var_1_18)) : (var_1_30 == ((double) var_1_16))))) && (var_1_27 ? (var_1_31 == ((unsigned short int) (max (var_1_40 , (var_1_32 - (max (var_1_54 , var_1_54))))))) : (((var_1_40 + var_1_9) != var_1_54) ? ((var_1_32 < (var_1_35 - var_1_40)) ? (var_1_31 == ((unsigned short int) var_1_40)) : 1) : (var_1_31 == ((unsigned short int) var_1_40))))) && ((((var_1_35 - var_1_54) >= 16) && var_1_1) ? (var_1_37 == ((signed short int) (abs (var_1_10 + (max (var_1_12 , var_1_11)))))) : 1)) && ((var_1_58 > var_1_68) ? (var_1_38 == ((float) (var_1_16 - var_1_15))) : (var_1_38 == ((float) (var_1_15 - (max (var_1_16 , (var_1_39 - 64.5f)))))))) && (((max (var_1_35 , (var_1_12 >> last_1_var_1_51))) > last_1_var_1_37) ? (var_1_40 == ((unsigned char) (min ((min (var_1_41 , (var_1_42 - var_1_43))) , (max (var_1_44 , (min (var_1_45 , var_1_46)))))))) : (var_1_40 == ((unsigned char) var_1_42)))) && (var_1_47 == ((signed short int) (((var_1_48 + var_1_49) - var_1_42) - (16 + var_1_37))))) && ((var_1_46 <= (max (var_1_22 , var_1_19))) ? (var_1_50 == ((unsigned short int) (abs (var_1_41)))) : (var_1_50 == ((unsigned short int) (var_1_32 - var_1_45))))) && ((var_1_35 >= var_1_19) ? (var_1_51 == ((unsigned short int) var_1_40)) : (((var_1_9 + (var_1_50 * var_1_54)) <= -2) ? (var_1_51 == ((unsigned short int) (var_1_32 - 256))) : 1))) && ((var_1_51 <= var_1_42) ? ((((var_1_15 * 1000000.25) != (min (1000000.25 , var_1_25))) && (var_1_40 >= (var_1_12 / var_1_48))) ? ((var_1_54 >= 0) ? (var_1_53 == ((float) var_1_39)) : (var_1_53 == ((float) (var_1_16 - var_1_39)))) : (var_1_53 == ((float) ((max ((var_1_16 - var_1_15) , var_1_18)) + var_1_17)))) : ((var_1_43 <= var_1_48) ? (var_1_53 == ((float) var_1_15)) : (var_1_53 == ((float) (max (var_1_17 , var_1_39))))))) && (var_1_54 == ((unsigned char) ((var_1_55 + var_1_56) - (var_1_57 - 32))))) && (((var_1_17 * var_1_25) < var_1_53) ? (var_1_58 == ((signed short int) (min (var_1_57 , var_1_12)))) : (var_1_65 ? (var_1_58 == ((signed short int) var_1_57)) : ((var_1_51 == var_1_56) ? (var_1_58 == ((signed short int) (var_1_56 + var_1_47))) : (var_1_58 == ((signed short int) (8 - (var_1_56 + var_1_49)))))))) && ((var_1_35 == var_1_66) ? ((var_1_19 < (abs (var_1_54))) ? (var_1_59 == ((double) (max (var_1_39 , (var_1_15 - var_1_16))))) : 1) : (((min (var_1_40 , var_1_9)) > var_1_11) ? (var_1_28 ? (var_1_59 == ((double) (max ((min ((7.8 - var_1_39) , var_1_16)) , (max (var_1_18 , var_1_15)))))) : (((~ var_1_43) >= (~ -25)) ? (var_1_59 == ((double) (var_1_15 - (var_1_39 - (min (var_1_16 , 15.6)))))) : (var_1_59 == ((double) (2.5 + 2.875))))) : 1))) && ((var_1_55 >= var_1_62) ? (((var_1_54 >= var_1_57) && var_1_26) ? (var_1_60 == ((float) (var_1_18 + (max (var_1_61 , var_1_16))))) : (var_1_60 == ((float) (max (var_1_15 , var_1_16))))) : (var_1_60 == ((float) var_1_39)))) && ((! (var_1_64 <= var_1_25)) ? (var_1_62 == ((unsigned long int) var_1_31)) : (var_1_62 == ((unsigned long int) var_1_56)))) && (((var_1_64 + 128.5f) == (var_1_39 / var_1_25)) ? (var_1_63 == ((unsigned char) ((var_1_24 && var_1_24) || var_1_29))) : (var_1_63 == ((unsigned char) var_1_29)))) && ((var_1_49 <= var_1_37) ? (var_1_64 == ((float) (min (var_1_16 , var_1_61)))) : 1)) && (var_1_24 ? (var_1_65 == ((unsigned char) var_1_28)) : 1)) && (var_1_63 ? (var_1_66 == ((unsigned long int) var_1_35)) : (var_1_66 == ((unsigned long int) var_1_54)))) && ((var_1_31 < var_1_45) ? (((max (128 , (var_1_55 / -64))) > (var_1_40 * 100)) ? (var_1_68 == ((signed long int) var_1_48)) : (var_1_68 == ((signed long int) var_1_40))) : 1)
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
