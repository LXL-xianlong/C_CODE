#ifndef _COMMON_H
#define _COMMON_H

#include<stdio.h>
#include<assert.h>
#include<stdbool.h>


typedef int ElemType;

void Swap(ElemType *a,ElemType *b)
{
	ElemType tmp = *a;
	*a = *b;
	*b = tmp;
}
#endif /*_COMMON_H*/

