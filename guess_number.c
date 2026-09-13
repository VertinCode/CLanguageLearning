#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    srand(time(0));
    int number = rand() % 100 +1 , count = 0, a;
    do{
        scanf("%d",&a);
        if (a>number){
            printf("Your guess is too high");
        }else if (a<number){
            printf("Your guess is too low");
        }
        count ++;
    }while (a != number);
    printf("you're right,it's %d,you guessed %d times\n",number);
    return 0;
}