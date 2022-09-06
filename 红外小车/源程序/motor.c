#include"motor.h"

void Go_Up()
{
	La=1;
	Lb=0;
	Ra=1;
	Rb=0;
}
void Turn_Right()
{
	La=1;
	Lb=0;
	Ra=0;
	Rb=1;
}
void Turn_Left()
{
	La=0;
	Lb=1;
	Ra=1;
	Rb=0;
}
void Go_Stop()
{
	La=0;
	Lb=0;
	Ra=0;
	Rb=0;
}
void Go_Down()
{
	La=0;
	Lb=1;
	Ra=0;
	Rb=1;
}