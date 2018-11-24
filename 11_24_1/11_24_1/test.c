#define _CRT_SECURE_NO_WARNINGS 1

//
//调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。


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