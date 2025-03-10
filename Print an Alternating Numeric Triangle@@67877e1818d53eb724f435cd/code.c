#include <stdio.h>

int main (){
    int i , j , n;
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        int number = i % 2;
        for (j = 1 ; j <= i ; j++){
            printf("%d " , number);
            number = number-1;
        }
        printf("/n");
    }
    return 0;
}
