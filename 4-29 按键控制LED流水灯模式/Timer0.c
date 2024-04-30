#include <REGX52.H>

/**
   * @brief		定时器0初始化，1毫秒@11.0592MHz
   * @param
   * @retval
   */
void Timer0_Init(void)		//1微秒@11.0592MHz
{
	TMOD &= 0xF0;			//设置定时器模式
	TMOD |= 0x01;			//设置定时器模式
	TL0 = 0xFF;				//设置定时初始值
	TH0 = 0xFF;				//设置定时初始值
	TF0 = 0;				//清除TF0标志
	TR0 = 1;				//定时器0开始计时
	ET0=1;
	EA=1;
	PT0=0;
}

/*
void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0xFF;	
	TL0=0xFF;
	T0Count++;
	if(T0Count>=10000)
	{
		T0Count=0;
		P2_0=~P2_0;
	}
	
}	
*/