#include <stdio.h>

int main() {
    int a , count , sum = 0 ;
    scanf("%d" , &a);
    for (count = 1 ; count <= a ; count++){
        sum =+ count ;
        printf("%d" , sum);
    }
    return 0 ;
}