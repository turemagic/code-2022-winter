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
		printf("�����룺");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			goto again;
		}
	} while (input);
	return 0;
}