#define _CRT_SECURE_NO_WARNINGS 1

//��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 

#include<stdio.h>
#include<windows.h>
int num(int n, int k)
{
	if (k == 0){
		return 1;
	}
	return n*num(n, k - 1);
}
int main()
{
	int n, k;
	printf("������n��k��ֵ:\n");
	scanf("%d%d", &n, &k);
	printf("ֵΪ:%d\n", num(n, k));
	system("pause");
	return 0;
}
