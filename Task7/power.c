#include <stdio.h>
long powerint(int num, int exp) {
	if (exp == 0) return 1;
	if (exp == 1) return num;
	if (num < 0) {
		num = -num;
	}
	int initnum = num;
	if (exp > 0) {
		for (int i = 2; i <= exp; ++i) {
			num *= initnum;
		}
		return num;
	}
}

float powerfloat(int num, int exp) {
	if (num < 0) num = -num;
	if (exp < 0) {
		int initnum = num;
		exp = -exp;
		for (int i = 2; i <= exp; ++i) {
			num *= initnum; 
		}
		return 1.0 / (float)num;
	}
}
