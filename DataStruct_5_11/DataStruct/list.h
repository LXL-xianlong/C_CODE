#ifndef _LIST_H_
#define _LIST_H_

#include"common.h"

//定义单链表结点
typedef struct SListNode
{
	ElemType data;
	struct SListNode *next;
}SListNode;

//定义单链表结构
typedef struct SList
{
	SListNode *head;
}SList;

////////////////////////////////////////////////////////////
//单链表函数接口声明
void SListInit(SList *plist);
void SListPushBack(SList *plist,ElemType x);
static SListNode* _Buynode(ElemType x);
void SListShow(SList *plist);
void SListPushFront(SList *plist, ElemType x);
/////////////////////////////////////////////////////////////
//单链表函数接口实现
//初始化不带头结点单链表
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
//单链表尾插
void SListPushBack(SList *plist, ElemType x)
{
	assert(plist!=NULL);

	SListNode *s = _Buynode(x);

	//如果插入的结点为第一个结点
	if (plist->head==NULL)
	{
		plist->head = s;
	}

	SListNode *p = plist->head;
	while (plist->head != NULL)
		p = p->next;
	p->next = s;
}
//显示单链表（不带头结点）
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
//单链表头部插入（不带头结点）
void SListPushFront(SList *plist, ElemType x)
{
	assert(plist!=NULL);

	SListNode *s = _Buynode(x);

	s->next = plist->head;
	plist->head = s;
}
#endif /*_LIST_H_*/

////定义链表的节点（链表的节点）
//typedef struct ListNode
//{
//	int data;
//	struct ListNode *next;
//}ListNode;
//
//typedef ListNode* List;//List就是一个节点类型的指针
//
////单链表不带头结点
////void ListInit(List *plist)
////{
////	*plist = NULL;
////}
//
////单链表带头结点
//void ListInit(List *plist)
//{
//	*plist = (ListNode*)malloc(sizeof(ListNode));
//	assert(*plist!=NULL);
//	(*plist)->next = NULL;
//}
////尾插法创建单链表(不带头结点)
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
////		//连接节点
////		p->next = s;
////		p = s;
////	}
////
////}
//
////尾插法创建单链表(带头结点)
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
//		//连接结点
//		p->next = s;
//		p = s;
//	}
//}
//
////头插法创建单链表(不带头结点)
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
////		//连接节点
////		s->next = (*plist);
////		(*plist) = s;
////	}
////}
//
////头插法创建单链表(带头结点)
//void ListCreat_Head(List *plist)
//{
//	
//}
//
////访问链表(不带头结点)
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
////访问链表(带头结点)
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


