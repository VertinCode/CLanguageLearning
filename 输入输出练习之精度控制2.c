/*题目描述
输入一个双精度浮点数，保留12位小数输出
输入格式
一个双精度小数
输出格式
保留12位的数字
样例输入
3.1415926535897932
样例输出
3.141592653590*/
#include<stdio.h>
int main()
{
	double num;
	scanf("%lf",&num);
	printf("%.12lf",num);
	return 0;
}