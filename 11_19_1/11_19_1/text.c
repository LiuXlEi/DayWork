#define _CRT_SECURE_NO_WARNINGS 1


//����Ļ�ϴ�ӡ������ǡ� 
//   1
//  1 1
// 1 2 1
//1 3 3 1


#include <stdio.h>
#include <stdlib.h>


int triangle(int i, int j)
{
	if (j == 1 || j == i + 1)
	{
		return 1;
	}
	return triangle(i - 1, j - 1) + triangle(i - 1, j);
}

int main()
{
	int i;
	int j;
	int n;

	printf("����������Ҫ��������\n");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		for (j = 1; j <= i + 1; j++)
		{
			printf("  ");
			printf("%d ", triangle(i, j));
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

