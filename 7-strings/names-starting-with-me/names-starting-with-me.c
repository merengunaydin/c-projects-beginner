#include <stdio.h>
#include <string.h>

int main(){

    char names[10][50];
    int i;

    printf("Enter the names: ");
    for(i = 0; i < 10; i++){
        fgets(names[i], sizeof(names[i]), stdin);
    }

    printf("Names starting with 'Me':\n");
    for(i = 0; i < 10; i++){
        if(strncmp(names[i], "Me", 2) == 0)
            printf("%s", names[i]);
    }

    return 0;
}
