#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


//������1.���泣��  2.const���εĳ�����  3.#define����ı�ʶ������   4.ö�ٳ�����
//����
//enum sex//����һ���Ա�ö������
//{
//	male,
//	female,
//	secret
//};//������male,female,secret��ö�ٱ�����������ȡֵ��
//int main()
//{
//	enum sex s = male;
//	printf("%d\n",male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	return 0;
//}

//int main()
//{
//	3.14;   //���泣��
//	1000;   //���泣��
//	const int num = 30;  //const���εĳ�����
//	//num = 20;
//    printf("%d\n",num);//������Ϊconst���α���ʱ���ܱ��޸�
//	#define  MAX 100;     //#define����ı�ʶ������
//	int a = MAX;
//	printf("a=%d\n", a);
//	return 0;
//}


//�ַ���+ת���ַ�+ע��
//�ַ���
//����
//int main()
//{
//	//֪��������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
//	char arr1[] = "bit";//�����д���� b i t \0����\0�������ݣ�ֻ�ǽ�����־
//	char arr2[] = { 'b', 'i', 't' };//�����д���� b i t����Ԫ��
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2); //���Ϊbit*****��bit���ӡ���ֵ������\0ʱ�ɽ�����ӡ
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr1)); //strlen  ---�����ַ�������
//	printf("%d\n", strlen(arr2));//û��\0ʱΪ���ֵ
//	return 0;
//}


//ת���ַ�
//����
//Ҫ������Ļ�ϴ�ӡһ��Ŀ¼��c:\code\test.c
//int main()
//{
//	printf("c:\code\test.c\n");  //������Ϊ��c:code  est.c����Ҫ�󲻷�����Ϊ�漰����ת���ַ�
//	printf("c:\\code\\test.c\n");//������Ϊ��c:\code\test.c,����Ҫ��
//	printf("%c\n", '\'');//��ӡ�ַ� '
//	printf("%s\n",'\" ');//��ӡ�ַ� "
//	printf("%d\n", strlen("c:\test\32\test.c"));//13
//	printf("%c\n",'\32');//��8���Ƶ�32����10����������ΪASCII��ֵ���Ǹ��ַ�
//	printf("%c\n", '\x41');//��16���Ƶ�41����10����������ΪASCII��ֵ���Ǹ��ַ�
//	return 0;
//}


//ѡ�����
//if  else ���
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ�𣿣�0/1��?\n");
//	scanf("%d",&input);
//	if (input == 0)
//		printf("good");
//	else
//		printf("�㻹�ǻؼ��������");
//	return 0;
//}

//ѭ����䣨1.whileѭ��  2.for ѭ��  3.do...whileѭ����
//������whileѭ����
//int main()
//{
//	printf("�㿪ʼ�ú�ѧϰ��\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		printf("�Ѿ�����%d���ˣ����Ǽ����ô����",line);
//		line++;
//	}
//	if (line > 20000)
//		printf("һ����offer");
//	return 0;
//}

//����
//Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("%d\n",sum);
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//����
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ������
//	//printf("%d\n",arr[4]);//ͨ�������±�������飻
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//			i++;
//	}
//	return 0;
//}

//������������������ ��λ������ λ������ ��ֵ������ ��Ŀ������ �ȵȣ�
//����������
//int main()
//{
//	int a = 5 / 2;//�õ���
//	printf("%d\n",a);
//	int b = 5 % 2;//ȡģ��������
//	printf("%d\n", b);
//	return 0;
//}

//λ����������λ��&  ��λ��| ��λ���^��
int main()
{
	int a = 3; int b = 5;
	printf("%d\n",a&b);
	//a--->������Ϊ  00000000 00000000 00000000 00000011
	//b--->������Ϊ  00000000 00000000 00000000 00000101
	//a&b ��Ϊ����Ϊ��--->  00000000 00000000 00000000 00000001  --->������Ϊ1x2^0=1
	printf("%d\n", a|b);
	//a|b ֻҪһ��Ϊ����Ϊ��--->  00000000 00000000 00000000 00000111  --->������Ϊ1x2^2+1x2^1+1x2^0=7
	printf("%d\n", a^b);
	//a^b ����Ϊ1��ͬΪ0--->  00000000 00000000 00000000 00000110  --->������Ϊ1x2^2+1x2^1+0x2^0=6
	return 0;
}
