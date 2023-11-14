#include "main.h"

/**
 * printx_unsi - Prints an unsigned number
 * Author: Nabil & Eben
 * Return: Number of chars printed.
 */
int printx_unsi(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int y = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[y--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[y--] = (num % 10) + '0';
		num /= 10;
	}

	y++;

	return (write_unsgnd(0, y, buffer, flags, width, precision, size));
}
