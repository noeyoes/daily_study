#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int caseNum;
	int first, second;
	int n;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &first, &second);
		printf("Case %d: %d\n", i, first+second);
	}
}

