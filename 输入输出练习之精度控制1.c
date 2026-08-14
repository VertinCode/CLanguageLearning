/*题目描述
输入一个单精度浮点数，输出保留三位小数输出
输入格式
一个单精度浮点数
输出格式
对应的三位小数的数字
样例输入
3.14159
样例输出
3.142*/
#include<stdio.h>
int main()
{
	float num;
	scanf("%f",&num);
	printf("%.3f",num);
	return 0;
}