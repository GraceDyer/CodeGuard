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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch35Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = 32;
signed char var_1_6 = 8;
signed char var_1_7 = 0;
signed char var_1_8 = -64;
signed char var_1_9 = 16;
signed char var_1_10 = -8;
unsigned short int var_1_11 = 16;
double var_1_12 = 32.6;
double var_1_13 = 10000.23;
double var_1_14 = 100.6;
unsigned short int var_1_15 = 47846;
signed long int var_1_16 = -128;
double var_1_17 = 63.25;
double var_1_18 = 127.8;
double var_1_19 = 4.8;
double var_1_20 = 128.75;
double var_1_21 = 32.8;
double var_1_22 = 255.625;
unsigned short int var_1_23 = 256;
unsigned short int var_1_27 = 20062;
unsigned char var_1_29 = 4;
unsigned char var_1_30 = 200;
unsigned char var_1_31 = 10;
unsigned char var_1_32 = 100;
unsigned char var_1_33 = 4;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 32;
signed char var_1_36 = 1;
signed char var_1_37 = 1;
unsigned char var_1_38 = 50;
unsigned char var_1_39 = 100;
signed char var_1_40 = 5;
signed short int var_1_42 = 25;
signed short int var_1_43 = -64;
unsigned long int var_1_44 = 3449787359;
signed char var_1_45 = -128;
signed char var_1_46 = 8;
signed long int var_1_47 = -2;
signed long int var_1_48 = -1;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 1;
signed short int var_1_55 = -32;
unsigned short int var_1_56 = 50;
unsigned char var_1_57 = 0;
unsigned short int var_1_58 = 4;
unsigned short int var_1_59 = 24669;
unsigned short int var_1_60 = 10000;
signed long int var_1_61 = -100;
signed long int var_1_62 = 1000000000;
signed long int var_1_63 = 1352544983;
float var_1_64 = 7.5;
unsigned char var_1_65 = 1;
float var_1_66 = 5.6;
float var_1_67 = 0.2;
float var_1_68 = 127.78;

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = 32;
signed long int last_1_var_1_16 = -128;
unsigned short int last_1_var_1_23 = 256;
signed char last_1_var_1_36 = 1;
unsigned char last_1_var_1_38 = 50;
signed char last_1_var_1_40 = 5;
signed short int last_1_var_1_42 = 25;
signed char last_1_var_1_45 = -128;
signed long int last_1_var_1_47 = -2;
signed long int last_1_var_1_48 = -1;
unsigned short int last_1_var_1_56 = 50;
unsigned char last_1_var_1_57 = 0;
unsigned short int last_1_var_1_58 = 4;
unsigned char last_1_var_1_65 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch35Amount250
	signed long int stepLocal_10 = max (var_1_39 , last_1_var_1_36);
	if (var_1_21 <= (var_1_12 + (- var_1_20))) {
		if (stepLocal_10 < -2) {
			var_1_47 = (max ((last_1_var_1_23 + (max (var_1_15 , var_1_6))) , last_1_var_1_40));
		}
	} else {
		var_1_47 = (last_1_var_1_45 - var_1_34);
	}


	// From: Req14Batch35Amount250
	signed char stepLocal_12 = var_1_37;
	signed long int stepLocal_11 = var_1_37 + (~ 16);
	if ((last_1_var_1_38 & last_1_var_1_48) < stepLocal_12) {
		if ((last_1_var_1_48 / var_1_32) >= stepLocal_11) {
			var_1_48 = last_1_var_1_38;
		} else {
			var_1_48 = (var_1_39 + -5);
		}
	} else {
		var_1_48 = (min (var_1_46 , ((last_1_var_1_16 + last_1_var_1_36) + var_1_39)));
	}


	// From: Req18Batch35Amount250
	signed long int stepLocal_18 = -100;
	signed long int stepLocal_17 = last_1_var_1_56;
	if (stepLocal_18 >= ((last_1_var_1_56 & var_1_37) * -256)) {
		if (stepLocal_17 > (last_1_var_1_65 | var_1_31)) {
			var_1_57 = (! var_1_54);
		} else {
			var_1_57 = (! var_1_51);
		}
	} else {
		var_1_57 = (! var_1_54);
	}


	// From: Req23Batch35Amount250
	unsigned char stepLocal_22 = var_1_53;
	if (stepLocal_22 && var_1_57) {
		var_1_66 = ((var_1_67 + var_1_68) + var_1_21);
	} else {
		if (var_1_57) {
			var_1_66 = var_1_19;
		}
	}


	// From: Req15Batch35Amount250
	signed long int stepLocal_15 = last_1_var_1_58;
	signed long int stepLocal_14 = -32;
	unsigned char stepLocal_13 = var_1_51;
	if (stepLocal_14 < var_1_34) {
		if (last_1_var_1_40 <= stepLocal_15) {
			if (last_1_var_1_57) {
				var_1_50 = (var_1_51 || (var_1_52 || var_1_53));
			}
		} else {
			if (stepLocal_13 && last_1_var_1_57) {
				var_1_50 = (! var_1_51);
			} else {
				var_1_50 = ((! (last_1_var_1_57 || var_1_54)) || var_1_51);
			}
		}
	}


	// From: Req3Batch35Amount250
	unsigned short int stepLocal_1 = var_1_15;
	if (stepLocal_1 != last_1_var_1_42) {
		var_1_16 = ((min (64 , (var_1_9 + var_1_6))) + (last_1_var_1_45 + (last_1_var_1_56 + var_1_10)));
	} else {
		var_1_16 = (last_1_var_1_47 + (abs (last_1_var_1_45)));
	}


	// From: Req17Batch35Amount250
	signed long int stepLocal_16 = last_1_var_1_58;
	if (stepLocal_16 > -128) {
		var_1_56 = (var_1_31 + var_1_35);
	}


	// From: Req8Batch35Amount250
	if (var_1_30 < last_1_var_1_38) {
		var_1_38 = (var_1_30 - var_1_37);
	} else {
		var_1_38 = ((var_1_32 + var_1_39) - var_1_35);
	}


	// From: Req16Batch35Amount250
	var_1_55 = (var_1_46 + -100);


	// From: Req20Batch35Amount250
	if (var_1_57) {
		var_1_61 = (abs (var_1_27));
	} else {
		var_1_61 = ((var_1_37 + (var_1_62 - var_1_39)) - (var_1_63 - var_1_60));
	}


	// From: Req21Batch35Amount250
	unsigned char stepLocal_21 = var_1_38;
	signed char stepLocal_20 = var_1_7;
	if (! (! var_1_54)) {
		if (var_1_54) {
			if (var_1_48 == stepLocal_20) {
				if (stepLocal_21 < var_1_56) {
					var_1_64 = (min (var_1_18 , (max (var_1_22 , var_1_19))));
				}
			} else {
				var_1_64 = (255.4f - var_1_19);
			}
		} else {
			if (var_1_50) {
				var_1_64 = var_1_20;
			} else {
				var_1_64 = var_1_22;
			}
		}
	} else {
		var_1_64 = var_1_21;
	}


	// From: Req22Batch35Amount250
	if (var_1_64 > var_1_66) {
		var_1_65 = var_1_33;
	}


	// From: Req2Batch35Amount250
	signed char stepLocal_0 = var_1_7;
	if (stepLocal_0 > (var_1_55 * (~ -2))) {
		if ((var_1_12 - (min (var_1_13 , var_1_14))) <= var_1_64) {
			var_1_11 = (var_1_15 - var_1_55);
		} else {
			var_1_11 = (var_1_15 - var_1_55);
		}
	} else {
		var_1_11 = (60864 - var_1_55);
	}


	// From: Req10Batch35Amount250
	signed long int stepLocal_6 = -32;
	if ((var_1_38 * (var_1_56 / var_1_39)) >= stepLocal_6) {
		var_1_42 = var_1_6;
	} else {
		var_1_42 = ((max (var_1_31 , var_1_47)) - var_1_39);
	}


	// From: Req6Batch35Amount250
	if ((var_1_55 * var_1_27) > var_1_6) {
		var_1_29 = (var_1_30 - var_1_31);
	} else {
		if (var_1_65 > var_1_11) {
			if (var_1_18 >= var_1_66) {
				var_1_29 = (((var_1_32 - var_1_33) - var_1_34) + var_1_31);
			} else {
				var_1_29 = ((min ((min (var_1_34 , var_1_32)) , (abs (var_1_31)))) + var_1_35);
			}
		}
	}


	// From: Req12Batch35Amount250
	unsigned char stepLocal_9 = var_1_65;
	if (stepLocal_9 > var_1_47) {
		var_1_45 = (var_1_37 - (8 + var_1_33));
	} else {
		var_1_45 = (((min (4 , var_1_33)) + var_1_37) - (max (var_1_34 , var_1_46)));
	}


	// From: Req19Batch35Amount250
	signed long int stepLocal_19 = var_1_35 << var_1_31;
	if (var_1_11 <= stepLocal_19) {
		var_1_58 = (((var_1_59 - var_1_30) - (var_1_60 - var_1_35)) + var_1_46);
	}


	// From: Req5Batch35Amount250
	unsigned char stepLocal_3 = var_1_50 && var_1_57;
	signed char stepLocal_2 = var_1_7;
	if (var_1_57 && stepLocal_3) {
		if (var_1_16 != stepLocal_2) {
			var_1_23 = ((var_1_27 - var_1_58) + var_1_65);
		} else {
			if ((var_1_12 - var_1_19) == var_1_13) {
				var_1_23 = (var_1_15 - var_1_65);
			}
		}
	} else {
		var_1_23 = var_1_27;
	}


	// From: Req1Batch35Amount250
	if (var_1_66 < var_1_66) {
		if ((128 + (max (last_1_var_1_1 , 4))) <= (min (var_1_29 , 2))) {
			var_1_1 = (var_1_6 + 4);
		} else {
			if ((var_1_29 * last_1_var_1_1) <= var_1_6) {
				var_1_1 = (min ((var_1_6 + var_1_7) , var_1_8));
			} else {
				var_1_1 = ((var_1_9 + var_1_10) + var_1_6);
			}
		}
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req11Batch35Amount250
	signed long int stepLocal_8 = var_1_48;
	signed long int stepLocal_7 = var_1_16;
	if ((var_1_23 + (var_1_44 - var_1_39)) < stepLocal_8) {
		if (stepLocal_7 <= var_1_23) {
			var_1_43 = ((max ((var_1_33 - var_1_37) , -8)) + var_1_35);
		} else {
			var_1_43 = (max (var_1_35 , var_1_10));
		}
	} else {
		var_1_43 = (var_1_35 + var_1_23);
	}


	// From: Req7Batch35Amount250
	signed short int stepLocal_4 = var_1_43;
	if (stepLocal_4 > var_1_30) {
		var_1_36 = (min (((var_1_34 - var_1_33) + (var_1_9 + var_1_10)) , var_1_7));
	} else {
		if (var_1_50) {
			var_1_36 = ((var_1_34 - (min (var_1_33 , var_1_37))) + var_1_9);
		}
	}


	// From: Req9Batch35Amount250
	signed short int stepLocal_5 = var_1_43;
	if ((var_1_35 & (var_1_9 / var_1_39)) >= stepLocal_5) {
		var_1_40 = (var_1_9 + var_1_33);
	}


	// From: Req4Batch35Amount250
	if (var_1_9 <= var_1_56) {
		var_1_17 = ((max ((var_1_18 - var_1_19) , var_1_20)) + (max (16.25 , (min (var_1_21 , var_1_22)))));
	} else {
		if (var_1_8 >= var_1_43) {
			var_1_17 = (var_1_22 + var_1_19);
		}
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -63);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -31);
	assume_abort_if_not(var_1_9 <= 32);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -31);
	assume_abort_if_not(var_1_10 <= 31);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427382800e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 16383);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 127);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 95);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 32);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 63);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 64);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 2147483647);
	assume_abort_if_not(var_1_44 <= 4294967295);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 0);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_59 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_59 >= 24575);
	assume_abort_if_not(var_1_59 <= 32767);
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 8191);
	assume_abort_if_not(var_1_60 <= 16383);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= 536870911);
	assume_abort_if_not(var_1_62 <= 1073741823);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= 1073741823);
	assume_abort_if_not(var_1_63 <= 2147483646);
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= -230584.3009213691390e+13F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 2305843.009213691390e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= -230584.3009213691390e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691390e+12F && var_1_68 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_36 = var_1_36;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_65 = var_1_65;
}

