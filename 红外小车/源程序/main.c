#include<reg52.h>
#include"motor.h"
#include"BiZhang.h"
#include"Uart.h"


void main()
{
	UART_init();
	while(1)
	{	
		if(bi_zhang!=0)
		{
			XunJi();
		}
		else if(bi_zhang==0 && revbuf!='q')
		{
			Go_Stop();
			while(revbuf!='q')
			{
				Bluetooth();
			}
		}
	}
}

