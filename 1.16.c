//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d", sum);
//}
//二分查找法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (left - right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//演示代码从两端向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
//int main()
//{
//	//用户登录三次
//	//strcmp专门用于比较字符串
//	char password[20] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码错误三次");
//	}
//	return 0;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("************1play*********\n");
//	printf("************0exit*********\n");
//	printf("**************************\n");
//}
//void game()
//{
//	//生成随机数：rand函数,随机数范围是0-32767
//	//时间戳：c语言提供函数time，可以返回时间戳
//	int ret = rand()%100+1;
//
//	//猜数字游戏
//
//	while (1)
//	{
//		printf("猜数字：>\n");
//		int guess = 0;
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));
//	//猜数字游戏，电脑随机生成数字，玩家猜数字，猜小了告诉猜小了，猜大了告诉猜大了，可以一直玩
//	do
//	{
//		menu();
//		printf("选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("输入错误，重新选择\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
//goto语句
//int main()
//{
//	again:
//	printf("hda\n");
//	goto again;
//	return 0;
//	//跳转传送的作用
//	//goto语句不可以跨函数跳转
//	//跳出循环
//	//比如for(){for(if()goto)}
//}
//int main()
//{
//	//关机程序	
//	//程序运行电脑一分钟内关机，输入字不关机
//
//	return 0;
//}