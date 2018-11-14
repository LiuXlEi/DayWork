#define _CRT_SECURE_NO_WARNINGS 1

//创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。



#include<stdio.h>
#include<string.h>
void init(int arr[10])              
{
	int j = 0;
	for (j = 0; j <= 9; j++)
	{
		arr[j] = j;
	}
}
void empty(int arr[10], int SZ)             
{
	memset(arr, 0, SZ*sizeof(arr[0]));
}
void reverse(int arr[10], int SZ)           /
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < SZ / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[SZ - 1 - i];
		arr[SZ - 1 - i] = temp;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int SZ = sizeof(arr) / sizeof(arr[0]);
	empty(arr, SZ);                  
	init(arr);                       
	reverse(arr, SZ);                
	int i = 0;
	return 0;
}

