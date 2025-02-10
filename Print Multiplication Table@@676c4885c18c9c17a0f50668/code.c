#include <stdio.h>

int main() {
    int a  , n;
    scanf("%d" , &n);
    a = 1 ;
    while (a<11){
        printf("%d X %d = %d" , n , a , n*a);
    }
    return 0;
}