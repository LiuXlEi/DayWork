#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//ʵ�ֶ��ֲ���

int binary_search(int arr[], int k, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;//�ҵ�
		}
	}
	return -1;//�Ҳ���
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//�۰����,���ֲ���
	int ret = 0;
	int k = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	ret = binary_search(arr, k, left, right);
	if (ret == -1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ���,�±���:%d\n", ret);
	system("pause");
	return 0;
}


