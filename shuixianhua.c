#include <stdio.h>
#include <math.h>
int main(){
    int n, i, m;
    scanf("%d",&n);
    m = pow(10,n-1);
    while (m < pow(10,n)){
        int t=m,num=0;
        for (i=0;i<n;i++){
        num += pow(t%10,3);
        t /= 10;
        }
        if (num == m){
            printf("%d ",m);
        }
        m ++;
    }
    
    return 0;
}