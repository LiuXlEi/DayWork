#define _CRT_SECURE_NO_WARNINGS 1


//字符串替换空格： 请实现一个函数，
//把字符数组中的每个空格替换成“％20”。
//例如输入“we are happy.”，则输出“we%20are%20happy.”


#include<stdio.h>
#include<stdlib.h>
#include <assert.h>


char *replace(char *str)
{
	assert(str);
	char *start = str;
	int space_num = 0;
	int len = 0;
	while (*start)
	{
		if (*start == ' ')
			space_num++;
		start++;
		len++;
	}
	char*next = str + len + space_num * 2;

	while (start != str)
	{

		if (*start == ' ')
		{
			*next-- = '0';
			*next-- = '2';
			*next-- = '%';
			start--;
		}
		*next = *start;
		next--;
		start--;
	}
	return next;
}
int main()
{
	char msg[30] = "we are happy.";//假定空间足够
	printf("old: %s\n", msg);
	printf("new: %s\n", replace(msg));
	system("pause");
	return 0;

}