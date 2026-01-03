#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

void resolvePermission(int, int*, int*, int*, int*);

int main()
{
	int number, r, w, x, p;

	puts("Enter permission code: ");
	scanf("%d", &number);

	printf("---------------\n");

	resolvePermission(number, &r, &w, &x, &p);

	printf("r-read = %d\n", r);
	printf("w-write = %d\n", w);
	printf("x-execute = %d\n", x);
	printf("p-private = %d", p);


	return 0;
}

void resolvePermission(int number, int* r, int* w, int* x, int* p)
{
	switch (number) {
	case 0:
		number = 0000;
		break;
	case 1:
		number = 0010;
		break;
	case 2:
		number = 0100;
		break;
	case 3:
		number = 0011;
		break;
	case 4:
		number = 0100;
		break;
	case 5:
		number = 0101;
		break;
	case 6:
		number = 0110;
		break;
	case 7:
		number = 0111;
		break;
	case 8:
		number = 1000;
		break;
	case 9:
		number = 1001;
		break;
	case 10:
		number = 1010;
		break;
	case 11:
		number = 1011;
		break;
	case 12:
		number = 1100;
		break;
	case 13:
		number = 1101;
		break;
	case 14:
		number = 1110;
		break;
	case 15:
		number = 1111;
		break;
	}

	*p = number % 10;
	*x = (number % 100) / 10;
	*w = (number % 1000) / 100;
	*r = (number - *p - *x - *w) / 1000;
}