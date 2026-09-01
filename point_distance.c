#include<stdio.h>
#include<math.h>
    int main() {
        double Xa, Ya, Xb, Yb;
        scanf("%lf %lf\n%lf %lf", &Xa, &Ya, &Xb, &Yb);
        printf("%.3lf\n", sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2)));
        return 0;
    }