#include <stdio.h>

int power(int num, int exp) {
	for (int i = 1; 1 <= exp; ++i) {
		num *= num;
	}
	return num;
}
