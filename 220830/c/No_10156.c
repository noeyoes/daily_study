#include <stdio.h>

int main(void) {
	int K, N, M;
	int total;
	int rest;

	scanf("%d %d %d", &K, &N, &M);
	total = K * N;
	rest = total - M;

	if (rest <= 0)
		rest = 0;

	printf("%d", rest);

	return 0;
}