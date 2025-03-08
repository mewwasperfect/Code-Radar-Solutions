#include <stdio.h>

void printBinary(int num) {
    if (num > 1) 
        printBinary(num / 2);  
    printf("%d", num % 2);
}

int main() {
    int num;
    scanf("%d", &num);
    if (num == 0) printf("0"); 
    else printBinary(num);
    printf("\n");
    return 0;
}
