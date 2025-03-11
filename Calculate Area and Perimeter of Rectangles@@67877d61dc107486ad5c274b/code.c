#include <stdio.h>

int NoOfRectangles(int r) {
    return r; 
}

int Area(int length, int width) {
    return length * width;  
}

int Perimeter(int length, int width) {
    return 2 * (length + width);  
}

int main() {
    int n, length, width;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &length, &width);

        int area = Area(length, width);
        int perimeter = Perimeter(length, width);

        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i, area, perimeter);
    }

    return 0;
}
