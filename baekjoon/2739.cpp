#include <stdio.h>

int main() {
	int a, N;

	scanf("%d", &N);
	a = 1;

	while (a <= 9)
	{
		printf("%d * %d = %d\n", N, a, N*a);
		a++;
	}

	return 0;
}