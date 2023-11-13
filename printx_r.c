#include "main.h"

/**
 * printx_r - Prints a string to ROT13 and places it into a buffer.
 * @args: Type struct va_arg where printf arguments are allocated.
 * Authors: Nabil and Eben
 *
 * Return: Counter.
 */
int printx_r(va_list args)
{
	int k = 0;
	int n, f, count = 0;
	char *s = va_arg(args, char*);
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char beta[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		s = "(null)";

	for (n = 0; s[n]; n++)
	{
		k = 0;
		for (f = 0; alpha[f] && !k; f++)
		{
			if (s[n] == alpha[f])
			{
				_putchar(beta[f]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[n]);
			count++;
		}
	}
	return (count);
}

