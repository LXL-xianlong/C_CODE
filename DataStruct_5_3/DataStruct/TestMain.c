#define _CRT_SECURE_NO_WARNINGS 1

#include "seqlist.h"


int main()
{
	SeqList mylist;
	SeqListInit(&mylist);

	ElemType item;
	int select=1;
	int pos = 0;
	while (select)
	{
		printf("*************************************\n");
		printf("*  [1] push_back   [2] push_front   *\n");
		printf("*  [3] show_list   [0] quit_system  *\n");
		printf("*  [4] pop_back    [5] pop_front    *\n");
		printf("*  [6] insert_pos  [7] insert_val   *\n");
		printf("*  [8] delete_pos  [9] delete_val   *\n");
		printf("*  [10] find_val   [11] length      *\n");
		printf("*  [12] capacity   [13] sort        *\n");
		printf("*  [14] reverse    [16] clear       *\n");
		printf("*************************************\n");
		printf("��ѡ��:>");
		scanf("%d",&select);
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			printf("������Ҫ�����ֵ[��-1����]:>");
			while (scanf("%d",&item),item!=-1)
			{
				SeqListPushBack(&mylist,item);
			}
			break;
		case 2:
			printf("������Ҫ�����ֵ[��-1����]:>");
			while (scanf("%d", &item), item != -1)
			{
				SeqListPushFront(&mylist, item);
			}
			break;
		case 3:
			SeqListShow(&mylist);
			break;
		case 4:
			SeqListPopBack(&mylist);
			break;
		case 5:
			SeqListPopFront(&mylist);
			break;
		case 6:
			printf("������Ҫ�����λ��:>");
			scanf("%d",&pos);
			printf("������Ҫ���������:>");
			scanf("%d",&item);
			SeqListInsertByPos(&mylist,pos,item);
			break;
		case 7:

				break;
		case 8:

				break;
		case 9:

				break;
		case 10:

				break;
		case 11:
			printf("length=%d", SeqListLength(&mylist));
			break;
		case 12:
			printf("capacity=%d", SeqListCapacity(&mylist));
			break;
		case 13:
			
			break;
		case 14:
			
			break;
		case 15:
			
			break;
		case 16:
			SeqListClear(&mylist);
			printf("������ݱ�ɹ�\n");
			break;
		}
	}
	//�����˳�ʱ�ݻ�˳���
	SeqListDestroy(&mylist);
	printf("GoodBye....\n");
	return 0;
}
