#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES

int main()
{
	float grad;
	setlocale(LC_ALL, "RUS");
	printf("�������� ��� ���������� ������ ");
	printf("������� ������:");
	scanf("%f", &grad);
	printf("��������� ����� %.1f ���� = %f", grad, sin(grad * M_PI / 180));
	getchar();
}