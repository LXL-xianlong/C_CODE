#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


//常量（1.字面常量  2.const修饰的常变量  3.#define定义的标识符常量   4.枚举常量）
//举例
//enum sex//创建一个性别枚举类型
//{
//	male,
//	female,
//	secret
//};//括号里male,female,secret是枚举变量，即可能取值；
//int main()
//{
//	enum sex s = male;
//	printf("%d\n",male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	return 0;
//}

//int main()
//{
//	3.14;   //字面常量
//	1000;   //字面常量
//	const int num = 30;  //const修饰的常变量
//	//num = 20;
//    printf("%d\n",num);//报错，因为const修饰变量时不能被修改
//	#define  MAX 100;     //#define定义的标识符常量
//	int a = MAX;
//	printf("a=%d\n", a);
//	return 0;
//}


//字符串+转义字符+注释
//字符串
//举例
//int main()
//{
//	//知道下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
//	char arr1[] = "bit";//数组中存放量 b i t \0，而\0不是内容，只是结束标志
//	char arr2[] = { 'b', 'i', 't' };//数组中存放量 b i t三个元素
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2); //输出为bit*****，bit后打印随机值，遇到\0时采结束打印
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr1)); //strlen  ---计算字符串长度
//	printf("%d\n", strlen(arr2));//没有\0时为随机值
//	return 0;
//}


//转义字符
//举例
//要求在屏幕上打印一个目录：c:\code\test.c
//int main()
//{
//	printf("c:\code\test.c\n");  //输出结果为：c:code  est.c，与要求不符，因为涉及到了转义字符
//	printf("c:\\code\\test.c\n");//输出结果为：c:\code\test.c,满足要求
//	printf("%c\n", '\'');//打印字符 '
//	printf("%s\n",'\" ');//打印字符 "
//	printf("%d\n", strlen("c:\test\32\test.c"));//13
//	printf("%c\n",'\32');//把8进制的32换成10进制数后。作为ASCII码值的那个字符
//	printf("%c\n", '\x41');//把16进制的41换成10进制数后。作为ASCII码值的那个字符
//	return 0;
//}


//选择语句
//if  else 语句
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗？（0/1）?\n");
//	scanf("%d",&input);
//	if (input == 0)
//		printf("good");
//	else
//		printf("你还是回家卖红薯吧");
//	return 0;
//}

//循环语句（1.while循环  2.for 循环  3.do...while循环）
//举例（while循环）
//int main()
//{
//	printf("你开始好好学习了\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		printf("已经敲了%d行了，还是继续敲代码吧",line);
//		line++;
//	}
//	if (line > 20000)
//		printf("一个好offer");
//	return 0;
//}

//函数
//Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("%d\n",sum);
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//数组
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//创建一个数组
//	//printf("%d\n",arr[4]);//通过数组下标访问数组；
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//			i++;
//	}
//	return 0;
//}

//操作符（算术操作符 移位操作符 位操作符 赋值操作符 单目操作符 等等）
//算术操作符
//int main()
//{
//	int a = 5 / 2;//得到商
//	printf("%d\n",a);
//	int b = 5 % 2;//取模，即余数
//	printf("%d\n", b);
//	return 0;
//}

//位操作符（按位与&  按位或| 按位异或^）
int main()
{
	int a = 3; int b = 5;
	printf("%d\n",a&b);
	//a--->二进制为  00000000 00000000 00000000 00000011
	//b--->二进制为  00000000 00000000 00000000 00000101
	//a&b 都为真则为真--->  00000000 00000000 00000000 00000001  --->二进制为1x2^0=1
	printf("%d\n", a|b);
	//a|b 只要一个为真则为真--->  00000000 00000000 00000000 00000111  --->二进制为1x2^2+1x2^1+1x2^0=7
	printf("%d\n", a^b);
	//a^b 相异为1相同为0--->  00000000 00000000 00000000 00000110  --->二进制为1x2^2+1x2^1+0x2^0=6
	return 0;
}
