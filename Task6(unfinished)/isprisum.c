#include <stdio.h>

extern int isprime(int n);

int isprisum (int n) {
	for (int i = 2; i <= n / 2; ++i) {
		if (isprime(i) && isprime(n - i)) {
			return 1;
			printf("Found prime pair: %d + %d = %d\n", i, n - i, n);
		}
	}
	return 0;
}
