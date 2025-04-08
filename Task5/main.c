// Checking if a number is prime
#include <stdio.h>
#include <stdbool.h>

bool isprime(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number is prime: %d\n", isprime(n));
    return 0;
}
