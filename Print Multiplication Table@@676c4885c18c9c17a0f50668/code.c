#include <stdio.h>

int main() {
    int a  , n , mul ;
    scanf("%d" , &n);
    a = 1 ;
    while (a<11){
        mul = a * n ;
        printf("%d X %d = %d\n" , n , a , mul);
        a++;
    }
    return 0;
}