#include <stdio.h>

int main (){
    int i , j , n , k;
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        for (j = n ; j >= i ; j--){
            for(k=j; k>=i ; k++){
            printf("%d " , j);
            }
        }printf("\n");

    }
}