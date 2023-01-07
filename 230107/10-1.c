#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	printf("10진수 정수 입력 : ");
	scanf("%d", &n);
	printf("%d는 16진수로 %x", n, n);
}