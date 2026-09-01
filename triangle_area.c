#include<stdio.h>
#include<math.h>
    int main() {
        double Xa, Ya, Xb, Yb, Xc, Yc;
        scanf("%lf %lf %lf %lf %lf %lf", &Xa, &Ya, &Xb, &Yb, &Xc, &Yc);
        double c = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
        double b = sqrt(pow(Xc - Xb, 2) + pow(Yc - Yb, 2));
        double a = sqrt(pow(Xc - Xa, 2) + pow(Yc - Ya, 2));
        double p = (a + b + c) / 2;
        printf("%.2lf\n", sqrt(p * (p - a) * (p - b) * (p - c)));
        return 0;
    }