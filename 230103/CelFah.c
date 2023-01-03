#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double CeltoFah(int f);
double FahtoCal(int c);

int main(void) {
	double tem;
	int op;

	printf("1.È­¾¾¸¦ ¼·¾¾·Î\n2.¼·¾¾¸¦ È­¾¾·Î");
	scanf("%d", &op);

	if (op == 1) {
		printf("È­¾¾ ¿Âµµ ÀÔ·Â : ");
		scanf("%1f", &tem);
		printf("¼·¾¾ %f", FahtoCal(tem));
	}

	if (op == 2) {
		printf("¼·¾¾ ¿Âµµ ÀÔ·Â : ");
		scanf("%f", &tem);
		printf("È­¾¾ %1f", CeltoFah(tem));
	}

}

double CeltoFah(double f) {
	return (f - 32) / 1.8;
}

double FahtoCal(double c) {
	return 1.8 * c + 32;
}