
#ifndef __GAME_H__
#define __GAME_H__
#define  _CRT_SECURE_NO_WARNINGS 1
#define H 9
#define L 9
#define N 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void game();
void board(char board[H][L], int x, int y);
void playboard(char board[H][L], int x, int y);
void board2(char arr1[H][L], int x, int y, int a, int b);
void play(char arr[H][L], char arr1[H][L], int x, int y);
int win(char arr[H][L], int x, int y);
void clearance(char arr[H][L], char arr1[H][L], int a, int b, int x, int y);
#endif
