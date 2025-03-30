#include <stdio.h>

int main (){
    int i , j , n ;
    char character ;
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= i ; j++){
            printf("%ch" , character);
            character++;
        }
        printf("\n");
    }
    return 0 ;
}