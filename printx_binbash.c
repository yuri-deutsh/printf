#include "main.h"

/**
 * printx_binbash - Prints a binary number.
 * @val: Arguments.
 * Author: Nabil and Eben
 * Return: Number of printed characters.
 */
int printx_binbash(va_list val)
{
	int k, a = 1, j;
	int flag = 0;
	int fcont = 0;
	unsigned int num = va_arg(val, unsigned int);

	for (k = 0; k < 32; k++)
	{
		j = ((a << (31 - k)) & num);
		if (j >> (31 - k))
			flag = 1;
		if (flag)
		{
			j = j >> (31 - k);
			_putchar(j + '0');
			fcont++;
		}
	}
	if (fcont == 0)
	{
		fcont++;
		_putchar('0');
	}
	return (fcont);
}

