#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

#define ROW 3
#define COL 3

void menu();
void game();

//��ʼ������
void init_board(char board[ROW][COL], int row, int col);

//��ӡ����
void display_board(char board[ROW][COL], int row, int col);

//�������
void player_move(char board[ROW][COL], int row, int col);

//��������
void computer_move(char board[ROW][COL], int row,int col);

//�ж���Ӯ
char is_win(char board[ROW][COL], int row,int col);