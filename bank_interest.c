#include <stdio.h>
#include <math.h>
 
void calculate(double capital,double rate,double deposit,int year,char compound){
    switch (compound){
        case 89:
        case 121: //yes
            deposit = capital * pow((1 + rate),year);
            break;
        default: //no
            deposit = capital * (1 + rate * year);
    }
    printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
}

int main()
{
    double capital,deposit,rate;
    int year;
    char compound;
    printf("Input capital, year:");
    scanf("%lf,%d",&capital,&year);
    printf("Compound interest (Y/N)?");
    scanf(" %c",&compound);
    switch (year){
        case 1:
            rate = 0.0225; 
            calculate(capital,rate,deposit,year,compound);
            break;
        case 2:
            rate = 0.0243; 
            calculate(capital,rate,deposit,year,compound);
            break;
        case 3:
            rate = 0.0270; 
            calculate(capital,rate,deposit,year,compound);
            break;
        case 5:
            rate = 0.0288; 
            calculate(capital,rate,deposit,year,compound);
            break;
        case 8:
            rate = 0.0300; 
            calculate(capital,rate,deposit,year,compound);
            break;
        default:
            printf("Error year!");
    }
    return 0;
}