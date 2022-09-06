#include"Uart.h"

uchar revbuf='0';
void UART_init(void)
{
		TMOD=0x20;
		TH1=0xfd;
		TL1=0xfd;
		TR1=1;
	
		SM0=0;
		SM1=1;
		REN=1;
		ES =1;
		EA =1;
}
void Bluetooth()
{
	if(revbuf=='a')
			{
				Go_Up();
			}
	if(revbuf=='b')
			{
				Go_Stop();
			}
	while(revbuf=='c')
			{
				Turn_Left();
				Delay_s(50);
			}
	while(revbuf=='d')
			{
				Turn_Right();
				Delay_s(50);
			}
	if(revbuf=='e')
			{
				Go_Down();
			}
}
void uart_isr(void) interrupt 4
	{
		if(RI == 1)
		{
			RI=0;
			revbuf=SBUF;
		}
	}