// Checking if a number a sum of two prime numbers
#include <stdio.h>

int isprime(int n);
int isprisum(int n);

int main () {
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("The number %d %s be represented by sum of two prime numbers\n", n, isprisum(n) ? "can" : "can't");
	return 0;
}
