#include <stdio.h>
#include <string.h>

int main (){
    char input[100];
    int length ;
    scanf("%s" , input);
    length = strlen(input);
    if (length < 2){
        printf("%s\n" , input);
    } else {
        for (int i = length - 1 ; i >= 0 ; --i){
            printf("%c" , input[i]);
        }
    }
    printf("\n");
    return 0 ;
}