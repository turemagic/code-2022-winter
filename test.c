#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************************************\n");
	printf("****************  1.play  ********************\n");
	printf("****************  0.exit  ********************\n");
	printf("**********************************************\n");
}
void game()
{
	char ret = 0;
	//������������
	char board[ROW][COL] = { 0 };
	//��ʼ������Ϊȫ�ո�
	init_board(board, ROW, COL);
	//��ӡ����
	display_board(board, ROW, COL);
	while (1)
	{
		//�������
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}

		
}
//���Ӯ--'*'
//����Ӯ--'#'
//ƽ��--'Q'
//����--'C'
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
