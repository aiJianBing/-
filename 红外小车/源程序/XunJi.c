#include"BiZhang.h"

void XunJi()
{	
	if(zuofang==1&&youfang==1)
	{
		Go_Stop();
		Delay_s(20);
	}
	if(zuofang==0&&youfang==0&&bi_zhang!=0)
	{
		Go_Up();
	}
	if(zuofang==1&&youfang==0)
	{
		if(zuofang==1&&youfang==1)
		{
		Go_Stop();
		Delay_s(20);
		}
		Go_Down();
		Delay_s(30);
		Turn_Left();
		Delay_s(120);
	}
	if(zuofang==0&&youfang==1)
	{
		Go_Down();
		Delay_s(30);
		if(zuofang==1&&youfang==1)
		{
		Go_Stop();
		Delay_s(20);
		}
		Turn_Right();
		Delay_s(120);
	}

}