/**
 * @file snakefunctions.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

void record();
void load();


void Delay(long double);
void Move();
void Food();
int Score();
void Print();
void gotoxy(int x, int y);
void GotoXY(int x,int y);
void Bend();
void Boarder();
void Down();
void Left();
void Up();
void Right();
void ExitGame();
int Scoreonly();

int length;
int bend_no;
int len;
char key;
int life;


#endif