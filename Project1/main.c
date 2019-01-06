#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 비트연산자
	/*
	~ : 비트 뒤집기 (부정)
	& : 비트 && (그리고)
	| : 비트 || (Or)
	^ : 비트 only 1 (배타적)
	<< : 시프트 연산자 (00001001) << 2 => (00100100)
	*/
	int a = 7, b = 7;
	printf("%d\n", (a == b) ? 100 : -100);

	system("pause");
	return 0;
}