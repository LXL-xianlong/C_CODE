#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C�����ļ�����
//�ļ��Ĵ򿪺͹ر�
int main()
{
	int arr[] = { 21,22,36,52,48,56,88,96,90,98 };
	int n = sizeof(arr) / sizeof(arr[0]);

	FILE *fp = NULL;//�����ļ�ָ��
	fp = fopen("test.txt","w");//"w"Ϊд��
	//fp = fopen("H:\2020C C++ѧϰ\ClassCode\C_CODE\test_lxl_4_19","w");
	//fp = fopen("..\test.txt","w");//д�뵽��ǰĿ¼����һ��Ŀ¼���У�
	if (fp == NULL)
	{
		printf("Opren File Failed.\n");
		return;
	}

	for (int i = 0; i < n;i++)
	{
		//printf("%d ",arr[i]);//��׼���-->��Ļ
		fprintf(fp,"%d ",arr[i]);//����ض���ָ���ļ���
	}
	printf("\n");
	fclose(fp);
	return 0;
}