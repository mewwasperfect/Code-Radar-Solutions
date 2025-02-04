#include <stdio.h>

int main() {
    int x ;
    scanf("%d" , &x) ;
    (x | 1) ? printf("set") : printf("Not Set");
    return 0;
}