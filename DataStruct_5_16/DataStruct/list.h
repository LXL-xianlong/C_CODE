#ifndef _LIST_H_
#define _LIST_H_

#include"common.h"

//���嵥������
typedef struct SListNode
{
	ElemType data;
	struct SListNode *next;
}SListNode;

//���嵥����ṹ
typedef struct SList
{
	SListNode *head;
}SList;

////////////////////////////////////////////////////////////
//���������ӿ�����
void SListInit(SList *plist);
void SListPushBack(SList *plist,ElemType x);
static SListNode* _Buynode(ElemType x);
void SListShow(SList *plist);
void SListPushFront(SList *plist, ElemType x);
/////////////////////////////////////////////////////////////
//���������ӿ�ʵ��
//��ʼ������ͷ��㵥����
void SListInit(SList *plist)
{
	plist->head = NULL;
}
//
static SListNode* _Buynode(ElemType x)
{
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
	assert(s!=NULL);
	s->data = x;
	s->next = NULL;
	return s;
}
//������β��
void SListPushBack(SList *plist, ElemType x)
{
	assert(plist!=NULL);

	SListNode *s = _Buynode(x);

	//�������Ľ��Ϊ��һ�����
	if (plist->head==NULL)
	{
		plist->head = s;
	}

	SListNode *p = plist->head;
	while (plist->head != NULL)
		p = p->next;
	p->next = s;
}
//��ʾ����������ͷ��㣩
void SListShow(SList *plist)
{
	SListNode *p = plist->head;
	while (p!=NULL)
	{
		printf("%d-->",p->data);
		p = p->next;
	}
	printf("Over.\n");
}
//������ͷ�����루����ͷ��㣩
void SListPushFront(SList *plist, ElemType x)
{
	assert(plist!=NULL);

	SListNode *s = _Buynode(x);

	s->next = plist->head;
	plist->head = s;
}
#endif /*_LIST_H_*/

////��������Ľڵ㣨����Ľڵ㣩
//typedef struct ListNode
//{
//	int data;
//	struct ListNode *next;
//}ListNode;
//
//typedef ListNode* List;//List����һ���ڵ����͵�ָ��
//
////��������ͷ���
////void ListInit(List *plist)
////{
////	*plist = NULL;
////}
//
////�������ͷ���
//void ListInit(List *plist)
//{
//	*plist = (ListNode*)malloc(sizeof(ListNode));
//	assert(*plist!=NULL);
//	(*plist)->next = NULL;
//}
////β�巨����������(����ͷ���)
////void ListCreat_Tail(List *plist)
////{
////	*plist = (ListNode*)malloc(sizeof(ListNode));
////	assert(*plist!=NULL);
////	(*plist)->data = 1;
////	(*plist)->next = NULL;
////
////	ListNode *p = *plist;
////
////	for (int i = 2; i <= 10;i++)
////	{
////		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
////		assert(s!=NULL);
////		s->data = i;
////		s->next = NULL;
////
////		//���ӽڵ�
////		p->next = s;
////		p = s;
////	}
////
////}
//
////β�巨����������(��ͷ���)
//void ListCreat_Tail(List *plist)
//{
//	assert(plist!=NULL);
//
//	ListNode *p = *plist;
//
//	for (int i = 1; i <= 10;i++)
//	{
//		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
//		assert(s!=NULL);
//		s->data = i;
//		s->next = NULL;
//
//		//���ӽ��
//		p->next = s;
//		p = s;
//	}
//}
//
////ͷ�巨����������(����ͷ���)
////void ListCreat_Head(List *plist)
////{
////	(*plist) = (ListNode*)malloc(sizeof(ListNode));
////	assert(*plist != NULL);
////	(*plist)->data = 1;
////	(*plist)->next = NULL;
////
////	for (int i = 2; i <= 10; i++)
////	{
////		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
////		assert(s!=NULL);
////		s->data = i;
////
////		//���ӽڵ�
////		s->next = (*plist);
////		(*plist) = s;
////	}
////}
//
////ͷ�巨����������(��ͷ���)
//void ListCreat_Head(List *plist)
//{
//	
//}
//
////��������(����ͷ���)
////void ListShow(List plist)
////{
////	ListNode *p = plist;
////	while (p!=NULL)
////	{
////		printf("%d->",p->data);
////		p = p->next;
////	}
////	printf("Over.");
////}
////��������(��ͷ���)
//void ListShow(List plist)
//{
//	ListNode *p = plist->data;
//	while (p != NULL)
//	{
//		printf("%d->", p->data);
//		p = p->next;
//	}
//	printf("Over.");
//}
//
//
//#endif /*_LIST_H_*/


