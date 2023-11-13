#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 *
 * Authors: Nabil and Eben
 * @s: Type char pointer
 * Return: b.
 */
int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != 0; b++)
		;
	return (b);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * Authors: Nabil and Eben
 * @s: Type char pointer
 * Return: b
 */
int _strlenc(const char *s)
{
	int b;

	for (b = 0; s[b] != 0; b++)
		;
	return (b);
}
