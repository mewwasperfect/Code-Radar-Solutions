#include <stdio.h>

int main() {
    int a , b , left;
    scanf("%d %d" , &a , &b);
    left = a - b ;
    if (left > 0 ){
        printf("Profit");
    } else if (left == 0){
        printf("No Profit No Loss");
    }
    else {
        printf("Loss");
    }
    return 0 ;
}