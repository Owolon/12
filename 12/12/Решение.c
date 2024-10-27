#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define CRT_SECURE_NO_DEPRECATE


int main()

{
	setlocale(LC_CTYPE, "RUS");

	int* pi, i = 5;

	float* pf, f = 2.1f;

	printf("%lu\n", sizeof(pi));

	printf("%lu\n", sizeof(pf));

	float PI = 3.14159, * p1, * p2;

	p1 = p2 = &PI;

	printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);

	printf("По адресу p2=%p хранится *p2=%g\n", p2, *p2);

}