#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row;i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//随机生成雷的坐标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//判断此坐标有没有雷
		if (mine[x][y]=='0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] +
		mine[x - 1][y-1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}
//void OpenRound(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int x,int y,int win)
//{
//	//对坐标周围8个坐标各自周围的8个坐标进行找雷判断
//	int i = 0;
//	int j = 0;
//	for (i = x - 1; i <= x + 1;i++)
//	{
//		for (j = y - 1; j <= y + 1;j++)
//		{
//			if (GetMineCount(mine, i, j)==0)
//			{
//				int m = 0;
//				int n = 0;
//				for (m = i - 1; m <= i + 1; i++)
//				{
//					for (n = j - 1; j <= j + 1;j++)
//					{
//						show[m][n] = '0';
//						//win++;
//						//OpenRound(mine, show, ROW, COL, m, n, win);
//					}
//				}
//			}
//			else
//				show[i][j] = GetMineCount(mine, i, j)+'0';
//		}
//	}
//}

void OpenRound(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int win)
{
	int i = 0;
	int j = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (i >= 1 && i <= row && j >= 1 && j <= col)
			{
				if (GetMineCount(mine, i, j) == 0)
				{
					OpenRound(mine, show, row, col, i, j, win);
					show[i][j] = '0';
					win++;
				}
				else
					show[i][j] = GetMineCount(mine, i, j) + '0';
			}
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<=row*col-EASY_COUNT)
	{
		printf("请输入排查雷的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y]=='1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine,row,col);
				break;
			}
			else
			{
				int count = GetMineCount(mine,x,y);
				
				//判断一下count是否为0，是0则放入该坐标周围雷的个数后递归展开周围坐标，
				//不是0则直接将count放入坐标内并显示show
				if (count==0)
				{
					OpenRound(mine,show,row,col,x,y,win);
					DisplayBoard(show, row, col);
				}
				else
					show[x][y] = count + '0';//放入该坐标周围雷的个数
				//system("cls");//打印前清除原本打印信息
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标有误，请重新输入！\n");
		}
	}
	if (win==row*col-EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
	}

}