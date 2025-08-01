#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 3

int main(){
    char names[N][50];
    int i, len;

    printf("Enter the names:\n");
    for(i = 0; i < N; i++){
        fgets(names[i], sizeof(names[i]), stdin);
        len = strlen(names[i]);
        if(names[i][len - 1] == '\n')
            names[i][len - 1] = '\0';
    }

    printf("Names with the same first and last letter:\n");
    for(i = 0; i < N; i++){
        len = strlen(names[i]);
        if(tolower(names[i][len - 1]) == tolower(names[i][0]))
            printf("%s\n", names[i]);
    }

    return 0;
}
