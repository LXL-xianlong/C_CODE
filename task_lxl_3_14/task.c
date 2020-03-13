#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

float max(float x,float y)
{
	float z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}
int main()
{
	float a = 0;
	float b = 0;
	printf("请输入两个需要比较的数(正整数或小数)：>");
	scanf("%f%f",&a,&b);
	if (a==b)
		printf("两个是一样大\n");
	else
		printf("两个数中较大数为:%f\n", max(a, b));
	return 0;
}