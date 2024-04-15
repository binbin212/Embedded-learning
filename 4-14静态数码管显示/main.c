#include <REGX52.H>

unsigned char NixieTable[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

void Nixie(unsigned char Location,Number)
{
	switch(Location)
	{
		case 1:P2_4=1;P2_3=1;P2_2=1;P2_1=0;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;P2_1=1;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;P2_1=1;break;
		case 4:P2_4=0;P2_3=1;P2_2=1;P2_1=1;break;	
	}
	P0=NixieTable[Number];
}

void Delay(unsigned char Hm)	//@11.0592MHz
{
	unsigned char data i, j;
	while(Hm)
	{
		
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		Hm--;
	}
	
}


void main()
{
	
	unsigned char Num=0,Location=1;
	
	while(Location)
	{	
		if(Location==5)break;
		if(Num==10)Num=0;
		while(Num<10)
		{
			Nixie(Location,Num);
			Delay(1000);
			Delay(1000);
			Delay(1000);
			Num++;
		}
		Location++;
	}
	

}