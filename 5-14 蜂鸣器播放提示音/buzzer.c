#include <REGX52.H>
#include "Delay.h"

sbit Buzzer=P0^6;

unsigned int i;

/**
   * @brief		����������
   * @param		ms ʱ��
   * @retval
   */
void Buzzer_Time(unsigned int ms)
{
	for(i=0;i<ms*500;i++)
			{
				Buzzer=!Buzzer;
				Delay(1);
			}
}