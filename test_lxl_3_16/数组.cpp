#include<stdio.h>
#include<stdlib.h>

/*
1.��ʶ����
	1.1�����������ݶ�������
	1.2������ʲô����������� �й��ɵı��� �����ڴ������ı����ļ��ϣ�
	1.3�������飻
	1.4�������飻
2.�����˽�
3.����ô�þ���ô��
*/

int main()
{
	//��ͨ����
	int iNumber0 = 1;
	int iNumber1 = 2;
	int iNumber2 = 3;
	int iNumber3 = 4;
	printf("%d\t%d\t%d\t%d\n",&iNumber0, &iNumber1,&iNumber2, &iNumber3);
	int num[4] = {1,2,3,4};
	printf("%d\t%d\t%d\t%d\n", &num[0], &num[1], &num[2], &num[3]);
	for (int i = 0; i <= 3; i++)
	{
		printf("%d\t",&num[i]);
	}
	printf("/n");
	//������������ת��(���ö̳���)
	//д������Ƿ����Լ����뷨
	int x = 131;
	int array[10];
	//��ʼ�����ʼ��
	for (int i = 0; i <= 3; i++)
	{
		array[i]=-1;
	}
	int count = 0;
	printf("%d�Ķ������ǣ�",x);
	while (x)
	{
		array[count] = x % 2;
		x = x / 2;
		count++;
	}
	for (int i = count-1; i >= 0; i--)
	{
		printf("%d",array[i]);
	}
	system("pause");
	return 0;
}