#include <stdio.h>
    int main() {
        float r, pi = 3.14159;
        scanf("%f", &r);
        printf("%.4f %.4f %.4f", 2*r, 2 * pi * r, pi * r * r);
        return 0;
    }