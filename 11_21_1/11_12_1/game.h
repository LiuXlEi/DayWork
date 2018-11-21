#define _CRT_SECURE_NO_WARNINGS 1


#ifndef _GAME_H_  
#define _GAME_H_  

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>



#define ROW 3  
#define COL 3  


void InitBorad(char borad[ROW][COL], int row, int col);
void DisplayBorad(char borad[ROW][COL], int row, int col);
void PlayerMove(char borad[ROW][COL], int row, int col);
void ComputerMove(char borad[ROW][COL], int row, int col);
char Iswin(char borad[ROW][COL], int row, int col);
int Isfull(char borad[ROW][COL], int row, int col);


#endif  