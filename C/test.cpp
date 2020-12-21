#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("***************************\n");
	printf("**********三子棋***********\n");
	printf("***************************\n");
}
//game 逻辑
void game()
{
	char ret = 0;//判断输赢
	char board[LEN][WID] = { 0 };
	//初始化棋盘
	InitBoard(board, LEN, WID);
	//打印棋盘
	DisplayBoard(board, LEN, WID);
	while (1)
	{
		//人下
		PlayerMove(board, LEN, WID);
		DisplayBoard(board, LEN, WID);
		ret = IsWin(board, LEN, WID);
		if (ret != 't')
		{
			break;
		}
		//电脑下
		ComputerMove(board, LEN, WID);
		DisplayBoard(board, LEN, WID);
		ret = IsWin(board, LEN, WID);
		if (ret != 't')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'p')
		printf("平局\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("exit\n");
			break;
		default:
			printf("false\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

