#include <REGX52.H>

/**
   * @brief		��ʱ��0��ʼ����1����@11.0592MHz
   * @param
   * @retval
   */
void Timer0_Init(void)		//1΢��@11.0592MHz
{
	TMOD &= 0xF0;			//���ö�ʱ��ģʽ
	TMOD |= 0x01;			//���ö�ʱ��ģʽ
	TL0 = 0xFF;				//���ö�ʱ��ʼֵ
	TH0 = 0xFF;				//���ö�ʱ��ʼֵ
	TF0 = 0;				//���TF0��־
	TR0 = 1;				//��ʱ��0��ʼ��ʱ
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