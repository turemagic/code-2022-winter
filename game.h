#define _CRT_SECURE_NO_WARNINGS
#ifndef __GAME_H__
#define __GAME_H__
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define H 3
#define L 3
void menu();
void game();
void board(char arr[H][L], int x, int y);
void printfboard(char arr[H][L], int x, int y);
void play(char arr[H][L], int x, int y);
void computerplay(char arr[H][L], int x, int y);
char win(char arr[H][L], int x, int y);
#endif

