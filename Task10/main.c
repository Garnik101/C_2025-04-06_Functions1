// Nth Fibonacci number
#include <stdio.h> 

int fibo(int n);

int main () {
	int n = 0;
	printf("Enter a number: ");
	while (scanf("%d", &n) != 1 || n < 0) {
		printf("Please enter a valid number: ");
		while (getchar() != '\n');
	} 
	printf("%dth Fibonacci number is %d\n", n, fibo(n));
	return 0;
}
