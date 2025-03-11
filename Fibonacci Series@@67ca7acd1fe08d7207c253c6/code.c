#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, term;
    
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = term;
    }
    printf("\n");
}

int done() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    } else {
        fibonacci(n);
    }

    return 0;
}
