#define _CRT_SECURE_NO_WARNINGS 1


//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832



#include <stdio.h> 
#include <math.h> 
#include<stdlib.h>
int reverse(unsigned int value)
{
	int ret = 0;
	int a = 0;
	int i;
	for (i = 0; i < 32; i++)
	{
		ret = ret << 1; //����һλ������ǰһλ
		a = value & 1; //ȡ�����һλ
		value = value >> 1;//ֵ���ƣ�ȡ��һλ
		ret = a | ret; //���һλ����ret
	}
	return ret;
}
int main()
{
	printf("%u\n", reverse(25));
	system("pause");
	return 0;
}
