#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int a = 0;
	int Sn = 0;
	int n = 0;
	int i = 0;
	printf("请输入想要计算的数:\n");
	scanf("%d", &a);
	for (i = 0; i < 5; i++)
	{
		n = n * 10 + a;
		Sn = Sn+n;
	}
	printf("Sn= %d /n", Sn);
	system("pause");
	return 0;
}