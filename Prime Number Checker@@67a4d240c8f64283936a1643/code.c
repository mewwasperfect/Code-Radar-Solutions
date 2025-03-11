#include <stdio.h>

int isPrime(int n){
    int i ;
    for (i=0 ; i <= n ; i++){
        scanf("%d" , &n);
    }
    if (n%2==0 || n%3==0 || n%5==0 || n%7==0 || n%11==0 || n%13==0 ){
        printf("1");
    } else {
        printf("0");
    }
}

int Prime() {
    int num;   
    printf("%d\n" , isPrime(num));
    return 0;
}