int property() {
	return (((((((((((((((((((((((var_1_66 < var_1_66) ? (((128 + (max (last_1_var_1_1 , 4))) <= (min (var_1_29 , 2))) ? (var_1_1 == ((signed char) (var_1_6 + 4))) : (((var_1_29 * last_1_var_1_1) <= var_1_6) ? (var_1_1 == ((signed char) (min ((var_1_6 + var_1_7) , var_1_8)))) : (var_1_1 == ((signed char) ((var_1_9 + var_1_10) + var_1_6))))) : (var_1_1 == ((signed char) var_1_7))) && ((var_1_7 > (var_1_55 * (~ -2))) ? (((var_1_12 - (min (var_1_13 , var_1_14))) <= var_1_64) ? (var_1_11 == ((unsigned short int) (var_1_15 - var_1_55))) : (var_1_11 == ((unsigned short int) (var_1_15 - var_1_55)))) : (var_1_11 == ((unsigned short int) (60864 - var_1_55))))) && ((var_1_15 != last_1_var_1_42) ? (var_1_16 == ((signed long int) ((min (64 , (var_1_9 + var_1_6))) + (last_1_var_1_45 + (last_1_var_1_56 + var_1_10))))) : (var_1_16 == ((signed long int) (last_1_var_1_47 + (abs (last_1_var_1_45))))))) && ((var_1_9 <= var_1_56) ? (var_1_17 == ((double) ((max ((var_1_18 - var_1_19) , var_1_20)) + (max (16.25 , (min (var_1_21 , var_1_22))))))) : ((var_1_8 >= var_1_43) ? (var_1_17 == ((double) (var_1_22 + var_1_19))) : 1))) && ((var_1_57 && (var_1_50 && var_1_57)) ? ((var_1_16 != var_1_7) ? (var_1_23 == ((unsigned short int) ((var_1_27 - var_1_58) + var_1_65))) : (((var_1_12 - var_1_19) == var_1_13) ? (var_1_23 == ((unsigned short int) (var_1_15 - var_1_65))) : 1)) : (var_1_23 == ((unsigned short int) var_1_27)))) && (((var_1_55 * var_1_27) > var_1_6) ? (var_1_29 == ((unsigned char) (var_1_30 - var_1_31))) : ((var_1_65 > var_1_11) ? ((var_1_18 >= var_1_66) ? (var_1_29 == ((unsigned char) (((var_1_32 - var_1_33) - var_1_34) + var_1_31))) : (var_1_29 == ((unsigned char) ((min ((min (var_1_34 , var_1_32)) , (abs (var_1_31)))) + var_1_35)))) : 1))) && ((var_1_43 > var_1_30) ? (var_1_36 == ((signed char) (min (((var_1_34 - var_1_33) + (var_1_9 + var_1_10)) , var_1_7)))) : (var_1_50 ? (var_1_36 == ((signed char) ((var_1_34 - (min (var_1_33 , var_1_37))) + var_1_9))) : 1))) && ((var_1_30 < last_1_var_1_38) ? (var_1_38 == ((unsigned char) (var_1_30 - var_1_37))) : (var_1_38 == ((unsigned char) ((var_1_32 + var_1_39) - var_1_35))))) && (((var_1_35 & (var_1_9 / var_1_39)) >= var_1_43) ? (var_1_40 == ((signed char) (var_1_9 + var_1_33))) : 1)) && (((var_1_38 * (var_1_56 / var_1_39)) >= -32) ? (var_1_42 == ((signed short int) var_1_6)) : (var_1_42 == ((signed short int) ((max (var_1_31 , var_1_47)) - var_1_39))))) && (((var_1_23 + (var_1_44 - var_1_39)) < var_1_48) ? ((var_1_16 <= var_1_23) ? (var_1_43 == ((signed short int) ((max ((var_1_33 - var_1_37) , -8)) + var_1_35))) : (var_1_43 == ((signed short int) (max (var_1_35 , var_1_10))))) : (var_1_43 == ((signed short int) (var_1_35 + var_1_23))))) && ((var_1_65 > var_1_47) ? (var_1_45 == ((signed char) (var_1_37 - (8 + var_1_33)))) : (var_1_45 == ((signed char) (((min (4 , var_1_33)) + var_1_37) - (max (var_1_34 , var_1_46))))))) && ((var_1_21 <= (var_1_12 + (- var_1_20))) ? (((max (var_1_39 , last_1_var_1_36)) < -2) ? (var_1_47 == ((signed long int) (max ((last_1_var_1_23 + (max (var_1_15 , var_1_6))) , last_1_var_1_40)))) : 1) : (var_1_47 == ((signed long int) (last_1_var_1_45 - var_1_34))))) && (((last_1_var_1_38 & last_1_var_1_48) < var_1_37) ? (((last_1_var_1_48 / var_1_32) >= (var_1_37 + (~ 16))) ? (var_1_48 == ((signed long int) last_1_var_1_38)) : (var_1_48 == ((signed long int) (var_1_39 + -5)))) : (var_1_48 == ((signed long int) (min (var_1_46 , ((last_1_var_1_16 + last_1_var_1_36) + var_1_39))))))) && ((-32 < var_1_34) ? ((last_1_var_1_40 <= last_1_var_1_58) ? (last_1_var_1_57 ? (var_1_50 == ((unsigned char) (var_1_51 || (var_1_52 || var_1_53)))) : 1) : ((var_1_51 && last_1_var_1_57) ? (var_1_50 == ((unsigned char) (! var_1_51))) : (var_1_50 == ((unsigned char) ((! (last_1_var_1_57 || var_1_54)) || var_1_51))))) : 1)) && (var_1_55 == ((signed short int) (var_1_46 + -100)))) && ((last_1_var_1_58 > -128) ? (var_1_56 == ((unsigned short int) (var_1_31 + var_1_35))) : 1)) && ((-100 >= ((last_1_var_1_56 & var_1_37) * -256)) ? ((last_1_var_1_56 > (last_1_var_1_65 | var_1_31)) ? (var_1_57 == ((unsigned char) (! var_1_54))) : (var_1_57 == ((unsigned char) (! var_1_51)))) : (var_1_57 == ((unsigned char) (! var_1_54))))) && ((var_1_11 <= (var_1_35 << var_1_31)) ? (var_1_58 == ((unsigned short int) (((var_1_59 - var_1_30) - (var_1_60 - var_1_35)) + var_1_46))) : 1)) && (var_1_57 ? (var_1_61 == ((signed long int) (abs (var_1_27)))) : (var_1_61 == ((signed long int) ((var_1_37 + (var_1_62 - var_1_39)) - (var_1_63 - var_1_60)))))) && ((! (! var_1_54)) ? (var_1_54 ? ((var_1_48 == var_1_7) ? ((var_1_38 < var_1_56) ? (var_1_64 == ((float) (min (var_1_18 , (max (var_1_22 , var_1_19)))))) : 1) : (var_1_64 == ((float) (255.4f - var_1_19)))) : (var_1_50 ? (var_1_64 == ((float) var_1_20)) : (var_1_64 == ((float) var_1_22)))) : (var_1_64 == ((float) var_1_21)))) && ((var_1_64 > var_1_66) ? (var_1_65 == ((unsigned char) var_1_33)) : 1)) && ((var_1_53 && var_1_57) ? (var_1_66 == ((float) ((var_1_67 + var_1_68) + var_1_21))) : (var_1_57 ? (var_1_66 == ((float) var_1_19)) : 1))
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
