#include <stdio.h>

int main()
{
    int a;

    int* aptr;  

    a = 5;
    aptr = &a;  // 'aptr' işaretçisine 'a' değişkeninin adresini atıyoruz

    printf("a'nin degeri = %d \n", a);  // 'a' değişkeninin değerini ekrana yazdırıyoruz
    printf("a'nin adresi = %p \n\n", &a);  // 'a' değişkeninin bellekteki adresini yazdırıyoruz

    printf("aptr'nin degeri = %p \n", aptr);  // 'aptr' işaretçisinin tuttuğu adresi yazdırıyoruz (Bu, 'a' değişkeninin adresi ile aynı olmalıdır)
    printf("aptr'nin adresi = %p \n\n", &aptr);  // 'aptr' işaretçisinin kendi bellekteki adresini yazdırıyoruz

    *aptr = 9;  // 'aptr' işaretçisinin gösterdiği bellek adresindeki değeri 9 olarak değiştiriyoruz (Yani 'a' değişkeninin değeri artık 9 oluyor)
    printf("*aptr = %d \n", *aptr);  // 'aptr' işaretçisinin gösterdiği yeni değeri yazdırıyoruz (Çıktı: 9)
    printf("a'nin degeri = %d \n", a);  // 'a' değişkeninin güncellenmiş değerini yazdırıyoruz (Çıktı: 9)
    printf("a'nin adresi = %p \n", &a);  // 'a' değişkeninin adresini tekrar yazdırıyoruz (Adres değişmez, sadece değer değişir)
    printf("aptr'nin adresi = %p \n", &aptr);  // 'aptr' işaretçisinin kendi adresini tekrar yazdırıyoruz (İşaretçinin adresi değişmez)

    return 0;
}
