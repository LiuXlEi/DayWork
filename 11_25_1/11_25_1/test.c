#define _CRT_SECURE_NO_WARNINGS 1


//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
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
		ret = ret << 1; //左移一位，保存前一位
		a = value & 1; //取出最后一位
		value = value >> 1;//值右移，取下一位
		ret = a | ret; //最后一位赋给ret
	}
	return ret;
}
int main()
{
	printf("%u\n", reverse(25));
	system("pause");
	return 0;
}
