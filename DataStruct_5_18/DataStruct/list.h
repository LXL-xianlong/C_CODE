#ifndef _LIST_H_
#define _LIST_H_

#include"common.h"
//////////////////////////////////////////////////////////////////////////////////
//带头双循环链表
//定义双循环结点类型
typedef struct DCListNode
{
	ElemType data;
	struct DCListNode *next;
	struct DCListNode *prev;
}DCListNode;
//定义双循环链表结构
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
//购买结点
static DCListNode* _Buydcnode(ElemType x)
{
	DCListNode *s = (DCListNode*)malloc(sizeof(DCListNode));
	assert(s!=NULL);
	s->data = x;
	s->next = s->prev = s;
	return s;
}
//初始化双循环链表
void DCListInit(DCList *plist)
{
	plist->head = _Buydcnode(0);
}
//双链表尾插
void DCListPushBack(DCList *plist,ElemType x)
{
	DCListNode *s = _Buydcnode(x);

	s->prev = plist->head->prev;
	s->prev->next = s;
	s->next = plist->head;
	plist->head->prev = s;
}
//双链表头插
void DCListPushFront(DCList *plist, ElemType x)
{
	DCListNode *s = _Buydcnode(x);
	//自己写的
	plist->head->prev = s;
	s->next = plist->head->next;
	plist->head->next = s;
	s->prev = plist->head->prev;
	//讲解的
	/*s->next = plist->head->next;
	s->prev = plist->head;
	s->next->prev = s;
	plist->head->next = s;*/
}
//双循环链表的显示方法
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
//双循环链表尾部删除
void DCListPopBack(DCList *plist)
{
	DCListNode *p = plist->head->prev;//让指针指到最后一个位置；
	if (p == plist->head)
	{
		printf("链表为空，无法删除.\n");
		return;
	}
	plist->head->prev = p->prev;
	p->prev->next = plist->head;

	free(p);
}

