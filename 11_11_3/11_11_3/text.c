#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�������ж�year�ǲ������ꡣ


#include <stdio.h>
#include<stdlib.h>


void is_leap_year(n){
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
		printf("������\n");
	}
	else{
		printf("��������\n");
	}
}
int main(){
	int n = 0;
	scanf("%d", &n);
	is_leap_year(n);
	system("pause");
	return 0;
}
