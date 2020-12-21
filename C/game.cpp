#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>
void InitBoard(char board[LEN][WID], int len, int wid)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < wid; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[LEN][WID], int len, int wid)
{
	int i = 0;

	//打印三组数据
	for (i = 0; i < len; i++)
	{
		//1.打印数据
		int j = 0;
		for (j = 0; j < wid; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < wid - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//2.打印分割行(第三次不打印)
		if (i < len - 1)
		{
			for (j = 0; j < wid; j++)
			{
				printf("---");
				if (j < wid - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[LEN][WID], int len, int wid)
{
	int x = 0;
	int y = 0;
	printf("玩家走：\n");
	while (1)
	{
		printf("请输入要下的坐标：\n");
		scanf("%d,%d", &x, &y);
		//判断x,y合法性
		if (x >= 1 && x <= len && y >= 1 && y <= wid)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用！\n");
			}
		}
		else
		{
			printf("坐标不合法\n");
		}

	}
}
void ComputerMove(char board[LEN][WID], int len, int wid)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % len;
		y = rand() % wid;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int IsFull(char board[LEN][WID], int len, int wid)
{
	int i;
	int j;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < wid; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char IsWin(char board[LEN][WID], int len, int wid)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < wid; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	//判断是否平局
	if (1 == IsFull(board, LEN, WID))
	{
		return 'p';
	}
	else
		return 't';
}