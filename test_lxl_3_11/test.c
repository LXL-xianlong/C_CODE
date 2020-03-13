#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//主函数（只有一个）
//int main()
//{
//	printf("hello bit\n");
//	printf("he he\n");
//	return 0;
//}


//主函数中，是从代码块的第一行开始执行
//int main()
//{
//	printf("he he\n");
//	printf("he he\n");
//	printf("he he\n");
//	printf("he he\n");
//	return 0;
//}


//scanf（）函数问题
//int main()
//{
//	int age = 0;
//	//输入一个数字到age
//	scanf("%d\n",&age);
//	printf("%d\n",age);
//	return 0;
//}

//浮点数在内存中是无法精确保存的
//int main()
//{
//	float weight = 49.5f;
//	printf("weight=%f\n",weight);
//	return 0;
//}


//计算数据类型的字节数大小（sizeog()函数）
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//double salary = 10000.0;//8字节 - salary变量向内存申请8个字节的空间，用来存放10000.0
//	short age = 10;//向内存申请2个字节的空间
//	short num = 10;//2字节

//	return 0;
//}

//变量（局部变量和全局变量）
//{}-代码块
//	//在代码块内部定义的变量-局部变量
//	//在代码块之外定义的变量-全部变量

//int b = 1000;//全局变量
//
//void m()
//{
//	int c = 6;//局部变量
//}
//int main()
//{
//	int a = 10;//局部变量
//	return 0;
//}


//int a = 1000;
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	//局部变量和全局变量名字冲突的情况下，局部变量优先
//	return 0;
//}



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个加数：");
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum =%d\n",sum);
//
//	return 0;
//}


//作用域
//局部变量的作用域为代码块内部
int  main()
{
	{
		int a = 9;
		
	}
	printf("%d\n", a);//出现错误
	return 0;
}
//全局变量的作用域为整个工程



//生命周期//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}
//全局变量的作用域
// 全局变量的作用域是整个工程
//
//int num = 1000;
//
//void test()
//{
//	printf("3:num = %d\n", num);
//}
//
//int main()
//{
//	printf("1:num = %d\n", num);
//	{
//		printf("2:num = %d\n", num);
//	}
//	test();
//	return 0;
//}
//声明一个外部标识符
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//

//
//生命周期
//

//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	//不能使用
//	printf("a = %d\n", a);
//
//	return  0;
//}


