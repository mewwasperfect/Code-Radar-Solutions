#include <stdio.h>
#include <string.h>

int main (){
    char input[100];
    int length ;
    scanf("%d" , &input);
    length = strlen(input);
    if (length < 2){
        printf("%s" , input);
    }
}