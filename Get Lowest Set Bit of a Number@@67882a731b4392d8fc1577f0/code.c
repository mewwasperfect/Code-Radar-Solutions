#include <stdio.h>

int main() {
    int num, pos = 0;
    scanf("%d", &num);

    if (num == 0) {
        return 0;
    }

    while ((num & 1) == 0) {
        num = num >> 1;
        pos++;
    }
    printf("%d\n" , pos);
    return 0;
}
