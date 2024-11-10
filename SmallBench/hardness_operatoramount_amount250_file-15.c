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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch15Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 32;
unsigned char var_1_3 = 32;
unsigned char var_1_4 = 4;
double var_1_5 = 128.5;
signed long int var_1_6 = 64;
signed long int var_1_7 = 4;
double var_1_8 = 1.875;
double var_1_9 = 15.8;
double var_1_10 = 25.4;
double var_1_11 = 127.5;
double var_1_12 = 5.8;
signed char var_1_14 = -1;
signed char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned short int var_1_19 = 50;
signed char var_1_20 = 64;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 8;
unsigned long int var_1_23 = 4;
unsigned long int var_1_24 = 1528136869;
unsigned long int var_1_25 = 1475591249;
unsigned long int var_1_26 = 1743483988;
unsigned char var_1_27 = 0;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned long int var_1_32 = 256;
unsigned long int var_1_33 = 256;
unsigned long int var_1_34 = 4230970804;
float var_1_35 = 1.5;
float var_1_36 = 256.25;
float var_1_37 = 10000000000.9;
signed long int var_1_38 = -16;
double var_1_39 = 9.75;
signed long int var_1_40 = 1000000000;
signed long int var_1_41 = 1000000000;
double var_1_42 = 100000000.5;
signed long int var_1_43 = 256;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 100;
unsigned short int var_1_46 = 51331;
unsigned short int var_1_48 = 5;
signed char var_1_50 = 5;
signed char var_1_52 = 1;
signed char var_1_53 = -5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 32;
double last_1_var_1_5 = 128.5;
unsigned char last_1_var_1_16 = 0;
unsigned short int last_1_var_1_19 = 50;
signed char last_1_var_1_20 = 64;
unsigned char last_1_var_1_21 = 0;
unsigned short int last_1_var_1_22 = 8;
unsigned long int last_1_var_1_23 = 4;
unsigned char last_1_var_1_27 = 0;
unsigned long int last_1_var_1_32 = 256;
unsigned long int last_1_var_1_33 = 256;
signed long int last_1_var_1_38 = -16;
double last_1_var_1_42 = 100000000.5;
unsigned short int last_1_var_1_45 = 100;
unsigned short int last_1_var_1_48 = 5;
signed char last_1_var_1_50 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch15Amount250
	signed long int stepLocal_12 = last_1_var_1_50;
	if (var_1_8 < last_1_var_1_42) {
		var_1_33 = var_1_25;
	} else {
		if (last_1_var_1_38 > stepLocal_12) {
			var_1_33 = (var_1_34 - var_1_4);
		}
	}


	// From: Req7Batch15Amount250
	unsigned char stepLocal_6 = last_1_var_1_16;
	if (stepLocal_6 || (last_1_var_1_48 <= (16 - var_1_4))) {
		var_1_21 = (last_1_var_1_16 && var_1_18);
	}


	// From: Req1Batch15Amount250
	if (var_1_21) {
		var_1_1 = ((var_1_3 + var_1_4) + 8);
	}


	// From: Req20Batch15Amount250
	unsigned long int stepLocal_17 = max (var_1_26 , var_1_1);
	if (var_1_46 != stepLocal_17) {
		if (var_1_37 < var_1_39) {
			var_1_48 = (min ((var_1_46 - var_1_4) , var_1_1));
		} else {
			var_1_48 = var_1_1;
		}
	}


	// From: Req4Batch15Amount250
	signed long int stepLocal_3 = last_1_var_1_20 + last_1_var_1_19;
	if (! (var_1_6 >= 50)) {
		if (((~ var_1_4) * (var_1_3 / var_1_7)) <= stepLocal_3) {
			var_1_16 = ((! var_1_17) || (last_1_var_1_27 && var_1_18));
		}
	} else {
		var_1_16 = (! var_1_18);
	}


	// From: Req5Batch15Amount250
	if (var_1_12 > var_1_8) {
		if (var_1_21) {
			var_1_19 = (min (var_1_4 , var_1_3));
		} else {
			var_1_19 = var_1_4;
		}
	}


	// From: Req11Batch15Amount250
	if (! var_1_16) {
		var_1_31 = ((16.375f >= (7.25f * var_1_8)) || var_1_17);
	}


	// From: Req8Batch15Amount250
	unsigned short int stepLocal_7 = var_1_19;
	if (var_1_10 < (min (var_1_8 , (-0.25 * var_1_9)))) {
		if (stepLocal_7 <= last_1_var_1_22) {
			var_1_22 = (min (var_1_4 , (max (var_1_19 , var_1_3))));
		} else {
			var_1_22 = (min (var_1_19 , var_1_4));
		}
	}


	// From: Req14Batch15Amount250
	if (1.875f >= var_1_12) {
		var_1_35 = ((var_1_12 + var_1_11) + (var_1_9 - var_1_36));
	} else {
		if (var_1_31) {
			var_1_35 = (var_1_9 - (min (31.6f , var_1_37)));
		}
	}


	// From: Req15Batch15Amount250
	unsigned char stepLocal_14 = ! (var_1_10 >= last_1_var_1_5);
	signed long int stepLocal_13 = var_1_7;
	if (var_1_10 < (var_1_9 - (var_1_36 + var_1_39))) {
		if (stepLocal_13 <= var_1_25) {
			if (last_1_var_1_21) {
				if (var_1_12 < var_1_37) {
					var_1_38 = last_1_var_1_32;
				}
			}
		} else {
			if ((8.5f == (var_1_11 * var_1_37)) || stepLocal_14) {
				var_1_38 = (last_1_var_1_1 - ((var_1_40 + var_1_41) - (max (var_1_29 , last_1_var_1_33))));
			}
		}
	} else {
		if (var_1_9 <= var_1_39) {
			var_1_38 = (min (((var_1_41 - last_1_var_1_1) + var_1_40) , ((last_1_var_1_45 + last_1_var_1_33) + var_1_4)));
		} else {
			if ((max ((var_1_36 + 1.15f) , var_1_37)) == 63.5f) {
				var_1_38 = (min ((var_1_15 - var_1_29) , last_1_var_1_23));
			} else {
				var_1_38 = (max ((abs (abs (-5))) , (var_1_15 - (var_1_41 + last_1_var_1_45))));
			}
		}
	}


	// From: Req12Batch15Amount250
	if (var_1_10 < (- (- var_1_8))) {
		if (var_1_19 > var_1_25) {
			var_1_32 = var_1_38;
		} else {
			var_1_32 = var_1_24;
		}
	}


	// From: Req3Batch15Amount250
	unsigned char stepLocal_2 = var_1_38 != var_1_3;
	if (stepLocal_2 || (var_1_8 < var_1_11)) {
		var_1_14 = (var_1_15 - var_1_4);
	}


	// From: Req19Batch15Amount250
	signed long int stepLocal_16 = var_1_7 + var_1_41;
	signed long int stepLocal_15 = 64 * var_1_40;
	if (stepLocal_15 < last_1_var_1_45) {
		if ((var_1_34 - (var_1_1 + var_1_3)) <= stepLocal_16) {
			var_1_45 = (var_1_46 - var_1_29);
		} else {
			var_1_45 = (max ((var_1_46 - var_1_3) , var_1_1));
		}
	}


	// From: Req6Batch15Amount250
	unsigned char stepLocal_5 = var_1_31;
	signed long int stepLocal_4 = (var_1_22 / var_1_7) & (abs (var_1_3));
	if ((var_1_6 < var_1_7) || stepLocal_5) {
		var_1_20 = (max (var_1_4 , var_1_3));
	} else {
		if (var_1_31) {
			if (stepLocal_4 >= ((var_1_22 + var_1_4) * var_1_15)) {
				var_1_20 = (max (var_1_15 , var_1_4));
			} else {
				var_1_20 = (var_1_4 - var_1_3);
			}
		} else {
			if (var_1_17) {
				var_1_20 = var_1_4;
			}
		}
	}


	// From: Req10Batch15Amount250
	signed char stepLocal_11 = var_1_20;
	signed long int stepLocal_10 = var_1_6;
	signed long int stepLocal_9 = (var_1_3 - var_1_4) / var_1_6;
	if (stepLocal_9 < var_1_24) {
		if (var_1_26 != stepLocal_11) {
			if ((var_1_29 - (max (var_1_3 , var_1_4))) > stepLocal_10) {
				var_1_27 = (var_1_16 || var_1_17);
			} else {
				var_1_27 = (((var_1_35 < var_1_10) && var_1_18) || (var_1_21 && var_1_30));
			}
		} else {
			var_1_27 = (var_1_17 && (! (var_1_18 || var_1_30)));
		}
	}


	// From: Req9Batch15Amount250
	signed long int stepLocal_8 = var_1_38;
	if (var_1_3 != stepLocal_8) {
		var_1_23 = (max ((abs (var_1_38)) , var_1_4));
	} else {
		var_1_23 = (((max (var_1_24 , var_1_25)) + var_1_26) - (var_1_4 + var_1_14));
	}


	// From: Req17Batch15Amount250
	if (var_1_16) {
		var_1_43 = (var_1_4 - (var_1_32 + var_1_23));
	}


	// From: Req2Batch15Amount250
	signed long int stepLocal_1 = (var_1_3 / 1) / var_1_6;
	unsigned char stepLocal_0 = var_1_4;
	if (var_1_27) {
		if (stepLocal_1 == ((var_1_43 * var_1_4) % var_1_7)) {
			var_1_5 = (max ((var_1_8 - (var_1_9 + 8.2)) , (var_1_10 + (var_1_11 + var_1_12))));
		} else {
			if (var_1_16) {
				if ((var_1_43 / (min (var_1_6 , var_1_7))) != stepLocal_0) {
					var_1_5 = (var_1_8 - (abs (var_1_10)));
				} else {
					var_1_5 = var_1_11;
				}
			} else {
				var_1_5 = var_1_10;
			}
		}
	} else {
		var_1_5 = 7.875;
	}


	// From: Req21Batch15Amount250
	signed long int stepLocal_18 = max ((var_1_4 - var_1_45) , 2);
	if ((- var_1_23) >= stepLocal_18) {
		var_1_50 = (max ((max (-1 , var_1_4)) , (var_1_52 + var_1_53)));
	} else {
		var_1_50 = var_1_15;
	}


	// From: Req18Batch15Amount250
	if ((var_1_40 % (36410 - var_1_29)) >= var_1_45) {
		var_1_44 = (! var_1_17);
	}


	// From: Req16Batch15Amount250
	if (((var_1_25 * var_1_6) + var_1_48) >= var_1_43) {
		var_1_42 = (var_1_10 + var_1_36);
	} else {
		if (var_1_7 == var_1_33) {
			var_1_42 = ((var_1_12 + 128.75) + var_1_9);
		} else {
			var_1_42 = (var_1_36 + var_1_10);
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 64);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854765600e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427382800e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427382800e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -230584.3009213691390e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691390e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -230584.3009213691390e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 2305843.009213691390e+12F && var_1_12 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -1);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 1073741823);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 1073741824);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 255);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 2147483647);
	assume_abort_if_not(var_1_34 <= 4294967294);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427387900e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= 536870911);
	assume_abort_if_not(var_1_40 <= 1073741823);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 536870912);
	assume_abort_if_not(var_1_41 <= 1073741823);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 32767);
	assume_abort_if_not(var_1_46 <= 65534);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -63);
	assume_abort_if_not(var_1_52 <= 63);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -63);
	assume_abort_if_not(var_1_53 <= 63);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
}

