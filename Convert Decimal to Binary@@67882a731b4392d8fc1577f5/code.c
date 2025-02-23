#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    while (num > 0) {
        printf("%d", num % 2); 
        num = num / 2;         
    }

    printf("\n");
    return 0;
}
