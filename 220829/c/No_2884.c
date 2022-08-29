#include <stdio.h>

int main(void) {
	int H, M;

	scanf("%d %d", &H, &M);
	
	if (M - 45 > 0)
		printf("%d %d", H - 1, M - 45);

	else {
		if (H == 0) {
			M = 45 - M;
			printf("%d %d", 23, 60 - M);
		}
		else {
			M = 45 - M;
			printf("%d %d", H - 1, 60 - M);
		}
	}
}