// while문 풀이
#include <stdio.h>

int main() {
	int n, k, sum;
	n = 1;
	sum = 0;

	scanf("%d", &k);

	while (k--)
	{

		sum = sum + n;
		n++;
	}

	printf("%d", sum);

	return 0;
}


// for문 풀이
#include <stdio.h>

int main() {
	int n, k;
	int sum;
	sum = 0;

	scanf("%d", &k);

	for (n = 1; n <= k; n++)
	{
		sum += n;
	}

	printf("%d", sum);

	return 0;
}