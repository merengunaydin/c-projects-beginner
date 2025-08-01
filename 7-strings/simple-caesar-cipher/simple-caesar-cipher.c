#include <stdio.h>

int main(){

    char str[200], temp;
    int shift, i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the shift amount: ");
    scanf("%d", &shift);

    do {
        if(str[i] != ' ')
            str[i] = str[i] + shift;
        i++;
    } while(str[i] != '.' && str[i] != '\n');

    printf("Encrypted sentence: %s", str);

    return 0;
}
