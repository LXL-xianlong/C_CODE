#ifndef _LIST_H_
#define _LIST_H_

#include"common.h"
//////////////////////////////////////////////////////////////////////////////////
//��ͷ˫ѭ������
//����˫ѭ���������
typedef struct DCListNode
{
	ElemType data;
	struct DCListNode *next;
	struct DCListNode *prev;
}DCListNode;
//����˫ѭ������ṹ
typedef struct DCList
{
	DCListNode *head;
}DCList;

void DCListInit(DCList *plist);
static DCListNode* _Buydcnode(ElemType x);
void DCListPushBack(DCList *plist,ElemType x);
void DCListPushFront(DCList *plist,ElemType x);
void DCListShow(DCList *plist);
void DCListPopBack(DCList *plist);
void DCListPopFront(DCList *plist);
DCListNode* DCListFind(DCList *plist,ElemType key);
size_t DCListLength(DCList *plist);
void DCListClear(DCList *plist);
void DCListDestroy(DCList *plist);
void DCListDeleteByVal(DCList *plist, ElemType key);
void DCListInsertByVal(DCList *plist, ElemType x);
void DCListReverse(DCList *plist);
void DCListSort(DCList *plist);
//������
static DCListNode* _Buydcnode(ElemType x)
{
	DCListNode *s = (DCListNode*)malloc(sizeof(DCListNode));
	assert(s!=NULL);
	s->data = x;
	s->next = s->prev = s;
	return s;
}
//��ʼ��˫ѭ������
void DCListInit(DCList *plist)
{
	plist->head = _Buydcnode(0);
}
//˫����β��
void DCListPushBack(DCList *plist,ElemType x)
{
	DCListNode *s = _Buydcnode(x);

	s->prev = plist->head->prev;
	s->prev->next = s;
	s->next = plist->head;
	plist->head->prev = s;
}
//˫����ͷ��
void DCListPushFront(DCList *plist, ElemType x)
{
	DCListNode *s = _Buydcnode(x);
	//�Լ�д��
	plist->head->prev = s;
	s->next = plist->head->next;
	plist->head->next = s;
	s->prev = plist->head->prev;
	//�����
	/*s->next = plist->head->next;
	s->prev = plist->head;
	s->next->prev = s;
	plist->head->next = s;*/
}
//˫ѭ���������ʾ����
void DCListShow(DCList *plist)
{
	DCListNode *p = plist->head->next;

	while (p!=plist->head)
	{
		printf("%d->",p->data);
		p = p->next;
	}
	printf("Over.\n");
}
//˫ѭ������β��ɾ��
void DCListPopBack(DCList *plist)
{
	DCListNode *p = plist->head->prev;//��ָ��ָ�����һ��λ�ã�
	if (p == plist->head)
	{
		printf("����Ϊ�գ��޷�ɾ��.\n");
		return;
	}
	plist->head->prev = p->prev;
	p->prev->next = plist->head;

	free(p);
}

