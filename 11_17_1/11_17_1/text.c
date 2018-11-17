#define _CRT_SECURE_NO_WARNINGS 1

//获取一个数二进制序列中所有的偶数位和奇数位， 
//分别输出二进制序列


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, i;
	printf("请输入一个数字:\n");
	scanf("%d", &num);
	printf("偶数序列为:\n");
	for (i = 31; i >= 1; i -= 2)
	{
		if ((num >> i) & 0x1)
		{
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
	printf("奇数序列为:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		if ((num >> i) & 0x1)
		{
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
	system("pause");
	return 0;
}
