#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void mlu(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{	
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d", j, i, i * j);
		}
	printf("\n");
    }
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	mlu(n);
	return 0;
}