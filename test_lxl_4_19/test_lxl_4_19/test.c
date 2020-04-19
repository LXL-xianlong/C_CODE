#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C语言文件操作
//文件的打开和关闭
int main()
{
	int arr[] = { 21,22,36,52,48,56,88,96,90,98 };
	int n = sizeof(arr) / sizeof(arr[0]);

	FILE *fp = NULL;//创建文件指针
	fp = fopen("test.txt","w");//"w"为写入
	//fp = fopen("H:\2020C C++学习\ClassCode\C_CODE\test_lxl_4_19","w");
	//fp = fopen("..\test.txt","w");//写入到当前目录的上一级目录当中；
	if (fp == NULL)
	{
		printf("Opren File Failed.\n");
		return;
	}

	for (int i = 0; i < n;i++)
	{
		//printf("%d ",arr[i]);//标准输出-->屏幕
		fprintf(fp,"%d ",arr[i]);//输出重定向到指定文件中
	}
	printf("\n");
	fclose(fp);
	return 0;
}