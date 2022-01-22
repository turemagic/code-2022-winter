#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"
void game() {
	char arr[H][L] = { 0 };
	char arr1[H][L] = { 0 };
	int n;
	printf("扫雷游戏即将开始，敬请期待\n");
	board(arr, H, L);
	playboard(arr, H, L);
	n = 1;
	while (n)
	{
		play(arr, arr1, H, L);
		n = win(arr, H, L);
	}
}
void menu() {
	printf("**********************\n");
	printf("****1.play 0.exit*****\n");
	printf("**********************\n");
}
int main() {
	int n;
	do {
		menu();
	a:
		printf("请选择：");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输出错误，请重新输入\n");
			goto a;
		}
	} while (n);
	return 0;
}