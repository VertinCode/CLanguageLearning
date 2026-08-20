#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	scanf("%f",&a);
	if(a>=0)
	{
		printf("%.f",floor(a));
	}
	else
	{
		printf("%.f",ceil(a));
	}
	return 0;
}