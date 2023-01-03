/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BigNumReturn(int a, int b, int c);

int main(void) {
	int num1, num2, num3;
	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("세 개의 정수 중 가장 큰 수는 %d이다.", BigNumReturn(num1, num2, num3));
	return 0;
}

int BigNumReturn(int a, int b, int c) {
	if (a > b)
		return (a > c) ? a : c;
	else
		return (b > c) ? b : c;
}*/