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
	printf("������������Ҫ�Ƚϵ���(��������С��)��>");
	scanf("%f%f",&a,&b);
	if (a==b)
		printf("������һ����\n");
	else
		printf("�������нϴ���Ϊ:%f\n", max(a, b));
	return 0;
}