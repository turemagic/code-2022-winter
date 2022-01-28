#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

//≥ı ºªØ∆Â≈Ã
void init_board(char arr[ROWS][COLS], int rows, int cols, char set);
//¥Ú”°∆Â≈Ã
void show_board(char mine[ROWS][COLS],int row,int col);
//≤º÷√¿◊
void set_mine(char mine[ROWS][COLS], int row, int col);
//≈≈≤È¿◊
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);