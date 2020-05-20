#ifndef _STACK_H
#define _STACK_H

#include"common.h"
////////////////////////////////////////////////////////
//˳��ջ
#define SEQ_STACK_DEFAULT_SIZE 8
#define SEQ_STACK_INC_SIZE 3 //��������3
//����˳��ջ�ṹ
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
static bool _StInc(SeqStack *pst);//���ӳɹ�����ture,ʧ�ܷ���false.
void SeqStackDestory(SeqStack *pst);

void SeqStackInit(SeqStack *pst)
{
	pst->base = (ElemType*)malloc(sizeof(ElemType)*SEQ_STACK_DEFAULT_SIZE);//��̬���ٿռ�
	assert(pst->base!=NULL);//�ж��Ƿ񿪱ٳɹ�
	pst->capacity = SEQLIST_DEFAULT_SIZE;//����������С
	pst->top = 0;
}
//�ж�˳��ջ�Ƿ�����
bool SeqStackIsFull(SeqStack *pst)
{
	assert(pst!=NULL);
	return pst->top >= pst->capacity;
}
////�ж�˳��ջ�Ƿ�Ϊ��
bool SeqStackIsEmpty(SeqStack *pst)
{
	assert(pst != NULL);
	return pst->top == 0;
}
//˳��ջ��ջ
void SeqStackPush(SeqStack *pst, ElemType x)
{
	assert(pst!=NULL);
	if (SeqStackIsFull(pst) && !_StInc(pst))
	{
		printf("ջ�ռ�������%d������ջ",x);
		return;
	}
	pst->base[pst->top++] = x;
}
//��ӡ˳��ջ
void SeqStackPrint(SeqStack *pst)
{
	assert(pst!=NULL);
	for (int i = pst->top - 1; i >= 0; i--)
		printf("%d\n",pst->base[i]);
	printf("\n");
}
//˳��ջ��ջ
void SeqStackPop(SeqStack *pst)
{
	assert(pst!=NULL);
	if (SeqStackIsEmpty(pst))
	{
		printf("ջ�ռ��ѿգ����ܳ�ջ");
		return;
	}
	pst->top--;
}
//��ȡ˳��ջջ��Ԫ��
ElemType SeqStackTop(SeqStack *pst)
{
	assert(pst != NULL);
	if (SeqStackIsEmpty(pst))
	{
		printf("ջ�ռ��ѿգ����ܻ�ȡջ��Ԫ��.\n");
		return;
	}
	return pst->base[pst->top-1];
}

//˳��ջ����
static bool _StInc(SeqStack *pst)
{
	ElemType *new_base = (ElemType*)realloc(pst->base, sizeof(ElemType)*(pst->capacity + SEQ_STACK_INC_SIZE));//��������3
	if (new_base == NULL)
		return false;
	pst->base = new_base;
	pst->capacity += 3;
	return true;
}
//˳��ջ�Ĵݻ�
void SeqStackDestory(SeqStack *pst)
{
	assert(pst!=NULL);
	free(pst->base);
	pst->base = NULL;
	pst->capacity = pst->top = 0;
}
///////////////////////////////////////////////////////
//��ջ
//������ջ���ṹ
typedef struct LinkStackNode
{
	ElemType data;
	struct LinkStackNode *link;//link��Ϊnext
}LinkStackNode;
//������ջ�ṹ
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

//��ʼ����ջ
void LinkStackInit(LinkStack *pst)
{
	pst->top = NULL;
}
//��ջ��ջ
void LinkStackPush(LinkStack *pst, ElemType x)
{
	assert(pst!=NULL);
	LinkStackNode *node = (LinkStackNode*)malloc(sizeof(LinkStackNode));//������
	assert(node!=NULL);
	node->data = x;
	node->link = pst->top;
	pst->top = node;
}
//��ջ��ջ
void LinkStackPop(LinkStack *pst)
{
	assert(pst != NULL);
	LinkStackNode *p = pst->top;
	pst->top = p->link;
	free(p);
}
//��ӡ��ջ
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
//��ȡ��ջջ��Ԫ��
ElemType LinkStackTop(LinkStack *pst)
{
	assert(pst!=NULL);
	if (pst->top == NULL)
	{
		printf("ջ�ѿգ����ܳ�ջ\n");
		return;
	}
	return pst->top->data;
}
//��ջ�Ĵݻ�
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

