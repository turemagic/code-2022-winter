#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////字符串逆序排列
////void reverse_string(char* arr)
////{
////	char* left = arr;
////	char* right = arr + strlen(arr) - 1;
////	while (left < right)
////	{
////		char tmp = *right;
////		*right = *left;
////		*left = tmp;
////		left++;
////		right--;
////	}
////	printf("%s", arr);
////}
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//	printf("%s",arr);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	return 0;
//}
//计算一个数的每位之和
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//递归实现n的k次方
//int cif(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n * cif(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int k = 9;
//	int ret = cif(n, k);
//	printf("%d", ret);
//	return 0;
//}
//非递归实现求第n个斐波那契数
long long fac(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d", ret);
	return 0;
}