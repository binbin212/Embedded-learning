#include <REGX52.H>

void Delay(unsigned int xms);

 unsigned char LEDNum=0;
	
void main()
{
	
	while(1)
	{
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			
			if(LEDNum==0&&P2==0xFF){P2=~0x01;continue;}
			
			LEDNum++;
			if(LEDNum>=8)LEDNum=0;
			P2=~(0x01<<LEDNum);
			
			
			
		}
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			
			if(LEDNum==0&&P2==0xFF){P2=~0x01;continue;}
			if(LEDNum==0)LEDNum=8;
			LEDNum--;
			P2=~(0x01<<LEDNum);
			
		}
	}
}

void Delay(unsigned int xms)	//@12.000MHz
{
	unsigned char data i, j;
	while(xms--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}

}