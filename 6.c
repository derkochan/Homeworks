#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
int main()
{
	setlocale(LC_ALL, "RUS");
	/*задание 1.1
	int year;
	puts("Введите год:");
	scanf_s("%d", &year);
	int year4 = year % 4;
	if (year4 == 0)
		printf("Год %d - високосный\n", year);
	else
		printf("Год %d - не високосный\n", year);
	//задание 1.2
	if (((year4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		printf("Год %d - високосный\n", year);
	else
		printf("Год %d - невисокосный\n", year);
	//задание 2
	double x;
	puts("Введите х:");
	scanf_s("%f", &x);
	printf("Ответ: %.2lf\n", F(x));
	puts("Введите х:");
	scanf_s("%f", &x);
	printf("Ответ: %.2lf\n", F(x));
	puts("Введите х:");
	scanf_s("%f", &x);
	printf("Ответ: %.2lf\n", x <= 7 ? ((-3 * x + 9) : (1 / (x - 7))));
	/*задание 3*/
	double X;
	printf("Введите число: ");
	scanf_s("%lf", &X);
	double kvadrat = X * X;
	double koren = sqrt(X);
	// Печать в порядке возрастания
	printf("Корень квадратный: %.2f\n", koren);
	printf("Само число: %.2f\n", X);
	printf("Квадрат числа: %.2f\n", kvadrat);

	//Д/З
	int x, y;
	printf(y >= 0 ) and ((x <= 0 (and x * x + y * y <= 1) or (x >= 0 and 2 * y <= 6 - x)));
}