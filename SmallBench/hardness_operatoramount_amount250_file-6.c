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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 2;
unsigned short int var_1_5 = 34011;
signed short int var_1_7 = -4;
signed long int var_1_9 = -4;
unsigned short int var_1_10 = 4;
double var_1_12 = 1.8;
double var_1_13 = 49.5;
double var_1_14 = 0.0;
double var_1_15 = 8.5;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 3254334857;
unsigned long int var_1_18 = 1980622399;
signed short int var_1_19 = 16;
unsigned short int var_1_20 = 50;
signed char var_1_21 = -4;
signed char var_1_23 = -25;
float var_1_24 = 16.2;
unsigned long int var_1_25 = 2;
float var_1_26 = 10.125;
unsigned long int var_1_27 = 32;
unsigned short int var_1_28 = 256;
unsigned short int var_1_30 = 55296;
unsigned short int var_1_32 = 500;
signed char var_1_33 = 100;
unsigned short int var_1_34 = 32228;
unsigned short int var_1_35 = 10000;
unsigned short int var_1_36 = 10000;
unsigned short int var_1_37 = 27082;
unsigned char var_1_38 = 16;
unsigned char var_1_39 = 2;
unsigned char var_1_40 = 128;
unsigned char var_1_41 = 128;
unsigned char var_1_42 = 100;
unsigned char var_1_43 = 100;
unsigned char var_1_44 = 0;
signed char var_1_45 = 2;
signed char var_1_46 = 1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned char var_1_51 = 0;
unsigned long int var_1_52 = 10000;
unsigned long int var_1_53 = 2132590236;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 25;
unsigned char var_1_56 = 8;
float var_1_57 = 7.5;
float var_1_58 = 0.0;
float var_1_59 = 0.25;
float var_1_60 = 4.1;
double var_1_61 = 8.5;
unsigned short int var_1_62 = 32;
signed short int var_1_63 = -64;
float var_1_64 = 999999999999.9;
unsigned char var_1_65 = 1;
double var_1_66 = 4.625;
double var_1_67 = 0.0;
double var_1_68 = 99.75;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_27 = 32;
unsigned char last_1_var_1_38 = 16;
unsigned char last_1_var_1_54 = 0;
unsigned short int last_1_var_1_62 = 32;
unsigned char last_1_var_1_65 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req14Batch6Amount250
	signed long int stepLocal_8 = last_1_var_1_62;
	unsigned long int stepLocal_7 = var_1_18 / var_1_40;
	unsigned long int stepLocal_6 = last_1_var_1_27 / 2;
	if (stepLocal_8 <= var_1_18) {
		if (stepLocal_6 == (last_1_var_1_38 | last_1_var_1_54)) {
			var_1_38 = var_1_39;
		} else {
			var_1_38 = var_1_39;
		}
	} else {
		if (stepLocal_7 < var_1_17) {
			var_1_38 = var_1_39;
		} else {
			var_1_38 = (var_1_41 - ((max (var_1_42 , var_1_43)) - var_1_44));
		}
	}


	// From: Req4Batch6Amount250
	var_1_10 = (var_1_5 - (var_1_38 + 1000));


	// From: Req18Batch6Amount250
	unsigned short int stepLocal_13 = var_1_5;
	unsigned short int stepLocal_12 = var_1_35;
	if ((64 / (min (var_1_40 , var_1_42))) == stepLocal_12) {
		if (last_1_var_1_54 != stepLocal_13) {
			var_1_54 = (max ((min (var_1_55 , var_1_43)) , (abs (var_1_41 - var_1_42))));
		}
	} else {
		var_1_54 = ((var_1_43 + 64) - (var_1_44 + var_1_56));
	}


	// From: Req20Batch6Amount250
	var_1_61 = (var_1_14 - (min ((min (var_1_59 , var_1_60)) , var_1_13)));


	// From: Req22Batch6Amount250
	if (var_1_49) {
		var_1_63 = var_1_39;
	}


	// From: Req23Batch6Amount250
	var_1_64 = var_1_26;


	// From: Req24Batch6Amount250
	if (last_1_var_1_65) {
		var_1_65 = var_1_48;
	} else {
		var_1_65 = var_1_49;
	}


	// From: Req11Batch6Amount250
	unsigned char stepLocal_3 = var_1_54;
	if (stepLocal_3 > (- 256)) {
		var_1_27 = (var_1_17 - last_1_var_1_27);
	} else {
		if (var_1_65) {
			var_1_27 = ((max (var_1_38 , var_1_25)) + 128u);
		}
	}


	// From: Req3Batch6Amount250
	var_1_9 = ((abs (var_1_54)) - var_1_54);


	// From: Req16Batch6Amount250
	unsigned char stepLocal_10 = var_1_65;
	unsigned char stepLocal_9 = (var_1_26 / var_1_14) <= var_1_61;
	if (stepLocal_10 || var_1_65) {
		var_1_47 = var_1_48;
	} else {
		if (stepLocal_9 && (! var_1_65)) {
			var_1_47 = (! (! (! var_1_49)));
		} else {
			var_1_47 = ((var_1_65 && var_1_65) && (var_1_48 || var_1_51));
		}
	}


	// From: Req2Batch6Amount250
	if (var_1_38 <= (- 500)) {
		if (var_1_47) {
			var_1_7 = (var_1_38 - 64);
		}
	} else {
		var_1_7 = var_1_38;
	}


	// From: Req8Batch6Amount250
	if (var_1_7 < var_1_17) {
		var_1_20 = (var_1_5 - var_1_38);
	} else {
		var_1_20 = (var_1_5 - var_1_38);
	}


	// From: Req21Batch6Amount250
	unsigned char stepLocal_15 = var_1_38;
	signed long int stepLocal_14 = var_1_34 + var_1_38;
	if ((var_1_42 + (~ var_1_40)) >= stepLocal_14) {
		if (stepLocal_15 > var_1_20) {
			var_1_62 = var_1_5;
		}
	} else {
		var_1_62 = var_1_56;
	}


	// From: Req1Batch6Amount250
	if (var_1_47 || var_1_65) {
		var_1_1 = (abs (var_1_54));
	} else {
		var_1_1 = (min ((var_1_5 - var_1_38) , var_1_54));
	}


	// From: Req5Batch6Amount250
	if (! var_1_47) {
		var_1_12 = ((var_1_13 - (var_1_14 - 63.5)) + var_1_15);
	} else {
		var_1_12 = (var_1_14 - var_1_13);
	}


	// From: Req6Batch6Amount250
	signed long int stepLocal_0 = min (var_1_54 , var_1_38);
	if (var_1_65) {
		var_1_16 = (var_1_20 + 200u);
	} else {
		if (stepLocal_0 <= var_1_54) {
			var_1_16 = (var_1_17 - (var_1_18 - var_1_54));
		} else {
			var_1_16 = var_1_54;
		}
	}


	// From: Req9Batch6Amount250
	unsigned char stepLocal_1 = var_1_65;
	if (var_1_47 && stepLocal_1) {
		var_1_21 = var_1_23;
	}


	// From: Req10Batch6Amount250
	signed long int stepLocal_2 = var_1_9 >> var_1_18;
	if (var_1_47) {
		var_1_24 = var_1_14;
	} else {
		if (stepLocal_2 < (var_1_17 / (var_1_5 + var_1_25))) {
			if (var_1_65) {
				var_1_24 = (max ((min (7.25f , var_1_14)) , var_1_13));
			}
		} else {
			var_1_24 = (min (var_1_26 , (var_1_15 + var_1_14)));
		}
	}


	// From: Req12Batch6Amount250
	unsigned char stepLocal_5 = (var_1_5 != var_1_54) && (var_1_54 <= var_1_62);
	unsigned char stepLocal_4 = ! 1;
	if ((var_1_9 == var_1_17) || stepLocal_4) {
		if (var_1_65 || stepLocal_5) {
			var_1_28 = ((abs (var_1_30 - var_1_54)) - var_1_54);
		} else {
			var_1_28 = ((max (var_1_30 , var_1_5)) - (abs (var_1_54)));
		}
	}


	// From: Req19Batch6Amount250
	if ((min ((var_1_13 / var_1_14) , var_1_12)) <= var_1_15) {
		var_1_57 = ((min (var_1_13 , var_1_14)) - (var_1_58 - var_1_59));
	} else {
		if (var_1_46 > (var_1_40 / -4)) {
			var_1_57 = (max (var_1_15 , (var_1_13 - var_1_58)));
		} else {
			var_1_57 = ((var_1_13 + (abs (var_1_14))) - (max ((var_1_59 + var_1_60) , var_1_58)));
		}
	}


	// From: Req25Batch6Amount250
	if (((var_1_67 - var_1_13) - 1.25) > var_1_57) {
		var_1_66 = (var_1_13 - (var_1_59 + (var_1_14 - var_1_68)));
	} else {
		var_1_66 = var_1_14;
	}


	// From: Req7Batch6Amount250
	if ((var_1_15 + (- var_1_13)) != (var_1_14 * var_1_24)) {
		var_1_19 = (max (var_1_38 , -5));
	} else {
		var_1_19 = (abs (var_1_38));
	}


	// From: Req13Batch6Amount250
	if (! (! (var_1_62 <= var_1_38))) {
		if (var_1_19 >= (var_1_33 - 16)) {
			if ((var_1_19 < var_1_17) || (! var_1_65)) {
				if (var_1_13 == var_1_14) {
					var_1_32 = (var_1_30 - var_1_54);
				} else {
					var_1_32 = var_1_5;
				}
			} else {
				var_1_32 = (((var_1_34 - 4) + (var_1_35 + var_1_36)) - var_1_38);
			}
		} else {
			var_1_32 = (var_1_34 + (var_1_37 - var_1_36));
		}
	} else {
		var_1_32 = (((max (var_1_37 , var_1_34)) + 30970) - (min (var_1_35 , var_1_54)));
	}


	// From: Req15Batch6Amount250
	if (var_1_61 < var_1_14) {
		if (var_1_35 != (var_1_19 + (var_1_5 - 256))) {
			var_1_45 = var_1_44;
		} else {
			var_1_45 = (var_1_44 - (100 - var_1_46));
		}
	} else {
		var_1_45 = (var_1_44 + 10);
	}


	// From: Req17Batch6Amount250
	unsigned short int stepLocal_11 = var_1_32;
	if (var_1_38 <= stepLocal_11) {
		if (var_1_47) {
			var_1_52 = (max (var_1_39 , var_1_34));
		} else {
			if (var_1_26 > (var_1_14 - var_1_13)) {
				var_1_52 = (min ((min (var_1_25 , var_1_32)) , 500u));
			} else {
				var_1_52 = var_1_16;
			}
		}
	} else {
		var_1_52 = (((var_1_53 - 4u) - var_1_32) + (abs (var_1_41 + var_1_36)));
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 2305843.009213691390e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -461168.6018427382800e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427382800e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854765600e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 49150);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -1);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 24575);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 8192);
	assume_abort_if_not(var_1_35 <= 16384);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 8192);
	assume_abort_if_not(var_1_36 <= 16383);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 16383);
	assume_abort_if_not(var_1_37 <= 32767);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 255);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 127);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 63);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 63);
	assume_abort_if_not(var_1_43 <= 127);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 1610612735);
	assume_abort_if_not(var_1_53 <= 2147483647);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 63);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 4611686.018427382800e+12F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427382800e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 4611686.018427382800e+12F && var_1_60 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 4611686.018427387900e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854776000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691390e+12F && var_1_68 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_27 = var_1_27;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_65 = var_1_65;
}

