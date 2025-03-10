#include <stdio.h>

int main (){
    int i , j , n , character ;
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= i ; j++){
            printf("%ch" , character);
        }
        printf("\n");
    }
    return 0 ;
}