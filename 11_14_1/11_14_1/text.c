#define _CRT_SECURE_NO_WARNINGS 1

//д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

#include<stdio.h>
#include<windows.h>


int Find(int X, int Y, int key, int *p)
{
	int mid = (X + Y) / 2;
	while ((X <= Y) && (*(p + mid) != key))
	{
		mid = (X + Y) / 2;
		{
			if (*(p + mid)> key)
				Y = mid - 1;
			else if (*(p + mid) < key)
				X = mid + 1;
			else if (*(p + mid) == key)
				return mid;
		}
	}
	while ((X > Y) && (*(p + mid) != key))
	{
		return -1;
	}
	system("pause");
	return 0;
}
int main()
{
	int arr[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int a = 0;
	int lift = 0;
	int right = sizeof(arr) / sizeof(arr[0]);


	printf("������Ҫ���ҵ����֣�");
	scanf("%d", &a);
	while (Find(lift, right, a, arr) != -1)
	{
		printf("�ҵ���,�±���%d\n", Find(lift, right, a, arr));
		break;
	}
	while (Find(lift, right, a, arr) == -1)
	{
		printf("�Ҳ���\n");
		break;
	}
	system("pause");
	return 0;
}
