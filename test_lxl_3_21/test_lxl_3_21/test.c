#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//while循环例子

/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}*///EOF为文件结束标志

//for循环变种
//int main()
//{
//	for ( ; ; )
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////请问循环要循环多少次？
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}//循环执行0次，因为k=0不是判断，是赋值，0为假，不需要执行循环。

//一个getchar()场景实例
int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("请输入密码：>");
	scanf("%s",input);
	printf("请确认密码（Y/N）:>");
	//清空缓存区
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ch = getchar();//此处才为获取确认字符；
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}