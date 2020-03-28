#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"

void menu()
{
	printf("************************\n");
	printf("*** 欢迎来到扫雷游戏 ***\n");
	printf("*****   1.play     *****\n");
	printf("*****   0.exit     *****\n");
	printf("************************\n");
}
void game()
{
	//雷的信息存储
	//1.存放布置好的雷的信息
	char mine[ROWS][COLS] ={ 0 };//'0'-不是雷
	//2.存放排查出的雷的信息
	char show[ROWS][COLS] = {0};//'*'-神秘-未排查
	//初始化mine 和 show
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine,show,ROW,COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入选项（1 or 0）：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择出错，请重新选择！\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}