#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�Զ��庯�����£�
//дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
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

//�����Ķ��������
//#include "Add.h"
//#include "Sub.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//�����ĵ���
//	int c = Sub(a, b);//����
//	int sum = Add(a, b);//�ӷ�
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//�����ݹ�(�����Լ������Լ�)
//int main()
//{
//	printf("hehe\n");
//	main();
//		return 0;
//}//����ջ���
//����1
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4.
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
//��д��������������ʱ���������ַ����ĳ��ȡ�
//�����ݹ�ʵ��
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
//�Ǻ����ݹ�ʵ��
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

//���n��쳲��������������������
//1.�ݹ�ʵ��
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
//	printf("����һ���Ǹ�����n:>");
//	scanf("%d",&n);
//	printf("%d\n", fib(n));
//	return 0;
//}
//2.�ǵݹ�ʵ��
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
	printf("����һ���Ǹ�����n:>");
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}


