#ifndef _SEQLIST_H
#define _SEQLIST_H

#include "common.h"

#define SEQLIST_DEFAULT_SIZE 8

//定义顺序表结构
typedef struct SeqList
{
	ElemType *base;
	size_t capacity;
	size_t size;
}SeqList;
//////////////////////////////////////////////
//声明函数接口
void SeqListInit(SeqList *pst);
bool IsFull(SeqList *pst);
bool IsEmpty(SeqList *pst);
void SeqListShow(SeqList *pst);
void SeqListPushBack(SeqList *pst,ElemType x);
void SeqListPushFront(SeqList *pst, ElemType x);
void SeqListInsertByPos(SeqList *pst,int pos,ElemType value);
void SeqListPopBack(SeqList *pst);
void SeqListPopFront(SeqList *pst);
size_t SeqListLength(SeqList *pst);
size_t SeqListCapacity(SeqList *pst);
void SeqListClear(SeqList *pst);
void SeqListDestroy(SeqList *pst);
/////////////////////////////////////////////
//函数接口实现
void SeqListInit(SeqList *pst)
{
	
	//malloc进行动态内存开辟
	pst->base = (ElemType*)malloc(sizeof(ElemType)*SEQLIST_DEFAULT_SIZE);
	assert(pst->base != NULL);//断言内存是否申请成功
	memset(pst->base,0,sizeof(ElemType)*SEQLIST_DEFAULT_SIZE);
	pst->capacity = SEQLIST_DEFAULT_SIZE;
	pst->size = 0;
}

bool IsFull(SeqList *pst)
{return pst->size >= pst->capacity;}
bool IsEmpty(SeqList *pst)
{return pst->size == 0;}

void SeqListPushBack(SeqList *pst, ElemType x)
{
	assert(pst->base != NULL);
	if (IsFull(pst))
	{
		printf("顺序表空间已满，不能插入数据%d\n",x);
		return;
	}
	pst->base[pst->size++] = x;
}

void SeqListShow(SeqList *pst)
{
	assert(pst!=NULL);
	for (size_t i = 0; i < pst->size; i++)
	{
		printf("%d ",pst->base[i]);
	}
	printf("\n");
}

void SeqListPushFront(SeqList *pst, ElemType x)
{
	assert(pst!=NULL);
	if (IsFull(pst))
	{
		printf("顺序表空间已满，不能插入数据%d\n", x);
		return;
	}
	for (size_t pos = pst->size; pos > 0;pos--)
	{
		pst->base[pos] = pst->base[pos - 1];
	}
	pst->base[0] = x;
	pst->size++;
}

void SeqListDestroy(SeqList *pst)
{
	assert(pst!=NULL);
	if (pst->base)
		free(pst->base);
	pst->base = NULL;
	pst->capacity = pst->size = 0;
}

void SeqListPopBack(SeqList *pst)
{
	assert(pst!=NULL);
	if (IsEmpty(pst))
	{
		printf("顺序表已空，不能尾部删除\n");
		return;
	}
	pst->size--;
}
void SeqListPopFront(SeqList *pst)
{
	assert(pst != NULL);
	if (IsEmpty(pst))
	{
		printf("顺序表已空，不能头部删除\n");
		return;
	}
	for (int i = 0; i<pst->size; i++)
		pst->base[i] = pst->base[i + 1];
	pst->size--;
}

size_t SeqListLength(SeqList *pst)
{
	assert(pst!=NULL);
	return pst->size;
}

size_t SeqListCapacity(SeqList *pst)
{
	assert(pst != NULL);
	return pst->capacity;
}

void SeqListClear(SeqList *pst)
{
	assert(pst != NULL);
	pst->size=0;
}

void SeqListInsertByPos(SeqList *pst, ElemType pos, ElemType x)
{
	assert(pst != NULL);
	if (IsFull(pst))
	{
		printf("顺序表空间已满，不能插入数据%d\n", x);
		return;
	}
	if (pos<0 || pos>pst->size)
	{
		printf("要插入数据的位置非法，%d不能插入\n", x);
		return;
	}
	for (int i = pst->size; i > pos;i--)
		pst->base[i] = pst->base[i - 1];
	pst->base[pos] = x;
	pst->size++;
}

#endif /*_SEQLIST_H*/
