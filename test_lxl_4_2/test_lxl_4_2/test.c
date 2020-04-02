#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针
//#include <stdio.h>
//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int *p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//				//将a的地址存放在p变量中，p就是一个之指针变量。
//	return 0;
//}
//
//指针类型
//char *pc = NULL;
//int *pi = NULL;
//short *ps = NULL;
//long *pl = NULL;
//float *pf = NULL;
//double *pd = NULL;

//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//} //指针的类型决定了指针向前或向后走一步有多大（距离）

//指针的解引用
//实例
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char *)&n;
//	int *pi = &n;
//	*pc = 0; //重点在调试的过程中观察内存的变化。
//	*pi = 0;  //重点在调试的过程中观察内存的变化。
//	return 0;
//}//指针的类型决定了指针进行解引用时访问多大空间
//例子（调试看内存中数据变化）
//int main()
//{
//	int arr[10] = {0x11223344,0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 
//		0x11223344, 0x11223344, 0x11223344, 0x11223344 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10;i++)
//	{
//		*(p + i) = 0;
//	}
//	return 0;
//}

//野指针
//野指针成因
//1.未初始化
//int main()
//{
//	int *p;//p未初始化（野指针）
//	*p = 20;//非法访问空间
//}
//2.针越界访问
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i <= 12;i++)
//	{
//		*p = 0;
//		p++;
//	}
//	return 0;
//}
//3.指针指向的空间释放
//例子
//int *test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//}

//野指针的规避
//#include <stdio.h>
//int main()
//{
//	int *p = NULL;
//	//....
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}

//指针运算
//1.指针+-整数
//2.指针-指针
//3.指针的关系运算（即比较指针大小）
//例子（1.  3.）
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}
//例子（2.指针-指针）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d ", &arr[9]-&arr[0]);//前提是指针与指针指向同一块空间
//	return 0;
//}


//指针和数组
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz;i++)
	{
		*(p+i) = i + 1;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(p+i));
	}
	return 0;
}