//˫ѭ������ͷ��ɾ��
void DCListPopFront(DCList *plist)
{
	DCListNode *p = plist->head->next;//��ָ��ָ����һ��Ԫ��λ�ã�
	if (p == plist->head)
	{
		printf("����Ϊ�գ��޷�ɾ��.\n");
		return;
	}
	plist->head->next = p->next;
	p->next->prev = plist->head;

	free(p);
}
//���Һ���
DCListNode* DCListFind(DCList *plist, ElemType key)
{
	assert(plist!=NULL);
	DCListNode *p = plist->head->next;
	while (p != plist->head && p->data != key)
		p = p->next;
	if (p != plist->head)
		return p;
	return NULL;
}
//˫ѭ��������
size_t DCListLength(DCList *plist)
{
	assert(plist != NULL);
	size_t len = 0;
	DCListNode *p = plist->head->next;
	while (p!=plist->head)
	{
		len++;
		p = p->next;
	}
	return len;
}
//���˫ѭ������
void DCListClear(DCList *plist)
{
	assert(plist!=NULL);
	DCListNode *p = plist->head->next;
	while (p!=plist->head)
	{
		p->next->prev = p->prev;
		p->prev->next = p->next;
		free(p);
		p = plist->head->next;
	}
}
//�ݻ�˫ѭ������
void DCListDestroy(DCList *plist)
{
	DCListClear(plist);
	free(plist->head);//�����ͷ�ͷ���
	plist->head = NULL;
}
//˫ѭ������ֵɾ��
void DCListDeleteByVal(DCList *plist, ElemType key)
{
	assert(plist!=NULL);
	DCListNode *p = DCListFind(plist,key);
	if (p == NULL)
		return;

	p->prev->next = p->next;
	p->next->prev = p->prev;
	free(p);
}
//˫ѭ������ֵ����
void DCListInsertByVal(DCList *plist, ElemType x)
{
	assert(plist!=NULL);
	DCListNode *p = plist->head->next;
	while (p != plist->head && p->data < x)
		p = p->next;

	DCListNode *s = _Buydcnode(x);
	s->next = p;
	s->prev = p->prev;
	p->prev->next = s;
	p->prev = s;
}
//˫ѭ���������ת��
void DCListReverse(DCList *plist)
{
	assert(plist!=NULL);
	DCListNode *p = plist->head->next;
	DCListNode *q = p->next;

	//�Ͽ�����
	p->next = plist->head;
	plist->head->prev = p;
	while (q!=plist->head)
	{
		p = q;
		q = p->next;
		p->next = plist->head->next;
		p->prev = plist->head;
		p->next->prev = p;
		p->prev->next = p;
	}
}
//˫ѭ����������
void DCListSort(DCList *plist)
{
	assert(plist!=NULL);
	DCListNode *p = plist->head->next;
	DCListNode *q = p->next;
	p->next = plist->head;
	plist->head->prev = p;

	while (q!=plist->head)
	{
		p = q;
		q = q->next;
		//Ѱ��p�Ĳ���λ��
		DCListNode *t = plist->head->next;
		while (t != plist->head && t->data < p->data)
			t = t->next;

		p->next = t;
		p->prev = t->prev;
		p->next->prev = p;
		p->prev->next = p;

		p = q;
	}
}
//////////////////////////////////////////////////////////////////////////////////
//��ͷ�����ѭ������
//������ͷ�����ѭ��������
//typedef struct SListNode
//{
//	ElemType data;
//	struct SListNode *next;
//}SListNode;
//
////������ͷ�����ѭ������ṹ
//typedef struct SList
//{
//	SListNode *head;
//}SList;
//
//////////////////////////////////////////////////////////////
////���������ӿ�����
//void SListInit(SList *plist);
//void SListPushBack(SList *plist,ElemType x);
//static SListNode* _Buynode(ElemType x);
//void SListShow(SList *plist);
//void SListPushFront(SList *plist, ElemType x);
//void SListPopBack(SList *plist);
//void SListDestroy(SList *plist);
//void SListPopFront(SList *plist);
//size_t SListLength(SList *plist);
//void SListClear(SList *plist);
//SListNode *SeqListFind(SList *plist,ElemType key);
//void SListDeleteByVal(SList *plist, ElemType key);
//void SListReverse(SList *plist);
//void SListInsertByVal(SList *plist, ElemType x);
//void SListSort(SList *plist);
///////////////////////////////////////////////////////////////
////���������ӿ�ʵ��
////��ʼ������ͷ��㵥����
//void SListInit(SList *plist)
//{
//	plist->head = NULL;
//}
////
//static SListNode* _Buynode(ElemType x)
//{
//	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
//	assert(s!=NULL);
//	s->data = x;
//	s->next = NULL;
//	return s;
//}
////������β��
//void SListPushBack(SList *plist, ElemType x)
//{
//	assert(plist!=NULL);
//
//	SListNode *s = _Buynode(x);
//
//	//�������Ľ��Ϊ��һ�����
//	if (plist->head==NULL)
//	{
//		plist->head = s;
//	}
//
//	SListNode *p = plist->head;
//	while (plist->head != NULL)
//		p = p->next;
//	p->next = s;
//}
////��ʾ����������ͷ��㣩
//void SListShow(SList *plist)
//{
//	SListNode *p = plist->head;
//	while (p!=NULL)
//	{
//		printf("%d-->",p->data);
//		p = p->next;
//	}
//	printf("Over.\n");
//}
////������ͷ�����루����ͷ��㣩
//void SListPushFront(SList *plist, ElemType x)
//{
//	assert(plist!=NULL);
//
//	SListNode *s = _Buynode(x);
//
//	s->next = plist->head;
//	plist->head = s;
//}
////������β��ɾ��
//void SListPopBack(SList *plist)
//{
//	assert(plist!=NULL);
//	SListNode *p;
//	if (plist->head == NULL)
//		return;
//	 p = plist->head;
//
//	//������ֻ��һ�����ʱ
//	if (p->next == NULL)
//	{
//		free(p);
//		plist->head = NULL;
//		return;
//	}
//	//�����������ʱ
//	while (p->next->next != NULL)
//		p = p->next;
//	free(p->next);
//	p->next = NULL;
//}
////������Ĵݻ�
//void SListDestroy(SList *plist)
//{
//	SListClear(plist);
//	plist->head = NULL;
//}
////����������
//void SListClear(SList *plist)
//{
//	assert(plist != NULL);
//	SListNode *p = plist->head;
//	while (p != NULL)
//	{
//		plist->head = p->next;
//		free(p);
//		p = plist->head;
//	}
//}
////������ͷ��ɾ��
//void SListPopFront(SList *plist)
//{
//	assert(plist!=NULL);
//	SListNode *p = plist->head;
//
//	if (plist->head == NULL)
//		return;
//
//	plist->head = p->next;
//	free(p);
//}
////��������
//size_t SListLength(SList *plist)
//{
//	assert(plist!=NULL);
//	size_t len = 0;
//	SListNode *p = plist->head;
//
//	while (p != NULL)
//	{
//		len++;
//		p = p->next;
//	}
//	return len;
//}
////������ֵ����
//SListNode *SeqListFind(SList *plist, ElemType key)
//{
//	assert(plist != NULL);
//	SListNode *p = plist->head;
//	while (p != NULL && p->data != key)
//		p = p->next;
//	return p;
//}
////������ֵɾ��
//void SListDeleteByVal(SList *plist, ElemType key)
//{
//	assert(plist!=NULL);
//	SListNode *prev = NULL;
//	SListNode *p = SeqListFind(plist,key);
//
//	if (p == NULL)
//	{
//		printf("Ҫɾ���Ľ�㲻����.\n");
//		return;
//	}
//	//�ж��Ƿ��ҵ����ǵ�һ�����(���⴦��)
//	if (p == plist->head)
//		plist->head = p->next;
//	else
//	{
//		prev = plist->head;
//		while (prev->next != p)
//			prev = prev->next;
//		//ɾ�����
//		prev->next = p->next;
//	}
//	free(p);
//}
////������ת�ò���
//void SListReverse(SList *plist)
//{
//	assert(plist != NULL);
//	SListNode *p = plist->head->next;
//	SListNode *q;
//	if (p->next == NULL)
//		return;
//	//�Ͽ���һ�����
//	plist->head->next = NULL;
//	while (p != NULL)
//	{
//		q = p->next;
//		p->next = plist->head;
//		plist->head = p;
//	}
//}
////������ֵ����
//void SListInsertByVal(SList *plist, ElemType x)
//{
//	assert(plist!=NULL);
//	SListNode *prev = NULL;
//	SListNode *p = plist->head;
//	SListNode *s = _Buynode(x);
//
//	//�ж�Ҫ�����λ��
//	while (p!=NULL && x>p->data)
//	{
//		prev = p;
//		p = p->next;
//	}
//	if (prev == NULL)//�����ͷ��
//	{
//		s->next = p;
//		plist->head = s;
//	}
//	else
//	{
//		s->next = prev->next;
//		prev->next = s;
//	}
//}
////����������
//void SListSort(SList *plist)
//{
//	assert(plist != NULL);
//	SListNode *p = plist->head->next;
//	SListNode *q, *t, *prev = NULL;
//
//	plist->head->next = NULL;//�Ͽ�����
//	t = plist->head;
//	while (p != NULL)
//	{
//		q = p->next;
//		//��p���ժ�����а�ֵ���룬����
//		while (t!=NULL && p->data>t->data)
//		{
//			prev = t;
//			t = t->next;
//		}
//		if (prev==NULL)
//		{
//			prev->next = plist->head;
//			plist->head = p;
//		}
//		else
//		{
//			p->next = prev->next;
//			prev->next = p;
//		}
//		p = q;
//		t = plist->head;
//	}
//}
//#endif /*_LIST_H_*/
//
//////��������Ľڵ㣨����Ľڵ㣩
////typedef struct ListNode
////{
////	int data;
////	struct ListNode *next;
////}ListNode;
////
////typedef ListNode* List;//List����һ���ڵ����͵�ָ��
////
//////��������ͷ���
//////void ListInit(List *plist)
//////{
//////	*plist = NULL;
//////}
////
//////�������ͷ���
////void ListInit(List *plist)
////{
////	*plist = (ListNode*)malloc(sizeof(ListNode));
////	assert(*plist!=NULL);
////	(*plist)->next = NULL;
////}
//////β�巨����������(����ͷ���)
//////void ListCreat_Tail(List *plist)
//////{
//////	*plist = (ListNode*)malloc(sizeof(ListNode));
//////	assert(*plist!=NULL);
//////	(*plist)->data = 1;
//////	(*plist)->next = NULL;
//////
//////	ListNode *p = *plist;
//////
//////	for (int i = 2; i <= 10;i++)
//////	{
//////		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
//////		assert(s!=NULL);
//////		s->data = i;
//////		s->next = NULL;
//////
//////		//���ӽڵ�
//////		p->next = s;
//////		p = s;
//////	}
//////
//////}
////
//////β�巨����������(��ͷ���)
////void ListCreat_Tail(List *plist)
////{
////	assert(plist!=NULL);
////
////	ListNode *p = *plist;
////
////	for (int i = 1; i <= 10;i++)
////	{
////		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
////		assert(s!=NULL);
////		s->data = i;
////		s->next = NULL;
////
////		//���ӽ��
////		p->next = s;
////		p = s;
////	}
////}
////
//////ͷ�巨����������(����ͷ���)
//////void ListCreat_Head(List *plist)
//////{
//////	(*plist) = (ListNode*)malloc(sizeof(ListNode));
//////	assert(*plist != NULL);
//////	(*plist)->data = 1;
//////	(*plist)->next = NULL;
//////
//////	for (int i = 2; i <= 10; i++)
//////	{
//////		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
//////		assert(s!=NULL);
//////		s->data = i;
//////
//////		//���ӽڵ�
//////		s->next = (*plist);
//////		(*plist) = s;
//////	}
//////}
////
//////ͷ�巨����������(��ͷ���)
////void ListCreat_Head(List *plist)
////{
////	
////}
////
//////��������(����ͷ���)
//////void ListShow(List plist)
//////{
//////	ListNode *p = plist;
//////	while (p!=NULL)
//////	{
//////		printf("%d->",p->data);
//////		p = p->next;
//////	}
//////	printf("Over.");
//////}
//////��������(��ͷ���)
////void ListShow(List plist)
////{
////	ListNode *p = plist->data;
////	while (p != NULL)
////	{
////		printf("%d->", p->data);
////		p = p->next;
////	}
////	printf("Over.");
////}
////
////
#endif /*_LIST_H_*/


