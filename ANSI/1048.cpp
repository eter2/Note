// #1048 평범한 놈 찾기
//
// Description
// lavida.us/problem.php?id=1048
//
// Input
// 맨 처음 테스트 케이스의 개수 T(1 <= T <= 20)를 입력받는다.
// 그 다음 현재 인원의 수 N(3 <= N <= 20)을 입력받고 입력된 N의 개수만큼 각각의 점수 S[i]가 입력된다.
// (1 <= S[i] <= 10000)
// 
// Output
// 각 테스트 케이스마다 입력받은 S[i]의 값중 S[i]들의 평균값에 가장 근접한 S[i] 값을 출력한다.

#include <stdio.h>
#include <math.h>

int main()
{
	// 테스트 케이스 갯수 T 입력
	int T;
	scanf("%d", &T);

	while (T--)
	{
		// 인원의 수 N 입력
		int N;
		scanf("%d", &N);

		// 각각의 점수 S[i] 입력
		int S[20];
		int sum = 0;

		for (int i = 0; i < N; i++)
		{
			scanf("%d", &S[i]);
			sum += S[i];
		}

		// 평균값에 가장 근접한 S[i] 값 출력
		int result = S[0];

		for (int i = 1; i < N; i++)
		{
			if (abs(S[i] * N - sum) < abs(result * N - sum))
			{
				result = S[i];
			}
		}

		printf("%d\n", result);
	}

	return 0;
}