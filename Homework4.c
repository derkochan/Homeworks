#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	setlocale(LC_ALL, "RUS");
	int X;
	int Z;
	int j;
	int y = 80;
		printf("������� ����� �����:=");
		scanf("%d%d",&X,&Z);
		printf("������ ��� �������� = %d\n", y);
		j = X * y * Z;
		printf("�������� ����� - %d",j);
		printf("���� �� ����� ����� = %d\n", Z);
}