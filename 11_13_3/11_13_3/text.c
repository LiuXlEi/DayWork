#define _CRT_SECURE_NO_WARNINGS 1

//递归分别实现strlen 

#include<stdio.h>
#include<windows.h>
int my_strlen(char *string)
{
	int count = 0;
	if (*string != '\0')
	{
		string++;
		count = 1 + my_strlen(string);
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}
