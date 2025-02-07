#include <stdio.h>

int main() {
    int i , j , n;
    scanf("%d" , &n);
    for (i = n ; i <= n ; ++){
        for (j = i ; j <= i*2 ; j++){
            printf("*");
        }
        printf(" \n");
    }
    return 0;
}