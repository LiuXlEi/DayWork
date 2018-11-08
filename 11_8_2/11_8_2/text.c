#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。

/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/


int main()
{
	int a = 0;
	int b = 0; 
	int c = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				sum1 = (a * 100 + b * 10 + c * 1);
				sum2 = (a*a*a + b*b*b + c*c*c);
				if (sum1 == sum2)
				{
					printf("%d\n", sum1);
				}
			}
		}
	}
	system("pause");
	return 0;
}