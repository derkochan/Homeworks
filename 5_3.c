#include <stdio.h> 
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
int main()
{
	setlocale(LC_ALL, "RUS");
	int A = (int)a;
	int B = (int)b;
	int C = (int)y;
	printf("A - %d, B - %d, C - %d\n", A, B, C);
	if (((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0))) printf("истина - %d\n", 1); else
		printf("ложь - %d\n", 0);
	if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0))
		printf("истина - %d\n", 1);
	else
		printf("ложь - %d\n", 0);
}