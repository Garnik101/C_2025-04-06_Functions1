#include <stdio.h>
#include <stdbool.h>

bool isprime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			return false;	
		}
	}
	return true;
}
