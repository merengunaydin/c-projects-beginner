#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 50

int notDegistirme(int arrayId[], int idFunc, int arrayNote[], int noteFunc);

int main()
{
    int arrayId[N];
    int arrayNote[N];
    int i, id, note, findId;
    char c;

    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        arrayId[i] = rand() % 1000;
    }

    for (i = 0; i < N; i++)
    {
        arrayNote[i] = rand() % 101;
    }

    do {

        printf("\nOgrenci numarasi degistirme (Y / y)\n");
        printf("Ogrencilerin notlarini goster (S / s)\n");
        printf("Progami kapatma (N / n)\n");
        printf("Seciminizi yapiniz: ");
        scanf(" %c", &c);
        while (getchar() != '\n');

        if (c != 'y' && c != 'Y' && c != 's' && c != 'S' && c != 'n' && c != 'N')
        {
            printf("\nYanlis secim yaptiniz tekrar giriniz.\n");
            continue;
        }

        switch (c)
        {
            case 'y':
            case 'Y':
            {
                printf("\nDegistirlecek ogrencinin numarasini ve yeni notunu giriniz: ");
                if (scanf("%d%d", &id, &note) != 2 || note < 0 || note > 100)
                {
                    printf("Hatali giris yaptiniz. Not 0-100 arasında olmalıdır.\n");
                    while (getchar() != '\n'); // Tamponu temizleyin
                    break;
                }

                findId = notDegistirme(arrayId, id, arrayNote, note);
                if (findId == -1)
                {
                    printf("\nYanlis numara girdiniz.\n");
                }
                else
                {
                    arrayNote[findId] = note;
                    printf("\n%d numarali ogrencinin yeni notu: %d\n", id, note);
                }

                break;
            }
            case 's':
            case 'S':
            {
                for (i = 0; i < N; i++)
                {
                    printf("Ogrenci numarasi: %d | Ogrencinin notu: %d olarak degistirildi.\n", arrayId[i], arrayNote[i]);
                }
                break;
            }
        }

        printf("\n");

    } while (c != 'n' && c != 'N');

    return 0;
}

int notDegistirme(int arrayId[], int idFunc, int arrayNote[], int noteFunc)
{
    int j;
    for (j = 0; j < N; j++)
    {
        if (arrayId[j] == idFunc)
        {
            return j;
        }
    }
    return -1;
}
