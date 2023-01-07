#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int r, e, c;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &r, &e, &c);
		if (r == (e-c))
			printf("does not matter\n");
		else if (r > (e-c))
			printf("do not advertise\n");
		else
			printf("advertise\n");
	}
}