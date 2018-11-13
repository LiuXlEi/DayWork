#define _CRT_SECURE_NO_WARNINGS 1

//编写一个函数实现n^k，使用递归实现 

#include<stdio.h>
#include<windows.h>
int num(int n, int k)
{
	if (k == 0){
		return 1;
	}
	return n*num(n, k - 1);
}
int main()
{
	int n, k;
	printf("请输入n与k的值:\n");
	scanf("%d%d", &n, &k);
	printf("值为:%d\n", num(n, k));
	system("pause");
	return 0;
}
