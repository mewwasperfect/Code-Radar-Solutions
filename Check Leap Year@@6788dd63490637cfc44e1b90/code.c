#include <stdio.h>

int main() {
    int a ; 
    scanf("%d" , &a);
    (a%400 | (a%100 & a%4)) ? printf("Leap Year") : printf("Not a Leap Year");
    return 0;
}