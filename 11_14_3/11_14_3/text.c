#define _CRT_SECURE_NO_WARNINGS 1


//猜数字游戏


#include<stdio.h>

#include<time.h>
#include<stdlib.h>
void meau()
{
	printf("**************************\n");
	printf("***1.play    2.exit    ***\n");
	printf("**************************\n");

}
void game()
{
	int a = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜一个数字\n");
		scanf_s("%d", &a);
		if (a > ret)
		{
			printf("猜大了\n");
		}
		else if (a < ret)
		{
			printf("猜小了\n");

		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	meau();
	printf("请选择：\n");
	int i = 0;
    scanf_s("%d", &i);
	switch (i)
	{
	case 1:
		game();
		break;
	case 2:
		printf("游戏结束\n");
		break;
	default:
		printf("请重新选择\n");
		break;

	}
	system("pause");
	return 0;
}
