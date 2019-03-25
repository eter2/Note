#include <stdio.h>

int main()
{
	double T, N;

	scanf("%lf\n%lf", &T, &N);

	printf("%.2lf", N / (1+0.01*T));

	return 0;
}