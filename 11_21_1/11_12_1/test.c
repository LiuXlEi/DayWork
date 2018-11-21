#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include"game.h"

void menu()
{
	printf("************************************\n");
	printf("************************************\n");
	printf("**********    1.play     ***********\n");
	printf("**********               ***********\n");
	printf("**********    0.exit     ***********\n");
	printf("************************************\n");
	printf("************************************\n");

};


void game()
{
	char borad[ROW][COL] = { 0 };//初始化二维数组，建立9*9的数组空间
	char ret = 0;
	InitBorad(borad, ROW, COL);//初始化棋盘
	DisplayBorad(borad, ROW, COL);//打印棋盘
	while(1)
	{
		PlayerMove(borad,ROW,COL);//玩家走
		DisplayBorad(borad, ROW, COL);//打印棋盘
		ComputerMove(borad, ROW, COL);//电脑走
		DisplayBorad(borad, ROW, COL);//打印棋盘
		char ret = Iswin(borad, ROW, COL);//判断输赢
	    if (ret == 'X')
		{
			printf("玩家赢了！\n");
			break;
		}
		else if (ret == '0')
		{
			printf("电脑赢了！\n");
			break;
		}
		else if (ret == 'Q')
		{
			printf("平局！\n");
			break;
		}

	
	}
};


void test()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择开始游戏或者退出：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏！\n");
			break;
		case 1:
			printf("游戏开始!\n");
			game();
			break;
		default:
			break;
		}
	} while (input);


};



int main()
{
	test();
	system("pause");
	return 0;
}
