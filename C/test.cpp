#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("***************************\n");
	printf("**********������***********\n");
	printf("***************************\n");
}
//game �߼�
void game()
{
	char ret = 0;//�ж���Ӯ
	char board[LEN][WID] = { 0 };
	//��ʼ������
	InitBoard(board, LEN, WID);
	//��ӡ����
	DisplayBoard(board, LEN, WID);
	while (1)
	{
		//����
		PlayerMove(board, LEN, WID);
		DisplayBoard(board, LEN, WID);
		ret = IsWin(board, LEN, WID);
		if (ret != 't')
		{
			break;
		}
		//������
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'p')
		printf("ƽ��\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��");
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

