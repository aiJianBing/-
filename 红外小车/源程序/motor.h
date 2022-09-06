#ifndef __MOTOR_H_
#define __MOTOR_H_

#include<reg52.h>
#include"Delay.h"
#define uchar unsigned char
#define uint unsigned int
void Go_Stop();
void Turn_Left();
void Turn_Right();
void Go_Up();
void Go_Down();

sbit La=P0^0;
sbit Lb=P0^1;
sbit Ra=P0^3;
sbit Rb=P0^2;

#endif