#define _CRT_SECURE_NO_WARNINGS 1

//��дһ�����򣬿���һֱ���ռ����ַ��� 
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������


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
