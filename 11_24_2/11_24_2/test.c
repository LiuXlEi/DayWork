#define _CRT_SECURE_NO_WARNINGS 1



//杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9



#include<stdio.h>  


void YMatrix(int arr[3][3], int a, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while ((x <= 2) && (y >= 0))
	{
		if (arr[x][y] == a)
		{
			printf("数组为：\n{ 1, 2, 3 }\n{ 4, 5, 6 }\n{ 7, 8, 9 }\n");
			printf("找到了!\n是%d\n", x, y);
			break;
		}
		else if (arr[x][y]<a)
			x++;
		else
			y--;
	}
	if ((x>2) || (y<0))
	{
		printf("找不到了\n");
	}

}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int a = 9;
	YMatrix(arr, a, 3, 3);
	system("pause");
	return 0;
}

