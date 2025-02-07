#include <stdio.h>

int main() {
    int i , j ,k, n;
    scanf("%d" , &n);
    for (i = n ; i <= n ; i++){
        for(j = i ; j <= n-1 ; j++){
            printf(" ");
        }
        for (k = i ; k <= (i*2 - 1) ; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}