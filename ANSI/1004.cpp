#include <stdio.h>

int main()
{
	double X, Y, Z;

	scanf("%lf\n%lf\n%lf", &X, &Y, &Z);

	printf("%.2lf", Z * Y / X);

	return 0;
}