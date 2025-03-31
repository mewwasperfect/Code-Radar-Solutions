#include <stdio.h>

int main (){
    int i , j , n ;
    char character = 'A';
    scanf("%d" , &n);
    for (i = n ; i>= 1 ; i--){
        for (j = 1 ; j <= i ; j++){
            printf("%c " , character);
            character++;
        }
        printf("\n");
    }
    return 0 ;
}