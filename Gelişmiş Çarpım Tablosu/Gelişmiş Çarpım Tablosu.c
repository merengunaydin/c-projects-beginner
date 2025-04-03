#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int start, end;
    char choice;

    do {
        // Kullanıcıdan başlangıç ve bitiş değerlerini al.
        printf("Carpim tablosu olusturmak icin baslangic ve bitis degerlerini girin:\n");

        // Geçerli bir başlangıç ve bitiş değeri alana kadar devam et
        do {
            printf("Baslangic: ");
            if (scanf("%d", &start) != 1) {
                printf("Gecersiz bir deger girdiniz. Lutfen bir tamsayi girin.\n");
                while (getchar() != '\n'); // Geçersiz giriş durumunda tamponu temizle
                continue;
            }
            printf("Bitis: ");
            if (scanf("%d", &end) != 1) {
                printf("Gecersiz bir deger girdiniz. Lutfen bir tamsayi girin.\n");
                while (getchar() != '\n'); // Geçersiz giriş durumunda tamponu temizle
                continue;
            }

            if (start > end) {
                printf("Baslangic degeri bitis degerinden buyuk olamaz. Tekrar giriniz.\n");
            }
        } while (start > end);

        // Çarpım tablosu başlığını yazdır
        printf("\nCarpim Tablosu (%d ile %d arari):\n\n", start, end);

        // Başlık satırını yazdır
        printf("    ");
        for (int i = start; i <= end; i++) {
            printf("%4d", i);
        }
        printf("\n");

        // Ayırıcı çizgiyi yazdır
        printf("   |");
        for (int i = start; i <= end; i++) {
            printf("----");
        }
        printf("\n");

        // Çarpım tablosunu yazdır
        for (int i = start; i <= end; i++) {
            printf("%2d |", i); // Sol sütundaki sayıyı yazdır

            for (int j = start; j <= end; j++) {
                printf("%4d", i * j); // Çarpım sonucunu yazdır
            }
            printf("\n");
        }

        // Kullanıcıya programı tekrar çalıştırmak isteyip istemediğini sor
        printf("\nBaska bir carpim tablosu olusturmak ister misiniz? (e/h): ");
        scanf(" %c", &choice); // Kullanıcının kararını oku

        // Hatalı girişleri önlemek için tamponu temizle
        while (getchar() != '\n');

    } while (choice == 'e' || choice == 'E');

    printf("Program sonlandirildi. İyi gunler!\n");
    return 0;
}
