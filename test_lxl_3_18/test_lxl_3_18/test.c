#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ṹ��
//����һ��������ͣ��Զ������ͣ�
//struct book
//{
//	//�������ϸ����Ϣ
//	char name[30];//����
//	double price;//����
//	char id[30];//���
//};
//int main()
//{
//	struct book b1 = {"���Ӣ�۴�",55.62,"ISBN-100099809"};//�鼮��Ϣ��ʼ��
//	printf("������%s\n",b1.name);
//	printf("���ۣ�%0.2f\n", b1.price);
//	printf("id��%s\n", b1.id);
//	//����һ���ṹ��ָ��
//	struct book* ps = &b1;
//	printf("������%s\n", (*ps).name);//�ṹ��ָ��.��Ա��
//	printf("������%s\n", ps->name);//�ṹ��ָ����ʽṹ���Ա���ṹ��ָ��->��Ա����
//	return 0;
//}


                      //��֧��ѭ�����
//��֧ѡ��ṹ��䣨if�����switch��䣩
//����1
//int main()
//{
//	int age = 0;
//	printf("������������䣺>");
//	scanf("%d", &age);
//	if (age<18)
//	{
//		printf("δ����\n");
//	}
//}

//����2
//int main()
//{
//	int age = 0;
//	printf("������������䣺>");
//	scanf("%d",&age);
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	return 0;
//}
//����3
//int main()
//{
//	int age = 0;
//	printf("������������䣺>");
//	scanf("%d", &age);
//	if (age < 18)
//		printf("����\n");
//	else if(age > 18 && age<30)
//		printf("����\n");
//	else if (age >=30 && age<50)
//		printf("����\n");
//	else if (age >= 50 && age < 80)
//		printf("����\n");
//	else
//		printf("̫�����ˣ�");
//	return 0;
//}

//��ϰ1
//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	printf("������һ����Ҫ�жϵ�����>");
//	scanf("%d",&a);
//	if (a % 2 == 0)
//		printf("����Ϊż��");
//	else
//		printf("����Ϊ����");
//	return 0;
//}
//��ϰ2
//���1-100֮�������
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			continue;//continue������ѭ������ִ�и����֮�����䣬����ѭ����ʼ֮��ִ����䣻
//		   //break;//��Ϊbreak���ǽ�������ѭ��
//		else
//			printf("%d ",i);
//	}
//	return 0;
//}

	 		 
//switch��䣨switch���Ҳ��һ�ַ�֧��䡣�������ڶ��֧�������
//switch (���ͱ��ʽ) 
//{ case���γ������ʽ: ���; }

//����(��switch����У�����û��ֱ��ʵ�ַ�֧������breakʹ�ò���ʵ�������ķ�֧)
//int main()
//{
//	int day = 0;
//	printf("����1-7���֣�>");
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;//ֹͣ��������
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	printf("����1-7���֣�>");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//ѭ�����(while�� for ��do while)
//1.while
//����Ļ�ϴ�ӡ1-10������
//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//while����е�break��continue
//while����е�break
//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//			break;
//		else
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//���Ϊ1 2 3 4.��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ�������ԣ�while�е�break������������ֹѭ����

//while����е�continue
//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//			continue;
//		else
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}//������Ϊ1 2 3 4

//int main()
//{
//	int i = 1;
//	while (i <=10)
//	{
//		if (i == 5)
//		{
//			i++;
//			continue;
//		}	
//		else
//		{
//			printf("%d ", i);
//			i++;
//		}	
//	}
//	return 0;
//}//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������ж�

 //2.forѭ��
//ʹ��forѭ������Ļ�ϴ�ӡ1-10������
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 11; i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}
//��forѭ����Ҳ���Գ���break��continue�����ǵ��������whileѭ������һ���ġ����ǻ�����Щ���죺
//����
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			break;
//		else
//		printf("%d ",i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			continue;
//		else
//			printf("%d ", i);
//	}
//	return 0;
//}


//3.do while


	
	