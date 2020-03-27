#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一维数组
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i<sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}//数组在内存中是连续存放的

 //二维数组
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//			for (j = 0; j<4; j++)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//	}
//     
//	return 0;
//}
//打印二维数组的每个元素
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		int j = 0;
//		for (j = 0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}//二维数组在内存中也是连续存储的

//数组作为函数参数
//例子：冒泡算法实现升序排列
//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	//确定冒泡排序的趟数
//	for (i = 0; i < sz - 1;i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//}
//void PrintArr(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//写一个冒泡排序实现升序排列
//	BubbleSort(arr,sz);
//	PrintArr(arr,sz);
//	return 0;
//}

//冒泡排列算法优化
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	//确定冒泡排序的趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag ==1)
			break;
	}
}
void PrintArr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	//int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//写一个冒泡排序实现升序排列
	BubbleSort(arr, sz);
	PrintArr(arr, sz);
	return 0;
}