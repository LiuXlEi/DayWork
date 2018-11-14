#define _CRT_SECURE_NO_WARNINGS 1

//.实现一个函数，判断一个数是不是素数

#include <stdio.h>
#include <windows.h>

int judge_num(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)

			return -1;
	}
	return 0;
}
int main()
{
	int num = 0;
	int ret = 0;

	printf("请输入一个数字：");
	scanf("%d", &num);

	ret = judge_num(num);

	if (ret == 0)
		printf("%d是素数\n", num);
	else
		printf("%d不是素数\n", num);

	system("pause");
	return 0;
}
