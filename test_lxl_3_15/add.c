#define _CRT_SECURE_NO_WARNINGS 1

//定义一个全局变量
static int g_val = 2020;

//定义了一个静态修饰的函数
static int Add(int x,int y)
{
	int z = x + y;
	return z;
}