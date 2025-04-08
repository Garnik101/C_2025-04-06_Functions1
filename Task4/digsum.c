#include <stdio.h>

int digsum(int n) {
	int sum = 0;
	int rem = 0;
	if (n < 0) {
		n = -n;			// converting number in case of negative
	}
	while (n > 0) {
		rem = n % 10;
		sum += rem;
		n /= 10;
	}
	return sum;		
}
