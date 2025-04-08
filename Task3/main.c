// Factorial
#include <stdio.h> 

int factorial(int n);

int main () {
	int n = 0;
	printf("Enter a number: ");
	while (scanf("%d", &n) != 1) {
		printf("Please enter a valid number: ");
		scanf("%d", &n);
		while (getchar() != '\n');
	} 
	printf("Factorial of %d is %d\n", n, factorial(n));
	return 0;
}
