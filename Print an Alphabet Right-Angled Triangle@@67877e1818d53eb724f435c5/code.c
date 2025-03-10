#include <stdio.h>

int main (){
    int i , j , n , ch = A;
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= i ; j++){
            printf("%ch" , ch);
            ch++ ;
        }
        printf("\n");
    }
    return 0 ;
}