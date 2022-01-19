//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int BinarySearch(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = left + (right - left) / 2;
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
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinarySearch(arr, k, sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，是%d\n", ret);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int a = 43;
//	printf("%d", printf("%d", printf("%d", a)));
//	return 0;
//}