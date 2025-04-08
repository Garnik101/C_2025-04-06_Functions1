// Getting a reversed version of a number
#include <stdio.h> 

int revnum(int rev);

int main () {
	int n = 0;
	printf("Enter a number: ");
	while (scanf("%d", &n) != 1) {
		printf("Please enter a valid number: ");
		scanf("%d", &n);
		while (getchar() != '\n');
	} 
	printf("The reversed number is %d\n", revnum(n));
	return 0;
}
