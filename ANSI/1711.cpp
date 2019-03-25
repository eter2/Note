#include <stdio.h>

int main()
{
	double a, b;

	scanf("%lf %lf", &a, &b);

	printf("%.1lf", a + a * ( 0.01 * b) );

	return 0;
}