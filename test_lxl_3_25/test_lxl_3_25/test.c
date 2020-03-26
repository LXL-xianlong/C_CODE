#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//自定义函数（下）
//写一个函数，每调用一次这个函数，就会将num的值增加1。
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	return 0;
//}

//函数的定义和声明
//#include "Add.h"
//#include "Sub.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数的调用
//	int c = Sub(a, b);//减法
//	int sum = Add(a, b);//加法
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//函数递归(函数自己调用自己)
//int main()
//{
//	printf("hehe\n");
//	main();
//		return 0;
//}//导致栈溢出
//例子1
//接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4.
void Print(unsigned int n)
{
	if (n > 9)
	{
		Print(n/10);
	}
	printf("%d",n%10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d",&num);//1234
	Print(num);
	return 0;
}
//编写函数不允许创建临时变量，求字符串的长度。
//函数递归实现
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char ch[] = "abcdefg";
//	int len = my_strlen(ch);
//	printf("%d\n",len);
//	return 0;
//}
//非函数递归实现
//int my_strlen(char* str)
//{
//	int len = 0;
//	while (*str != '\0')
//	{
//		len++;
//		str++;
//	}
//	return len;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}

//求第n个斐波那契数（不考虑溢出）
//1.递归实现
//int fib(int n)
//{
//	if (n > 2)
//	{
//		return fib(n - 1) + fib(n-2);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 1;
//	printf("输入一个非负整数n:>");
//	scanf("%d",&n);
//	printf("%d\n", fib(n));
//	return 0;
//}
//2.非递归实现
int fib(int n)
{
	int a = 1;
	int b = 1;
	int result = 1;
	while (n > 2)
	{
		n--;
		a = b;
		b = result;
		result = a + b;
	}
	return result;
}
int main()
{
	int n = 1;
	printf("输入一个非负整数n:>");
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}


