#include "main.h"
/**
 * printx_exc_str - print x_excl_ strings.
 * @val: arguments
 * Return: the length of the string.
 */

int printx_exc_str(va_list val)
{
	char *x;
	int j, len = 0;
	int cast;

	x = va_arg(val, char *);
	if (x == NULL)
		x = "(null)";
	for (j = 0; x[j] != '\0'; j++)
	{
		if (x[j] < 32 || x[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = x[j];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printx_HEXA_x(cast);
		}
		else
		{
			_putchar(x[j]);
			len++;
		}
	}
	return (len);
}

