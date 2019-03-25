#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	if(a == 1 || a == 3 || a == 4)
	{
		printf("500");
	}
	else if(a == 2 || a == 6)
	{
		printf("600");
	}
	else if(a == 5)
	{
		printf("1000");
	}
	return 0;
}