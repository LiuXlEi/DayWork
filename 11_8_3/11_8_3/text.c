#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
//���磺2 + 22 + 222 + 2222 + 22222

int main()
{
	int a = 0;
	int Sn = 0;
	int n = 0;
	int i = 0;
	printf("��������Ҫ�������:\n");
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