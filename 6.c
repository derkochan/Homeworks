#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
int main()
{
	setlocale(LC_ALL, "RUS");
	/*������� 1.1
	int year;
	puts("������� ���:");
	scanf_s("%d", &year);
	int year4 = year % 4;
	if (year4 == 0)
		printf("��� %d - ����������\n", year);
	else
		printf("��� %d - �� ����������\n", year);
	//������� 1.2
	if (((year4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		printf("��� %d - ����������\n", year);
	else
		printf("��� %d - ������������\n", year);
	//������� 2
	double x;
	puts("������� �:");
	scanf_s("%f", &x);
	printf("�����: %.2lf\n", F(x));
	puts("������� �:");
	scanf_s("%f", &x);
	printf("�����: %.2lf\n", F(x));
	puts("������� �:");
	scanf_s("%f", &x);
	printf("�����: %.2lf\n", x <= 7 ? ((-3 * x + 9) : (1 / (x - 7))));
	/*������� 3*/
	double X;
	printf("������� �����: ");
	scanf_s("%lf", &X);
	double kvadrat = X * X;
	double koren = sqrt(X);
	// ������ � ������� �����������
	printf("������ ����������: %.2f\n", koren);
	printf("���� �����: %.2f\n", X);
	printf("������� �����: %.2f\n", kvadrat);

	//�/�
	int x, y;
	printf(y >= 0 ) and ((x <= 0 (and x * x + y * y <= 1) or (x >= 0 and 2 * y <= 6 - x)));
}