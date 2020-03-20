#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//循环语句
//3.do...while语句
/*int main()
{
	int i = 10;
	do
	{
		printf("%d\n",i);
	} while (i<10);
	return 0;
}*///do...while语句的特点：循环至少执行一次，使用的场景有限，所以不是经常使用。
//do...while中的break和continue
//int main()
//{
//	int i = 5;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}

//int main()
//{
//	int i = 5;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}

//练习1：计算n的阶层
//int main()
//{
//	int n = 0;
//	int m = 1;
//	int s = 1;
//	printf("请输入一个整数：>");
//	scanf("%d",&n);
//		while (m<=n)
//		{
//			s = s*m;
//			m++;
//		}
//		printf("%d阶层是%d\n",n,s);
//	return 0;
//}

练习2：计算 1!+2!+3!+……+10!
test(int x)
{
	int i = 1;
	int s = 1;
	while (i<=x)
	{
		s = s*i;
		i++;
	}
	return s;
}
int main()
{
	int i = 1;
	int sum = 0;
	while (i<=10)
	{
		sum = sum + test(i);
		i++;
	}
	printf("答案为：%d\n",sum);
	return 0;
}





