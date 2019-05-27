/*
Description
임의의 정수 N이 들어올 때, 1부터 정수 N까지의 합을 구하는 프로그램을 작성하라.

Input
입력은 여러개의 테스트 케이스로 이뤄지며, 입력의 첫번째 줄에는 테스트 케이스의 개수 T(1<=T<=100)가 입력된다. 그 다음 줄부터 T개의 줄에는 N이 입력되며, N은 1이상 1,000이하의 정수다.

Output
입력에 대해 1부터 N까지의 합을 입력된 테스트 케이스 순서대로 한줄에 하나씩 입력한다.
*/

#include <stdio.h>

int main() {
	int T, N, k, sum;
	sum = 0;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%d", &k);
		for(N = 1; N <= k; N++)
		{
			sum += N;
		}
		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}