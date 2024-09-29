#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define k 7
#define x 2.2
int main()
{
	double a,b,y;
	b = log10(abs(k * x));
	a = pow((k + x), 3);
	y = pow(b, 2) + sqrt(abs(a));
	printf("%.3lf", y);
}