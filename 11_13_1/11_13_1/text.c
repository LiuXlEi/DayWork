#define _CRT_SECURE_NO_WARNINGS 1

//递归实现打印每一位整数

#include <stdio.h>
#include<stdlib.h>

void print(int n)
{
	if (n>9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);

}

int main()
{
	print(1234);
	printf("\n");
	system("pause");
	return 0;


}
