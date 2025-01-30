#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    printf("%s", welcome());
    scanf("%f" , a);
    return 0;
}