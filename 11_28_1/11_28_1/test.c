#define _CRT_SECURE_NO_WARNINGS 1


//�ַ����滻�ո� ��ʵ��һ��������
//���ַ������е�ÿ���ո��滻�ɡ���20����
//�������롰we are happy.�����������we%20are%20happy.��


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
	char msg[30] = "we are happy.";//�ٶ��ռ��㹻
	printf("old: %s\n", msg);
	printf("new: %s\n", replace(msg));
	system("pause");
	return 0;

}