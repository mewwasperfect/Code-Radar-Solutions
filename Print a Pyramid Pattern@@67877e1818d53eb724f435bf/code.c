#include <stdio.h>

int main() {
    int i , j ,k, n;
    scanf("%d" , &n);
    for (i = n ; i >= n ; i--){
        for(i = 1 ; i <= n-1 ; i++){
            for (j = 1 ; j <= ( i*2 - 1) ; j++){
                printf("*");
            }
        }
        printf(" \n");
    }
    return 0;
}