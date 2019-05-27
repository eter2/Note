/*
Description
KTY의 점수가 X일때 이에 맞는 학점을 출력하는 프로그램을 작성하라.

점수에 따른 학점은  다음과 같다.
•X가 100이면 A++
•97~99이면 A+
•93~96이면 A
•90~92이면 A-
•87~89이면 B+
•83~86이면 B
•80~82이면 B-
•    .
•    .
•    .
•67~69이면 D+
•63~66이면 D
•60~62이면 D-
•X < 60이면 F

Input
0이상 100이하의 정수 X가 입력된다.

Output
KTY의 학점을 출력하라.
*/

#include <stdio.h>

int main()
{
	int X, extra = 0;

	scanf("%d", &X);

	if (X == 100)
	{
		printf("A++");
	}
	else if (X >= 90 && X <= 99)
	{
		extra = X - 90;
		switch (extra)
		{
		case 0:
		case 1:
		case 2: printf("A-"); break;
		case 3:
		case 4:
		case 5:
		case 6: printf("A"); break;
		case 7:
		case 8:
		case 9: printf("A+"); break;
		}
	}
	else if (X >= 80 && X <= 89)
	{
		extra = X - 80;
		switch (extra)
		{
		case 0:
		case 1:
		case 2: printf("B-"); break;
		case 3:
		case 4:
		case 5:
		case 6: printf("B"); break;
		case 7:
		case 8:
		case 9: printf("B+"); break;
		}
	}
	else if (X >= 70 && X <= 79)
	{
		extra = X - 70;
		switch (extra)
		{
		case 0:
		case 1:
		case 2: printf("C-"); break;
		case 3:
		case 4:
		case 5:
		case 6: printf("C"); break;
		case 7:
		case 8:
		case 9: printf("C+"); break;
		}
	}
	else if (X >= 60 && X <= 69)
	{
		extra = X - 60;
		switch (extra)
		{
		case 0:
		case 1:
		case 2: printf("D-"); break;
		case 3:
		case 4:
		case 5:
		case 6: printf("D"); break;
		case 7:
		case 8:
		case 9: printf("D+"); break;
		}
	}
	else
	{
		printf("F");
	}

	return 0;
}