#define _CRT_SECURE_NO_WARNINGS 1

//��ȡһ�������������������е�ż��λ������λ�� 
//�ֱ��������������


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, i;
	printf("������һ������:\n");
	scanf("%d", &num);
	printf("ż������Ϊ:\n");
	for (i = 31; i >= 1; i -= 2)
	{
		if ((num >> i) & 0x1)
		{
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
	printf("��������Ϊ:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		if ((num >> i) & 0x1)
		{
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
	system("pause");
	return 0;
}
