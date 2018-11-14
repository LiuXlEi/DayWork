#define _CRT_SECURE_NO_WARNINGS 1


//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int PassWord1 = 1234;
	int PassWord2 = 0;
	int i = 0;
	printf("请输入密码：");
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &PassWord2);
		if (PassWord1 == PassWord2)
		{
			printf("输入正确\n");
			break;
		}
		

		else if (i == 2)
		{
			printf("三次错误，退出程序\n");
			break;
		}
		else 
		{
			printf("输入错误\n");
			printf("请输入密码：");

		}
	}
	
	system("pause");
	return 0;
}