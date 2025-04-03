#include <stdio.h>


int main()
{
    int start, end;
    char choice;

    do {
        // Kullanıcıdan başlangıç ve bitiş değerlerini al
        printf("Çarpım tablosu oluşturmak için başlangıç ve bitiş değerlerini girin:\n");

        // Geçerli bir başlangıç ve bitiş değeri alana kadar devam et
        do {
            printf("Başlangıç: ");
            if (scanf("%d", &start) != 1) {
                printf("Geçersiz bir değer girdiniz. Lütfen bir tamsayı girin.\n");
                while (getchar() != '\n'); // Geçersiz giriş durumunda tamponu temizle
                continue;
            }
            printf("Bitiş: ");
            if (scanf("%d", &end) != 1) {
                printf("Geçersiz bir değer girdiniz. Lütfen bir tamsayı girin.\n");
                while (getchar() != '\n'); // Geçersiz giriş durumunda tamponu temizle
                continue;
            }

            if (start > end) {
                printf("Başlangıç değeri bitiş değerinden büyük olamaz. Tekrar giriniz.\n");
            }
        } while (start > end);

        // Çarpım tablosu başlığını yazdır
        printf("\nÇarpım Tablosu... (%d ile %d arası):\n\n", start, end);

        // Başlık satırını yazdır
        printf("    ");
        for (int i = start; i <= end; i++) {
            printf("%4d", i);
        }
        printf("\n");

        // Ayırıcı çizgiyi yazdır
        printf("   +");
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
        printf("\nBaşka bir çarpım tablosu oluşturmak ister misiniz? (e/h): ");
        scanf(" %c", &choice); // Kullanıcının kararını oku

        // Hatalı girişleri önlemek için tamponu temizle
        while (getchar() != '\n');

    } while (choice == 'e' || choice == 'E');

    printf("Program sonlandırıldı. İyi günler!\n");
    return 0;
}
