#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
void menu() {
	printf("*********************\n");
	printf("**1.play  0.exit*****\n");
	printf("*********************\n");
}
int main() {
	int input;
	do {
		menu();
	again:
		printf("请输入：");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			goto again;
		}
	} while (input);
	return 0;
}