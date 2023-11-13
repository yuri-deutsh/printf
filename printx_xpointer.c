#include "main.h"

/**
 * printx_xpointer - Prints a hexadecimal number.
 * @val: Arguments.
 * Authors: Nabil and Eben
 *
 * Return: Number of characters printed.
 */
int printx_xpointer(va_list val)
{
	void *k;
	char *s = "(nil)";
	unsigned long int c;
	int d, j;

	k = va_arg(val, void*);

	if (k == NULL)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
		return (j);
	}

	c = (unsigned long int)k;
	_putchar('0');
	_putchar('x');
	d = printx_hexa_x(c);
	return (d + 2);
}

