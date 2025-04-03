#include <stdio.h>
#include <math.h>

int main()
{
	printf("%.2f\n", exp(1));		// exp() -> euler sayısını ve üslerini yazdırır.
	printf("%.2f\n", exp2(5));		// exp2() -> ikinin kuvvetlerini verir.
	printf("%.2f\n", sqrt(49));		// sqrt() -> karekökünü alır.
	printf("%.2f\n", pow(9,2));		// pow( , ) -> ilk sayı taban ikinci sayı üs olur.
	printf("%.2f\n", log(3));		// log() -> e tabanında logaritmayı alır.
	printf("%.2f\n", cbrt(27));		// cbrt() -> küp kökünü almaya yarar.
	printf("%.2f\n", ceil(6.3));	// ceil() -> ondalıklı sayısı bir üst sayıya yuvarlar.
	printf("%.2f\n", floor(6.7));	// floor() -> ondalıklı sayısı bir alt sayıya yıvarlar.
	printf("%.2f\n", fabs(-17));	// fabs() -> sayının mutlak değerini alır.
	printf("%.2f\n", fdim(5,3));	// fdim( , ) -> çıkarma işlemi yapar, sonucu negatif olamaz.
	printf("%.2f\n", fma(5,6,-2));	// fma( , , ) -> ilk iki parametreyi çarpar üçüncüsüyle toplar.
	printf("%.2f\n", fmax(45,89));	// fmax( , ) -> iki sayıdan hangisinin büyük olduğunu gösterir.
	printf("%.2f\n", fmod(10, 3));	// fmod( , ) -> sayıların modunu alır.
	printf("%.2f\n", hypot(5, 12));	// hypot( , ) -> hipotenüsü bulmaya yarar.
	printf("%.2f\n", round(10.2));	// round() -> sayısı en yakın sayıya yuvarlar.
	printf("%.2f\n", isnan('a'));	// isnan() -> verinin sayı olup olmadığını kontrol eder.
	printf("%.2f\n", signbit(-2));	// signbit() -> sayının negatif olup olmadığını bulur.

	return 0;
}