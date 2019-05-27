/*
Description
수업준비를 위해 사물함에서 책을 찾으러 간 류주. 그는 사물함 자물쇠를 열기 위해 번호를 돌리다가 문득 생각한다. 
“난 합리적이니까 자물쇠 번호를 최소한으로 돌려서 자물쇠를 열어주겠어!!”
굉장히 사소한 일에 열을 올리는 류주를 위해서 자물쇠를 풀기 위해서 자물쇠를 조작해야 할 최소한의 횟수를 구해주는 프로그램을 작성해보자.
자물쇠는 3자리 번호의 자물쇠이며 자물쇠의 번호는 왼쪽으로 돌리거나 오른쪽으로 돌려서 조작할 수 있다.
예를 들어 9에서 왼쪽으로 한 번 돌리면 0이 되고 0에서 오른쪽으로 돌리면 9가 된다.

Input
Test Case T가 주어지고 각 Test Case에 대해서 한 줄에는 현재 자물쇠의 번호가 각 자리를 빈 칸으로 구분해서 입력된다. 그리고 다음 줄에는 자물쇠의 비밀번호가 각 자리를 빈 칸으로 구분해서 입력된다. 각 자리의 번호는 0부터 9사이까지의 숫자다.

Output
자물쇠를 열기 위해서 조작해야 할 최소한의 횟수를 출력한다.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int T, lock[3], sol[3], x, result;

	scanf("%d", &T);

	while (T--)
	{
		result = 0;

		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &lock[i]);
		}

		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &sol[i]);
		}

		for (int i = 0; i < 3; i++)
		{
			x = abs(lock[i] - sol[i]);
			if (x >= 5 && x <= 9)
			{
				result += 9 - x + 1;
			}
			else
			{
				result += x;
			}
		}

		printf("%d\n", result);
	}

	return 0;
}