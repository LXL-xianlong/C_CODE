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
		printf("请选择:>");
		scanf("%d",&select);
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			printf("请输入要插入的值[以-1结束]:>");
			while (scanf("%d",&item),item!=-1)
			{
				SeqListPushBack(&mylist,item);
			}
			break;
		case 2:
			printf("请输入要插入的值[以-1结束]:>");
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
			printf("请输入要插入的位置:>");
			scanf("%d",&pos);
			printf("请输入要插入的数据:>");
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
			printf("清除数据表成功\n");
			break;
		}
	}
	//程序退出时摧毁顺序表
	SeqListDestroy(&mylist);
	printf("GoodBye....\n");
	return 0;
}
