#define _CRT_SECURE_NO_WARNINGS 1




//дһ���ݹ麯��DigSum(n),����һ���Ǹ����������������������֮�͡�
//���磬����DigSum(1729),��Ӧ�÷���1+7+2+9�����ĺ���19��

#include<stdio.h>
#include<stdlib.h>

int DigSum(int n)
{
	if (n <= 10)
		return 1;
	else
		return n % 10 + DigSum(n / 10);
}
int main()
{
	printf("%d\n", DigSum(1729));
	
	system("pause");
	return 0;
}