#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ַ�����ϰ
//int main()
//{
//	//"abc";�ַ���
//	char arr1[] = "abc";//  \0��ASCII��ֵ��0��\0Ҳ��ռ��һ���ռ䣨һ���ֽڣ�,�����㳤�Ⱥ��ַ�������
//	char arr2[] = {'a','b','c'};
//	//��F10����������ڴ�ֲ�
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);//���abc֮��Ϊ���ֵ
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//����3�����ֵ
//	return 0;
//}

////�����������
//int main()
//{
//	int a = 6;
//	int arr[6] = { 0 };
//	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}

//��λȡ��
//int main()
//{
//	int a = 10;
//	//a------>  00000000 00000000 00000000 00001010
//	int b = ~a;//��a�Ķ����ƽ��а�λȡ��
//	//b------>  11111111 11111111 11111111 11110101
//	printf("%d\n",b);//????-11��
//	return 0;
//}

//a++   a--
//int main()
//{
//	int a = 10;
//	int b = a--;//����--����ʹ��a,��--
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}

//--a   ++a
//int main()
//{
//	int a = 10;
//	int b = --a;//ǰ��--����--,�ٽ����ʹ�ã�
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	//ǿ������ת��
//	//int  a = (int)3.14;
//	return 0;
//

//�߼���&&
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a&&b)
//		printf("heheh\n");
//	return 0;
//}

//�߼���||
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a&&b)
//		printf("heheh\n");
//	return 0;
//}

//��������������Ŀ��������
//int main()
//{
//	int a = 0;
//	int b = 20;
//	int max = 0;
//	max=(a > b) ? a : b;
//	printf("%d\n",max);
//	return 0;
//}

//���ű��ʽ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 10;
//	int d = (b=a+3,a=b-5,c=c+b);//�����һ�����ʽ�Ľ����ֵ��d;
//	printf("%d\n",d);//d=16
//	return 0;
//}

//typedef�����ض���
//typedef unsigned int u_int;//�� unsigned int �ض���Ϊu_int;
//int main()
//{
//	//����һ���޷��ŵ��������
//	unsigned int age;
//	return 0;
//}


//�ؼ���static(���κ����ͱ���)

//����1.(���ξֲ��������ı��������������--�������ڱ䳤)�����˾ֲ���ΧҲ������
//void test()
//{
//	int a = 1;//�ֲ�����
//	//static int a=1;   //statis�ı�ֲ��������������ڣ�����û�б�����ʱ������Ҫ���ٴζ��壻
//	a++;
//	printf("%d\n",a);
//}//����������֮��ᱻ���٣�����ÿ�δ�ӡ�Ķ���2��
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}

//����2.(����ȫ�ֱ������ı���ȫ�ֱ�����������ʹ�������С�ˣ�static���ε�ȫ�ֱ���������.c�в���ʹ�ã�ֻ�����Լ���.cԴ�ļ��ڲ�ʹ�ã�
//extern int g_val;   //�����ⲿ����
//int main()
//{
//	printf("%d\n",g_val);
//	return 0;
//}

//����3.���κ������ı��˺����������򣬱�static���εĺ���ֻ�����Լ���Դ�ļ��ڲ���ʹ�ã�
//extern int Add(int x, int y);
//int main()
//{
//	int a = 8;
//	int b = 9;
//	int sum = Add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}

//#define���峣��
//#define MAX 10;
//int main()
//{
//	int a = MAX;
//	printf("%d\n",a);
//	return 0;
//}


//#define�����
//#define MAX(X,Y) ((X)>(Y))?(X):(Y)
//int main()
//{
//	printf("%d\n", MAX(3, 5));
//	return 0;
//}

//ָ��
//int main()
//{
//	int a = 10;//�������ͱ���a,���Ҹ�ֵΪ10
//	//Ҫ�洢10
//	//Ҫ���ڴ�ռ�
//	//a�ڴ�����ʱ�����ڴ��������ĸ��ֽڵĿռ�
//	printf("%p\n",&a);//&a ȡa�ĵ�ַ��%p�Ե�ַ����ʽ���д�ӡ
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", &a);
//	//������ʽ���һ�������Ǵ�ӡ����ַ
//	return 0;
//}

int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;//�˴���*Ϊ�����ò�������*pa����ָ������a,ͨ����ӷ���a��ַ���ı��ַ���ݣ�
	printf("%d\n",a);
	return 0;
}
