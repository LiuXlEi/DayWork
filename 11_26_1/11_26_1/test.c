#define _CRT_SECURE_NO_WARNINGS 1

//
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//


#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <assert.h>
void reverse_arr(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

char* reverse(char arr[])
{
	int len = strlen(arr);
	char *start = arr;
	char *end = NULL;
	char *ret = arr;
	reverse_arr(arr, arr + len - 1);//逆序整个字符串
	while (*arr)
	{
		start = arr;
		while ((*arr != ' ') && (*arr != '\0'))
		{
			arr++;
		}
		//找到空格
		end = arr - 1;
		reverse_arr(start, end);//逆序单个单词
		if (*arr == ' ')
			arr++;
	}
	return ret;
}
int main()
{
	char arr[] = "student a am i";
	//i ma a tneduts
	//i ma a student
	printf("%s\n", reverse(arr));
	system("pause");
	return 0;
}
