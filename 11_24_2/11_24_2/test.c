#define _CRT_SECURE_NO_WARNINGS 1



//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
			printf("����Ϊ��\n{ 1, 2, 3 }\n{ 4, 5, 6 }\n{ 7, 8, 9 }\n");
			printf("�ҵ���!\n��%d\n", x, y);
			break;
		}
		else if (arr[x][y]<a)
			x++;
		else
			y--;
	}
	if ((x>2) || (y<0))
	{
		printf("�Ҳ�����\n");
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

