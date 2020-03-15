#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//字符串复习
//int main()
//{
//	//"abc";字符串
//	char arr1[] = "abc";//  \0的ASCII码值是0；\0也会占用一个空间（一个字节）,但不算长度和字符个数；
//	char arr2[] = {'a','b','c'};
//	//按F10监视数组的内存分布
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);//输出abc之后为随机值
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//大于3的随机值
//	return 0;
//}

////计算数组个数
//int main()
//{
//	int a = 6;
//	int arr[6] = { 0 };
//	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}

//按位取反
//int main()
//{
//	int a = 10;
//	//a------>  00000000 00000000 00000000 00001010
//	int b = ~a;//对a的二进制进行按位取反
//	//b------>  11111111 11111111 11111111 11110101
//	printf("%d\n",b);//????-11；
//	return 0;
//}

//a++   a--
//int main()
//{
//	int a = 10;
//	int b = a--;//后置--；先使用a,再--
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}

//--a   ++a
//int main()
//{
//	int a = 10;
//	int b = --a;//前置--；先--,再将结果使用；
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	//强制类型转换
//	//int  a = (int)3.14;
//	return 0;
//

//逻辑与&&
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a&&b)
//		printf("heheh\n");
//	return 0;
//}

//逻辑或||
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a&&b)
//		printf("heheh\n");
//	return 0;
//}

//条件操作符（三目操作符）
//int main()
//{
//	int a = 0;
//	int b = 20;
//	int max = 0;
//	max=(a > b) ? a : b;
//	printf("%d\n",max);
//	return 0;
//}

//逗号表达式
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 10;
//	int d = (b=a+3,a=b-5,c=c+b);//将最后一个表达式的结果赋值给d;
//	printf("%d\n",d);//d=16
//	return 0;
//}

//typedef类型重定义
//typedef unsigned int u_int;//将 unsigned int 重定义为u_int;
//int main()
//{
//	//定义一个无符号的年龄变量
//	unsigned int age;
//	return 0;
//}


//关键字static(修饰函数和变量)

//作用1.(修饰局部变量，改变变量的生命周期--生命周期变长)，出了局部范围也不销毁
//void test()
//{
//	int a = 1;//局部变量
//	//static int a=1;   //statis改变局部变量的生命周期；变量没有被销毁时，不需要被再次定义；
//	a++;
//	printf("%d\n",a);
//}//函数调用完之后会被销毁，所以每次打印的都是2；
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}

//作用2.(修饰全局变量，改变了全局变量的作用域，使作用域变小了，static修饰的全局变量在其他.c中不能使用，只能在自己的.c源文件内部使用）
//extern int g_val;   //声明外部变量
//int main()
//{
//	printf("%d\n",g_val);
//	return 0;
//}

//作用3.修饰函数，改变了函数的作用域，被static修饰的函数只能在自己的源文件内部中使用；
//extern int Add(int x, int y);
//int main()
//{
//	int a = 8;
//	int b = 9;
//	int sum = Add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}

//#define定义常量
//#define MAX 10;
//int main()
//{
//	int a = MAX;
//	printf("%d\n",a);
//	return 0;
//}


//#define定义宏
//#define MAX(X,Y) ((X)>(Y))?(X):(Y)
//int main()
//{
//	printf("%d\n", MAX(3, 5));
//	return 0;
//}

//指针
//int main()
//{
//	int a = 10;//创建整型变量a,并且赋值为10
//	//要存储10
//	//要有内存空间
//	//a在创建的时候，向内存申请了四个字节的空间
//	printf("%p\n",&a);//&a 取a的地址，%p以地址的形式进行打印
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", &a);
//	//两种形式结果一样，都是打印出地址
//	return 0;
//}

int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;//此处的*为解引用操作符。*pa就是指代变量a,通过间接访问a地址，改变地址内容；
	printf("%d\n",a);
	return 0;
}
