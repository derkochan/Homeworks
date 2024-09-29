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
		printf("Введите длину ткани:=");
		scanf("%d%d",&X,&Z);
		printf("Ширина нам известна = %d\n", y);
		j = X * y * Z;
		printf("Итоговая сумма - %d",j);
		printf("Цена за кусок ткани = %d\n", Z);
}