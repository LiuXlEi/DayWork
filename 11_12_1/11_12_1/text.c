#define _CRT_SECURE_NO_WARNINGS 1




//写一个递归函数DigSum(n),输入一个非负整数，返回组成它的数字之和。
//例如，调用DigSum(1729),则应该返回1+7+2+9，它的和是19。

#include<stdio.h>
#include<stdlib.h>

int DigSum(int n)
{
	if (n <= 10)
		return 1;
	else
		return n % 10 + DigSum(n / 10);
}
int main()
{
	printf("%d\n", DigSum(1729));
	
	system("pause");
	return 0;
}