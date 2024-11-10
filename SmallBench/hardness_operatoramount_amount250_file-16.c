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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch16Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 2;
float var_1_9 = 1.75;
float var_1_12 = 2.125;
float var_1_13 = 63.375;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 50820;
unsigned long int var_1_16 = 1940175438;
unsigned long int var_1_17 = 2058630425;
unsigned short int var_1_20 = 41527;
signed long int var_1_21 = -10;
double var_1_22 = 127.1;
double var_1_23 = 15.8;
double var_1_24 = 63.2;
signed long int var_1_26 = 0;
signed long int var_1_28 = 1895511932;
unsigned long int var_1_29 = 256;
signed char var_1_31 = 4;
signed long int var_1_32 = 10000;
signed long int var_1_34 = 1744455711;
unsigned short int var_1_35 = 16;
unsigned short int var_1_36 = 16;
unsigned long int var_1_39 = 10;
unsigned long int var_1_41 = 1000000000;
signed char var_1_42 = 0;
signed char var_1_43 = 5;
signed char var_1_44 = 16;
signed char var_1_45 = 1;
signed char var_1_46 = 10;
signed char var_1_47 = 1;
signed short int var_1_48 = -256;
signed short int var_1_49 = 23807;
double var_1_50 = 24.5;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 1;
unsigned long int var_1_58 = 128;
unsigned long int var_1_59 = 4186321149;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned long int var_1_62 = 200;
unsigned long int var_1_63 = 3609046058;
signed short int var_1_64 = -256;
unsigned char var_1_65 = 25;
signed char var_1_66 = 0;
signed char var_1_67 = -100;
signed short int var_1_68 = 50;
double var_1_69 = 64.35;
double var_1_70 = 3.12;
double var_1_71 = 16.25;
double var_1_72 = 24.7;
unsigned char var_1_73 = 1;
unsigned short int var_1_74 = 1;
double var_1_75 = 128.1;

// Calibration values

