/*
Description



sum(x)=1+2+3+...+x−1+x
sum(x)=1+2+3+...+x−1+x
 으로 sum(x)
sum(x)
란 1부터 x까지의 수를 모두 더한 값을 뜻한다. 즉 sum(2)=1+2=3
sum(2)=1+2=3
 이고 sum(3)=1+2+3=6
sum(3)=1+2+3=6
 이다.



여기서 위 sum(x)의 개념을 더욱 확장시켜 다음과 같이 SoS(Sum of Sum)이라는 개념을 만들었다.

SoS(x)=sum(1)+sum(2)+⋯+sum(x−1)+sum(x)
SoS(x)=sum(1)+sum(2)+⋯+sum(x−1)+sum(x)


SoS(x)
SoS(x)
는 sum(1)
sum(1)
부터 sum(x)
sum(x)
까지의 값을 모두 더한 값이라고 할 때 SoS(x)
SoS(x)
를 계산하는 프로그램을 작성하라.


Input



맨 처음 테스트 케이스의 개수 T(1≤T≤10)
T(1≤T≤10)
를 입력받는다. 그 다음 테스트 케이스의 수만큼 x(1≤x≤500)
x(1≤x≤500)
의 값을 입력받는다.




Output



각 테스트 케이스마다 입력받은 x에 관한 SoS(x)
SoS(x)
의 값을 출력한다.
*/

#include <stdio.h>

int main()
{
	int T, sosX, sum, x = 1;

	scanf("%d", &T);

	while (T--)
	{
		sum = 0;
		scanf("%d", &sosX);

		for (int i = 0; i < sosX; i++)
		{
			for (int j = 0; j < i + 1; j++)
			{
				sum += x;
				x++;
			}

			x = 1;
		}

		printf("%d\n", sum);
	}
}