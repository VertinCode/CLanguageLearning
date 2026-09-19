#include <stdio.h>
int main(){
    int n, i, k,  b=1;
    scanf("%d",&n);
    for (k=0;k<n;k++){
        int a=1;
        for (i=0;i<b;i++){
        printf("%d*%d ",a,b);
        a++;
        } 
        b++;
        printf ("\n");
    }
    
    return 0 ;
}