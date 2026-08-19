#include <stdio.h>

int main() {
    int a, b, c;

    // Read the three sides
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 0;
    }

    // Classify the triangle
    if (a == b && b == c) {
        printf("Equilateral");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }

    return 0;
}
