// 문제
// 세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. 

// 입력
// 첫째 줄에 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)

// 출력
// 두 번째로 큰 정수를 출력한다.

#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int max1 = 0;
	int max2 = 0;

	if (a > b) {
		max1 = a;
		max2 = b;
	}
	else {
		max1 = b;
		max2 = a;
	}

	if (c > max1) {
		printf("%d", max1);
		return 0;
	}
	else {
		if (max2 > c) printf("%d", max2);
		else printf("%d", c);
	}

	return 0;
}