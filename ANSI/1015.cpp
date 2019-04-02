#include <stdio.h>

int main() {
	int T, N, sum;

	scanf("%d", &T);
	sum = 0;

	while (T--)
	{
		int day = 0;
		scanf("%d", &N);
			while (N > 1)
			{
				if (N % 2 == 1)
				{
					N = 3 * N + 1;
				}
				else
				{
					N = N / 2;
				}
				day++;
			}
		printf("%d\n", day);
	}

	return 0;
}