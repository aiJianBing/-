#ifndef __BIZHANG_H_
#define __BIZHANG_H_

#include"Delay.h"	
#include<reg52.h>
#include"motor.h"

sbit zuofang=P1^0;
sbit youfang=P1^1;
sbit bi_zhang=P1^2;

void BiZhang();
void XunJi();

#endif