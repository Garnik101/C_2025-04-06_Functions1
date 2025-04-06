// Power of a number
#include <stdio.h>

int power(int num, int exp);

int main () {
	int num = 0;
	int exp = 0;

	/*printf("Enter a number: ");
	while (scanf("%d", &num) != 1) {
		printf("Please enter a valid number: ");
		while (getchar() != '\n');
	}
	
	printf("Enter the power of the number: ");
	while (scanf("%d", &exp) != 1) {
		printf("Please enter a valid number: ");
		while (getchar() != '\n');
	}*/
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter the power of the number: ");
	scanf("%d", &exp);
	printf("%d to the %dth power is %d\n", num, exp, power(num, exp));
	return 0;
}

