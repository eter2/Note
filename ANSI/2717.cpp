/* 
Description
안시의 9대 회장인 박민기는 술을 매우 좋아한다.
테이블 위에는 N종류의 술이 놓여있다.
이 술집은 N종류의 술을 총 5번 제공해주는데, 제공 받을때마다 N개의 술 중 1개의 술만 마실 수 있다.
그는 술을 마실 때 술의 종류따윈 따지지 않고 그 중에  최대한 도수가 높은 술을 마시고 싶어 한다.
그는 안시 회장으로써 할 일이 너무나 많기 때문에 우리에게 술 고르는 것을 부탁했다.
바쁜 그를 위해 술을 골라 주자.

Input
첫째줄에 N(1≤N≤10)이 입력된다.
그다음 5개의 줄에 N번씩의 술의 도수  V(1≤V≤100)가 입력되는데, 각 도수는 소수 넷째 자리까지만 입력된다.
 
Output
가장 큰 도수들 5개를 모두 더한 값을 소수점 4째자리에서 반올림하여 출력한다. */



#include <stdio.h>

int main()
{
	int N;
	float al = 0;
	float sum;
	sum = 0;

	scanf("%d", &N);

	float arr[10];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%f", &arr[j]);
		}
		for (int j = 0; j < N; j++)
		{
			if (arr[j] > al)
			{
				al = arr[j];
			}
		}
		sum += al;
		al = 0;
	}

	printf("%.3f", sum);

	return 0;
}   