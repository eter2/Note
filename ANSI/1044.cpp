/*
Description
소수란 1과 자기 자신을 제외한 그 어떤 수로도 나누어 떨어지지 않는 수를 말한다.
예를 들어 2,3,5,7은 1과 자기 자신을 제외한 어떤 수로도 나누어 떨어지지 않으므로 소수지만 4는 1과 자기 자신 이외에도 2로 나누어 떨어지기 때문에 소수가 아니다.
어떠한 수를 입력받았을 때 입력받은 수가 소수인지 아닌지를 판별하는 프로그램을 작성하라.

Input
맨 처음 테스트 케이스의 개수 T (1≤T≤20)를 입력받는다.
그 뒤에 T의 개수만큼 N (2≤N≤10000)을 입력받는다.

Output
각 테스트 케이스마다 입력받은 수 N이 소수이면 Prime을, 소수가 아니면 Not Prime을 출력한다.
*/

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