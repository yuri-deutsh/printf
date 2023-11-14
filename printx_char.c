#include "main.h"

/**
 * printx_char - Prints a character.
 * @val: Arguments.
 * Author: Nabil and Eben
 * Return: Number of printed characters (always 1).
 */
int printx_char(va_list val)
{
	char x;

	x = va_arg(val, int);
	_putchar(x);
	return (1);
}

