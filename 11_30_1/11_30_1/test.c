#define _CRT_SECURE_NO_WARNINGS 1


//��������֮���ж��ٸ�����λ��ͬ


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data1;
	int data2;
	printf("����������Ҫ�Ƚ�����������\n");
	scanf("%d%d", &data1, &data2);
	data1 ^= data2;
	data2 = 0;
	while (data1)
	{
		if (data1 & 1 == 1)
			++data2;
		data1 >>= 1;
	}
	printf("%d\n", data2);
	system("pause");
}
