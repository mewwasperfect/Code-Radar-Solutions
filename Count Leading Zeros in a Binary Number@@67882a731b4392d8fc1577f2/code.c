#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    if (num == 0) {
        printf("32\n");
        return 0;
    }

    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)  
            break;
        count++; 
    }

    printf("%d\n", count); 
    return 0;
}
