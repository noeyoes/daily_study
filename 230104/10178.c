#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t; 
	int c, v;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++) {
		scanf("%d %d", &c, &v);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", c/v, c%v);
	}
}