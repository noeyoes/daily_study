#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double CeltoFah(int f);
double FahtoCal(int c);

int main(void) {
	double tem;
	int op;

	printf("1.ȭ���� ������\n2.������ ȭ����");
	scanf("%d", &op);

	if (op == 1) {
		printf("ȭ�� �µ� �Է� : ");
		scanf("%1f", &tem);
		printf("���� %f", FahtoCal(tem));
	}

	if (op == 2) {
		printf("���� �µ� �Է� : ");
		scanf("%f", &tem);
		printf("ȭ�� %1f", CeltoFah(tem));
	}

}

double CeltoFah(double f) {
	return (f - 32) / 1.8;
}

double FahtoCal(double c) {
	return 1.8 * c + 32;
}