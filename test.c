#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"
void game() {
	char arr[H][L] = { 0 };
	char arr1[H][L] = { 0 };
	int n;
	printf("ɨ����Ϸ������ʼ�������ڴ�\n");
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
		printf("��ѡ��");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("�����������������\n");
			goto a;
		}
	} while (n);
	return 0;
}