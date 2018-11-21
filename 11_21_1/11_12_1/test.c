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
	char borad[ROW][COL] = { 0 };//��ʼ����ά���飬����9*9������ռ�
	char ret = 0;
	InitBorad(borad, ROW, COL);//��ʼ������
	DisplayBorad(borad, ROW, COL);//��ӡ����
	while(1)
	{
		PlayerMove(borad,ROW,COL);//�����
		DisplayBorad(borad, ROW, COL);//��ӡ����
		ComputerMove(borad, ROW, COL);//������
		DisplayBorad(borad, ROW, COL);//��ӡ����
		char ret = Iswin(borad, ROW, COL);//�ж���Ӯ
	    if (ret == 'X')
		{
			printf("���Ӯ�ˣ�\n");
			break;
		}
		else if (ret == '0')
		{
			printf("����Ӯ�ˣ�\n");
			break;
		}
		else if (ret == 'Q')
		{
			printf("ƽ�֣�\n");
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
		printf("��ѡ��ʼ��Ϸ�����˳���\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			printf("��Ϸ��ʼ!\n");
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
