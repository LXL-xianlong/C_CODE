#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ѭ�����
//3.do...while���
/*int main()
{
	int i = 10;
	do
	{
		printf("%d\n",i);
	} while (i<10);
	return 0;
}*///do...while�����ص㣺ѭ������ִ��һ�Σ�ʹ�õĳ������ޣ����Բ��Ǿ���ʹ�á�
//do...while�е�break��continue
//int main()
//{
//	int i = 5;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}

//int main()
//{
//	int i = 5;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	} while (i<10);
//	return 0;
//}

//��ϰ1������n�Ľײ�
//int main()
//{
//	int n = 0;
//	int m = 1;
//	int s = 1;
//	printf("������һ��������>");
//	scanf("%d",&n);
//		while (m<=n)
//		{
//			s = s*m;
//			m++;
//		}
//		printf("%d�ײ���%d\n",n,s);
//	return 0;
//}

��ϰ2������ 1!+2!+3!+����+10!
test(int x)
{
	int i = 1;
	int s = 1;
	while (i<=x)
	{
		s = s*i;
		i++;
	}
	return s;
}
int main()
{
	int i = 1;
	int sum = 0;
	while (i<=10)
	{
		sum = sum + test(i);
		i++;
	}
	printf("��Ϊ��%d\n",sum);
	return 0;
}





