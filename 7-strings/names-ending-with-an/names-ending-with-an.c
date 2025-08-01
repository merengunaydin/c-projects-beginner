#include <stdio.h>
#include <string.h>
#define N 3

int main(){
    char names[N][50];
    int i, length;
    printf("Enter the names:\n");
    for(i = 0; i < N; i++){
        fgets(names[i], sizeof(names[i]), stdin);
        length = strlen(names[i]);
        if(names[i][length - 1] == '\n')
            names[i][length - 1] = '\0';
    }

    printf("Names ending with 'an':\n");
    for(i = 0; i < N; i++){
        length = strlen(names[i]);
        if(names[i][length - 1] == 'n' && names[i][length - 2] == 'a' )
            printf("%s\n", names[i]);
    }

    return 0;
}
