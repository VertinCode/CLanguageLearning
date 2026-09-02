#include<stdio.h>
    int main() {
        int a, b, c, max, i;
        scanf("%d %d %d",&a,&b,&c);
        int Numbers[] = {a,b,c};
        max = a;
        for ( i = 0; i < 3; i++ ){
            if (Numbers[i] > max){
                max = Numbers[i];
            }
        }
        printf("%d",max);
        return 0;
    }
  