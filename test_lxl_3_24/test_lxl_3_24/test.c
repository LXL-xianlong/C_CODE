#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//库函数
//strcpy函数--字符串拷贝函数（字符串操作函数）
//char * strcpy(char * destination, const char * source);

//#include<string.h>//strcpy函数的头文件
//int main()
//{
//	char arr1[20] = "##########";
//	char arr2[] = "hello";
//	strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}//拷贝时也将\0拷贝过去了

//memset--内存设置函数
//void * memset ( void * ptr, int value, size_t num );
//#include <string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//将指定地址的5个字符换成'*'
//	printf("%s\n", arr);
//	return 0;
//}


//自定义函数
//写一个函数可以找出两个整数中的最大值。
//get_max函数的设计
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1,num2);
//	printf("max=%d\n",max);
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容。
//交换函数1
//void swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////交换函数2(指针方式)
//void swap2(int* px,int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	swap1(num1, num2);
//	printf("swap1::num1 = %d num2 = %d\n", num1, num2);
//	/*swap2(&num1, &num2);
//	printf("swap2::num1 = %d num2 = %d\n", num1, num2);*/
//	return 0;
//}

//写一个函数可以判断一个数是不是素数。
//void test(int x)
//{
//	int i = 2;
//	
//	for (i = 2; i < x;i++)
//		{
//			if (x%i == 0)
//			{
//				printf("不是素数\n");
//				break;
//			}
//	     }
//	if (i == x)
//	{
//		printf("是素数\n");
//	}
//
//}
//int main()
//{
//	int num = 0;
//	printf("输入要判断的数：>");
//	scanf("%d",&num);
//	test(num);
//	return 0;
//}

//写一个函数判断一年是不是闰年。
//int test(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("输入要判断的年份：>");
//	scanf("%d", &year);
//	if (1 == test(year))
//		printf("是闰年\n");
//	else
//		printf("是平年\n");
//	return 0;
//}

//写一个函数，实现一个整型有序数组的二分查找
int test(int arr[],int k,int sz)//int arr[]本质上是一个数组指针int* arr[];
{
	int mid = 0;
	//int sz = sizeof(arr) / sizeof(arr[0])-1;//换到函数调用之前
	int left = 0;
	int right = sz-1;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[mid]>k)
		{
			right = mid-1;
		}
		else if (arr[mid] < k)
		{
			left = mid+1;
		}
		else
			return mid;
	}
	if (left > right)
		return -1;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 0;

	scanf("%d",&k);
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	//数组传参的时候，传过去一个数组名，本质上传过去的数组的首元素的地址&arr[0];
	int ret = test(arr,k,sz);//找到返回下标，找不到返回-1；
	//数组传参发生降级,所以在传参之前就将sz先计算出来传过去；
	if (-1 == ret)
			printf("找不到了，\n");
	else
		    printf("找到了，下标是：%d\n",ret);
	return 0;
}


//函数的嵌套
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//for (i = 0; i<3; i++)
//{
//	new_line();
//}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//链式访问(把一个函数的返回值作为另外一个函数的参数)
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//结果是啥？//4321
//	return 0;
//}

