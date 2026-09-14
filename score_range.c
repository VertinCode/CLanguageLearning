#include <stdio.h>
int main(){
    int n, score, max = 0,min = 1000,i;
    scanf("%d\n",&n);
    for (i=0;i<n;i++){
        scanf("%d",&score);
        if (score > max){
            max = score;
        }
        if (score < min){
            min = score;
        }
    }
    printf("%d",max-min);
    return 0 ;
}