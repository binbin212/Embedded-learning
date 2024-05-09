#include <REGX52.H>

/**
   * @brief		���ڳ�ʼ��
   * @param		��
   * @retval	��
   */
	 
void Uart1_Init(void)	//4800bps@11.0592MHz
{
	PCON |= 0x80;		//ʹ�ܲ����ʱ���λSMOD
	SCON = 0x40;		//8λ����,�ɱ䲨����
	TMOD &= 0x0F;		//���ö�ʱ��ģʽ
	TMOD |= 0x20;		//���ö�ʱ��ģʽ
	TL1 = 0xF4;			//���ö�ʱ��ʼֵ
	TH1 = 0xF4;			//���ö�ʱ����ֵ
	ET1 = 0;			//��ֹ��ʱ���ж�
	TR1 = 1;			//��ʱ��1��ʼ��ʱ
}

/**
   * @brief		���ڷ���һ���ֽ�����
   * @param		Byte Ҫ���͵�����
   * @retval	��
   */

void UART_SendByte(unsigned char Byte)
{
	SBUF=Byte;
	while(TI==0);
	TI=0;
}
