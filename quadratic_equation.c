#include<stdio.h>
#include<math.h>
    int main() {
        double a, b, c, delta;
        scanf("%lf %lf %lf",&a,&b,&c);
        delta = pow(b,2)-(4*a*c);
        if (delta == 0){
            printf("x=%.3lf",(-b)/(2*a));
        }
        else if (delta > 0){
            printf("x1=%.3lf x2=%.3lf",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
        }
        else{
            printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi",(-b)/(2*a),sqrt(-delta)/(2*a),(-b)/(2*a),sqrt(-delta)/(2*a));
        }
        return 0; 
    }
