#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ��
//#include <stdio.h>
//int main()
//{
//	int a = 10;//���ڴ��п���һ��ռ�
//	int *p = &a;//�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&��������
//				//��a�ĵ�ַ�����p�����У�p����һ��ָ֮�������
//	return 0;
//}
//
//ָ������
//char *pc = NULL;
//int *pi = NULL;
//short *ps = NULL;
//long *pl = NULL;
//float *pf = NULL;
//double *pd = NULL;

//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//} //ָ������;�����ָ����ǰ�������һ���ж�󣨾��룩

//ָ��Ľ�����
//ʵ��
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char *)&n;
//	int *pi = &n;
//	*pc = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	*pi = 0;  //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	return 0;
//}//ָ������;�����ָ����н�����ʱ���ʶ��ռ�
//���ӣ����Կ��ڴ������ݱ仯��
//int main()
//{
//	int arr[10] = {0x11223344,0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 
//		0x11223344, 0x11223344, 0x11223344, 0x11223344 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10;i++)
//	{
//		*(p + i) = 0;
//	}
//	return 0;
//}

//Ұָ��
//Ұָ�����
//1.δ��ʼ��
//int main()
//{
//	int *p;//pδ��ʼ����Ұָ�룩
//	*p = 20;//�Ƿ����ʿռ�
//}
//2.��Խ�����
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i <= 12;i++)
//	{
//		*p = 0;
//		p++;
//	}
//	return 0;
//}
//3.ָ��ָ��Ŀռ��ͷ�
//����
//int *test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//}

//Ұָ��Ĺ��
//#include <stdio.h>
//int main()
//{
//	int *p = NULL;
//	//....
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}

//ָ������
//1.ָ��+-����
//2.ָ��-ָ��
//3.ָ��Ĺ�ϵ���㣨���Ƚ�ָ���С��
//���ӣ�1.  3.��
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}
//���ӣ�2.ָ��-ָ�룩
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d ", &arr[9]-&arr[0]);//ǰ����ָ����ָ��ָ��ͬһ��ռ�
//	return 0;
//}


//ָ�������
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz;i++)
	{
		*(p+i) = i + 1;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(p+i));
	}
	return 0;
}







