#include <stdio.h>

int main() {
    int N , count , sum = 0 ;
    scanf("%d" , &N);
    for (count = 1 ; count <= N ; ++count){
        sum += count ;
    }
    printf("%d" , sum);
    return 0 ;
}