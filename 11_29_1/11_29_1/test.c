#define _CRT_SECURE_NO_WARNINGS 1

//每瓶汽水1元，两个空瓶可以置换一瓶汽水， 现在有20元，最多能喝多少瓶汽水。（编程实现）。

#include<stdio.h>
#include<stdlib.h>
int huanshui(int bottle)
{
	int number = bottle;
	int num = 0;
	while (number>1)
	{
		num += number / 2;
		number = number / 2 + number % 2;

	}
	return num;
}
int main()
{
	int ret = huanshui(20);
	printf("%d\n", ret);
	system("pause");
}

