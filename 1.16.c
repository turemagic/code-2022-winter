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
//���ֲ��ҷ�
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
//		printf("�Ҳ���");
//	}
//	return 0;
//}
//��ʾ������������м���
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
//	//�û���¼����
//	//strcmpר�����ڱȽ��ַ���
//	char password[20] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("������ȷ");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������");
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
//	//�����������rand����,�������Χ��0-32767
//	//ʱ�����c�����ṩ����time�����Է���ʱ���
//	int ret = rand()%100+1;
//
//	//��������Ϸ
//
//	while (1)
//	{
//		printf("�����֣�>\n");
//		int guess = 0;
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));
//	//��������Ϸ����������������֣���Ҳ����֣���С�˸��߲�С�ˣ��´��˸��߲´��ˣ�����һֱ��
//	do
//	{
//		menu();
//		printf("ѡ��>");
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
//			printf("�����������ѡ��\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
//goto���
//int main()
//{
//	again:
//	printf("hda\n");
//	goto again;
//	return 0;
//	//��ת���͵�����
//	//goto��䲻���Կ纯����ת
//	//����ѭ��
//	//����for(){for(if()goto)}
//}
//int main()
//{
//	//�ػ�����	
//	//�������е���һ�����ڹػ��������ֲ��ػ�
//
//	return 0;
//}