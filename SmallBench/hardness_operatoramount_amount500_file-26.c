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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch26Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 1;
unsigned short int var_1_3 = 36007;
unsigned short int var_1_5 = 32;
unsigned short int var_1_6 = 128;
unsigned char var_1_8 = 2;
unsigned short int var_1_9 = 22889;
unsigned short int var_1_10 = 20766;
signed short int var_1_11 = -4;
unsigned char var_1_12 = 10;
unsigned char var_1_13 = 8;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 16;
signed char var_1_16 = -10;
signed char var_1_17 = -10;
signed char var_1_18 = 1;
signed char var_1_19 = 0;
signed char var_1_20 = -5;
unsigned char var_1_21 = 0;
signed char var_1_24 = 25;
signed char var_1_25 = 2;
signed char var_1_26 = -4;
signed char var_1_27 = 16;
signed char var_1_28 = 1;
signed char var_1_29 = 64;
signed long int var_1_30 = 2;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
double var_1_34 = 99999999999999.6;
double var_1_35 = 0.0;
double var_1_36 = 128.3;
double var_1_37 = 100.8;
double var_1_38 = 127.5;
signed long int var_1_39 = 50;
unsigned char var_1_40 = 16;
unsigned char var_1_42 = 128;
signed long int var_1_43 = 128;
signed long int var_1_45 = -1000;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 16;
signed long int var_1_48 = 1888596135;
unsigned char var_1_49 = 0;
unsigned char var_1_50 = 1;
signed short int var_1_51 = 128;
signed char var_1_53 = -8;
signed char var_1_54 = 5;
unsigned char var_1_55 = 1;
unsigned char var_1_56 = 128;
unsigned char var_1_57 = 100;
unsigned char var_1_58 = 64;
unsigned char var_1_59 = 32;
unsigned short int var_1_60 = 1;
unsigned short int var_1_61 = 61903;
unsigned short int var_1_62 = 10000;
unsigned long int var_1_63 = 128;
float var_1_64 = 0.0;
unsigned short int var_1_65 = 16;
unsigned short int var_1_66 = 5;
signed short int var_1_68 = 100;
double var_1_70 = 256.5;
double var_1_71 = 32.125;
double var_1_72 = 7.4;
unsigned short int var_1_73 = 16;
signed long int var_1_75 = -16;
unsigned long int var_1_77 = 8;
unsigned long int var_1_78 = 2786731693;
signed short int var_1_79 = 100;
float var_1_81 = 99999999.4;
float var_1_82 = 128.4;
float var_1_83 = 3.75;
double var_1_84 = 2.8;
float var_1_85 = 64.2;
unsigned long int var_1_86 = 1;
unsigned long int var_1_87 = 3377825598;
double var_1_88 = 7.375;
unsigned char var_1_89 = 4;
unsigned char var_1_90 = 25;
double var_1_91 = 200.625;
signed long int var_1_92 = -64;
signed long int var_1_93 = 1000000000;
unsigned short int var_1_94 = 4;
signed long int var_1_95 = 2;
signed long int var_1_96 = 1;
unsigned short int var_1_97 = 22299;
unsigned char var_1_98 = 8;
unsigned char var_1_99 = 100;
unsigned long int var_1_100 = 256;
unsigned short int var_1_101 = 200;
unsigned long int var_1_103 = 5;
unsigned short int var_1_104 = 256;
signed long int var_1_105 = 2;
signed short int var_1_106 = 256;
signed short int var_1_107 = -8;
signed char var_1_108 = -2;
unsigned long int var_1_109 = 64;
signed char var_1_110 = -10;
signed char var_1_111 = -32;
unsigned long int var_1_112 = 32;
signed char var_1_113 = -128;
unsigned char var_1_114 = 128;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_21 = 0;
signed long int last_1_var_1_30 = 2;
unsigned char last_1_var_1_32 = 1;
unsigned char last_1_var_1_40 = 16;
signed long int last_1_var_1_43 = 128;
unsigned char last_1_var_1_49 = 0;
signed short int last_1_var_1_51 = 128;
signed char last_1_var_1_53 = -8;
unsigned char last_1_var_1_55 = 1;
unsigned char last_1_var_1_56 = 128;
signed long int last_1_var_1_75 = -16;
unsigned long int last_1_var_1_77 = 8;
signed short int last_1_var_1_79 = 100;
unsigned char last_1_var_1_89 = 4;
unsigned char last_1_var_1_90 = 25;
unsigned char last_1_var_1_98 = 8;
unsigned short int last_1_var_1_101 = 200;
unsigned short int last_1_var_1_104 = 256;
unsigned long int last_1_var_1_109 = 64;
signed char last_1_var_1_111 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req50Batch26Amount500
	if (last_1_var_1_49) {
		var_1_109 = last_1_var_1_98;
	} else {
		var_1_109 = last_1_var_1_104;
	}


	// From: Req45Batch26Amount500
	var_1_104 = var_1_109;


	// From: Req34Batch26Amount500
	if ((- (- last_1_var_1_90)) <= (var_1_18 - last_1_var_1_43)) {
		var_1_86 = ((max (var_1_78 , (var_1_87 - last_1_var_1_89))) - (var_1_48 - var_1_46));
	}


	// From: Req27Batch26Amount500
	if ((var_1_57 & (var_1_5 % var_1_9)) <= (min (var_1_19 , last_1_var_1_109))) {
		if (var_1_9 != (min (last_1_var_1_56 , last_1_var_1_51))) {
			var_1_73 = ((var_1_9 + var_1_10) - last_1_var_1_90);
		} else {
			var_1_73 = (min ((min (last_1_var_1_30 , var_1_6)) , 32));
		}
	}


	// From: Req29Batch26Amount500
	var_1_77 = (var_1_78 - var_1_73);


	// From: Req13Batch26Amount500
	if ((var_1_28 + var_1_77) < (var_1_8 + -8)) {
		var_1_40 = 128;
	} else {
		if (var_1_6 >= (var_1_10 << var_1_25)) {
			var_1_40 = (max (var_1_18 , (abs (var_1_42 - var_1_13))));
		}
	}


	// From: Req19Batch26Amount500
	signed long int stepLocal_12 = last_1_var_1_89;
	signed char stepLocal_11 = var_1_28;
	if ((last_1_var_1_77 * (min (last_1_var_1_79 , last_1_var_1_111))) > stepLocal_12) {
		if (var_1_46 <= stepLocal_11) {
			var_1_55 = ((256 >= -50) || var_1_50);
		} else {
			var_1_55 = (! var_1_33);
		}
	}


	// From: Req41Batch26Amount500
	if (var_1_55) {
		var_1_98 = (min (var_1_96 , var_1_28));
	} else {
		var_1_98 = (((var_1_99 - var_1_95) - (5 + var_1_27)) + (var_1_57 - var_1_28));
	}


	// From: Req44Batch26Amount500
	if (var_1_55) {
		var_1_103 = var_1_42;
	} else {
		var_1_103 = var_1_98;
	}


	// From: Req16Batch26Amount500
	if (last_1_var_1_32 && last_1_var_1_55) {
		var_1_49 = var_1_50;
	} else {
		var_1_49 = (! 1);
	}


	// From: Req10Batch26Amount500
	if (last_1_var_1_49) {
		var_1_32 = ((last_1_var_1_40 >= var_1_27) && var_1_33);
	} else {
		var_1_32 = (last_1_var_1_55 || (! var_1_33));
	}


	// From: Req37Batch26Amount500
	if (var_1_32) {
		if (! var_1_50) {
			var_1_90 = (abs (var_1_54));
		} else {
			var_1_90 = (max (var_1_18 , var_1_58));
		}
	}


	// From: Req52Batch26Amount500
	if (var_1_32) {
		var_1_111 = var_1_17;
	}


	// From: Req3Batch26Amount500
	unsigned long int stepLocal_0 = var_1_109;
	if (stepLocal_0 >= var_1_10) {
		var_1_12 = (var_1_13 + var_1_14);
	}


	// From: Req4Batch26Amount500
	if (var_1_10 != var_1_5) {
		if (var_1_32) {
			var_1_15 = var_1_8;
		}
	}


	// From: Req7Batch26Amount500
	signed long int stepLocal_5 = 2;
	signed char stepLocal_4 = var_1_19;
	if (stepLocal_4 < ((min (var_1_18 , var_1_14)) - var_1_13)) {
		if (stepLocal_5 > var_1_19) {
			var_1_24 = (((var_1_25 + var_1_26) + (var_1_27 - var_1_28)) + var_1_19);
		} else {
			var_1_24 = (64 - (var_1_27 + var_1_28));
		}
	}


	// From: Req8Batch26Amount500
	unsigned char stepLocal_6 = var_1_27 > var_1_15;
	if ((var_1_10 < var_1_28) || stepLocal_6) {
		var_1_29 = (var_1_20 + var_1_26);
	} else {
		var_1_29 = (var_1_27 - (min (var_1_18 , var_1_28)));
	}


	// From: Req18Batch26Amount500
	unsigned char stepLocal_10 = var_1_13;
	if ((~ last_1_var_1_53) <= stepLocal_10) {
		var_1_53 = (min (((var_1_28 - var_1_27) + var_1_26) , (min (var_1_19 , var_1_20))));
	} else {
		var_1_53 = (var_1_27 + (var_1_28 - var_1_54));
	}


	// From: Req23Batch26Amount500
	unsigned char stepLocal_13 = var_1_57;
	if (! var_1_49) {
		if (stepLocal_13 < 128) {
			var_1_65 = 2;
		} else {
			var_1_65 = (max (32 , var_1_40));
		}
	}


	// From: Req26Batch26Amount500
	if (var_1_32) {
		var_1_70 = (max ((var_1_36 + 24.6) , (var_1_38 + (var_1_71 + var_1_72))));
	}


	// From: Req31Batch26Amount500
	if (((var_1_13 + var_1_58) - (min (var_1_47 , var_1_9))) <= var_1_90) {
		if ((min (var_1_35 , var_1_36)) >= var_1_71) {
			if (var_1_40 <= var_1_14) {
				var_1_81 = (var_1_36 - var_1_35);
			} else {
				var_1_81 = ((var_1_36 + var_1_82) - (5.7679490547816387E18f - var_1_83));
			}
		} else {
			var_1_81 = var_1_83;
		}
	}


	// From: Req32Batch26Amount500
	var_1_84 = (var_1_83 - (var_1_36 + var_1_82));


	// From: Req33Batch26Amount500
	var_1_85 = ((min (var_1_38 , var_1_82)) + (min (var_1_71 , var_1_36)));


	// From: Req35Batch26Amount500
	if ((var_1_35 - var_1_83) >= var_1_37) {
		var_1_88 = ((var_1_82 + var_1_83) - var_1_37);
	} else {
		var_1_88 = (min (var_1_36 , var_1_71));
	}


	// From: Req36Batch26Amount500
	unsigned char stepLocal_20 = var_1_59;
	if (var_1_6 > stepLocal_20) {
		var_1_89 = var_1_13;
	} else {
		var_1_89 = ((max (var_1_57 , var_1_18)) + var_1_14);
	}


	// From: Req38Batch26Amount500
	if (var_1_83 > var_1_85) {
		var_1_91 = var_1_38;
	} else {
		var_1_91 = (var_1_82 - var_1_37);
	}


	// From: Req39Batch26Amount500
	unsigned long int stepLocal_22 = var_1_87;
	signed char stepLocal_21 = var_1_29;
	if (var_1_32) {
		var_1_92 = (var_1_48 - ((1000000000 + var_1_93) - var_1_77));
	} else {
		if (stepLocal_21 == var_1_18) {
			if (stepLocal_22 > 8u) {
				var_1_92 = (abs (var_1_9));
			} else {
				var_1_92 = (max (var_1_62 , var_1_103));
			}
		} else {
			var_1_92 = var_1_93;
		}
	}


	// From: Req42Batch26Amount500
	var_1_100 = (max ((var_1_87 - var_1_8) , var_1_97));


	// From: Req47Batch26Amount500
	if (var_1_55) {
		var_1_106 = var_1_59;
	} else {
		var_1_106 = var_1_15;
	}


	// From: Req48Batch26Amount500
	var_1_107 = var_1_57;


	// From: Req49Batch26Amount500
	if (var_1_32) {
		var_1_108 = var_1_54;
	} else {
		var_1_108 = var_1_96;
	}


	// From: Req51Batch26Amount500
	var_1_110 = var_1_26;


	// From: Req53Batch26Amount500
	if (var_1_32) {
		var_1_112 = var_1_27;
	}


	// From: Req54Batch26Amount500
	if (var_1_49 || var_1_49) {
		if (var_1_57 >= ((max (var_1_42 , var_1_114)) - var_1_47)) {
			var_1_113 = (var_1_96 - var_1_54);
		}
	} else {
		var_1_113 = -5;
	}


	// From: Req12Batch26Amount500
	if ((- 4.5f) >= (max (var_1_37 , var_1_36))) {
		var_1_39 = (min (100 , (var_1_24 + var_1_20)));
	} else {
		if (var_1_3 >= var_1_6) {
			var_1_39 = (var_1_9 + var_1_24);
		} else {
			var_1_39 = (var_1_14 - ((max (var_1_73 , var_1_18)) + var_1_13));
		}
	}


	// From: Req24Batch26Amount500
	if (var_1_55) {
		var_1_66 = ((max ((abs (61567)) , var_1_3)) - var_1_47);
	} else {
		if (((- var_1_36) / var_1_64) > (var_1_37 - var_1_35)) {
			if ((var_1_64 * var_1_38) <= var_1_85) {
				var_1_66 = (var_1_3 - ((10000 - var_1_59) + var_1_27));
			}
		}
	}


	// From: Req20Batch26Amount500
	if (var_1_49) {
		var_1_56 = (((abs (var_1_57)) + var_1_58) - ((32 + var_1_59) - var_1_28));
	} else {
		if (var_1_32) {
			var_1_56 = (var_1_42 - (var_1_54 + 16));
		} else {
			var_1_56 = var_1_58;
		}
	}


	// From: Req17Batch26Amount500
	if (var_1_49) {
		var_1_51 = (min ((max (var_1_90 , var_1_46)) , (4 + (var_1_28 + var_1_25))));
	}


	// From: Req1Batch26Amount500
	if (! var_1_32) {
		if (var_1_32) {
			var_1_1 = (var_1_3 - var_1_98);
		} else {
			if (var_1_3 < (var_1_98 / (var_1_5 + var_1_6))) {
				if ((max (var_1_6 , var_1_98)) >= var_1_5) {
					var_1_1 = (max ((abs (var_1_98)) , var_1_3));
				} else {
					var_1_1 = var_1_3;
				}
			}
		}
	} else {
		if (var_1_53 > (var_1_6 / var_1_8)) {
			var_1_1 = var_1_6;
		} else {
			var_1_1 = ((min ((var_1_9 + var_1_10) , var_1_3)) - var_1_8);
		}
	}


	// From: Req5Batch26Amount500
	unsigned char stepLocal_3 = var_1_40;
	unsigned char stepLocal_2 = var_1_8;
	unsigned char stepLocal_1 = var_1_8;
	if ((var_1_13 + (max (var_1_51 , -5))) != stepLocal_1) {
		if (stepLocal_2 > var_1_10) {
			if ((abs (10)) > stepLocal_3) {
				var_1_16 = ((abs (var_1_17)) - var_1_18);
			}
		} else {
			var_1_16 = (var_1_19 + var_1_20);
		}
	} else {
		var_1_16 = (max (var_1_18 , var_1_20));
	}


	// From: Req15Batch26Amount500
	if (var_1_17 < var_1_40) {
		if (((var_1_9 << var_1_40) / (var_1_46 + var_1_47)) <= (var_1_112 - var_1_15)) {
			var_1_45 = (2 - var_1_16);
		}
	} else {
		if (var_1_25 != (abs (var_1_28 + var_1_27))) {
			if (var_1_18 < (10 - var_1_27)) {
				var_1_45 = (var_1_42 - (var_1_48 - var_1_18));
			} else {
				if ((var_1_27 / var_1_6) <= (max (var_1_12 , var_1_3))) {
					var_1_45 = var_1_17;
				} else {
					var_1_45 = (min (var_1_47 , var_1_20));
				}
			}
		} else {
			var_1_45 = (var_1_77 - (var_1_48 - var_1_40));
		}
	}


	// From: Req21Batch26Amount500
	if (var_1_33) {
		if (var_1_27 < var_1_5) {
			if (var_1_56 > var_1_57) {
				if ((var_1_53 > var_1_26) || var_1_32) {
					var_1_60 = (max ((max (var_1_58 , 256)) , var_1_42));
				} else {
					var_1_60 = (min ((32 + (min (var_1_47 , var_1_15))) , var_1_56));
				}
			} else {
				var_1_60 = (((var_1_61 - var_1_18) - (var_1_62 - var_1_13)) - var_1_46);
			}
		} else {
			var_1_60 = ((var_1_59 + var_1_47) + var_1_15);
		}
	}


	// From: Req22Batch26Amount500
	if (((var_1_64 - var_1_36) - var_1_35) <= var_1_85) {
		var_1_63 = (max (var_1_48 , var_1_16));
	}


	// From: Req25Batch26Amount500
	if (var_1_5 < var_1_61) {
		if (var_1_15 < -128) {
			var_1_68 = var_1_59;
		} else {
			var_1_68 = (max ((var_1_47 - var_1_60) , var_1_100));
		}
	}


	// From: Req30Batch26Amount500
	signed char stepLocal_19 = var_1_24;
	signed long int stepLocal_18 = var_1_39;
	signed long int stepLocal_17 = 16;
	if (var_1_66 <= stepLocal_18) {
		if (var_1_58 > stepLocal_19) {
			if (stepLocal_17 != (var_1_18 + var_1_19)) {
				var_1_79 = ((var_1_46 + var_1_39) - var_1_40);
			}
		}
	} else {
		var_1_79 = (abs (max ((256 - var_1_14) , 4)));
	}


	// From: Req9Batch26Amount500
	if (! (var_1_6 > var_1_56)) {
		if (var_1_32 || var_1_49) {
			if (var_1_32) {
				if (var_1_5 != var_1_103) {
					var_1_30 = (((min (var_1_18 , var_1_20)) + var_1_8) + var_1_17);
				} else {
					var_1_30 = (var_1_18 + ((var_1_28 - var_1_56) + (2 - 8)));
				}
			}
		}
	} else {
		if (var_1_98 < (var_1_79 ^ 25)) {
			if (var_1_49 || var_1_49) {
				var_1_30 = var_1_26;
			} else {
				var_1_30 = var_1_27;
			}
		}
	}


	// From: Req2Batch26Amount500
	if (var_1_55) {
		var_1_11 = (var_1_45 - var_1_8);
	}


	// From: Req6Batch26Amount500
	if (var_1_55) {
		if (var_1_79 > last_1_var_1_21) {
			var_1_21 = (min ((var_1_13 + var_1_14) , var_1_18));
		}
	}


	// From: Req11Batch26Amount500
	unsigned char stepLocal_8 = var_1_56;
	unsigned short int stepLocal_7 = var_1_3;
	if (stepLocal_8 != ((var_1_3 - var_1_79) / var_1_8)) {
		if (stepLocal_7 == var_1_39) {
			var_1_34 = ((var_1_35 - var_1_36) - var_1_37);
		} else {
			var_1_34 = (var_1_36 - var_1_35);
		}
	} else {
		var_1_34 = (min ((var_1_36 + var_1_38) , var_1_37));
	}


	// From: Req46Batch26Amount500
	if (var_1_49) {
		var_1_105 = var_1_30;
	} else {
		var_1_105 = var_1_9;
	}


	// From: Req40Batch26Amount500
	if (var_1_108 == var_1_86) {
		if ((var_1_28 << (min (var_1_95 , var_1_96))) == var_1_6) {
			if ((var_1_62 + var_1_30) >= var_1_48) {
				var_1_94 = (var_1_62 + (var_1_30 + var_1_54));
			} else {
				var_1_94 = ((var_1_10 + var_1_97) - var_1_51);
			}
		} else {
			var_1_94 = (max ((max (var_1_60 , var_1_11)) , (var_1_61 - (var_1_10 - var_1_65))));
		}
	}


	// From: Req43Batch26Amount500
	if (var_1_32) {
		if (var_1_107 <= -2) {
			if (var_1_50) {
				if (last_1_var_1_101 > var_1_66) {
					if ((var_1_94 | (var_1_15 + var_1_48)) >= var_1_16) {
						if (var_1_55) {
							var_1_101 = var_1_57;
						}
					}
				}
			}
		} else {
			var_1_101 = var_1_89;
		}
	} else {
		var_1_101 = 5;
	}


	// From: Req14Batch26Amount500
	unsigned char stepLocal_9 = var_1_8;
	if (stepLocal_9 > (var_1_86 * 5)) {
		if (var_1_33) {
			var_1_43 = (var_1_94 - var_1_27);
		} else {
			var_1_43 = last_1_var_1_43;
		}
	}


	// From: Req28Batch26Amount500
	signed long int stepLocal_16 = abs (50);
	unsigned char stepLocal_15 = var_1_40;
	unsigned short int stepLocal_14 = var_1_65;
	if (stepLocal_14 >= (var_1_73 + var_1_86)) {
		if (last_1_var_1_75 <= stepLocal_15) {
			if ((var_1_13 + var_1_10) <= stepLocal_16) {
				var_1_75 = ((max ((abs (var_1_73)) , (var_1_68 + var_1_5))) - (var_1_62 + 128));
			}
		} else {
			var_1_75 = (var_1_12 + (min (var_1_101 , var_1_60)));
		}
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 32767);
	assume_abort_if_not(var_1_3 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 32768);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 16383);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 16384);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -126);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -15);
	assume_abort_if_not(var_1_25 <= 16);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -15);
	assume_abort_if_not(var_1_26 <= 16);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 31);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 4611686.018427382800e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854765600e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854765600e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -461168.6018427382800e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 128);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 127);
	var_1_48 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_48 >= 1073741823);
	assume_abort_if_not(var_1_48 <= 2147483646);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 63);
	assume_abort_if_not(var_1_57 <= 127);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 64);
	assume_abort_if_not(var_1_58 <= 127);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 32);
	assume_abort_if_not(var_1_59 <= 63);
	var_1_61 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_61 >= 57342);
	assume_abort_if_not(var_1_61 <= 65534);
	var_1_62 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_62 >= 8191);
	assume_abort_if_not(var_1_62 <= 16383);
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 4611686.018427387900e+12F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 9223372.036854776000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= -230584.3009213691390e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691390e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= -230584.3009213691390e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 2305843.009213691390e+12F && var_1_72 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_78 >= 2147483647);
	assume_abort_if_not(var_1_78 <= 4294967294);
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= 0.0F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 4611686.018427382800e+12F && var_1_82 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 0.0F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427382800e+12F && var_1_83 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_87 >= 3221225470);
	assume_abort_if_not(var_1_87 <= 4294967294);
	var_1_93 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_93 >= 536870912);
	assume_abort_if_not(var_1_93 <= 1073741823);
	var_1_95 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 2);
	var_1_96 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 2);
	var_1_97 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_97 >= 16384);
	assume_abort_if_not(var_1_97 <= 32767);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 95);
	assume_abort_if_not(var_1_99 <= 127);
	var_1_114 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_114 >= 127);
	assume_abort_if_not(var_1_114 <= 255);
}



