#include <stdio.h>

int main() {
    int i , j , n ;
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        printf("* ");
    }
    for (j = 1 ; j < i ; j++){
            printf("* ");
    }
    return 0;
}