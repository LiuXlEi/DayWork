#define _CRT_SECURE_NO_WARNINGS 1
//
//���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d%d", &m, &n);
	for (i = 0; i<32; i++)
	{

		if ((m & 1) != (n & 1))
		{
			count++;
		}
		m = m >> 1;
		n = n >> 1;
	}
	printf("%d", count);
	system("pause");
	return 0;
}
