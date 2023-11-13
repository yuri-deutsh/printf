#include "main.h"

/**
 * _putchar - Writes a single character to the standard output.
 * @c: The character to be printed.
 *
 * Return: returns 1. On error, returns -1 and sets errno accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

