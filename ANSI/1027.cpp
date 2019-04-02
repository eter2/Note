#include <stdio.h>

int main() {
	int T, N, k, sum;
	sum = 0;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%d", &k);
		for(N = 1; N <= k; N++)
		{
			sum += N;
		}
		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}