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

	//��ӡ��������
	for (i = 0; i < len; i++)
	{
		//1.��ӡ����
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
		//2.��ӡ�ָ���(�����β���ӡ)
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
	printf("����ߣ�\n");
	while (1)
	{
		printf("������Ҫ�µ����꣺\n");
		scanf("%d,%d", &x, &y);
		//�ж�x,y�Ϸ���
		if (x >= 1 && x <= len && y >= 1 && y <= wid)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�\n");
			}
		}
		else
		{
			printf("���겻�Ϸ�\n");
		}

	}
}
void ComputerMove(char board[LEN][WID], int len, int wid)
{
	int x = 0;
	int y = 0;
	printf("������\n");
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
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board, LEN, WID))
	{
		return 'p';
	}
	else
		return 't';
}