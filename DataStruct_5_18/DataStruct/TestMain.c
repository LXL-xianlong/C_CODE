#define _CRT_SECURE_NO_WARNINGS 1

#include "seqlist.h"
#include"list.h"
//双循环链表测试
int main()
{
	DCList mylist;
	DCListInit(&mylist);
	DCListNode *p;

	ElemType item, key;
	int select = 1;
	int pos = 0;
	while (select)
	{
		printf("*************************************\n");
		printf("*  [1] push_back   [2] push_front   *\n");
		printf("*  [3] show_list   [0] quit_system  *\n");
		printf("*  [4] pop_back    [5] pop_front    *\n");
		printf("*  [*6] insert_pos [7] insert_val   *\n");
		printf("*  [*8] delete_pos [9] delete_val   *\n");
		printf("*  [10] find_val   [11] length      *\n");
		printf("*  [*12] capacity  [13] sort        *\n");
		printf("*  [14] reverse    [15] clear       *\n");
		printf("*  [16] remove_all                  *\n");
		printf("*************************************\n");
		printf("请选择:>");
		scanf("%d", &select);
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			printf("请输入要插入的值[以-1结束]:>");
			while (scanf("%d", &item), item != -1)
			{
				DCListPushBack(&mylist, item);
			}
			break;
		case 2:
			printf("请输入要插入的值[以-1结束]:>");
			while (scanf("%d", &item), item != -1)
			{
				DCListPushFront(&mylist, item);
			}
			break;
		case 3:
			DCListShow(&mylist);
			break;
		case 4:
			DCListPopBack(&mylist);
			break;
		case 5:
			DCListPopFront(&mylist);
			break;
		case 6:
			//链表中无位置可言，因为不连续
			printf("请输入要插入的位置:>");
			scanf("%d", &pos);
			printf("请输入要插入的数据:>");
			scanf("%d", &item);
			//SeqListInsertByPos(&mylist,pos,item);
			break;
		case 7:
			//SeqListSort(&mylist);
			printf("请输入要插入的数据:>");
			scanf("%d", &item);
			DCListInsertByVal(&mylist, item);
			break;
		case 8:
			//链表中无位置可言，因为不连续
			printf("请输入要删除的位置:>");
			scanf("%d", &pos);
			//SeqListDeleteByPos(&mylist,pos);
			break;
		case 9:
			printf("请输入要删除的值:>");
			scanf("%d", &key);
			DCListDeleteByVal(&mylist, key);
			break;
		case 10:
			printf("请输入要查找的值:>");
			scanf("%d", &key);
			p = DCListFind(&mylist, key);
			if (p == NULL)
				printf("要查找的值不存在.\n");
			else
				printf("要查找的值为:%d\n", p->data);
			break;
		case 11:
			printf("length=%d\n", DCListLength(&mylist));
			break;
		case 12:
			//printf("capacity=%d", SeqListCapacity(&mylist));
			break;
		case 13:
			DCListSort(&mylist);
			printf("顺序表排序成功.....\n");
			break;
		case 14:
			DCListReverse(&mylist);
			break;
		case 15:
			DCListClear(&mylist);
			printf("清除数据表成功\n");
			break;
		case 16:
			printf("请输入要删除的值:>");
			scanf("%d", &key);
			//SeqListRemoveAll(&mylist);
			break;
		}
	}
	//程序退出时摧毁链表
	DCListDestroy(&mylist);
	printf("GoodBye....\n");
	return 0;
}



                               //单链表部分
//int main()
//{
//	SList mylist;
//	SListInit(&mylist);
//	SListNode *p;
//
//	ElemType item,key;
//	int select=1;
//	int pos = 0;
//	while (select)
//	{
//		printf("*************************************\n");
//		printf("*  [1] push_back   [2] push_front   *\n");
//		printf("*  [3] show_list   [0] quit_system  *\n");
//		printf("*  [4] pop_back    [5] pop_front    *\n");
//		printf("*  [*6] insert_pos [7] insert_val   *\n");
//		printf("*  [*8] delete_pos [9] delete_val   *\n");
//		printf("*  [10] find_val   [11] length      *\n");
//		printf("*  [*12] capacity  [13] sort        *\n");
//		printf("*  [14] reverse    [15] clear       *\n");
//		printf("*  [16] remove_all                  *\n");
//		printf("*************************************\n");
//		printf("请选择:>");
//		scanf("%d",&select);
//		if (select == 0)
//			break;
//		switch (select)
//		{
//		case 1:
//			printf("请输入要插入的值[以-1结束]:>");
//			while (scanf("%d",&item),item!=-1)
//			{
//				SListPushBack(&mylist,item);
//			}
//			break;
//		case 2:
//			printf("请输入要插入的值[以-1结束]:>");
//			while (scanf("%d", &item), item != -1)
//			{
//				SListPushFront(&mylist, item);
//			}
//			break;
//		case 3:
//			SListShow(&mylist);
//			break;
//		case 4:
//			SListPopBack(&mylist);
//			break;
//		case 5:
//			SListPopFront(&mylist);
//			break;
//		case 6:
//			//链表中无位置可言，因为不连续
//			printf("请输入要插入的位置:>");
//			scanf("%d",&pos);
//			printf("请输入要插入的数据:>");
//			scanf("%d",&item);
//			//SeqListInsertByPos(&mylist,pos,item);
//			break;
//		case 7:
//			SeqListSort(&mylist);
//			printf("请输入要插入的数据:>");
//			scanf("%d",&item);
//			SListInsertByVal(&mylist,item);
//				break;
//		case 8:
//			//链表中无位置可言，因为不连续
//			printf("请输入要删除的位置:>");
//			scanf("%d",&pos);
//			//SeqListDeleteByPos(&mylist,pos);
//				break;
//		case 9:
//			printf("请输入要删除的值:>");
//			scanf("%d",&key);
//			SListDeleteByVal(&mylist,key);
//				break;
//		case 10:
//			printf("请输入要查找的值:>");
//			scanf("%d",&key);
//			p = SeqListFind(&mylist,key);
//			if (p == NULL)
//				printf("要查找的值不存在.\n");
//			else
//				printf("要查找的值为:%d\n",p->data);
//				break;
//		case 11:
//			printf("length=%d", SListLength(&mylist));
//			break;
//		case 12:
//			//printf("capacity=%d", SeqListCapacity(&mylist));
//			break;
//		case 13:
//			SListSort(&mylist);
//			printf("顺序表排序成功.....\n");
//			break;
//		case 14:
//			SListReverse(&mylist);
//			break;
//		case 15:
//			SListClear(&mylist);
//			printf("清除数据表成功\n");
//			break;
//		case 16:
//			printf("请输入要删除的值:>");
//			scanf("%d",&key);
//			//SeqListRemoveAll(&mylist);
//			break;
//		}
//	}
//	//程序退出时摧毁链表
//	SListDestroy(&mylist);
//	printf("GoodBye....\n");
//	return 0;
//}



