#include <stdio.h>

int isPrime(int num){
    int i;
    for (i = 1 ; i<=num ; i++){
        if ((num == 2) || (num == 3) || (num == 5) || (num == 7)){
        printf("1");
        } else if ((num%2 == 0) || (num%3 == 0) || (num%4 == 0) || (num%5 == 0) || (num%6 == 0) || (num%7 == 0) || (num%8 == 0) || (num%9 == 0)){
        printf("0");
        } else {
        printf("1");
        }
    }
}

int main(){
    int t ;
    while (t--){
        int num ;
        scanf("%d" , &num);
        printf("%d\n" , isPrime(num));
    }
    return 0 ;
}