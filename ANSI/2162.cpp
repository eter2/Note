/*
Description
1~45 중 6개의 당첨 숫자와 하나의 보너스 숫자로 이루어진 복권이 있다.
이 복권은 자신의 6개의 숫자와 당첨 번호를 비교해 등수를 매기는데, 그 방식은 아래와 같다.

1등 : 6개의 당첨 숫자가 모두 일치
2등 : 5개의 당첨 숫자와 하나의 보너스 숫자가 일치
3등 : 5개의 당첨 숫자가 일치
4등 : 4개의 당첨 숫자가 일치
5등 : 3개의 당첨 숫자가 일치
복권의 숫자가 주어질 때, 몇 등인지 판별하라. 

Input
입력의 첫 줄에는 테스트 케이스의 수 T (1 ≦ T ≦ 100) 가 주어진다.
다음 줄부터 T만큼 첫 번째 줄에는 당첨 번호 6개와 보너스 번호 하나가 주어진다. 두 번째 줄에는 비교해볼 복권의 번호 6개가 주어진다.

모든 번호는 1~45 사이의 정수이며, 당첨 번호 6개와 보너스 번호, 내 복권의 번호 6개는 중복되지 않는다. 

Output
각 케이스에 대하여, 한 줄에 해당 복권의 등수를 출력한다. 단, 어떠한 등수에도 해당하지 않을 경우 “Fail”을 출력한다. 
*/

#include <stdio.h>

int main()
{
	int T;

	scanf("%d", &T);


	while (T--)
	{
		int arr[6], bonus, num, count = 0, bcount = 0;

		for (int i = 0; i < 6; i++)
		{
			scanf("%d", &arr[i]);
		}
		scanf("%d", &bonus);
		for (int i = 0; i < 6; i++)
		{
			scanf("%d", &num);
			for (int j = 0; j < 6; j++)
			{
				if (num == arr[j])
				{
					count++;
				}
			}
			if (num == bonus)
			{
				bcount++;
			}
		}
		if (count == 6)
		{
			printf("1\n");
		}
		else if (count == 5 && bcount == 1)
		{
			printf("2\n");
		}
		else if (count == 5)
		{
			printf("3\n");
		}
		else if (count == 4)
		{
			printf("4\n");
		}
		else if (count == 3)
		{
			printf("5\n");
		}
		else
		{		
			printf("Fail\n");
		}

	}
	return 0;
}