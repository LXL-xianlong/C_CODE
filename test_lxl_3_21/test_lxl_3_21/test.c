#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//whileѭ������

/*int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}*///EOFΪ�ļ�������־

//forѭ������
//int main()
//{
//	for ( ; ; )
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////����ѭ��Ҫѭ�����ٴΣ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}//ѭ��ִ��0�Σ���Ϊk=0�����жϣ��Ǹ�ֵ��0Ϊ�٣�����Ҫִ��ѭ����

//һ��getchar()����ʵ��
int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("���������룺>");
	scanf("%s",input);
	printf("��ȷ�����루Y/N��:>");
	//��ջ�����
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ch = getchar();//�˴���Ϊ��ȡȷ���ַ���
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}