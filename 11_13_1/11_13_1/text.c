#define _CRT_SECURE_NO_WARNINGS 1

//�ݹ�ʵ�ִ�ӡÿһλ����

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