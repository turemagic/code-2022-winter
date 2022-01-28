#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************************************\n");
	printf("*****************   1. play   ****************\n");
	printf("*****************   0. exit   ****************\n");
	printf("**********************************************\n");
}
void game()
{
	//ʵ��ɨ����Ϸ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');
	//��ӡ����
	//print_board(mine, ROW, COL);
	// ������
	set_mine(mine, ROW, COL);
	show_board(show, ROW, COL);
	//�Ų���
	find_mine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}