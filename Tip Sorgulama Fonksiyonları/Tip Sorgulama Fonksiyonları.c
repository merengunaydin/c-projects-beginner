#include <stdio.h>

int main()
{
	printf("%d\n",isalnum(37));			// eğer girilen veri A-Z , a-z , 0-9 değerlerleri ve arasındaysa 0 dan farklı bir sayı yazdırır. (37 ASCII kodu % sonucunu veriyor.)

	printf("%d\n", isalpha(72));		// eğer girilen veri A-Z , a-z değerlerleri ve arasındaysa 0 dan farklı bir sayı yazdırır. (72 ASCII kodu H sonucunu veriyor.)

	printf("%d\n", isdigit(55));		// eğer girilen veri 0-9 değerlerleri ve arasındaysa 0 dan farklı bir sayı yazdırır. (55 ASCII kodu 7 sonucunu veriyor.)

	printf("%d\n", islower(109));		// eğer girilen veri a-z değerlerleri ve arasındaysa 0 dan farklı bir sayı yazdırır. (109 ASCII kodu m sonucunu veriyor.)

	printf("%d\n", isupper(55));		// eğer girilen veri A-Z değerlerleri ve arasındaysa 0 dan farklı bir sayı yazdırır. (75 ASCII kodu K sonucunu veriyor.)

	printf("%d\n", isspace(32));		// eğer girilen veri "boşluk" ise 0 dan farklı bir sayı yazdırır. (32 ASCII kodu "boşluk" sonucunu veriyor.)

	printf("%c\n", toupper('a'));		// girilen küçük harfi büyük harf yapıyor.

	printf("%c\n", tolower('B'));		// girilen büyük harfi küçük harf yapıyor.

	return 0;
}