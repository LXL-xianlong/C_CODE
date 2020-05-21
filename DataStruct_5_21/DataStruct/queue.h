#ifndef _QUEUE_H_
#define _QUEUE_H_

#include"common.h"
////////////////////////////////////////////////
#define SEQ_QUEUE_DEFAULT_SIZE 8
//1.顺序队列
//创建顺序队列结构
typedef struct SeqQueue
{
	ElemType *base;
	int capacity;
	int front;
	int rear;
}SeqQueue;

void SeqQueueInit(SeqQueue *psq);
bool SeqQueueIsFull(SeqQueue *psq);
bool SeqQueueIsEmpty(SeqQueue *psq);
void SeqQueueEnque(SeqQueue *psq,ElemType x);
void SeqQueueDeque(SeqQueue *psq);
ElemType SeqQueueFront(SeqQueue *psq);
void SeqQueuePrint(SeqQueue *psq);

//顺序队列的初始化
void SeqQueueInit(SeqQueue *psq)
{
	assert(psq != NULL);
	psq->base = (ElemType*)malloc(sizeof(ElemType)*SEQ_QUEUE_DEFAULT_SIZE);//动态申请空间
	assert(psq->base!=NULL);
	psq->capacity = SEQ_QUEUE_DEFAULT_SIZE;
	psq->front = psq->rear = 0;
}
bool SeqQueueIsFull(SeqQueue *psq)
{
	assert(psq != NULL);
	return psq->rear >= psq->capacity;
}
bool SeqQueueIsEmpty(SeqQueue *psq)
{
	assert(psq != NULL);
	return psq->front == psq->rear;
}
void SeqQueueEnque(SeqQueue *psq, ElemType x)
{
	assert(psq != NULL);
	if (SeqQueueIsFull(psq))
	{
		printf("队列已满，%d不能入队.\n",x);
		return;
	}
	psq->base[psq->rear++]=x;
}
void SeqQueueDeque(SeqQueue *psq)
{
	assert(psq != NULL);
	if (SeqQueueIsEmpty(psq))
	{
		printf("队列已空，不能出队.\n");
		return;
	}
	psq->front++;
}
ElemType SeqQueueFront(SeqQueue *psq)
{
	assert(psq != NULL);
	if (SeqQueueIsEmpty(psq))
	{
		printf("队列已空，不能取队列头元素.\n");
		return;
	}
	return psq->base[psq->front];
}
void SeqQueuePrint(SeqQueue *psq)
{
	assert(psq != NULL);
	for (int i = psq->front; i < psq->rear; i++)
		printf("%d ",psq->base[i]);
	printf("\n");
}
//2.循环队列
#define CIRCLE_QUEUE_DEFAULT_SIZE 8
//创建顺序队列结构
typedef struct CIRCLEQueue
{
	ElemType *base;
	int capacity;
	int front;
	int rear;
}CIRCLEQueue;

void CIRCLEQueueInit(CIRCLEQueue *psq);
bool CIRCLEQueueIsFull(CIRCLEQueue *psq);
bool CIRCLEQueueIsEmpty(CIRCLEQueue *psq);
void CIRCLEQueueEnque(CIRCLEQueue *psq, ElemType x);
void CIRCLEQueueDeque(CIRCLEQueue *psq);
ElemType CIRCLEQueueFront(CIRCLEQueue *psq);
void CIRCLEQueuePrint(CIRCLEQueue *psq);


void CIRCLEQueueInit(CIRCLEQueue *psq)
{
	assert(psq != NULL);
	psq->base = (ElemType*)malloc(sizeof(ElemType)*(CIRCLE_QUEUE_DEFAULT_SIZE+1));//动态申请空间
	assert(psq->base != NULL);
	psq->capacity = CIRCLE_QUEUE_DEFAULT_SIZE+1;
	psq->front = psq->rear = 0;
}
bool CIRCLEQueueIsFull(CIRCLEQueue *psq)
{
	assert(psq != NULL);
	return ((psq->rear + 1) % psq->capacity) == psq->front;
}
bool CIRCLEQueueIsEmpty(CIRCLEQueue *psq)
{
	assert(psq != NULL);
	return psq->front == psq->rear;
}
void CIRCLEQueueEnque(CIRCLEQueue *psq, ElemType x)
{
	assert(psq != NULL);
	if (CIRCLEQueueIsFull(psq))
	{
		printf("队列已满，%d不能入队.\n", x);
		return;
	}
	psq->base[psq->rear] = x;
	psq->rear = (psq->rear + 1) % psq->capacity;
}
void CIRCLEQueueDeque(CIRCLEQueue *psq)
{
	assert(psq != NULL);
	if (CIRCLEQueueIsEmpty(psq))
	{
		printf("队列已空，不能出队.\n");
		return;
	}
	psq->front=(psq->front+1)%psq->capacity;
}
ElemType CIRCLEQueueFront(CIRCLEQueue *psq)
{
	assert(psq != NULL);
	if (CIRCLEQueueIsEmpty(psq))
	{
		printf("队列已空，不能取队列头元素.\n");
		return;
	}
	return psq->base[psq->front];
}
void CIRCLEQueuePrint(CIRCLEQueue *psq)
{
	assert(psq != NULL);
	for (int i = psq->front; i != psq->rear;)
	{
		printf("%d ", psq->base[i]);
		i = (i + 1) % psq->capacity;
	}
	printf("\n");
}
////////////////////////////////////////////////
//链式队列

#endif/*_QUEUE_H_*/
