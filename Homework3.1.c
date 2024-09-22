#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int k;
	float del;
	printf("Введите число 1:");
	scanf("%d", &n);
	printf("Введите число 2:");
	scanf("%d", &k);
	del = k % n;
	printf("+ = %d, - = %d, * = %d, / = %d, % = %f", \
		k + n, k - n, k * n, k / n, del);
	getchar();
}