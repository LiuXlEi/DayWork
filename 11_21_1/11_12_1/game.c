#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"


void InitBorad(char borad[ROW][COL], int row, int col)
{
	memset(&borad[0][0], ' ', row*col*sizeof(borad[0][0]));
}

void DisplayBorad(char borad[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", borad[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}	
		}
		printf("\n");
	}

}

void PlayerMove(char borad[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：");
	while (1)
	{
		printf("请输入坐标（1—3）：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= (ROW) && y >= 1 && y <= (COL))
		{
			if (borad[x - 1][y - 1] == ' ')
			{
				borad[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("坐标已被占用\n");
			}
		}
		else
		{
			printf("坐标有误！");
		}
	}
}

void ComputerMove(char borad[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:\n");
	srand((unsigned)time(NULL));
	while (1)
	{
		x = (rand() % row);
		y = (rand() % col);
		if (borad[x][y] == ' ')
		{
			borad[x][y] = '0';
			break;
		}
	}
}

char Iswin(char borad[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (borad[i][0] == borad[i][1] && borad[i][1] == borad[i][2] && borad[i][0] != ' ')
		{
			return borad[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (borad[0][i] == borad[1][i] && borad[1][i] == borad[2][i] && borad[0][i] != ' ')
		{
			return borad[0][i];
		}
	}
	if (borad[0][0] == borad[1][1] && borad[1][1] == borad[2][2] && borad[0][0] != ' ')
	{
		return borad[0][0];
	}
	if (borad[2][0] == borad[1][1] && borad[1][1] == borad[0][2] && borad[0][2] != ' ')
	{
		return borad[2][0];
	}
	int let = Isfull(borad, ROW, COL);
	if (let == 1)
	{
		return 'Q';
	}
	return 0;

}

int Isfull(char borad[ROW][COL], int row, int col)
{
	int i = 0, j = 0, count = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (borad[i][j] == ' ')
			{
				count++;
			}
		}
	}
	if (count == 0)
	{
		return 1;
	}
	else
	{
	  return 0;
	}
		
}
