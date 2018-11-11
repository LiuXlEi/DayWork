#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数判断year是不是闰年。


#include <stdio.h>
#include<stdlib.h>


void is_leap_year(n){
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
		printf("是闰年\n");
	}
	else{
		printf("不是闰年\n");
	}
}
int main(){
	int n = 0;
	scanf("%d", &n);
	is_leap_year(n);
	system("pause");
	return 0;
}
