#include <stdio.h>

int main (){
    int i , j , n ;
    char character ;
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        character = 'A' ;
        for (j = 1 ; j <= i ; j++){
            printf("%c " , character);
            character++;
        }
        printf("\n");
    }
    return 0 ;
}