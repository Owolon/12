#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define CRT_SECURE_NO_DEPRECATE


int main()
//������� 1
{
	setlocale(LC_CTYPE, "RUS");

	int *pi, i = 5;

	float *pf, f = 2.1f;

	printf("%zu\n", sizeof(pi));

	printf("%zu\n", sizeof(pf));
//������� 2
	float PI = 3.14159, * p1, * p2;

	p1 = p2 = &PI;

	printf("�� ������ p1=%p �������� *p1=%g\n", p1, *p1);

	printf("�� ������ p2=%p �������� *p2=%g\n", p2, *p2);
	//��������� ���� ����������� ���, ��� �� � 2 ��������� ��������� ���� � ���� �����.��������. 
	//���������� ��������� ��������� � �� ����� ���� ������ �� �������� (�� ���� ��� ��� ��������)
	//����� ��� ��� ������ ��� ������ ������
//������� 3
	int *pa, x = 5;
	pa = &x;
	printf("�� ������ %p �������� *ptr = %d\n", pa, *pa);
	pa++;
	printf("�� ������ %p �������� *ptr = %d\n", pa, *pa);
	pa--;
	printf("�� ������ %p �������� *ptr = %d\n", pa, *pa);
	printf("\n____________________________________________________________________\n");
//������� 4
	float array[10] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1 };
	float *ptr_a = &array[0];
	printf("%p, %p, %p\n %p %f\n", array, &array[0], &array , ptr_a,*ptr_a);
	ptr_a ++;
	printf("%p, %p, %p\n %p %f\n", array, &array[0], &array, ptr_a, *ptr_a);
	ptr_a += 4;
	printf("%p, %p, %p\n %p %f\n", array, &array[0], &array, ptr_a, *ptr_a);
	ptr_a -= 2;
	printf("%.1f, %p", *ptr_a, ptr_a);
	printf("\n____________________________________________________________________");
	ptr_a -= 4;//����� ���������
	for (int i = 0; i <= 10; i++, ptr_a++) *ptr_a += 2;//������ � 4.4 ��� �� �� ���� ��� ����� ��������� ptr_a 4.4 � ��� ������ �� ����� ��������.
	for (int i = 0; i < 10; i++) printf("\n%f", array[i]);
	ptr_a = &array[9];
	printf("\n____________________________________________________________________");
	for (int i = 10; i > 0; i--, ptr_a--) *ptr_a -= 2;
	for (int i = 0; i < 10; i++) printf("\n%f", array[i]);
	printf("\n____________________________________________________________________");
//������� 5
	int c;
	printf("\n\t1.INT\n\t2.FLOAT\n\t3.CHAR\n\t0.�����\n");
	scanf_s("%d", &c);//�����
	do {
		switch (c)
		{
		case 1: {
			int q;
			scanf_s("%d", &q);
			int *pw;
			unsigned char* d1, * d2, * d3, * d4;
			unsigned char* d;
			pw = &q;
			d = (unsigned char*)*pw;
			d1 = d + 3;
			d2 = d + 2;
			d3 = d + 1;
			d4 = d;
			printf("\n%.2x\n%.2x\n%.2x\n%.2x\n", *d1, *d2, *d3, *d4);
			break;
		}
		case 2: {
			float q;
			scanf_s("%f", &q);
			float *pe;
			unsigned char* z1, * z2, * z3, * z4;
			unsigned char* z;
			pe = &q;
			z = (unsigned char*)pe;
			z1 = z + 3;
			z2 = z + 2;
			z3 = z + 1;
			z4 = z;
			printf("\n%.2x\n%.2x\n%.2x\n%.2x\n", *z1, *z2, *z3, *z4);
			break;
		}
		case 3: {
			char q;
			char *pb;
			scanf_s("%hhd", &q);
			unsigned char* z1, * z2, * z3, * z4;
			unsigned char* z;
			pb = &q;
			z = (unsigned char*)pb;
			z1 = z + 3;
			z2 = z + 2;
			z3 = z + 1;
			z4 = z;

			printf("\n%.2x\n%.2x\n%.2x\n%.2x\n", *z1, *z2, *z3, *z4);
			break;
		}
		case 0:
			printf("����� �� ���������\n");
			break;
		default:
			printf("���-�� ����� �� ��� :(");
			break;
		}

	} while (c != 0);
	printf("____________________________________________________________________");
	float y;
	y = 0x12345;
	float* prt;
	unsigned char *a1, *a2, *a3, *a4;
	unsigned char *a;

	prt = &y;
	a = (unsigned char*)prt;
	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("\n%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);//������ ���������� ������
	a1 = a;
	a2 = a + 1;
	a3 = a + 2;
	a4 = a + 3;
	printf("\n%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);//�������� ���������� ������

//��
	float h = 16;
	float m = 29;
	float *ptt;
	float *pll;

	ptt = &h;
	pll = &m;
	printf("������ float ����� �������� �������.\n%p  -  %p  =  %d", pll, ptt, pll-ptt);

	return 0;
} 