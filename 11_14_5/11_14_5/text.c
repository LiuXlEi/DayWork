#define _CRT_SECURE_NO_WARNINGS 1

//.ʵ��һ���������ж�һ�����ǲ�������

#include <stdio.h>
#include <windows.h>

int judge_num(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)

			return -1;
	}
	return 0;
}
int main()
{
	int num = 0;
	int ret = 0;

	printf("������һ�����֣�");
	scanf("%d", &num);

	ret = judge_num(num);

	if (ret == 0)
		printf("%d������\n", num);
	else
		printf("%d��������\n", num);

	system("pause");
	return 0;
}
