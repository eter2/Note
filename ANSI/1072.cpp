/*
Description
어떤 수 N이 존재할 때 N을 N을 구성하는 소수의 곱으로 나타낸 것을 소인수 분해라고 한다. 예를 들어 N이 30일 때 30 = 2 x 3 x 5 이고 2, 3, 5는 모두 소수이므로 30을 소인수 분해한 결과는 2 x 3 x 5이다.
N을 입력받았을 때 N을 소인수 분해한 결과 값을 출력하는 프로그램을 작성하라.

Input
맨 처음 테스트 케이스의 개수 T(1 <= T <= 100)를 입력받는다. 그 뒤에 T의 개수만큼 N(1 <= N <= 10000)을 입력받는다.

Output
각 테스트 케이스마다 N을 소인수 분해한 결과값을 출력한다.
*/

#include <stdio.h>

int main()
{
	int T, N, result[100], k;

	scanf("%d", &T);

	while (T--)
	{
		k = 0;

		scanf("%d", &N);

		for (int i = 2; i <= N; i++)
		{
			if (N == 0)
			{
				break;
			}
			else if (N%i == 0)
			{
				result[k] = i;
				k++;
				N = N / i;
				i--;
			}
		}

		for (int i = 0; i < k; i++)
		{
			printf("%d ", result[i]);
		}
		printf("\n");
	}

	return 0;
}