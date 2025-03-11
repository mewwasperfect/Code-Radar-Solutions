#include <stdio.h>

int isPrime(int n){
    int i ;
    for (i=0 ; i <= n ; i++){
        scanf("%d" , &n);
    }
    (n%2 == 0) ? printf("1") : printf("0");
}

int Prime() {
    int num;   
    printf("%d\n" , isPrime(num));
    return 0;
}