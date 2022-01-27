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
	//存放下棋的数据
	char board[ROW][COL] = { 0 };
	//初始化棋盘为全空格
	init_board(board, ROW, COL);
	//打印棋盘
	display_board(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}

		
}
//玩家赢--'*'
//电脑赢--'#'
//平局--'Q'
//继续--'C'
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