void updateLastVariables() {
	last_1_var_1_21 = var_1_21;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_111 = var_1_111;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((! var_1_32) ? (var_1_32 ? (var_1_1 == ((unsigned short int) (var_1_3 - var_1_98))) : ((var_1_3 < (var_1_98 / (var_1_5 + var_1_6))) ? (((max (var_1_6 , var_1_98)) >= var_1_5) ? (var_1_1 == ((unsigned short int) (max ((abs (var_1_98)) , var_1_3)))) : (var_1_1 == ((unsigned short int) var_1_3))) : 1)) : ((var_1_53 > (var_1_6 / var_1_8)) ? (var_1_1 == ((unsigned short int) var_1_6)) : (var_1_1 == ((unsigned short int) ((min ((var_1_9 + var_1_10) , var_1_3)) - var_1_8))))) && (var_1_55 ? (var_1_11 == ((signed short int) (var_1_45 - var_1_8))) : 1)) && ((var_1_109 >= var_1_10) ? (var_1_12 == ((unsigned char) (var_1_13 + var_1_14))) : 1)) && ((var_1_10 != var_1_5) ? (var_1_32 ? (var_1_15 == ((signed long int) var_1_8)) : 1) : 1)) && (((var_1_13 + (max (var_1_51 , -5))) != var_1_8) ? ((var_1_8 > var_1_10) ? (((abs (10)) > var_1_40) ? (var_1_16 == ((signed char) ((abs (var_1_17)) - var_1_18))) : 1) : (var_1_16 == ((signed char) (var_1_19 + var_1_20)))) : (var_1_16 == ((signed char) (max (var_1_18 , var_1_20)))))) && (var_1_55 ? ((var_1_79 > last_1_var_1_21) ? (var_1_21 == ((unsigned char) (min ((var_1_13 + var_1_14) , var_1_18)))) : 1) : 1)) && ((var_1_19 < ((min (var_1_18 , var_1_14)) - var_1_13)) ? ((2 > var_1_19) ? (var_1_24 == ((signed char) (((var_1_25 + var_1_26) + (var_1_27 - var_1_28)) + var_1_19))) : (var_1_24 == ((signed char) (64 - (var_1_27 + var_1_28))))) : 1)) && (((var_1_10 < var_1_28) || (var_1_27 > var_1_15)) ? (var_1_29 == ((signed char) (var_1_20 + var_1_26))) : (var_1_29 == ((signed char) (var_1_27 - (min (var_1_18 , var_1_28))))))) && ((! (var_1_6 > var_1_56)) ? ((var_1_32 || var_1_49) ? (var_1_32 ? ((var_1_5 != var_1_103) ? (var_1_30 == ((signed long int) (((min (var_1_18 , var_1_20)) + var_1_8) + var_1_17))) : (var_1_30 == ((signed long int) (var_1_18 + ((var_1_28 - var_1_56) + (2 - 8)))))) : 1) : 1) : ((var_1_98 < (var_1_79 ^ 25)) ? ((var_1_49 || var_1_49) ? (var_1_30 == ((signed long int) var_1_26)) : (var_1_30 == ((signed long int) var_1_27))) : 1))) && (last_1_var_1_49 ? (var_1_32 == ((unsigned char) ((last_1_var_1_40 >= var_1_27) && var_1_33))) : (var_1_32 == ((unsigned char) (last_1_var_1_55 || (! var_1_33)))))) && ((var_1_56 != ((var_1_3 - var_1_79) / var_1_8)) ? ((var_1_3 == var_1_39) ? (var_1_34 == ((double) ((var_1_35 - var_1_36) - var_1_37))) : (var_1_34 == ((double) (var_1_36 - var_1_35)))) : (var_1_34 == ((double) (min ((var_1_36 + var_1_38) , var_1_37)))))) && (((- 4.5f) >= (max (var_1_37 , var_1_36))) ? (var_1_39 == ((signed long int) (min (100 , (var_1_24 + var_1_20))))) : ((var_1_3 >= var_1_6) ? (var_1_39 == ((signed long int) (var_1_9 + var_1_24))) : (var_1_39 == ((signed long int) (var_1_14 - ((max (var_1_73 , var_1_18)) + var_1_13))))))) && (((var_1_28 + var_1_77) < (var_1_8 + -8)) ? (var_1_40 == ((unsigned char) 128)) : ((var_1_6 >= (var_1_10 << var_1_25)) ? (var_1_40 == ((unsigned char) (max (var_1_18 , (abs (var_1_42 - var_1_13)))))) : 1))) && ((var_1_8 > (var_1_86 * 5)) ? (var_1_33 ? (var_1_43 == ((signed long int) (var_1_94 - var_1_27))) : (var_1_43 == ((signed long int) last_1_var_1_43))) : 1)) && ((var_1_17 < var_1_40) ? ((((var_1_9 << var_1_40) / (var_1_46 + var_1_47)) <= (var_1_112 - var_1_15)) ? (var_1_45 == ((signed long int) (2 - var_1_16))) : 1) : ((var_1_25 != (abs (var_1_28 + var_1_27))) ? ((var_1_18 < (10 - var_1_27)) ? (var_1_45 == ((signed long int) (var_1_42 - (var_1_48 - var_1_18)))) : (((var_1_27 / var_1_6) <= (max (var_1_12 , var_1_3))) ? (var_1_45 == ((signed long int) var_1_17)) : (var_1_45 == ((signed long int) (min (var_1_47 , var_1_20)))))) : (var_1_45 == ((signed long int) (var_1_77 - (var_1_48 - var_1_40))))))) && ((last_1_var_1_32 && last_1_var_1_55) ? (var_1_49 == ((unsigned char) var_1_50)) : (var_1_49 == ((unsigned char) (! 1))))) && (var_1_49 ? (var_1_51 == ((signed short int) (min ((max (var_1_90 , var_1_46)) , (4 + (var_1_28 + var_1_25)))))) : 1)) && (((~ last_1_var_1_53) <= var_1_13) ? (var_1_53 == ((signed char) (min (((var_1_28 - var_1_27) + var_1_26) , (min (var_1_19 , var_1_20)))))) : (var_1_53 == ((signed char) (var_1_27 + (var_1_28 - var_1_54)))))) && (((last_1_var_1_77 * (min (last_1_var_1_79 , last_1_var_1_111))) > last_1_var_1_89) ? ((var_1_46 <= var_1_28) ? (var_1_55 == ((unsigned char) ((256 >= -50) || var_1_50))) : (var_1_55 == ((unsigned char) (! var_1_33)))) : 1)) && (var_1_49 ? (var_1_56 == ((unsigned char) (((abs (var_1_57)) + var_1_58) - ((32 + var_1_59) - var_1_28)))) : (var_1_32 ? (var_1_56 == ((unsigned char) (var_1_42 - (var_1_54 + 16)))) : (var_1_56 == ((unsigned char) var_1_58))))) && (var_1_33 ? ((var_1_27 < var_1_5) ? ((var_1_56 > var_1_57) ? (((var_1_53 > var_1_26) || var_1_32) ? (var_1_60 == ((unsigned short int) (max ((max (var_1_58 , 256)) , var_1_42)))) : (var_1_60 == ((unsigned short int) (min ((32 + (min (var_1_47 , var_1_15))) , var_1_56))))) : (var_1_60 == ((unsigned short int) (((var_1_61 - var_1_18) - (var_1_62 - var_1_13)) - var_1_46)))) : (var_1_60 == ((unsigned short int) ((var_1_59 + var_1_47) + var_1_15)))) : 1)) && ((((var_1_64 - var_1_36) - var_1_35) <= var_1_85) ? (var_1_63 == ((unsigned long int) (max (var_1_48 , var_1_16)))) : 1)) && ((! var_1_49) ? ((var_1_57 < 128) ? (var_1_65 == ((unsigned short int) 2)) : (var_1_65 == ((unsigned short int) (max (32 , var_1_40))))) : 1)) && (var_1_55 ? (var_1_66 == ((unsigned short int) ((max ((abs (61567)) , var_1_3)) - var_1_47))) : ((((- var_1_36) / var_1_64) > (var_1_37 - var_1_35)) ? (((var_1_64 * var_1_38) <= var_1_85) ? (var_1_66 == ((unsigned short int) (var_1_3 - ((10000 - var_1_59) + var_1_27)))) : 1) : 1))) && ((var_1_5 < var_1_61) ? ((var_1_15 < -128) ? (var_1_68 == ((signed short int) var_1_59)) : (var_1_68 == ((signed short int) (max ((var_1_47 - var_1_60) , var_1_100))))) : 1)) && (var_1_32 ? (var_1_70 == ((double) (max ((var_1_36 + 24.6) , (var_1_38 + (var_1_71 + var_1_72)))))) : 1)) && (((var_1_57 & (var_1_5 % var_1_9)) <= (min (var_1_19 , last_1_var_1_109))) ? ((var_1_9 != (min (last_1_var_1_56 , last_1_var_1_51))) ? (var_1_73 == ((unsigned short int) ((var_1_9 + var_1_10) - last_1_var_1_90))) : (var_1_73 == ((unsigned short int) (min ((min (last_1_var_1_30 , var_1_6)) , 32))))) : 1)) && ((var_1_65 >= (var_1_73 + var_1_86)) ? ((last_1_var_1_75 <= var_1_40) ? (((var_1_13 + var_1_10) <= (abs (50))) ? (var_1_75 == ((signed long int) ((max ((abs (var_1_73)) , (var_1_68 + var_1_5))) - (var_1_62 + 128)))) : 1) : (var_1_75 == ((signed long int) (var_1_12 + (min (var_1_101 , var_1_60)))))) : 1)) && (var_1_77 == ((unsigned long int) (var_1_78 - var_1_73)))) && ((var_1_66 <= var_1_39) ? ((var_1_58 > var_1_24) ? ((16 != (var_1_18 + var_1_19)) ? (var_1_79 == ((signed short int) ((var_1_46 + var_1_39) - var_1_40))) : 1) : 1) : (var_1_79 == ((signed short int) (abs (max ((256 - var_1_14) , 4))))))) && ((((var_1_13 + var_1_58) - (min (var_1_47 , var_1_9))) <= var_1_90) ? (((min (var_1_35 , var_1_36)) >= var_1_71) ? ((var_1_40 <= var_1_14) ? (var_1_81 == ((float) (var_1_36 - var_1_35))) : (var_1_81 == ((float) ((var_1_36 + var_1_82) - (5.7679490547816387E18f - var_1_83))))) : (var_1_81 == ((float) var_1_83))) : 1)) && (var_1_84 == ((double) (var_1_83 - (var_1_36 + var_1_82))))) && (var_1_85 == ((float) ((min (var_1_38 , var_1_82)) + (min (var_1_71 , var_1_36)))))) && (((- (- last_1_var_1_90)) <= (var_1_18 - last_1_var_1_43)) ? (var_1_86 == ((unsigned long int) ((max (var_1_78 , (var_1_87 - last_1_var_1_89))) - (var_1_48 - var_1_46)))) : 1)) && (((var_1_35 - var_1_83) >= var_1_37) ? (var_1_88 == ((double) ((var_1_82 + var_1_83) - var_1_37))) : (var_1_88 == ((double) (min (var_1_36 , var_1_71)))))) && ((var_1_6 > var_1_59) ? (var_1_89 == ((unsigned char) var_1_13)) : (var_1_89 == ((unsigned char) ((max (var_1_57 , var_1_18)) + var_1_14))))) && (var_1_32 ? ((! var_1_50) ? (var_1_90 == ((unsigned char) (abs (var_1_54)))) : (var_1_90 == ((unsigned char) (max (var_1_18 , var_1_58))))) : 1)) && ((var_1_83 > var_1_85) ? (var_1_91 == ((double) var_1_38)) : (var_1_91 == ((double) (var_1_82 - var_1_37))))) && (var_1_32 ? (var_1_92 == ((signed long int) (var_1_48 - ((1000000000 + var_1_93) - var_1_77)))) : ((var_1_29 == var_1_18) ? ((var_1_87 > 8u) ? (var_1_92 == ((signed long int) (abs (var_1_9)))) : (var_1_92 == ((signed long int) (max (var_1_62 , var_1_103))))) : (var_1_92 == ((signed long int) var_1_93))))) && ((var_1_108 == var_1_86) ? (((var_1_28 << (min (var_1_95 , var_1_96))) == var_1_6) ? (((var_1_62 + var_1_30) >= var_1_48) ? (var_1_94 == ((unsigned short int) (var_1_62 + (var_1_30 + var_1_54)))) : (var_1_94 == ((unsigned short int) ((var_1_10 + var_1_97) - var_1_51)))) : (var_1_94 == ((unsigned short int) (max ((max (var_1_60 , var_1_11)) , (var_1_61 - (var_1_10 - var_1_65))))))) : 1)) && (var_1_55 ? (var_1_98 == ((unsigned char) (min (var_1_96 , var_1_28)))) : (var_1_98 == ((unsigned char) (((var_1_99 - var_1_95) - (5 + var_1_27)) + (var_1_57 - var_1_28)))))) && (var_1_100 == ((unsigned long int) (max ((var_1_87 - var_1_8) , var_1_97))))) && (var_1_32 ? ((var_1_107 <= -2) ? (var_1_50 ? ((last_1_var_1_101 > var_1_66) ? (((var_1_94 | (var_1_15 + var_1_48)) >= var_1_16) ? (var_1_55 ? (var_1_101 == ((unsigned short int) var_1_57)) : 1) : 1) : 1) : 1) : (var_1_101 == ((unsigned short int) var_1_89))) : (var_1_101 == ((unsigned short int) 5)))) && (var_1_55 ? (var_1_103 == ((unsigned long int) var_1_42)) : (var_1_103 == ((unsigned long int) var_1_98)))) && (var_1_104 == ((unsigned short int) var_1_109))) && (var_1_49 ? (var_1_105 == ((signed long int) var_1_30)) : (var_1_105 == ((signed long int) var_1_9)))) && (var_1_55 ? (var_1_106 == ((signed short int) var_1_59)) : (var_1_106 == ((signed short int) var_1_15)))) && (var_1_107 == ((signed short int) var_1_57))) && (var_1_32 ? (var_1_108 == ((signed char) var_1_54)) : (var_1_108 == ((signed char) var_1_96)))) && (last_1_var_1_49 ? (var_1_109 == ((unsigned long int) last_1_var_1_98)) : (var_1_109 == ((unsigned long int) last_1_var_1_104)))) && (var_1_110 == ((signed char) var_1_26))) && (var_1_32 ? (var_1_111 == ((signed char) var_1_17)) : 1)) && (var_1_32 ? (var_1_112 == ((unsigned long int) var_1_27)) : 1)) && ((var_1_49 || var_1_49) ? ((var_1_57 >= ((max (var_1_42 , var_1_114)) - var_1_47)) ? (var_1_113 == ((signed char) (var_1_96 - var_1_54))) : 1) : (var_1_113 == ((signed char) -5)))
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
