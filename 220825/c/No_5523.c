#include <stdio.h>

int main(void) {
	int n;
	int sc1, sc2;
	int t1 = 0;
	int t2 = 0;
	scanf("%d", &n);

	if (n <= 100) {
		for (int i = 0; i < n; i++) {
			scanf("%d %d\n", &sc1, &sc2);
			if (sc1 > sc2)
				t1 += 1;
			else if (sc1 < sc2)
				t2 += 1;
		}

	printf("%d %d", t1, t2);
	return 0;
	}
}