#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, term;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        term = a + b;
        a = b;
        b = term;
    }
    printf("\n");
}

