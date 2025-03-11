#include <stdio.h>

int NoOfRectangles(int r) {
    return r; 
}

int Area(int l, int w) {
    return l * w;  
}

int Perimeter(int l, int w) {
    return 2 * (l + w);  
}

int main() {
    int n, l, w;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &l, &w);

        int area = Area(l, w);
        int perimeter = Perimeter(l, w);

        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i, area, perimeter);
    }

    return 0;
}
