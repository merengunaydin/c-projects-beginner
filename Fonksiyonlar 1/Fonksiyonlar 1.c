#include <stdio.h>

void nameList(char name[]);
void age(int age);
int sumNumber(int x, int y);

int main()
{
	int result = sumNumber(6, 12);
	printf("%d", result);
	return 0;
}

int sumNumber(int x, int y) // toplama fonksiyonu
{
	return x + y;
}

void nameList(char name[]) // isim yazdırma fonksiyonu
{
	printf("Hello %s !\n", name);
}

void age(int age) // yaş yazdırma fonksiyonu
{
	printf("Age: %d", age);
}