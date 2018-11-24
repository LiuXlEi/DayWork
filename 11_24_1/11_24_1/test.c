#define _CRT_SECURE_NO_WARNINGS 1

//
//��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�


#include<stdio.h>
#include<Windows.h>

void  Revise(int* arr, int x)
{
	int a = 0, b = x - 1;
	while (a < b)
	{
		if (arr[a] % 2 == 0 && arr[b] % 2 == 1)
		{
			int tmp = arr[a];
			arr[a] = arr[b];
			arr[b] = tmp;
			a++, b--;
		}
		if (arr[a] % 2 == 1)
			a++;
		if (arr[b] % 2 == 0)
			b--;
	}
}
int main()
{
	int arr[10] = { 19, 12, 56, 48, 13, 44, 25, 22, 58, 63 };
	int x = sizeof(arr) / sizeof(int);
	Revise(arr, x);

	for (int i = 0; i < x; ++i)
		printf("%d   ", arr[i]);
	system("pause");
	return 0;
}