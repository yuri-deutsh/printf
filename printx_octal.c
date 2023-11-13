#include "main.h"

/**
 * printx_octal - Prints an octal number.
 * @val: Arguments.
 *
 * Return: Number of characters printed.
 */
int printx_octal(va_list val)
{
	int *arr;
	int j;
	unsigned int number = va_arg(val, unsigned int);
	int count = 0;
	unsigned int temp = number;

	while (number / 8 != 0)
	{
		number /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (j = 0; j < count; j++)
	{
		arr[j] = temp % 8;
		temp /= 8;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(arr[j] + '0');
	}
	free(arr);
	return (count);
}

