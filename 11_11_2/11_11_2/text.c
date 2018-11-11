#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

#include <stdio.h>
#include<stdlib.h>
void print(int row){
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++){
		for (j = 1; j <= i; j++){

			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}

}
int main(){
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}
