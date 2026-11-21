#include<stdio.h>

void movedisc(int n,char src,char aux,char dst);
int step=0;

int main()
{
    
    return 0;
}

void movedisc(int n,char src,char aux,char dst)
{
    if (n==0){
        return;
    }
    movedisc(n-1,src,dst,aux);
    step++;
    printf("%2d-(%2d):%c==>%c\n",step,n,src,dst);
    movedisc(n-1,aux,src,dst);
    
}