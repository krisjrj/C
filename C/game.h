#define _CRT_SECURE_NO_WARNINGS 1
#define LEN  3
#define WID  3
#include<stdlib.h>
#include<time.h>
//º¯ÊýÉùÃ÷
void InitBoard(char board[LEN][WID], int len, int wid);
void DisplayBoard(char board[LEN][WID], int len, int wid);
void PlayerMove(char board[LEN][WID], int len, int wid);
void ComputerMove(char board[LEN][WID], int len, int wid);
char IsWin(char board[LEN][WID], int len, int wid);