#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

    // 1. strlen - String'in uzunluğunu döndürür.
    char alphabet[70] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is %d\n", strlen(alphabet));

    // 2. strcat - İki stringi birleştirir.
    char str1[30] = "Hello ";
    char str2[] = "C Language";
    strcat(str1, str2);
    printf("%s\n", str1);

    // 3. strcpy - Bir stringi başka bir string'e kopyalar.
    char str3[30] = "Hello C Language";
    char str4[30];
    strcpy(str4, str3);
    printf("%s\n", str4);

    // 4. strcmp - İki stringi karşılaştırır. Aynıysa 0, farklıysa negatif veya pozitif değer döndürür.
    int result = strcmp(str1, str3);
    printf("Comparison result: %d\n", result);

    // 5. strncpy - İlk n karakteri kopyalar.
    char str5[30];
    strncpy(str5, str3, 5); // "Hello" kopyalanır
    str5[5] = '\0'; // Sonuna null karakter ekleyerek düzgün bir string yapıyoruz
    printf("Copied first 5 chars: %s\n", str5);

    // 6. strncmp - İlk n karakteri karşılaştırır.
    int result2 = strncmp(str1, str3, 5);
    printf("First 5 chars comparison result: %d\n", result2);

    // 7. strchr - Belirtilen karakteri string içinde arar.
    char* ptr = strchr(str3, 'C'); // İlk 'C' karakterinin adresini döndürür.
    printf("First occurrence of 'C': %s\n", ptr);

    // 8. strrchr - String içinde bir karakterin son geçtiği yeri bulur.
    char* ptr2 = strrchr(str3, 'a'); // Son 'a' karakterinin adresini döndürür.
    printf("Last occurrence of 'a': %s\n", ptr2);

    // 9. strstr - Bir string içinde alt string arar.
    char* ptr3 = strstr(str3, "Language"); // "Language" kelimesinin başladığı adresi döndürür.
    printf("Substring 'Language' found at: %s\n", ptr3);

    return 0;
}
