#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////�ݹ������������е�ÿһλ	
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);//priint���԰�num��ÿһλ��˳���ӡ����
//
//
//	return 0;
//}
//��������ʱ�������ַ�������
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	
//		return 1 + my_strlen(str + 1);
//	
//	else 
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcd";
//	
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int fib(int n)
//{
//	if (n >= 2)
//		return 1;
//	else()
//}
//int strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + strlen(str + 1);
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = strlen(p);
//	printf("%d", len);
//	return 0;
//}
//��n�Ľ׳�
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fac(n);
//	printf("%d", ret);
//
//	return 0;
//}
//���n��쳲�������
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n); 
//	printf("%d,count=%d", ret,count);
//	return 0;
//}int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n); 
//	printf("%d,count=%d", ret,count);
//	return 0;
//}

//��������Ч��
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}