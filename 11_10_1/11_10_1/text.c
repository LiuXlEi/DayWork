#define _CRT_SECURE_NO_WARNINGS 1


//接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4.

#include <stdio.h>

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
	int num = 1234;
	print(num);
	system("pause");
	return 0;
	
}