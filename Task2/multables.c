#include <stdio.h>

void multab() {
	for (int i = 1; i <= 10; ++i) {
		printf("%d Times Table:\n", i);
		for (int j = 1; j <= 10; ++j) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	printf("\n\n");
	}
}
