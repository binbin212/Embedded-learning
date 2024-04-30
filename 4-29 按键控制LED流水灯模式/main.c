#include <REGX52.H>
#include "Key.h"
#include "Timer0.h"
#include <INTRINS.H>


unsigned char KeyNum,LEDMode;

void main()
{
	P2=0xFE;
	Timer0_Init();
	while(1)
	{
		KeyNum=Key();
		if(KeyNum){
			if(KeyNum==1)
			{
				LEDMode++;
				if(LEDMode>=2)LEDMode=0;
			}
			
		}
	}
}


void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0xFF;	
	TL0=0xFF;
	T0Count++;
	if(T0Count>=10)
	{
		T0Count=0;
		if(LEDMode==0)
			P2=_crol_(P2,1);
		if(LEDMode==1)
			P2=_cror_(P2,1);
	}
	
}	