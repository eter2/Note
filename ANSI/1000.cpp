/*
Description
2개의 정수가 a, b가 입력되었을 때, a와 b의 합을 출력하는 프로그램을 작성하시오.

Input
0이상 10이하의 정수 a와 b가 입력됩니다.

Output
a와 b의 합을 출력하시오.
*/

#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d", a + b);
    
	return 0;
}