#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
void menu()
{
	
	printf("***********************************************\n");
	printf("*************************1play*****************\n");
	printf("*************************0exit*****************\n");
	printf("***********************************************\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("������\n");
		int guess = 0;
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
		
	}
}
int main()
{
	int input = 0;

	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������");
		}
	} while (input);
	return 0;
}
