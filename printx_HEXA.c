#include "main.h"

/**
 * printx_HEXA - Print a hexadecimal number in lowercase.
 * @val: Arguments.
 * Author: Nabil and Eben
 * Return: Number of characters printed.
 */
int printx_HEXA(va_list val)
{
	int k;
	int *arr;
	int counts = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (temp / 16 != 0)
	{
		temp /= 16;
		counts++;
	}
	counts++;
	arr = malloc(counts * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (0);
	}

	for (k = 0; k < counts; k++)
	{
		arr[k] = num % 16;
		num /= 16;
	}
	for (k = counts - 1; k >= 0; k--)
	{
		if (arr[k] > 9)
			arr[k] = arr[k] + 7;
		_putchar(arr[k] + '0');
	}
	free(arr);
	return (counts);
}

