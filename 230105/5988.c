#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int num;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
}