#include <stdio.h>

int main() {
    int a ;
    scanf("%d" , &a);
    (a & 1) ? printf("Set") : ("Not Set");
    return 0;
}