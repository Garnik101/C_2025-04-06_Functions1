// Multiplication Table
#include <stdio.h> 

void multab(int a);

int main () {
	int a = 0;
	printf("Enter a number: ");
	while (scanf("%d", &a) != 1) {
		printf("Please enter a valid number: ");
		scanf("%d", &a);
		while (getchar() != '\n');
	} 
	printf("The multiplication table of %d:\n", a);
	multab(a);
	return 0;
}
