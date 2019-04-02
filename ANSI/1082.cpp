#include <stdio.h>

int main() {
	int T, n, m, k;
	long long sum;
	sum = 0;

	scanf("%d", &T);

	while (T--)
	{
		scanf("%d %d", &n, &m);
		k = n;

		while (k <= m)
		{
			sum += k;
			k++;
		}
		printf("%lld\n", sum);
		sum = 0;
	}

	return 0;
}