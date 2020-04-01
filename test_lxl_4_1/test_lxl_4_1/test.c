#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//int a = 0;
//	//a = 20;//= 赋值操作符
//	//int age = 0;
//	//age = 1;
//	
//	int num = 0;
//
//	num = num + 10;
//	num += 10;
//
//	num = num >> 1;
//	num >= 1;
//
//	num = num & 1;
//	num &= 1;
//
//	return 0;
//}


//int main()
//{
//	//2 + 3;//+ 有两个操作数 - 双目操作符
//	//int a = 0;
//	//printf("%d\n", !a);//1
//
//	int flag = 0;
//	if (flag)
//	{
//		//如果flag为真进来
//	}
//	if (!flag)
//	{
//		//如果flag为假进来
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = -3;
//	a = -a;
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//& 取地址操作符
//	int* pa = &a;//pa是一个指针变量
//	*pa = 20;//* 解引用操作符
//
//	printf("a = %d\n", a);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int arr[10] = { 0 };
//	//sizeof()-计算变量所占空间的大小
//	printf("%d\n", sizeof a );
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(arr));//计算的数组的总大小，单位是字节
//	printf("%d\n", sizeof(int [10]));
//
//	int a = 10;
//	short s = 5;
//	printf("%d\n", sizeof(s = a + 3));
//	printf("%d\n", s);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//
//	//00000000000000000000000000000000-补码
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110-反码
//	//10000000000000000000000000000001-原码
//
//	return 0;
//}
//
//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	a &= (~(1 << 4));
//	printf("%d\n", a);
//
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000   |     1<<4
//	//--------------------------------------
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111   &
//	//00000000000000000000000000001101
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//先++,后使用
//	//int b = a--;
//	int b = --a;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("a = %d\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(3)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(2)
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//

//
//int main()
//{
//	int flag = 3;
//	/*if (flag)
//	{
//		printf("hehe\n");
//	}*/
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int c = a&&b;
//	int c = a || b;
//	printf("%d\n", c);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int max = 0;
//	
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	//条件操作符-三目操作符
//	max = (a > b) ? (a) : (b);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	printf("%d\n", arr[3]);//[]下表引用操作符
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);//()-函数调用操作符
//
//	return 0;
//}

//结构体
//复杂对象 - 描述 - 复杂类型
//
//学生：名字+电话+性别+年龄
//
//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s = {"张三", 20, "15212345678", "男"};//s是一个结构体变量
//	//结构体变量.成员名
//	//结构体指针->成员名
//
//	//strcpy(s.name, "zhangsan");
//	//printf("%s\n", s.name);
//	struct Stu* ps= &s;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//	return 0;
//}
//
//
//int main()
//{
//	char a = 3;//截断
//	//00000000000000000000000000000011
//	//00000011-a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111-b
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010-c
//	//11111111111111111111111110000010-补码
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//	printf("%d\n", c);//%d 打印10进制的有符号整形
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//
//	printf("%u\n", sizeof(-c));//
//	return 0;
//}


int main()
{
	int a = 10;
	int b = 3;
	int c = a + b + 2;

	return 0;
}