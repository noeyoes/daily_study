#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	char arr[10];
	int sum = 0;

	scanf("%d", &n);
	scanf("%s", arr);

	for (int i = 0; i < n; i++)
		sum += arr[i] - '0';

	printf("%d", sum);
	return 0;
}