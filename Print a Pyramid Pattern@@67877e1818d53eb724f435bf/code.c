#include <stdio.h>

int main() {
    int i , j ,k, n;
    scanf("%d" , &n);
    for (i = n ; i >= n ; i--){
        for(j = 1 ; j <= n-1 ; j++){
            printf(" ");
        }
        for (k = j ; k <= (i*2 - 1) ; k++){
            printf("*");
        }
        printf(" \n");
    }
    return 0;
}