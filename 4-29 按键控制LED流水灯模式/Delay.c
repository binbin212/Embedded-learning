void Delay(unsigned char Num)	//@12.000MHz
{
	unsigned char data i, j;

	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
	
}