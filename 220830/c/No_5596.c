#include <stdio.h>

int main(void) {
	int S, T = 0;
	int i, m, s, e;

	scanf("%d %d %d %d", &i, &m, &s, &e);
	S = i + m + s + e;
	scanf("%d %d %d %d", &i, &m, &s, &e);
	T = i + m + s + e;

	if (S > T)
		printf("%d", S);
	else if (S < T)
		printf("%d", T);
	else
		printf("%d", S);

	return 0;
}