//双循环链表头部删除
void DCListPopFront(DCList *plist)
{
	DCListNode *p = plist->head->next;//让指针指到第一个元素位置；
	if (p == plist->head)
	{
		printf("链表为空，无法删除.\n");
		return;
	}
	plist->head->next = p->next;
	p->next->prev = plist->head;

	free(p);
}
//查找函数
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
//双循环链表长度
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
//清空双循环链表
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
//摧毁双循环链表
void DCListDestroy(DCList *plist)
{
	DCListClear(plist);
	free(plist->head);//用于释放头结点
	plist->head = NULL;
}
//双循环链表按值删除
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
//双循环链表按值插入
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
//双循环链表完成转置
void DCListReverse(DCList *plist)
{
	assert(plist!=NULL);
	DCListNode *p = plist->head->next;
	DCListNode *q = p->next;

	//断开链表
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
//双循环链表排序
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
		//寻找p的插入位置
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
//无头单向非循环链表
//定义无头单向非循环链表结点
//typedef struct SListNode
//{
//	ElemType data;
//	struct SListNode *next;
//}SListNode;
//
////定义无头单向非循环链表结构
//typedef struct SList
//{
//	SListNode *head;
//}SList;
//
//////////////////////////////////////////////////////////////
////单链表函数接口声明
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
////单链表函数接口实现
////初始化不带头结点单链表
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
////单链表尾插
//void SListPushBack(SList *plist, ElemType x)
//{
//	assert(plist!=NULL);
//
//	SListNode *s = _Buynode(x);
//
//	//如果插入的结点为第一个结点
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
////显示单链表（不带头结点）
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
////单链表头部插入（不带头结点）
//void SListPushFront(SList *plist, ElemType x)
//{
//	assert(plist!=NULL);
//
//	SListNode *s = _Buynode(x);
//
//	s->next = plist->head;
//	plist->head = s;
//}
////单链表尾部删除
//void SListPopBack(SList *plist)
//{
//	assert(plist!=NULL);
//	SListNode *p;
//	if (plist->head == NULL)
//		return;
//	 p = plist->head;
//
//	//当链表只有一个结点时
//	if (p->next == NULL)
//	{
//		free(p);
//		plist->head = NULL;
//		return;
//	}
//	//至少两个结点时
//	while (p->next->next != NULL)
//		p = p->next;
//	free(p->next);
//	p->next = NULL;
//}
////单链表的摧毁
//void SListDestroy(SList *plist)
//{
//	SListClear(plist);
//	plist->head = NULL;
//}
////单链表的清除
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
////单链表头部删除
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
////单链表长度
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
////单链表按值查找
//SListNode *SeqListFind(SList *plist, ElemType key)
//{
//	assert(plist != NULL);
//	SListNode *p = plist->head;
//	while (p != NULL && p->data != key)
//		p = p->next;
//	return p;
//}
////单链表按值删除
//void SListDeleteByVal(SList *plist, ElemType key)
//{
//	assert(plist!=NULL);
//	SListNode *prev = NULL;
//	SListNode *p = SeqListFind(plist,key);
//
//	if (p == NULL)
//	{
//		printf("要删除的结点不存在.\n");
//		return;
//	}
//	//判断是否找到的是第一个结点(特殊处理)
//	if (p == plist->head)
//		plist->head = p->next;
//	else
//	{
//		prev = plist->head;
//		while (prev->next != p)
//			prev = prev->next;
//		//删除结点
//		prev->next = p->next;
//	}
//	free(p);
//}
////单链表转置操作
//void SListReverse(SList *plist)
//{
//	assert(plist != NULL);
//	SListNode *p = plist->head->next;
//	SListNode *q;
//	if (p->next == NULL)
//		return;
//	//断开第一个结点
//	plist->head->next = NULL;
//	while (p != NULL)
//	{
//		q = p->next;
//		p->next = plist->head;
//		plist->head = p;
//	}
//}
////单链表按值插入
//void SListInsertByVal(SList *plist, ElemType x)
//{
//	assert(plist!=NULL);
//	SListNode *prev = NULL;
//	SListNode *p = plist->head;
//	SListNode *s = _Buynode(x);
//
//	//判断要插入的位置
//	while (p!=NULL && x>p->data)
//	{
//		prev = p;
//		p = p->next;
//	}
//	if (prev == NULL)//需进行头插
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
////单链表排序
//void SListSort(SList *plist)
//{
//	assert(plist != NULL);
//	SListNode *p = plist->head->next;
//	SListNode *q, *t, *prev = NULL;
//
//	plist->head->next = NULL;//断开链表
//	t = plist->head;
//	while (p != NULL)
//	{
//		q = p->next;
//		//把p结点摘除进行按值插入，升序
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
//////定义链表的节点（链表的节点）
////typedef struct ListNode
////{
////	int data;
////	struct ListNode *next;
////}ListNode;
////
////typedef ListNode* List;//List就是一个节点类型的指针
////
//////单链表不带头结点
//////void ListInit(List *plist)
//////{
//////	*plist = NULL;
//////}
////
//////单链表带头结点
////void ListInit(List *plist)
////{
////	*plist = (ListNode*)malloc(sizeof(ListNode));
////	assert(*plist!=NULL);
////	(*plist)->next = NULL;
////}
//////尾插法创建单链表(不带头结点)
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
//////		//连接节点
//////		p->next = s;
//////		p = s;
//////	}
//////
//////}
////
//////尾插法创建单链表(带头结点)
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
////		//连接结点
////		p->next = s;
////		p = s;
////	}
////}
////
//////头插法创建单链表(不带头结点)
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
//////		//连接节点
//////		s->next = (*plist);
//////		(*plist) = s;
//////	}
//////}
////
//////头插法创建单链表(带头结点)
////void ListCreat_Head(List *plist)
////{
////	
////}
////
//////访问链表(不带头结点)
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
//////访问链表(带头结点)
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


