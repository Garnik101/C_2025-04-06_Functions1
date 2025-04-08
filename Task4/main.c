// Sum of the digits of a number
#include <stdio.h> 

int digsum(int n);

int main () {
	int n = 0;
	printf("Enter a number: ");
	while (scanf("%d", &n) != 1) {
		printf("Please enter a valid number: ");
		scanf("%d", &n);
		while (getchar() != '\n');
	} 
	printf("The sum of digits of %d: %d\n", n, digsum(n));
	return 0;
}
