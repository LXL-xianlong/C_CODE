#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


//���������е�Ԫ�ز���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�±��0��ʼ
//	int k = 7;//Ҫ���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ�����
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ�����");
//	}
//	return 0;
//}
//���ֲ��ҵķ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�±��0��ʼ
//	int k = 7;//Ҫ���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ�����
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)//�ı����±�
//		{
//			left = mid;
//		}
//		else if (arr[mid] > k)//�ı����±�
//		{
//			right = mid;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м���

//int main()
//{
//	char arr1[] = "welcome to here !!!";
//	char arr2[] = "###################";
//	//�ַ�����ʱ������strlen()
//	int len = strlen(arr1);//�����ַ������ȣ�
//	int left = 0;
//	int right = len-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯�ߺ���--��λ�Ǻ��룻ͷ�ļ�Ϊwindows.h
//		system("cls");//ִ��ϵͳ����--cls,�����Ļ��
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ��������,���˳�����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3;i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);//��������Ϊ123456
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳���\n");
//	}
//	return 0;
//}


//��������Ϸ
void menu()
{
	printf("*************************\n");
	printf("***1.play   0.exit   ****\n");
	printf("*************************\n");
}
void game()
{
	int guess = 0;
	//��������һ�������
	int ret = rand()%100+1;
	//������
	while (1)
	{
		printf("���������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
	}
int main()
{
	int input = 0;
	//ʱ�����ֻ��Ҫ����һ�Σ�����ҪƵ������
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}


//������ʹ��goto����һ�����ӣ�
//һ���ػ�����
 
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//�����ʹ��goto��䣬�����ʹ��ѭ����
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



