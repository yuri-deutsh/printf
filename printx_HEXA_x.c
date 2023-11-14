#include "main.h"

/**
 * printx_HEXA_x - Prints uppercase hexadecimal number.
 * @num: Number to print.
 * Author: Nabil and Eben
 * Return: Number of printed characters.
 */
int printx_HEXA_x(unsigned int num)
{
	int k;
	int *arr;
	int counts = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
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
		arr[k] = temp % 16;
		temp /= 16;
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

