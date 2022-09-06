#ifndef __UART_H_
#define __UART_H_

#define uchar unsigned char
#define uint unsigned int
#include"Delay.h"	
#include<reg52.h>
#include"motor.h"

extern uchar revbuf;
void UART_init(void);
void Bluetooth();

#endif