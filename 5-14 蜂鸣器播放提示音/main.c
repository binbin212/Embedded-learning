#include <REGX52.H>
#include "Delay.h"
#include "key.h"
#include "Nixie.h"
#include "buzzer.h"

sbit Buzzer=P0^6;

unsigned char KeyNum;


void main()
{
	
	while(1)
	{
		KeyNum=Key();
		if(KeyNum)
		{
			Buzzer_Time(5);
		}
	}
}