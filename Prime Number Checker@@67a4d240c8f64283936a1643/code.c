#include <stdio.h>

int isprime(int n){
    int i ;
    for (i=0 ; i <= n ; i++){
        scanf("%d" , &n);
    }
    (n%2 == 0) ? printf("1") : printf("0");
}

int main (int num){
    printf("%d\n" , isprime(num));
    return 0;
}