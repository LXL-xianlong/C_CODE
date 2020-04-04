#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int count = 0;
//
//	scanf("%d",&money);
//	empty = money;
//	count = money;
//	while (empty >= 2)
//	{
//		count = count + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("count=%d\n",count);
//
//	return 0;
//}
//二级指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int **ppa = &pa;
//	**ppa = 100;
//	printf("a=%d\n",**ppa);
//	return 0;
//}

//指针数组
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	int *arr2[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}
#include<stdio.h>
struct S
{
	int a;
	char c;
	char arr[10];
	double d;
};
typedef struct T//重定义
{
	char buf[20];
	struct S s;
	int *p;
}T;
int main()
{
	int a = 10;
	struct S s = {100,'w',"bit",3.14};
	T st = { "hello world",{100,'b',"abcdefg",4.4},&a };
	printf("%s\n",st.buf);
	printf("%d\n",st.s.a);
	printf("%c\n", st.s.c);
	printf("%s\n", st.s.arr);
	printf("%lf\n", st.s.d);
	printf("%p\n", *(st.p));

	return 0;
}

