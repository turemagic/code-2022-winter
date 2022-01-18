#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i=1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//			i++;
//	}
//	
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("s2");
//		break;
//	case 2:
//		printf("s23");
//		break;
//	case 3:
//		printf("s3");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i,j,k, x, y, z, j1, j2;
//	scanf("%d %d %d", &i, &j, &k);
//	x = (i >= j) ? i : j;
//	j1 = x;
//	y = (i <= j) ? i : j;
//	j2 = y;
//	x = (x >= k) ? x : k;
//	z = (j1 <= k) ? j1 : k;
//	y = (y >= z) ? y : z;
//	z = (j2 <= z) ? j2 : z;
//	printf("%d %d %d", x, y, z);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d", i);
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 0; i < 9; i++)
//		for (j = 0; j < 9; j++)
//			printf("i*j=%d\n", i * j);
//	return 0;
//}
//
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-4d", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//
//}
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int max = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	//输入数据
//	max = a[0];
//	for (i = 1; i <= 9; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("最大值为%d", max);
//	return 0;
//}
/*
思路：
1. 从上述表达式可以分析出
   a. 该表达式主要由100项，基数项为正，偶数项为负
2. 设置一个循环从1~100，给出表达式中的每一项：1.0/i, 注意此处不能使用1，否则结果全部为0
	然后使用flag标记控制奇偶项，奇数项为正，偶数项为负
	然后将所有的项相加即可
*/
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int j = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += j * 1.0 / i;
//		j = j;
//	}
//	printf("%lf\n", sum);
////	return 0;
////}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int fuhao = 1;
//	for (i = 1; i < 100; i++)
//	{
//		sum += fuhao * 1.0 / i;
//		fuhao = -fuhao;
//	}
//	printf("%1f\n", sum);
//	return 0;
//}.
/*
int main()
{
	int i = 0;
	int a[100];
	int j;
	for (i = 1; i <= 100; i++)
	{
		a[i - 1] = i;
	}
	i = 0;
	while (i < 100)
	{
		if (a[i] % 10 == 9)
			j++;
		if (a[i] / 10 == 9)
			j++;
	}
	printf("%d", j);
	return 0;
}*/
/*
思路：
1. 给一个循环从1遍历到100，拿到每个数据后进行一下操作
2.  a. 通过%的方式取当前数据的个位，检测个位数据是否为9
		 如果是，给计数器加1
	b. 通过/的方式取当前数据的十位，检测十位数据是否是9，
		  如果是，给计数器加1
  循环一直继续，直到所有的数据检测完，所有9的个数已经统计在count计数中。
*/
/*
思路：
1. 给一个循环从1遍历到100，拿到每个数据后进行一下操作
2.  a. 通过%的方式取当前数据的个位，检测个位数据是否为9
		 如果是，给计数器加1
	b. 通过/的方式取当前数据的十位，检测十位
	*/
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			j++;
//		if (i / 10 == 9)
//			j++;
//	}
//	printf("%d\n", j);
//	return 0;
//
	//int main()
	//{
	//	int i = 0;
	//	int count = 0;


	//	// 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
	//	for (i = 101; i <= 200; i++)
	//	{
	//		//判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
	//		int j = 0;
	//		for (j = 2; j < i; j++)
	//		{
	//			if (i % j == 0)
	//			{
	//				break;
	//			}
	//		}

	//		// 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
	//		if (j == i)
	//		{
	//			count++;
	//			printf("%d ", i);
	//		}
	//	}


	//	printf("\ncount = %d\n", count);
	//	return 0;
	//}


	////上述方法的缺陷：超过i一半的数据，肯定不是i的倍数，上述进行了许多没有意义的运算，因此可以采用如下
	//// 方式进行优化
	//// 方法二：每拿到一个数据，只需要检测其：[2, i/2]区间内是否有元素可以被2i整除即可，可以说明i不是素数
	//int main()
	//{
	//	int i = 0;//
	//	int count = 0;


	//	for (i = 101; i <= 200; i++)
	//	{
	//		//判断i是否为素数
	//		//2->i-1
	//		int j = 0;
	//		for (j = 2; j <= i / 2; j++)
	//		{
	//			if (i % j == 0)
	//			{
	//				break;
	//			}
	//		}
	//		//...
	//		if (j > i / 2)
	//		{
	//			count++;
	//			printf("%d ", i);
	//		}
	//	}




	//	printf("\ncount = %d\n", count);
	//	return 0;
	//}


	///*
	//方法二还是包含了一些重复的数据，再优化：
	//如果i能够被[2, sqrt(i)]之间的任意数据整除，则i不是素数
	//原因：如果 m 能被 2 ~ m-1 之间任一整数整除，其二个因子必定有一个小于或等于sqrt(m)，另一个大于或等于 sqrt(m)。
	//*/
	//int main()
	//{
	//	int i = 0;
	//	int count = 0;


	//	for (i = 101; i <= 200; i++)
	//	{
	//		//判断i是否为素数
	//		//2->i-1
	//		int j = 0;
	//		for (j = 2; j <= sqrt(i); j++)
	//		{
	//			if (i % j == 0)
	//			{
	//				break;
	//			}
	//		}
	//		//...
	//		if (j > sqrt(i))
	//		{
	//			count++;
	//			printf("%d ", i);
	//		}
	//	}


	//	printf("\ncount = %d\n", count);
	//	return 0;
	//}


	////方法4
	///*
	//继续对方法三优化，只要i不被[2, sqrt(i)]之间的任何数据整除，则i是素数，但是实际在操作时i不用从101逐渐递增到200，因为出了2和3之外，不会有两个连续相邻的数据同时为素数
	//*/


	//int main()
	//{
	//	int i = 0;
	//	int count = 0;


	//	for (i = 101; i <= 200; i += 2)
	//	{
	//		//判断i是否为素数
	//		//2->i-1
	//		int j = 0;
	//		for (j = 2; j <= sqrt(i); j++)
	//		{
	//			if (i % j == 0)
	//			{
	//				break;
	//			}
	//		}
	//		//...
	//		if (j > sqrt(i))
	//		{
	//			count++;
	//			printf("%d ", i);
	//		}
	//	}

	//	printf("\ncount = %d\n", count);
	//	return 0;
	//}
	//int main()
	//{
	//	int i = 0;//
	//	int count = 0;
	//	for (i = 101; i <= 200; i++)
	//	{
	//		int j = 0;
	//		for (j = 2; j <= i / 2; j++)
	//		{
	//			if (i % j == 0)
	//			{
	//				break;
	//			}
	//		}
	//		if (j > i / 2)
	//		{
	//			count++;
	//			printf("%d ", i);
	//		}
	//	}
	//	return 0;
	//}
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//		}
//	}
// 
//	return 0;
//}
/*
最大公约数：即两个数据中公共约数的最大者。
求解的方式比较多，暴力穷举、辗转相除法、更相减损法、Stein算法算法
此处主要介绍：辗转相除法


思路：
例子：18和24的最大公约数
第一次：a = 18  b = 24  c = a%b = 18%24 = 18
	  循环中：a = 24   b=18
第二次：a = 24   b = 18  c = a%b = 24%18 = 6
	  循环中：a = 18   b = 6


第三次：a = 18   b = 6   c=a%b = 18%6 = 0
  循环结束

此时b中的内容即为两个数中的最大公约数。
*/


int main()
{
	int a = 20;
	int b = 40;
	int c = 0;

	while (c = a % b)
	{
		a = b;
		b = c;
	}

	printf("%d\n", b);
	return 0;
}