int property() {
	return ((((((((((((((((((((var_1_21 ? (var_1_1 == ((unsigned char) ((var_1_3 + var_1_4) + 8))) : 1) && (var_1_27 ? ((((var_1_3 / 1) / var_1_6) == ((var_1_43 * var_1_4) % var_1_7)) ? (var_1_5 == ((double) (max ((var_1_8 - (var_1_9 + 8.2)) , (var_1_10 + (var_1_11 + var_1_12)))))) : (var_1_16 ? (((var_1_43 / (min (var_1_6 , var_1_7))) != var_1_4) ? (var_1_5 == ((double) (var_1_8 - (abs (var_1_10))))) : (var_1_5 == ((double) var_1_11))) : (var_1_5 == ((double) var_1_10)))) : (var_1_5 == ((double) 7.875)))) && (((var_1_38 != var_1_3) || (var_1_8 < var_1_11)) ? (var_1_14 == ((signed char) (var_1_15 - var_1_4))) : 1)) && ((! (var_1_6 >= 50)) ? ((((~ var_1_4) * (var_1_3 / var_1_7)) <= (last_1_var_1_20 + last_1_var_1_19)) ? (var_1_16 == ((unsigned char) ((! var_1_17) || (last_1_var_1_27 && var_1_18)))) : 1) : (var_1_16 == ((unsigned char) (! var_1_18))))) && ((var_1_12 > var_1_8) ? (var_1_21 ? (var_1_19 == ((unsigned short int) (min (var_1_4 , var_1_3)))) : (var_1_19 == ((unsigned short int) var_1_4))) : 1)) && (((var_1_6 < var_1_7) || var_1_31) ? (var_1_20 == ((signed char) (max (var_1_4 , var_1_3)))) : (var_1_31 ? ((((var_1_22 / var_1_7) & (abs (var_1_3))) >= ((var_1_22 + var_1_4) * var_1_15)) ? (var_1_20 == ((signed char) (max (var_1_15 , var_1_4)))) : (var_1_20 == ((signed char) (var_1_4 - var_1_3)))) : (var_1_17 ? (var_1_20 == ((signed char) var_1_4)) : 1)))) && ((last_1_var_1_16 || (last_1_var_1_48 <= (16 - var_1_4))) ? (var_1_21 == ((unsigned char) (last_1_var_1_16 && var_1_18))) : 1)) && ((var_1_10 < (min (var_1_8 , (-0.25 * var_1_9)))) ? ((var_1_19 <= last_1_var_1_22) ? (var_1_22 == ((unsigned short int) (min (var_1_4 , (max (var_1_19 , var_1_3)))))) : (var_1_22 == ((unsigned short int) (min (var_1_19 , var_1_4))))) : 1)) && ((var_1_3 != var_1_38) ? (var_1_23 == ((unsigned long int) (max ((abs (var_1_38)) , var_1_4)))) : (var_1_23 == ((unsigned long int) (((max (var_1_24 , var_1_25)) + var_1_26) - (var_1_4 + var_1_14)))))) && ((((var_1_3 - var_1_4) / var_1_6) < var_1_24) ? ((var_1_26 != var_1_20) ? (((var_1_29 - (max (var_1_3 , var_1_4))) > var_1_6) ? (var_1_27 == ((unsigned char) (var_1_16 || var_1_17))) : (var_1_27 == ((unsigned char) (((var_1_35 < var_1_10) && var_1_18) || (var_1_21 && var_1_30))))) : (var_1_27 == ((unsigned char) (var_1_17 && (! (var_1_18 || var_1_30)))))) : 1)) && ((! var_1_16) ? (var_1_31 == ((unsigned char) ((16.375f >= (7.25f * var_1_8)) || var_1_17))) : 1)) && ((var_1_10 < (- (- var_1_8))) ? ((var_1_19 > var_1_25) ? (var_1_32 == ((unsigned long int) var_1_38)) : (var_1_32 == ((unsigned long int) var_1_24))) : 1)) && ((var_1_8 < last_1_var_1_42) ? (var_1_33 == ((unsigned long int) var_1_25)) : ((last_1_var_1_38 > last_1_var_1_50) ? (var_1_33 == ((unsigned long int) (var_1_34 - var_1_4))) : 1))) && ((1.875f >= var_1_12) ? (var_1_35 == ((float) ((var_1_12 + var_1_11) + (var_1_9 - var_1_36)))) : (var_1_31 ? (var_1_35 == ((float) (var_1_9 - (min (31.6f , var_1_37))))) : 1))) && ((var_1_10 < (var_1_9 - (var_1_36 + var_1_39))) ? ((var_1_7 <= var_1_25) ? (last_1_var_1_21 ? ((var_1_12 < var_1_37) ? (var_1_38 == ((signed long int) last_1_var_1_32)) : 1) : 1) : (((8.5f == (var_1_11 * var_1_37)) || (! (var_1_10 >= last_1_var_1_5))) ? (var_1_38 == ((signed long int) (last_1_var_1_1 - ((var_1_40 + var_1_41) - (max (var_1_29 , last_1_var_1_33)))))) : 1)) : ((var_1_9 <= var_1_39) ? (var_1_38 == ((signed long int) (min (((var_1_41 - last_1_var_1_1) + var_1_40) , ((last_1_var_1_45 + last_1_var_1_33) + var_1_4))))) : (((max ((var_1_36 + 1.15f) , var_1_37)) == 63.5f) ? (var_1_38 == ((signed long int) (min ((var_1_15 - var_1_29) , last_1_var_1_23)))) : (var_1_38 == ((signed long int) (max ((abs (abs (-5))) , (var_1_15 - (var_1_41 + last_1_var_1_45)))))))))) && ((((var_1_25 * var_1_6) + var_1_48) >= var_1_43) ? (var_1_42 == ((double) (var_1_10 + var_1_36))) : ((var_1_7 == var_1_33) ? (var_1_42 == ((double) ((var_1_12 + 128.75) + var_1_9))) : (var_1_42 == ((double) (var_1_36 + var_1_10)))))) && (var_1_16 ? (var_1_43 == ((signed long int) (var_1_4 - (var_1_32 + var_1_23)))) : 1)) && (((var_1_40 % (36410 - var_1_29)) >= var_1_45) ? (var_1_44 == ((unsigned char) (! var_1_17))) : 1)) && (((64 * var_1_40) < last_1_var_1_45) ? (((var_1_34 - (var_1_1 + var_1_3)) <= (var_1_7 + var_1_41)) ? (var_1_45 == ((unsigned short int) (var_1_46 - var_1_29))) : (var_1_45 == ((unsigned short int) (max ((var_1_46 - var_1_3) , var_1_1))))) : 1)) && ((var_1_46 != (max (var_1_26 , var_1_1))) ? ((var_1_37 < var_1_39) ? (var_1_48 == ((unsigned short int) (min ((var_1_46 - var_1_4) , var_1_1)))) : (var_1_48 == ((unsigned short int) var_1_1))) : 1)) && (((- var_1_23) >= (max ((var_1_4 - var_1_45) , 2))) ? (var_1_50 == ((signed char) (max ((max (-1 , var_1_4)) , (var_1_52 + var_1_53))))) : (var_1_50 == ((signed char) var_1_15)))
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