// Last'ed variables
float last_1_var_1_9 = 1.75;
signed long int last_1_var_1_21 = -10;
signed long int last_1_var_1_32 = 10000;
unsigned short int last_1_var_1_36 = 16;
unsigned long int last_1_var_1_39 = 10;
signed char last_1_var_1_42 = 0;
signed short int last_1_var_1_48 = -256;
unsigned char last_1_var_1_51 = 0;
unsigned char last_1_var_1_57 = 1;
unsigned long int last_1_var_1_58 = 128;
signed short int last_1_var_1_64 = -256;
unsigned char last_1_var_1_65 = 25;
signed char last_1_var_1_66 = 0;
unsigned short int last_1_var_1_74 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req15Batch16Amount250
	if ((var_1_47 | last_1_var_1_65) > var_1_17) {
		var_1_57 = ((! var_1_52) && var_1_56);
	}


	// From: Req24Batch16Amount250
	if (var_1_57) {
		var_1_69 = (var_1_24 - (min (var_1_22 , var_1_13)));
	} else {
		var_1_69 = ((var_1_70 + var_1_71) + var_1_72);
	}


	// From: Req9Batch16Amount250
	if (last_1_var_1_66 == last_1_var_1_39) {
		var_1_36 = (var_1_20 - (min ((min (last_1_var_1_65 , 8)) , (max (last_1_var_1_65 , last_1_var_1_65)))));
	} else {
		if (last_1_var_1_66 > last_1_var_1_39) {
			var_1_36 = (min (last_1_var_1_65 , last_1_var_1_65));
		} else {
			var_1_36 = var_1_20;
		}
	}


	// From: Req17Batch16Amount250
	if (var_1_23 < (abs (var_1_13))) {
		if (var_1_43 > (last_1_var_1_36 * (abs (var_1_47)))) {
			var_1_60 = (var_1_52 || var_1_56);
		} else {
			var_1_60 = (! ((last_1_var_1_51 && var_1_52) || var_1_61));
		}
	} else {
		var_1_60 = (! (! (var_1_55 && var_1_52)));
	}


	// From: Req21Batch16Amount250
	if (((var_1_24 - var_1_12) * last_1_var_1_9) < (last_1_var_1_9 + var_1_13)) {
		var_1_66 = 32;
	}


	// From: Req5Batch16Amount250
	unsigned char stepLocal_1 = last_1_var_1_74 == last_1_var_1_65;
	if (last_1_var_1_57) {
		if (stepLocal_1 && last_1_var_1_57) {
			var_1_26 = ((min ((max (last_1_var_1_66 , last_1_var_1_42)) , last_1_var_1_42)) + var_1_20);
		} else {
			var_1_26 = (var_1_20 - ((var_1_28 - last_1_var_1_32) - last_1_var_1_65));
		}
	} else {
		var_1_26 = last_1_var_1_66;
	}


	// From: Req11Batch16Amount250
	signed long int stepLocal_7 = last_1_var_1_32;
	signed char stepLocal_6 = var_1_44;
	unsigned long int stepLocal_5 = last_1_var_1_58;
	if ((last_1_var_1_36 + last_1_var_1_65) > stepLocal_7) {
		if ((last_1_var_1_65 * var_1_16) <= stepLocal_5) {
			var_1_42 = (min (((var_1_43 + var_1_44) - var_1_45) , var_1_46));
		} else {
			if (stepLocal_6 >= (abs (var_1_46))) {
				if (! last_1_var_1_51) {
					var_1_42 = (abs (var_1_43));
				} else {
					var_1_42 = (var_1_43 + (var_1_44 - var_1_47));
				}
			}
		}
	} else {
		var_1_42 = ((var_1_44 - var_1_47) + var_1_43);
	}


	// From: Req22Batch16Amount250
	var_1_67 = (min ((var_1_47 - (50 + var_1_44)) , var_1_45));


	// From: Req23Batch16Amount250
	var_1_68 = var_1_44;


	// From: Req25Batch16Amount250
	var_1_73 = var_1_52;


	// From: Req26Batch16Amount250
	var_1_74 = var_1_43;


	// From: Req27Batch16Amount250
	var_1_75 = var_1_23;


	// From: Req20Batch16Amount250
	if ((- (var_1_23 - var_1_22)) <= (var_1_12 + (- var_1_69))) {
		var_1_65 = (min ((var_1_43 + var_1_44) , var_1_45));
	}


	// From: Req8Batch16Amount250
	if (var_1_60) {
		var_1_35 = (max (var_1_65 , var_1_20));
	} else {
		var_1_35 = (var_1_20 - var_1_65);
	}


	// From: Req4Batch16Amount250
	if ((var_1_12 - (9.3 + var_1_22)) < (var_1_13 - (var_1_23 + var_1_24))) {
		if (var_1_60) {
			var_1_21 = (min ((var_1_20 - last_1_var_1_21) , var_1_65));
		}
	} else {
		var_1_21 = ((abs (var_1_42)) + var_1_67);
	}


	// From: Req14Batch16Amount250
	if (var_1_73) {
		if (var_1_65 > var_1_65) {
			var_1_51 = var_1_52;
		} else {
			if (var_1_26 > var_1_66) {
				var_1_51 = (var_1_55 && var_1_56);
			}
		}
	}


	// From: Req12Batch16Amount250
	if (var_1_65 <= (var_1_44 - var_1_43)) {
		var_1_48 = last_1_var_1_48;
	} else {
		var_1_48 = (max (((var_1_49 - var_1_43) - var_1_45) , (min (var_1_44 , (var_1_42 + var_1_31)))));
	}


	// From: Req3Batch16Amount250
	if ((var_1_21 + (var_1_15 - var_1_65)) >= ((var_1_16 + var_1_17) - (max (var_1_74 , var_1_35)))) {
		var_1_14 = var_1_65;
	} else {
		var_1_14 = (var_1_20 - (abs (2)));
	}


	// From: Req7Batch16Amount250
	signed long int stepLocal_3 = (var_1_67 & var_1_26) + var_1_21;
	signed long int stepLocal_2 = var_1_14 / var_1_15;
	if (var_1_65 == stepLocal_3) {
		if (stepLocal_2 < var_1_16) {
			var_1_32 = (((max (var_1_28 , var_1_34)) - var_1_20) - var_1_65);
		}
	}


	// From: Req1Batch16Amount250
	unsigned long int stepLocal_0 = var_1_26 * (10u * var_1_14);
	if (var_1_36 >= stepLocal_0) {
		var_1_1 = ((var_1_42 + -25) + (min (var_1_65 , var_1_65)));
	} else {
		var_1_1 = (var_1_42 + (var_1_66 + -2));
	}


	// From: Req16Batch16Amount250
	if (var_1_52 && var_1_51) {
		var_1_58 = (max (var_1_48 , var_1_14));
	} else {
		var_1_58 = ((min ((var_1_17 + var_1_28) , var_1_59)) - (max ((abs (var_1_1)) , 50u)));
	}


	// From: Req18Batch16Amount250
	signed long int stepLocal_10 = var_1_21;
	if (! var_1_73) {
		var_1_62 = (var_1_63 - (var_1_28 - var_1_20));
	} else {
		if (var_1_20 > stepLocal_10) {
			var_1_62 = ((min (var_1_58 , 100u)) + var_1_49);
		}
	}


	// From: Req19Batch16Amount250
	if (var_1_35 > 1u) {
		var_1_64 = (var_1_42 + (var_1_45 - 64));
	} else {
		if (var_1_61) {
			if (var_1_58 < (var_1_45 * var_1_74)) {
				var_1_64 = ((var_1_44 + var_1_45) + ((var_1_26 + last_1_var_1_64) - var_1_43));
			} else {
				var_1_64 = (var_1_43 + -50);
			}
		} else {
			var_1_64 = (min (var_1_46 , var_1_49));
		}
	}


	// From: Req10Batch16Amount250
	signed long int stepLocal_4 = 64;
	if (! var_1_60) {
		var_1_39 = (((abs (var_1_17)) + var_1_28) - (abs (var_1_64)));
	} else {
		if (stepLocal_4 > var_1_65) {
			var_1_39 = (var_1_65 + (var_1_65 + (var_1_41 - 1u)));
		}
	}


	// From: Req2Batch16Amount250
	if (var_1_64 <= ((min (var_1_65 , 16)) - var_1_65)) {
		var_1_9 = (var_1_12 - var_1_13);
	} else {
		var_1_9 = var_1_12;
	}


	// From: Req6Batch16Amount250
	if (var_1_14 <= ((-16 / var_1_31) & var_1_65)) {
		if (var_1_62 < var_1_36) {
			var_1_29 = (max ((var_1_65 + (1u + var_1_15)) , (min (10000u , (var_1_35 + var_1_17)))));
		}
	}


	// From: Req13Batch16Amount250
	unsigned long int stepLocal_9 = var_1_41 + var_1_62;
	signed char stepLocal_8 = var_1_43;
	if (var_1_34 >= stepLocal_9) {
		if (stepLocal_8 != var_1_65) {
			var_1_50 = (max (var_1_12 , (var_1_23 - var_1_24)));
		} else {
			var_1_50 = var_1_22;
		}
	} else {
		var_1_50 = var_1_24;
	}
}



