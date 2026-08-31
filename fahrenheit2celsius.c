#include <stdio.h>
    int main() {
        float F;
        scanf("%f", &F);
        printf("c=%.2f\n", (F - 32) * 5/9);
        return 0;
    }