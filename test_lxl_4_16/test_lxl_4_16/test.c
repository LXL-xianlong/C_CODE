#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�Զ�������_�ڴ����
//����1
//int main()
//{
//	struct S1
//	{
//		char c1;
//		int i;
//		char c2;
//	};
//	printf("%d\n", sizeof(struct S1));//12
//	return 0;
//}
//����2
//int main()
//{
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//	printf("%d\n", sizeof(struct S2));//8
//	return 0;
//}
//����3
struct S3
{
	double d;
	char c;
	int i;
};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));//16
//	return 0;
//}
//����4
int main()
{
	struct S4
	{
		char c1;
		struct S3 s3;
		double d;
	};
	printf("%d\n", sizeof(struct S4));//32
	
	return 0;
}
