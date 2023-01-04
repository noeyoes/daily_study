#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;

	while (1) {
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)
			break;
		else if (a == b && a == c)
			printf("Equilateral\n");
		else if (a >= b + c || b >= a + c || c >= a + b)
			printf("Invalid\n");
		else if (a == b && a != c || a == c && a != b || b == c && b != a)
			printf("Isosceles\n");
		else if (a != b && a != c && b != c)
			printf("Scalene\n");
	}
}

