#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 논리연산자
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", !a);
	printf("%d\n", a && b);
	printf("%d\n", (a > b) && (b > c));

	system("pause");
	return 0;
}