#define _CRT_SECURE_NO_WARNINGS 1

//���n��쳲����������������������


#include<stdio.h>
#include<stdlib.h>


int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 0; i < n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;

}

int main()
{
	int n = 0;
	printf("����������Ҫ��ģ���n��쳲�������");
	scanf("%d", &n);
	int ret = 0;
	ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


