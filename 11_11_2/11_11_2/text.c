#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

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
