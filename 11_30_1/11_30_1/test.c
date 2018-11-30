#define _CRT_SECURE_NO_WARNINGS 1


//求两个数之间有多少个比特位不同


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data1;
	int data2;
	printf("请输入你想要比较两个的数字\n");
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
