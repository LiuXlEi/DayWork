#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <time.h>
/*
�� C ����дһ���򵥵�ɨ����Ϸ
*/
// 1.дһ����Ϸ�˵� Menu()
// 2.��ʼ��Ϸ
// 1.��ʼ����ά���� Init_Interface()
// 2.��ӡ��Ϸ���� Print_Interface()
// 3.�������ָ��λ�� Play() --> ָ���������꣨�жϺϷ��ԣ�
// 1.�жϸ�λ���Ƿ�����
// 2.�ж��Ƿ��Ƶ����пյ�
// 3.����ƿ����ǿյأ����жϸÿյ���Χ�Ƿ�����
// 1.�����Χ���ף���ͳ����Χ�׵ĸ���
// 2.�����Χû���ף����ƿ���Χ�����׵����пյأ�����ͳ�����ƿ��յ���Χ�׵ĸ���
// 4.���µ�ͼ
// 5.���� 3 ��ѭ��

//����ȫ�ֱ�����
//����ɨ�׵�ͼ�ĳ��Ϳ�
#define MAX_ROW 9
#define MAX_COL 9
//����Ĭ�ϵ�����
#define DEFAULT_MINE 9
//����������ά���飬�ֱ��ų�ʼ��ͼ������
char show_map[MAX_ROW + 2][MAX_COL + 2];
char mine_map[MAX_ROW + 2][MAX_COL + 2];

//дһ����Ϸ�˵�
int Menu() {
	printf("=========\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("=========\n");
	printf("��ѡ����Ϸ�˵�ѡ��:");
	int choice = 0;
	while (1) {
		scanf("%d", &choice);
		if (choice != 0 && choice != 1) {
			printf("������������, ����������\n");
			continue;
		}
		break;
	}
	return choice;
}

//��ʼ��Ϸ
//��ʼ������
void Init_Interface() {
	for (int row = 0; row < MAX_ROW + 2; row++) {
		for (int col = 0; col < MAX_COL + 2; col++) {
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW + 2; row++) {
		for (int col = 0; col < MAX_COL + 2; col++) {
			mine_map[row][col] = '0';
		}
	}
	int mine_count = DEFAULT_MINE;
	while (mine_count > 0) {
		int row = rand() % MAX_ROW + 1;
		int col = rand() % MAX_COL + 1;
		if (mine_map[row][col] == '1') { //��������Ϊ 1
			//�˴��Ѿ�����
			continue;
		}
		mine_count--;
		mine_map[row][col] = '1';
	}
}
//��ӡ��ʼ����
void Print_Interface(char map[MAX_ROW + 2][MAX_COL + 2]) {
	printf("    ");
	for (int col = 1; col <= MAX_COL; col++) {
		printf("%d ", col);
	}
	printf("\n    ");
	for (int col = 1; col <= MAX_COL; col++) {
		printf("--");
	}
	printf("\n");
	for (int row = 1; row <= MAX_ROW; row++) {
		printf("%02d |", row);
		for (int col = 1; col <= MAX_COL; col++) {
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
//дһ��ͳ����Χ���������ĺ���
int Around_Mine_count(int row, int col) {
	return	(mine_map[row - 1][col - 1] - '0'
		+ mine_map[row - 1][col] - '0'
		+ mine_map[row - 1][col + 1] - '0'
		+ mine_map[row][col - 1] - '0'
		+ mine_map[row][col + 1] - '0'
		+ mine_map[row + 1][col - 1] - '0'
		+ mine_map[row + 1][col] - '0'
		+ mine_map[row + 1][col + 1] - '0');
}
//дһ���жϸ�λ����Χ�Ƿ����׵ĺ���
int No_Mine(int row, int col) {
	if (Around_Mine_count(row, col) == 0) {
		return 1;
	}
	return 0;
}
//дһ���ƿ���λ����Χ�յصĺ���
void Open_Blank(int row, int col) {
	show_map[row - 1][col - 1] = '0' + Around_Mine_count(row - 1, col - 1);
	show_map[row - 1][col] = '0' + Around_Mine_count(row - 1, col);
	show_map[row - 1][col + 1] = '0' + Around_Mine_count(row - 1, col + 1);
	show_map[row][col - 1] = '0' + Around_Mine_count(row, col - 1);
	show_map[row][col + 1] = '0' + Around_Mine_count(row, col + 1);
	show_map[row + 1][col - 1] = '0' + Around_Mine_count(row + 1, col - 1);
	show_map[row + 1][col] = '0' + Around_Mine_count(row + 1, col);
	show_map[row + 1][col + 1] = '0' + Around_Mine_count(row + 1, col + 1);
}
//дһ���ж���Ϸ�����ĺ���
int Success_Sweep(char show_map[MAX_ROW + 2][MAX_COL + 2]) {
	int count = 0;
	for (int row = 1; row <= MAX_ROW; row++) {
		for (int col = 1; col <= MAX_COL; col++) {
			if (show_map[row][col] == '*') {
				count++;
			}
		}
	}
	if (count == DEFAULT_MINE) {
		return 1;
	}
	return 0;
}
//��ʼ��Ϸ
void StartGame() {
	while (1) {
		printf("��������Ҫ�ƿ�������:");
		int row = 0;
		int col = 0;
		while (1) {
			scanf("%d %d", &row, &col);
			if (row < 1 || row > MAX_ROW || col < 1 || col > MAX_COL) {
				printf("����������������������!\n");
				continue;
			}
			if (show_map[row][col] != '*') {
				printf("��λ���ѱ��ƿ���������ѡ��\n");
				continue;
			}
			break;
		}
		//�жϸõط��Ƿ�����
		if (mine_map[row][col] == '1') {
			Print_Interface(mine_map);
			printf("�õط����ף���Ϸ����!!!\n");
			break;
		}
		if (No_Mine(row, col)) {
			show_map[row][col] = '0';
			Open_Blank(row, col);
		}
		show_map[row][col] = '0' + Around_Mine_count(row, col);
		//�ж��Ƿ��ƿ����пյ�
		if (Success_Sweep(show_map) == 1) {
			Print_Interface(mine_map);
			printf("���ѳɹ�ɨ��!!!\n");
			break;
		}
		system("cls");
		//���µ�ͼ
		Print_Interface(show_map);
	}
}

int main() {
	if (Menu() == 0) {
		exit(0);
	}
	srand((unsigned int)time(NULL));
	Init_Interface();
	Print_Interface(show_map);
	StartGame();

	system("pause");
	return 0;
}