//void Test_List()
//{
//	List mylist;// 等价于ListNode *mylist
//	ListInit(&mylist);
//	//ListCreat_Tail(&mylist);
//	ListCreat_Head(&mylist);
//	ListShow(mylist);
//}
//void main()
//{
//	Test_List();
//}

                                     //顺序表部分
//int main()
//{
//	SeqList mylist;
//	SeqListInit(&mylist);
//
//	ElemType item,key;
//	int select=1;
//	int pos = 0;
//	while (select)
//	{
//		printf("*************************************\n");
//		printf("*  [1] push_back   [2] push_front   *\n");
//		printf("*  [3] show_list   [0] quit_system  *\n");
//		printf("*  [4] pop_back    [5] pop_front    *\n");
//		printf("*  [6] insert_pos  [7] insert_val   *\n");
//		printf("*  [8] delete_pos  [9] delete_val   *\n");
//		printf("*  [10] find_val   [11] length      *\n");
//		printf("*  [12] capacity   [13] sort        *\n");
//		printf("*  [14] reverse    [15] clear       *\n");
//		printf("*  [16] remove_all                  *\n");
//		printf("*************************************\n");
//		printf("请选择:>");
//		scanf("%d",&select);
//		if (select == 0)
//			break;
//		switch (select)
//		{
//		case 1:
//			printf("请输入要插入的值[以-1结束]:>");
//			while (scanf("%d",&item),item!=-1)
//			{
//				SeqListPushBack(&mylist,item);
//			}
//			break;
//		case 2:
//			printf("请输入要插入的值[以-1结束]:>");
//			while (scanf("%d", &item), item != -1)
//			{
//				SeqListPushFront(&mylist, item);
//			}
//			break;
//		case 3:
//			SeqListShow(&mylist);
//			break;
//		case 4:
//			SeqListPopBack(&mylist);
//			break;
//		case 5:
//			SeqListPopFront(&mylist);
//			break;
//		case 6:
//			printf("请输入要插入的位置:>");
//			scanf("%d",&pos);
//			printf("请输入要插入的数据:>");
//			scanf("%d",&item);
//			SeqListInsertByPos(&mylist,pos,item);
//			break;
//		case 7:
//			SeqListSort(&mylist);
//			printf("请输入要插入的数据:>");
//			scanf("%d",&item);
//			SeqListInsertByVal(&mylist,item);
//				break;
//		case 8:
//			printf("请输入要删除的位置:>");
//			scanf("%d",&pos);
//			SeqListDeleteByPos(&mylist,pos);
//				break;
//		case 9:
//			printf("请输入要删除的值:>");
//			scanf("%d",&key);
//			SeqListDeleteByVal(&mylist,key);
//				break;
//		case 10:
//			printf("请输入要查找的值:>");
//			scanf("%d",&key);
//			pos = SeqListFind(&mylist,key);
//			if (pos == -1)
//				printf("要查找的值不存在.\n");
//			else
//				printf("要查找的值的位置为:%d\n",pos);
//				break;
//		case 11:
//			printf("length=%d", SeqListLength(&mylist));
//			break;
//		case 12:
//			printf("capacity=%d", SeqListCapacity(&mylist));
//			break;
//		case 13:
//			SeqListSort(&mylist);
//			printf("顺序表排序成功.....\n");
//			break;
//		case 14:
//			SeqListReverse(&mylist);
//			break;
//		case 15:
//			SeqListClear(&mylist);
//			printf("清除数据表成功\n");
//			break;
//		case 16:
//			printf("请输入要删除的值:>");
//			scanf("%d",&key);
//			//SeqListRemoveAll(&mylist);
//			break;
//		}
//	}
//	//程序退出时摧毁顺序表
//	SeqListDestroy(&mylist);
//	printf("GoodBye....\n");
//	return 0;
//}
