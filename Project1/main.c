#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// ��Ʈ������
	/*
	~ : ��Ʈ ������ (����)
	& : ��Ʈ && (�׸���)
	| : ��Ʈ || (Or)
	^ : ��Ʈ only 1 (��Ÿ��)
	<< : ����Ʈ ������ (00001001) << 2 => (00100100)
	*/
	int a = 7, b = 7;
	printf("%d\n", (a == b) ? 100 : -100);

	system("pause");
	return 0;
}