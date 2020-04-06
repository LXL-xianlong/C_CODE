#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>//bool类型头文件

//类型大小
//int main()
//{
//	printf("%d",sizeof(bool)); //1
//	printf("%d", sizeof(char));//1
//	printf("%d", sizeof(short));//2
//	printf("%d", sizeof(int));//4
//	printf("%d", sizeof(float));//4
//	printf("%d", sizeof(long));//4
//	printf("%d", sizeof(double));//8
//	printf("%d", sizeof(long long));//8
//	return 0;
//}

//类型的作用主要用于定义变量
//void main()
//{
//	char ch; //ch 1
//	int a; //开辟空间 //4
//	double d; //8
//}

//void main()
//{
//	//有符号的字符类型
//	char ch1;
//	signed char ch2;
//	//无符号的字符类型
//	unsigned char ch3;
//}

//void main()
//{
//	//0 ~ 255
//	for (unsigned char i = 0; i<256; ++i) //
//	{
//		printf("Hello C.\n");   //?
//	}
//}

//void main()
//{
//	unsigned char ch = 255 + 1;  //0 ~ 255
//	printf("ch = %d\n", ch);
//}


//void main()
//{
//char ch = -128-1;  //-128 ~ 127
//printf("ch = %d\n", ch);
//}

//void main()
//{
//	int a = -1;
//	printf("a = %d\n", a);
//	printf("a = %u\n", a);
//}

//bool CheckModel()
//{
//	int i = 1;  //int i = 00 00 00 01;
//	return  (*(char*)&i) == 1;   //
//}
//void main()
//{
//	bool flag = CheckModel();
//	if (flag)
//		printf("This is Litter.\n");
//	else
//		printf("This is Big.\n");
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	//1000 0000 0000 0000 0000 0000 1000 0000  原码
//	//1111 1111 1111 1111 1111 1111 0111 1111  反码 + 1
//	//1111 1111 1111 1111 1111 1111 1000 0000  补码
//	return 0;
//}


//int main()
//{
//char a = -1;
//signed char b = -1;
//unsigned char c = -1;  //1111 1111
//printf("a=%d,b=%d,c=%d", a, b, c);
////-1   -1
//return 0;
//}



//练习
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n",i+j);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0;i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
