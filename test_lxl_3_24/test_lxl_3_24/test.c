#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�⺯��
//strcpy����--�ַ��������������ַ�������������
//char * strcpy(char * destination, const char * source);

//#include<string.h>//strcpy������ͷ�ļ�
//int main()
//{
//	char arr1[20] = "##########";
//	char arr2[] = "hello";
//	strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}//����ʱҲ��\0������ȥ��

//memset--�ڴ����ú���
//void * memset ( void * ptr, int value, size_t num );
//#include <string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//��ָ����ַ��5���ַ�����'*'
//	printf("%s\n", arr);
//	return 0;
//}


//�Զ��庯��
//дһ�����������ҳ����������е����ֵ��
//get_max���������
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1,num2);
//	printf("max=%d\n",max);
//	return 0;
//}

//дһ���������Խ����������α��������ݡ�
//��������1
//void swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////��������2(ָ�뷽ʽ)
//void swap2(int* px,int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	swap1(num1, num2);
//	printf("swap1::num1 = %d num2 = %d\n", num1, num2);
//	/*swap2(&num1, &num2);
//	printf("swap2::num1 = %d num2 = %d\n", num1, num2);*/
//	return 0;
//}

//дһ�����������ж�һ�����ǲ���������
//void test(int x)
//{
//	int i = 2;
//	
//	for (i = 2; i < x;i++)
//		{
//			if (x%i == 0)
//			{
//				printf("��������\n");
//				break;
//			}
//	     }
//	if (i == x)
//	{
//		printf("������\n");
//	}
//
//}
//int main()
//{
//	int num = 0;
//	printf("����Ҫ�жϵ�����>");
//	scanf("%d",&num);
//	test(num);
//	return 0;
//}

//дһ�������ж�һ���ǲ������ꡣ
//int test(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("����Ҫ�жϵ���ݣ�>");
//	scanf("%d", &year);
//	if (1 == test(year))
//		printf("������\n");
//	else
//		printf("��ƽ��\n");
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
int test(int arr[],int k,int sz)//int arr[]��������һ������ָ��int* arr[];
{
	int mid = 0;
	//int sz = sizeof(arr) / sizeof(arr[0])-1;//������������֮ǰ
	int left = 0;
	int right = sz-1;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[mid]>k)
		{
			right = mid-1;
		}
		else if (arr[mid] < k)
		{
			left = mid+1;
		}
		else
			return mid;
	}
	if (left > right)
		return -1;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 0;

	scanf("%d",&k);
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	//���鴫�ε�ʱ�򣬴���ȥһ���������������ϴ���ȥ���������Ԫ�صĵ�ַ&arr[0];
	int ret = test(arr,k,sz);//�ҵ������±꣬�Ҳ�������-1��
	//���鴫�η�������,�����ڴ���֮ǰ�ͽ�sz�ȼ����������ȥ��
	if (-1 == ret)
			printf("�Ҳ����ˣ�\n");
	else
		    printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
	return 0;
}


//������Ƕ��
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//for (i = 0; i<3; i++)
//{
//	new_line();
//}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//��ʽ����(��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���)
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//�����ɶ��//4321
//	return 0;
//}

