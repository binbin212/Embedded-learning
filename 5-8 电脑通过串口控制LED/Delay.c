void Delay(unsigned char Num)	//@12.000MHz
{
	unsigned char data i, j;
	while(Num)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		Num--;
	}
	
}