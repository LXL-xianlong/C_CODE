#include<stdio.h>
#include<stdlib.h>

/*
1.认识数组
	1.1批量处理数据而产生；
	1.2数组是什么？多个变量名 有规律的变量 并且内存连续的变量的集合；
	1.3声明数组；
	1.4操作数组；
2.深入了解
3.想怎么用就怎么用
*/

int main()
{
	//普通变量
	int iNumber0 = 1;
	int iNumber1 = 2;
	int iNumber2 = 3;
	int iNumber3 = 4;
	printf("%d\t%d\t%d\t%d\n",&iNumber0, &iNumber1,&iNumber2, &iNumber3);
	int num[4] = {1,2,3,4};
	printf("%d\t%d\t%d\t%d\n", &num[0], &num[1], &num[2], &num[3]);
	for (int i = 0; i <= 3; i++)
	{
		printf("%d\t",&num[i]);
	}
	printf("/n");
	//数组做二进制转换(采用短除法)
	//写程序就是翻译自己的想法
	int x = 131;
	int array[10];
	//开始数组初始化
	for (int i = 0; i <= 3; i++)
	{
		array[i]=-1;
	}
	int count = 0;
	printf("%d的二进制是：",x);
	while (x)
	{
		array[count] = x % 2;
		x = x / 2;
		count++;
	}
	for (int i = count-1; i >= 0; i--)
	{
		printf("%d",array[i]);
	}
	system("pause");
	return 0;
}