#define _CRT_SECURE_NO_WARNINGS 1


//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int PassWord1 = 1234;
	int PassWord2 = 0;
	int i = 0;
	printf("���������룺");
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &PassWord2);
		if (PassWord1 == PassWord2)
		{
			printf("������ȷ\n");
			break;
		}
		

		else if (i == 2)
		{
			printf("���δ����˳�����\n");
			break;
		}
		else 
		{
			printf("�������\n");
			printf("���������룺");

		}
	}
	
	system("pause");
	return 0;
}