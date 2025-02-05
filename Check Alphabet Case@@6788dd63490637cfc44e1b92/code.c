#include <stdio.h>

int main() {
    char x ;
    scanf("%c" , &x);
    (x >= 'A' && x <= 'Z') ? printf("Uppercase") : printf("Lowercase");
    return 0 ;
}