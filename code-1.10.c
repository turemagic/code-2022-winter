#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int jia(int x, int y)
{
	return x + y;
}
int jian(int x, int y)
{
	return x - y;
}
int cheng(int x, int y)
{
	return x * y;
}
int chu(int x, int y)
{
	return x / y;
}
int main()
{

	printf("**********************************************************\n");
	printf("������\n");
	printf("**********************************************************\n");
	printf("�����������1\n");
	printf("�����������2\n");
	printf("�����������3\n");
	printf("�����������4\n");
	printf("�˳�����������5\n");
	
	int i = 0;
	int a = 0;
	int b = 0;
	scanf("%d,%d,%d",&i, &a, &b);
	int he;
	int cha;
	int ji;
	int shang;
	he = jia(a, b);
	cha = jian(a, b);
	ji = cheng(a, b);
	shang = chu(a, b);

	if (i == 1)
	{
		printf("%d", he);
	}
	if(i == 2)
	{
		printf("%d", cha);
	}
    if(i == 3)
	{
		printf("%d", ji);
	}
	if(i == 4)
	{
		printf("%d", shang);
	}



	

	return 0;
}