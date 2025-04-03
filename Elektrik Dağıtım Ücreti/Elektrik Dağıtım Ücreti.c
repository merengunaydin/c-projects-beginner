#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow fonksiyonunu kullanmak için eklenmiştir

/*
		Bir elektrik dağıtım şirketi verdikleri hizmet karşılığında müşterilerinden
		aylık olarak harcanan toplam kilowatt saat miktarınca ve belirli bir abonelik ücreti
		talep etmektedir. Birim kilowatt saat ücreti ve abonelik ücreti her ay aylık enflasyon
		oranında artmaktadır. Buna göre müşterinin bir aya ait ödeyeceği elektrik faturasının
		miktarını hesaplayan program:

		Fatura Miktarı = Harcanan Elektrik * Birim Fiyat + Abone Ücreti
*/

int main()
{
	float inflation, enterInflation, amount, price, subscription, costWithoutInflation, costWithInflation;
	float month1, month2, month3, month4, month5, month6;
	float month7, month8, month9, month10, month11, month12;

	// Kullanıcıdan tüketim ve enflasyon oranı değerlerini al
	printf("Enter the amount of electricity used (in kWh): ");
	scanf("%f", &amount);

	printf("Enter the inflation rate (Monthly, in percentage): ");
	scanf("%f", &enterInflation);

	printf("------------------------------\n");

	// Sabit değerler
	price = 0.52;  // Birim elektrik fiyatı (TL)
	subscription = 30;  // Abonelik ücreti (TL)
	inflation = enterInflation / 100;  // Yüzdelik değeri oran olarak hesapla

	// İlk ay fatura hesaplaması (enflasyon yok)
	month1 = amount * price + subscription;

	// Diğer aylar için enflasyon uygulanmış hesaplamalar
	month2 = (amount * price + subscription) * (1 + inflation);
	month3 = (amount * price + subscription) * pow(1 + inflation, 2);
	month4 = (amount * price + subscription) * pow(1 + inflation, 3);
	month5 = (amount * price + subscription) * pow(1 + inflation, 4);
	month6 = (amount * price + subscription) * pow(1 + inflation, 5);
	month7 = (amount * price + subscription) * pow(1 + inflation, 6);
	month8 = (amount * price + subscription) * pow(1 + inflation, 7);
	month9 = (amount * price + subscription) * pow(1 + inflation, 8);
	month10 = (amount * price + subscription) * pow(1 + inflation, 9);
	month11 = (amount * price + subscription) * pow(1 + inflation, 10);
	month12 = (amount * price + subscription) * pow(1 + inflation, 11);

	// Enflasyon dahil edilirse ödenecek toplam tutarın hesabı
	costWithInflation = month1 + month2 + month3 + month4 + month5 + month6 + month7 + month8 + month9 + month10 + month11 + month12;

	// Enflasyon 0 kabul edilirse ödenecek toplam tutarın hesabı
	costWithoutInflation = month1 * 12;

	// Sonuçları yazdır
	printf("First Month: %.2f\n", month1);
	printf("Second Month: %.2f\n", month2);
	printf("Third Month: %.2f\n", month3);
	printf("Fourth Month: %.2f\n", month4);
	printf("Fifth Month: %.2f\n", month5);
	printf("Sixth Month: %.2f\n", month6);
	printf("Seventh Month: %.2f\n", month7);
	printf("Eighth Month: %.2f\n", month8);
	printf("Ninth Month: %.2f\n", month9);
	printf("Tenth Month: %.2f\n", month10);
	printf("Eleventh Month: %.2f\n", month11);
	printf("Twelfth Month: %.2f\n", month12);

	printf("------------------------------\n");

	printf("Total Cost With Inflation: %.2f\n", costWithInflation);
	printf("Total Cost Without Inflation: %.2f\n\n", costWithoutInflation);

	return 0;
}
