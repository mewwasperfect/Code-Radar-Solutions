#include <stdio.h>

int main() {
    int a , b , left;
    scanf("%d %d" , &a , &b);
    left = a - b ;
    if (left < 0){
        printf("Loss");
    } else {
        printf("Profit");
    }
    return 0 ;
}