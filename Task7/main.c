// Power of a number
#include <stdio.h>

long powerint(int num, int exp);
float powerfloat(int num, int exp);

int main () {
	int num = 0;
	int exp = 0;
	printf("Enter a number: ");
	while (scanf("%d", &num) != 1) {
		printf("Please enter a valid number: ");
		scanf("%d", &num);
		while (getchar() != '\n');
	}
	printf("Enter a positive exponent: ");
	while (scanf("%d", &exp) != 1) {
		printf("Please enter a valid number: ");
		scanf("%d", &exp);
		while (getchar() != '\n');
	}
	if (num == 0 && exp < 0) {
		printf("Error: division by zero!\n");
		return -1;
	}
	if (exp >= 0) {
		printf("%d to the %dth power is %ld\n", num, exp, powerint(num, exp));
	} else {
		printf("%d to the %dth power is %lf\n", num, exp, powerfloat(num, exp));	
	}
	return 0;
	
}
