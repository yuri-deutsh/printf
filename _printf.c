#include "main.h"

/**
 * _printf - Print function based on the format specifier.
 * @format: Format specifier to identify the desired output format.
 * Author: Nabil and Eben
 * Return: The length of the printed string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printx_string}, {"%c", printx_char},
		{"%%", printx_1337},
		{"%i", printx_int}, {"%d", printx_dec}, {"%r", printx_revs},
		{"%R", printx_r}, {"%b", printx_binbash}, {"%u", printx_unsi},
		{"%o", printx_octal}, {"%x", printx_hexa}, {"%X", printx_HEXA},
		{"%S", printx_exc_str}, {"%p", printx_xpointer}
	};

	va_list args;
	int j = 0, k, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[j] != '\0')
	{
		k = 13;
		while (k >= 0)
		{
			if (m[k].id[0] == format[j] && m[k].id[1] == format[j + 1])
			{
				len += m[k].f(args);
				j = j + 2;
				goto Here;
			}
			k--;
		}
		_putchar(format[j]);
		len++;
		j++;
	}
	va_end(args);
	return (len);
}

