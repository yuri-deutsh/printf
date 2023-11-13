#include "main.h"

/**
 * printx_revs - Prints a string in reverse.
 * @args: Type struct va_arg where printf arguments are allocated.
 *
 * Authors: Nabil and Eben
 * Return: The length of the string.
 */
int printx_revs(va_list args)
{
	char *s = va_arg(args, char*);
	int p;
	int j = 0;

	if (s == NULL)
		s = "(null)";

	while (s[j] != '\0')
		j++;

	for (p = j - 1; p >= 0; p--)
		_putchar(s[p]);

	return (j);
}

