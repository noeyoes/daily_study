#include <stdio.h>

int main(void)
{
	int N;

	scanf("%d", &N);

	if (N % 2 != 0)
		printf("SK");
	else
		printf("CY");

	return 0;
}