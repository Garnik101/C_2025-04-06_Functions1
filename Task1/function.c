#include <stdio.h>

void multab(int a) {
	int i = 0;
	while (++i <= 10) {
		printf("%d * %2d = %d\n", a, i, a * i);
	}
}
