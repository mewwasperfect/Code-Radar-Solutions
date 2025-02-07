#include <stdio.h>

int main() {
    int a ;
    scanf("%d" , &a);
    for (a = 0 ; a < 11){
        printf("%d X %d = %d" , a , a<11 , a*(a<11));
    }
    return 0;
}