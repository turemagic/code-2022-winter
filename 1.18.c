#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<string.h>
//void menu()
//{
//	printf("*****************|—————|**************\n");
//	printf("*****************|1play|**************\n");
//	printf("*****************|0exit|**************\n");
//	printf("*****************|—————|**************\n");
//}
//void game()
//{
//	int ret = 0;
//	srand((unsigned)time(NULL));
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("猜数字：\n");
//		int guess = 0;
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//		
//	}
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return 0;
//}
// 