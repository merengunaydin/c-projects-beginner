#include <stdio.h>

int main()
{
	char Letter1= 'C';
	int Number1= 100;
	float Number2= 3500;
	double Number3= 146000;

	printf("I have two sides: %c \n", Letter1); // char veriable'i için %c kullanıyoruz.
	printf("My lucky number is: %d \n", Number1); // int veriable'i için %d kullanıyoruz.
	printf("Hi! %f \n", Number2); // float veriable'i için %f kullanıyoruz.
	printf("It is a giant number: %lf \n", Number3); // double veriable'i için %lf kullanıyoruz.

	return 0;
}