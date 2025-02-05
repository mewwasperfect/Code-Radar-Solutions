#include <stdio.h>

int main() {
    int a ; 
    scanf("%d" , &a);
    (a%100 | (a%4 & a%400)) ? printf("Leap Year") : printf(Not a Leap Year);
    return 0;
}