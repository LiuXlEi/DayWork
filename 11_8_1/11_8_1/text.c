#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>


//����Ļ�����һ������

//�������ֵlineд����

int main()
{
	int i = 0;
	int line = 0;
	int j = 0;
	printf("������������ֵ�������󳤶�line��\n");
	scanf("%d", &line);
	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= line - i ; j++)
		{
			printf(" ");
		}
		for (j = 1; j < 2 * i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < line; i++)
	{
		for (j = 1; j <= i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - i)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}





//���������д��
//int main()
//{
//	char arr1[] = "    *    ";
//	char arr2[] = "*********";
//	char arr3[] = "         ";
//	int mid = strlen(arr1)/2;
//	int left = mid - 1;
//	int right = mid + 1;
//	int i = 0;
//	printf("%s\n", arr1);
//	for (i = 0; i<mid;i++)
//	{
//		Sleep(1000);
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left--;
//		right++;
//		printf("%s\n", arr1);
//	}
//	for (i = 0; i<= mid;i++)
//	{
//		
//		left++;
//		right--;
//		Sleep(1000);
//		arr2[left] = arr3[left];
//		arr2[right] = arr3[right];
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}
//
