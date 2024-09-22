#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	int b;
	printf("¬ведите число 1:");
	scanf("%d", &a);
	printf("¬ведите число 2:");
	scanf("%d", &b);
	getchar();
	printf(" _______________________\n");
	printf("|a * b\t|a + b\t|a - b\t|\n");
	printf(" _______________________\n");
	printf("|%d - %d\t|%d - %d\t|%d - %d\t|\n", a, b, a, b, a, b);
	printf(" _______________________\n");
	printf("| %d\t| %d\t| %d\t|\n", a * b, a + b, a - b);
	printf(" _______________________\n");
}