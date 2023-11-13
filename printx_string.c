#include "main.h"

/**
 * printx_string - Prints a string.
 * @val: Argument.
 *
 * Return: The length of the string.
 */
int printx_string(va_list val)
{
	char *s;
	int j, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (j = 0; j < len; j++)
			_putchar(s[j]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (j = 0; j < len; j++)
			_putchar(s[j]);
		return (len);
	}
}