int property() {
	return (((((((((((((((((((((((((var_1_47 || var_1_65) ? (var_1_1 == ((unsigned short int) (abs (var_1_54)))) : (var_1_1 == ((unsigned short int) (min ((var_1_5 - var_1_38) , var_1_54))))) && ((var_1_38 <= (- 500)) ? (var_1_47 ? (var_1_7 == ((signed short int) (var_1_38 - 64))) : 1) : (var_1_7 == ((signed short int) var_1_38)))) && (var_1_9 == ((signed long int) ((abs (var_1_54)) - var_1_54)))) && (var_1_10 == ((unsigned short int) (var_1_5 - (var_1_38 + 1000))))) && ((! var_1_47) ? (var_1_12 == ((double) ((var_1_13 - (var_1_14 - 63.5)) + var_1_15))) : (var_1_12 == ((double) (var_1_14 - var_1_13))))) && (var_1_65 ? (var_1_16 == ((unsigned long int) (var_1_20 + 200u))) : (((min (var_1_54 , var_1_38)) <= var_1_54) ? (var_1_16 == ((unsigned long int) (var_1_17 - (var_1_18 - var_1_54)))) : (var_1_16 == ((unsigned long int) var_1_54))))) && (((var_1_15 + (- var_1_13)) != (var_1_14 * var_1_24)) ? (var_1_19 == ((signed short int) (max (var_1_38 , -5)))) : (var_1_19 == ((signed short int) (abs (var_1_38)))))) && ((var_1_7 < var_1_17) ? (var_1_20 == ((unsigned short int) (var_1_5 - var_1_38))) : (var_1_20 == ((unsigned short int) (var_1_5 - var_1_38))))) && ((var_1_47 && var_1_65) ? (var_1_21 == ((signed char) var_1_23)) : 1)) && (var_1_47 ? (var_1_24 == ((float) var_1_14)) : (((var_1_9 >> var_1_18) < (var_1_17 / (var_1_5 + var_1_25))) ? (var_1_65 ? (var_1_24 == ((float) (max ((min (7.25f , var_1_14)) , var_1_13)))) : 1) : (var_1_24 == ((float) (min (var_1_26 , (var_1_15 + var_1_14)))))))) && ((var_1_54 > (- 256)) ? (var_1_27 == ((unsigned long int) (var_1_17 - last_1_var_1_27))) : (var_1_65 ? (var_1_27 == ((unsigned long int) ((max (var_1_38 , var_1_25)) + 128u))) : 1))) && (((var_1_9 == var_1_17) || (! 1)) ? ((var_1_65 || ((var_1_5 != var_1_54) && (var_1_54 <= var_1_62))) ? (var_1_28 == ((unsigned short int) ((abs (var_1_30 - var_1_54)) - var_1_54))) : (var_1_28 == ((unsigned short int) ((max (var_1_30 , var_1_5)) - (abs (var_1_54)))))) : 1)) && ((! (! (var_1_62 <= var_1_38))) ? ((var_1_19 >= (var_1_33 - 16)) ? (((var_1_19 < var_1_17) || (! var_1_65)) ? ((var_1_13 == var_1_14) ? (var_1_32 == ((unsigned short int) (var_1_30 - var_1_54))) : (var_1_32 == ((unsigned short int) var_1_5))) : (var_1_32 == ((unsigned short int) (((var_1_34 - 4) + (var_1_35 + var_1_36)) - var_1_38)))) : (var_1_32 == ((unsigned short int) (var_1_34 + (var_1_37 - var_1_36))))) : (var_1_32 == ((unsigned short int) (((max (var_1_37 , var_1_34)) + 30970) - (min (var_1_35 , var_1_54))))))) && ((last_1_var_1_62 <= var_1_18) ? (((last_1_var_1_27 / 2) == (last_1_var_1_38 | last_1_var_1_54)) ? (var_1_38 == ((unsigned char) var_1_39)) : (var_1_38 == ((unsigned char) var_1_39))) : (((var_1_18 / var_1_40) < var_1_17) ? (var_1_38 == ((unsigned char) var_1_39)) : (var_1_38 == ((unsigned char) (var_1_41 - ((max (var_1_42 , var_1_43)) - var_1_44))))))) && ((var_1_61 < var_1_14) ? ((var_1_35 != (var_1_19 + (var_1_5 - 256))) ? (var_1_45 == ((signed char) var_1_44)) : (var_1_45 == ((signed char) (var_1_44 - (100 - var_1_46))))) : (var_1_45 == ((signed char) (var_1_44 + 10))))) && ((var_1_65 || var_1_65) ? (var_1_47 == ((unsigned char) var_1_48)) : ((((var_1_26 / var_1_14) <= var_1_61) && (! var_1_65)) ? (var_1_47 == ((unsigned char) (! (! (! var_1_49))))) : (var_1_47 == ((unsigned char) ((var_1_65 && var_1_65) && (var_1_48 || var_1_51))))))) && ((var_1_38 <= var_1_32) ? (var_1_47 ? (var_1_52 == ((unsigned long int) (max (var_1_39 , var_1_34)))) : ((var_1_26 > (var_1_14 - var_1_13)) ? (var_1_52 == ((unsigned long int) (min ((min (var_1_25 , var_1_32)) , 500u)))) : (var_1_52 == ((unsigned long int) var_1_16)))) : (var_1_52 == ((unsigned long int) (((var_1_53 - 4u) - var_1_32) + (abs (var_1_41 + var_1_36))))))) && (((64 / (min (var_1_40 , var_1_42))) == var_1_35) ? ((last_1_var_1_54 != var_1_5) ? (var_1_54 == ((unsigned char) (max ((min (var_1_55 , var_1_43)) , (abs (var_1_41 - var_1_42)))))) : 1) : (var_1_54 == ((unsigned char) ((var_1_43 + 64) - (var_1_44 + var_1_56)))))) && (((min ((var_1_13 / var_1_14) , var_1_12)) <= var_1_15) ? (var_1_57 == ((float) ((min (var_1_13 , var_1_14)) - (var_1_58 - var_1_59)))) : ((var_1_46 > (var_1_40 / -4)) ? (var_1_57 == ((float) (max (var_1_15 , (var_1_13 - var_1_58))))) : (var_1_57 == ((float) ((var_1_13 + (abs (var_1_14))) - (max ((var_1_59 + var_1_60) , var_1_58)))))))) && (var_1_61 == ((double) (var_1_14 - (min ((min (var_1_59 , var_1_60)) , var_1_13)))))) && (((var_1_42 + (~ var_1_40)) >= (var_1_34 + var_1_38)) ? ((var_1_38 > var_1_20) ? (var_1_62 == ((unsigned short int) var_1_5)) : 1) : (var_1_62 == ((unsigned short int) var_1_56)))) && (var_1_49 ? (var_1_63 == ((signed short int) var_1_39)) : 1)) && (var_1_64 == ((float) var_1_26))) && (last_1_var_1_65 ? (var_1_65 == ((unsigned char) var_1_48)) : (var_1_65 == ((unsigned char) var_1_49)))) && ((((var_1_67 - var_1_13) - 1.25) > var_1_57) ? (var_1_66 == ((double) (var_1_13 - (var_1_59 + (var_1_14 - var_1_68))))) : (var_1_66 == ((double) var_1_14)))
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
