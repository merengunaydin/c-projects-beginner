#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	Kapalı bir kaptaki gazın basıncını
	hesaplayan program.
	basıç = (mol sayısı * R sabiti * sıcaklık) / hacim
*/


int main()
{
	float pressure, constantR;
	int numberOfMoles, volume, degree;

	constantR = 0.82;

	printf("Please enter Moles: ");
	scanf("%d",&numberOfMoles);

	printf("Please enter Volume: ");
	scanf("%d",&volume);

	printf("Please enter Degree: ");
	scanf("%d",&degree);
	
	pressure = numberOfMoles * constantR * degree / volume;

	printf("-----------------------------\n");

	printf("Pressure is %.2f", pressure);


	printf("\n\n");
	return 0;
}