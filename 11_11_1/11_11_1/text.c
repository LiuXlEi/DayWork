#define _CRT_SECURE_NO_WARNINGS 1

//编写一个程序，可以一直接收键盘字符， 
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。


#include "stdio.h"
#include "windows.h"
int main()
{
	int c;
	int tmp;
	while ((c = getchar()) != EOF){
		if (c >= 'a'&& c <= 'z')
		{
			tmp = c - 32;
			printf("%c\n", tmp);
		}
		else if (c >= 'A'&& c <= 'Z')
		{
			tmp = c + ('a' - 'A');
			printf("%c\n", tmp);
		}
		else{
		}
	}
	system("pause");
}
