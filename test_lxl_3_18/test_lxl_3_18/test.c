#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体
//创建一个书的类型（自定义类型）
//struct book
//{
//	//描述书的细节信息
//	char name[30];//书名
//	double price;//定价
//	char id[30];//书号
//};
//int main()
//{
//	struct book b1 = {"射雕英雄传",55.62,"ISBN-100099809"};//书籍信息初始化
//	printf("书名：%s\n",b1.name);
//	printf("定价：%0.2f\n", b1.price);
//	printf("id：%s\n", b1.id);
//	//创建一个结构体指针
//	struct book* ps = &b1;
//	printf("书名：%s\n", (*ps).name);//结构体指针.成员名
//	printf("书名：%s\n", ps->name);//结构体指针访问结构体成员（结构体指针->成员名）
//	return 0;
//}


                      //分支与循环语句
//分支选择结构语句（if语句与switch语句）
//代码1
//int main()
//{
//	int age = 0;
//	printf("请输入你的年龄：>");
//	scanf("%d", &age);
//	if (age<18)
//	{
//		printf("未成年\n");
//	}
//}

//代码2
//int main()
//{
//	int age = 0;
//	printf("请输入你的年龄：>");
//	scanf("%d",&age);
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}
//代码3
//int main()
//{
//	int age = 0;
//	printf("请输入你的年龄：>");
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if(age > 18 && age<30)
//		printf("青年\n");
//	else if (age >=30 && age<50)
//		printf("中年\n");
//	else if (age >= 50 && age < 80)
//		printf("老年\n");
//	else
//		printf("太长寿了！");
//	return 0;
//}

//练习1
//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	printf("请输入一个需要判断的数：>");
//	scanf("%d",&a);
//	if (a % 2 == 0)
//		printf("该数为偶数");
//	else
//		printf("该数为奇数");
//	return 0;
//}
//练习2
//输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			continue;//continue是跳出循环，不执行该语句之后的语句，跳至循环开始之处执行语句；
//		   //break;//若为break则是结束所有循环
//		else
//			printf("%d ",i);
//	}
//	return 0;
//}

	 		 
//switch语句（switch语句也是一种分支语句。常常用于多分支的情况）
//switch (整型表达式) 
//{ case整形常量表达式: 语句; }

//例子(在switch语句中，我们没法直接实现分支，搭配break使用才能实现真正的分支)
//int main()
//{
//	int day = 0;
//	printf("输入1-7数字：>");
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;//停止（跳出）
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	printf("输入1-7数字：>");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//循环语句(while、 for 、do while)
//1.while
//在屏幕上打印1-10的数字
//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//while语句中的break和continue
//while语句中的break
//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//			break;
//		else
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//结果为1 2 3 4.在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。所以：while中的break是用于永久终止循环的

//while语句中的continue
//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//			continue;
//		else
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}//输出结果为1 2 3 4

//int main()
//{
//	int i = 1;
//	while (i <=10)
//	{
//		if (i == 5)
//		{
//			i++;
//			continue;
//		}	
//		else
//		{
//			printf("%d ", i);
//			i++;
//		}	
//	}
//	return 0;
//}//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断

 //2.for循环
//使用for循环在屏幕上打印1-10的数字
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 11; i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}
//在for循环中也可以出现break和continue，他们的意义和在while循环中是一样的。但是还是有些差异：
//例子
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			break;
//		else
//		printf("%d ",i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			continue;
//		else
//			printf("%d ", i);
//	}
//	return 0;
//}


//3.do while


	
	