void updateVariables() {
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854765600e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65535);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 1073741823);
	assume_abort_if_not(var_1_16 <= 2147483648);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1073741824);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427387900e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427387900e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427387900e+12F && var_1_24 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 1610612734);
	assume_abort_if_not(var_1_28 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	assume_abort_if_not(var_1_31 != 0);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= 1073741822);
	assume_abort_if_not(var_1_34 <= 2147483646);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 536870911);
	assume_abort_if_not(var_1_41 <= 1073741823);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -127);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 16382);
	assume_abort_if_not(var_1_49 <= 32766);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 1);
	assume_abort_if_not(var_1_55 <= 1);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 2147483647);
	assume_abort_if_not(var_1_63 <= 4294967294);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -230584.3009213691390e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 2305843.009213691390e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= -230584.3009213691390e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691390e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= -461168.6018427382800e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_74 = var_1_74;
}

int property() {
	return (((((((((((((((((((((((((((var_1_36 >= (var_1_26 * (10u * var_1_14))) ? (var_1_1 == ((signed short int) ((var_1_42 + -25) + (min (var_1_65 , var_1_65))))) : (var_1_1 == ((signed short int) (var_1_42 + (var_1_66 + -2))))) && ((var_1_64 <= ((min (var_1_65 , 16)) - var_1_65)) ? (var_1_9 == ((float) (var_1_12 - var_1_13))) : (var_1_9 == ((float) var_1_12)))) && (((var_1_21 + (var_1_15 - var_1_65)) >= ((var_1_16 + var_1_17) - (max (var_1_74 , var_1_35)))) ? (var_1_14 == ((unsigned short int) var_1_65)) : (var_1_14 == ((unsigned short int) (var_1_20 - (abs (2))))))) && (((var_1_12 - (9.3 + var_1_22)) < (var_1_13 - (var_1_23 + var_1_24))) ? (var_1_60 ? (var_1_21 == ((signed long int) (min ((var_1_20 - last_1_var_1_21) , var_1_65)))) : 1) : (var_1_21 == ((signed long int) ((abs (var_1_42)) + var_1_67))))) && (last_1_var_1_57 ? (((last_1_var_1_74 == last_1_var_1_65) && last_1_var_1_57) ? (var_1_26 == ((signed long int) ((min ((max (last_1_var_1_66 , last_1_var_1_42)) , last_1_var_1_42)) + var_1_20))) : (var_1_26 == ((signed long int) (var_1_20 - ((var_1_28 - last_1_var_1_32) - last_1_var_1_65))))) : (var_1_26 == ((signed long int) last_1_var_1_66)))) && ((var_1_14 <= ((-16 / var_1_31) & var_1_65)) ? ((var_1_62 < var_1_36) ? (var_1_29 == ((unsigned long int) (max ((var_1_65 + (1u + var_1_15)) , (min (10000u , (var_1_35 + var_1_17))))))) : 1) : 1)) && ((var_1_65 == ((var_1_67 & var_1_26) + var_1_21)) ? (((var_1_14 / var_1_15) < var_1_16) ? (var_1_32 == ((signed long int) (((max (var_1_28 , var_1_34)) - var_1_20) - var_1_65))) : 1) : 1)) && (var_1_60 ? (var_1_35 == ((unsigned short int) (max (var_1_65 , var_1_20)))) : (var_1_35 == ((unsigned short int) (var_1_20 - var_1_65))))) && ((last_1_var_1_66 == last_1_var_1_39) ? (var_1_36 == ((unsigned short int) (var_1_20 - (min ((min (last_1_var_1_65 , 8)) , (max (last_1_var_1_65 , last_1_var_1_65))))))) : ((last_1_var_1_66 > last_1_var_1_39) ? (var_1_36 == ((unsigned short int) (min (last_1_var_1_65 , last_1_var_1_65)))) : (var_1_36 == ((unsigned short int) var_1_20))))) && ((! var_1_60) ? (var_1_39 == ((unsigned long int) (((abs (var_1_17)) + var_1_28) - (abs (var_1_64))))) : ((64 > var_1_65) ? (var_1_39 == ((unsigned long int) (var_1_65 + (var_1_65 + (var_1_41 - 1u))))) : 1))) && (((last_1_var_1_36 + last_1_var_1_65) > last_1_var_1_32) ? (((last_1_var_1_65 * var_1_16) <= last_1_var_1_58) ? (var_1_42 == ((signed char) (min (((var_1_43 + var_1_44) - var_1_45) , var_1_46)))) : ((var_1_44 >= (abs (var_1_46))) ? ((! last_1_var_1_51) ? (var_1_42 == ((signed char) (abs (var_1_43)))) : (var_1_42 == ((signed char) (var_1_43 + (var_1_44 - var_1_47))))) : 1)) : (var_1_42 == ((signed char) ((var_1_44 - var_1_47) + var_1_43))))) && ((var_1_65 <= (var_1_44 - var_1_43)) ? (var_1_48 == ((signed short int) last_1_var_1_48)) : (var_1_48 == ((signed short int) (max (((var_1_49 - var_1_43) - var_1_45) , (min (var_1_44 , (var_1_42 + var_1_31))))))))) && ((var_1_34 >= (var_1_41 + var_1_62)) ? ((var_1_43 != var_1_65) ? (var_1_50 == ((double) (max (var_1_12 , (var_1_23 - var_1_24))))) : (var_1_50 == ((double) var_1_22))) : (var_1_50 == ((double) var_1_24)))) && (var_1_73 ? ((var_1_65 > var_1_65) ? (var_1_51 == ((unsigned char) var_1_52)) : ((var_1_26 > var_1_66) ? (var_1_51 == ((unsigned char) (var_1_55 && var_1_56))) : 1)) : 1)) && (((var_1_47 | last_1_var_1_65) > var_1_17) ? (var_1_57 == ((unsigned char) ((! var_1_52) && var_1_56))) : 1)) && ((var_1_52 && var_1_51) ? (var_1_58 == ((unsigned long int) (max (var_1_48 , var_1_14)))) : (var_1_58 == ((unsigned long int) ((min ((var_1_17 + var_1_28) , var_1_59)) - (max ((abs (var_1_1)) , 50u))))))) && ((var_1_23 < (abs (var_1_13))) ? ((var_1_43 > (last_1_var_1_36 * (abs (var_1_47)))) ? (var_1_60 == ((unsigned char) (var_1_52 || var_1_56))) : (var_1_60 == ((unsigned char) (! ((last_1_var_1_51 && var_1_52) || var_1_61))))) : (var_1_60 == ((unsigned char) (! (! (var_1_55 && var_1_52))))))) && ((! var_1_73) ? (var_1_62 == ((unsigned long int) (var_1_63 - (var_1_28 - var_1_20)))) : ((var_1_20 > var_1_21) ? (var_1_62 == ((unsigned long int) ((min (var_1_58 , 100u)) + var_1_49))) : 1))) && ((var_1_35 > 1u) ? (var_1_64 == ((signed short int) (var_1_42 + (var_1_45 - 64)))) : (var_1_61 ? ((var_1_58 < (var_1_45 * var_1_74)) ? (var_1_64 == ((signed short int) ((var_1_44 + var_1_45) + ((var_1_26 + last_1_var_1_64) - var_1_43)))) : (var_1_64 == ((signed short int) (var_1_43 + -50)))) : (var_1_64 == ((signed short int) (min (var_1_46 , var_1_49))))))) && (((- (var_1_23 - var_1_22)) <= (var_1_12 + (- var_1_69))) ? (var_1_65 == ((unsigned char) (min ((var_1_43 + var_1_44) , var_1_45)))) : 1)) && ((((var_1_24 - var_1_12) * last_1_var_1_9) < (last_1_var_1_9 + var_1_13)) ? (var_1_66 == ((signed char) 32)) : 1)) && (var_1_67 == ((signed char) (min ((var_1_47 - (50 + var_1_44)) , var_1_45))))) && (var_1_68 == ((signed short int) var_1_44))) && (var_1_57 ? (var_1_69 == ((double) (var_1_24 - (min (var_1_22 , var_1_13))))) : (var_1_69 == ((double) ((var_1_70 + var_1_71) + var_1_72))))) && (var_1_73 == ((unsigned char) var_1_52))) && (var_1_74 == ((unsigned short int) var_1_43))) && (var_1_75 == ((double) var_1_23))
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
