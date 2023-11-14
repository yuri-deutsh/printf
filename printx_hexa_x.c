#include "main.h"

/**
 * printx_hexa_x - Prints a hexadecimal number.
 * @num: Number to print x.
 *
 * Return: Number of characters printed.
 */
int printx_hexa_x(unsigned long int num)
{
	long int count = 0;
	long int *arr;
	unsigned long int temp = num;
	long int j;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));

	for (j = 0; j < count; j++)
	{
		arr[j] = temp % 16;
		temp /= 16;
	}
	for (j = count - 1; j >= 0; j--)
	{
		if (arr[j] > 9)
			arr[j] = arr[j] + 39;
		_putchar(arr[j] + '0');
	}
	free(arr);
	return (count);
}

