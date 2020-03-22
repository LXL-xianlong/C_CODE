#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


//有序数组中的元素查找
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//下标从0开始
//	int k = 7;//要查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数；
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到了");
//	}
//	return 0;
//}
//二分查找的方法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//下标从0开始
//	int k = 7;//要查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数；
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)//改变左下标
//		{
//			left = mid;
//		}
//		else if (arr[mid] > k)//改变右下标
//		{
//			right = mid;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚

//int main()
//{
//	char arr1[] = "welcome to here !!!";
//	char arr2[] = "###################";
//	//字符数组时可以用strlen()
//	int len = strlen(arr1);//计算字符串长度；
//	int left = 0;
//	int right = len-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠函数--单位是毫秒；头文件为windows.h
//		system("cls");//执行系统命令--cls,清空屏幕。
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误,则退出程序；
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3;i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);//假设密码为123456
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出。\n");
//	}
//	return 0;
//}


//猜数字游戏
void menu()
{
	printf("*************************\n");
	printf("***1.play   0.exit   ****\n");
	printf("*************************\n");
}
void game()
{
	int guess = 0;
	//电脑生成一个随机数
	int ret = rand()%100+1;
	//猜数字
	while (1)
	{
		printf("请输入数字：>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
	}
int main()
{
	int input = 0;
	//时间戳，只需要调用一次，不需要频繁调用
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}


//下面是使用goto语句的一个例子：
//一个关机程序
 
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//如果不使用goto语句，则可以使用循环：
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



