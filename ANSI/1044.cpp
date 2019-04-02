#include <stdio.h>

int main() {
	int T, a, i;

	scanf("%d", &T);
	
	while (T--)
	{
		int flag = 0;
		scanf("%d", &a);
		if (a <= 1)
		{
			flag = 0;
		}
		else if (a % 2 == 0)
		{
			if (a == 2)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}
		else
		{	
			flag = 1;
			for (i = 2; i <= a - 1; i++)
			{
				if (a%i == 0)
				{
					flag = 0;
					break;
				}
			}
		}

		if (flag == 1)
		{
			printf("Prime\n");
		}
		else
		{
			printf("Not Prime\n");
		}

	}

	return 0;
}