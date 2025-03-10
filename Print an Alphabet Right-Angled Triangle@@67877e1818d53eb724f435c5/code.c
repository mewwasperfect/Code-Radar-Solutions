#include <stdio.h>

int main (){
    int i , j , n , chara = A;
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= i ; j++){
            printf("%ch" , chara);
        }
        printf("\n");
    }
    return 0 ;
}