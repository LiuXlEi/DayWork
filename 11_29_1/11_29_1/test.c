#define _CRT_SECURE_NO_WARNINGS 1

//ÿƿ��ˮ1Ԫ��������ƿ�����û�һƿ��ˮ�� ������20Ԫ������ܺȶ���ƿ��ˮ�������ʵ�֣���

#include<stdio.h>
#include<stdlib.h>
int huanshui(int bottle)
{
	int number = bottle;
	int num = 0;
	while (number>1)
	{
		num += number / 2;
		number = number / 2 + number % 2;

	}
	return num;
}
int main()
{
	int ret = huanshui(20);
	printf("%d\n", ret);
	system("pause");
}

