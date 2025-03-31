#include <stdio.h>

int main (){
    int i , j , n ;
    char character ;
    scanf("%d" , &n);
    for (i = n ; i>= 1 ; i--){
        character = 'A';
        for (j = 1 ; j <= i ; j++){
            printf("%c " , character);
            character++;
        }
        printf("\n");
    }
    return 0 ;
}