#ifndef _STACK_H
#define _STACK_H

#include"common.h"
////////////////////////////////////////////////////////
//顺序栈
#define SEQ_STACK_DEFAULT_SIZE 8
#define SEQ_STACK_INC_SIZE 3 //扩容增加3
//创建顺序栈结构
typedef struct SeqStack
{
	ElemType *base;
	size_t capacity;
	int top;
}SeqStack;

void SeqStackInit(SeqStack *pst);
bool SeqStackIsFull(SeqStack *pst);
bool SeqStackIsEmpty(SeqStack *pst);
void SeqStackPush(SeqStack *pst,ElemType x);
void SeqStackPop(SeqStack *pst);
void SeqStackPrint(SeqStack *pst);
ElemType SeqStackTop(SeqStack *pst);
static bool _StInc(SeqStack *pst);//增加成功返回ture,失败返回false.
void SeqStackDestory(SeqStack *pst);

void SeqStackInit(SeqStack *pst)
{
	pst->base = (ElemType*)malloc(sizeof(ElemType)*SEQ_STACK_DEFAULT_SIZE);//动态开辟空间
	assert(pst->base!=NULL);//判断是否开辟成功
	pst->capacity = SEQLIST_DEFAULT_SIZE;//给出容量大小
	pst->top = 0;
}
//判断顺序栈是否已满
bool SeqStackIsFull(SeqStack *pst)
{
	assert(pst!=NULL);
	return pst->top >= pst->capacity;
}
////判断顺序栈是否为空
bool SeqStackIsEmpty(SeqStack *pst)
{
	assert(pst != NULL);
	return pst->top == 0;
}
//顺序栈入栈
void SeqStackPush(SeqStack *pst, ElemType x)
{
	assert(pst!=NULL);
	if (SeqStackIsFull(pst) && !_StInc(pst))
	{
		printf("栈空间已满，%d不能入栈",x);
		return;
	}
	pst->base[pst->top++] = x;
}
//打印顺序栈
void SeqStackPrint(SeqStack *pst)
{
	assert(pst!=NULL);
	for (int i = pst->top - 1; i >= 0; i--)
		printf("%d\n",pst->base[i]);
	printf("\n");
}
//顺序栈出栈
void SeqStackPop(SeqStack *pst)
{
	assert(pst!=NULL);
	if (SeqStackIsEmpty(pst))
	{
		printf("栈空间已空，不能出栈");
		return;
	}
	pst->top--;
}
//获取顺序栈栈顶元素
ElemType SeqStackTop(SeqStack *pst)
{
	assert(pst != NULL);
	if (SeqStackIsEmpty(pst))
	{
		printf("栈空间已空，不能获取栈顶元素.\n");
		return;
	}
	return pst->base[pst->top-1];
}

//顺序栈扩容
static bool _StInc(SeqStack *pst)
{
	ElemType *new_base = (ElemType*)realloc(pst->base, sizeof(ElemType)*(pst->capacity + SEQ_STACK_INC_SIZE));//扩容增加3
	if (new_base == NULL)
		return false;
	pst->base = new_base;
	pst->capacity += 3;
	return true;
}
//顺序栈的摧毁
void SeqStackDestory(SeqStack *pst)
{
	assert(pst!=NULL);
	free(pst->base);
	pst->base = NULL;
	pst->capacity = pst->top = 0;
}
///////////////////////////////////////////////////////
//链栈
//定义链栈结点结构
typedef struct LinkStackNode
{
	ElemType data;
	struct LinkStackNode *link;//link即为next
}LinkStackNode;
//创建链栈结构
typedef struct LinkStack
{
	LinkStackNode *top;
}LinkStack;

void LinkStackInit(LinkStack *pst);
void LinkStackPush(LinkStack *pst, ElemType x);
void LinkStackPop(LinkStack *pst);
void LinkStackPrint(LinkStack *pst);
ElemType LinkStackTop(LinkStack *pst);
void LinkStackDestory(LinkStack *pst);

//初始化链栈
void LinkStackInit(LinkStack *pst)
{
	pst->top = NULL;
}
//链栈入栈
void LinkStackPush(LinkStack *pst, ElemType x)
{
	assert(pst!=NULL);
	LinkStackNode *node = (LinkStackNode*)malloc(sizeof(LinkStackNode));//购买结点
	assert(node!=NULL);
	node->data = x;
	node->link = pst->top;
	pst->top = node;
}
//链栈出栈
void LinkStackPop(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode *p = pst->top;
	pst->top = p->link;
	free(p);
}
//打印链栈
void LinkStackPrint(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode *p = pst->top;
	while (p!=NULL)
	{
		printf("%d\n",p->data);
		p = p->link;
	}
	printf("\n");
}
//获取链栈栈顶元素
ElemType LinkStackTop(LinkStack *pst)
{
	assert(pst!=NULL);
	if (pst->top == NULL)
	{
		printf("栈已空，不能出栈\n");
		return;
	}
	return pst->top->data;
}
//链栈的摧毁
void LinkStackDestory(LinkStack *pst)
{
	assert(pst != NULL);
	while (pst->top!=NULL)
	{
		LinkStackNode *p = pst->top;
		pst->top = p->link;
		free(p);
	}
}
#endif /*_STACK_H*/

