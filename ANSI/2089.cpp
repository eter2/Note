#include <stdio.h>

int main()
{
	int x, y, z;
	while (1)
	{
		scanf("%d %d %d", &x, &y, &z);

		if (x == 0 && y == 0 && z == 0) break;
		if (y%z == 0 && x%z == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;
}