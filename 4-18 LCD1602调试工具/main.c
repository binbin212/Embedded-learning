#include <REGX52.H>
#include "lcd1602.h"




void main()
{
	LCD_Init();
	LCD_ShowChar(1,2,'A');
	while(1)
	{}
}