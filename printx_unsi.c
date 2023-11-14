#include "main.h"

/**
 * printx_unsi - Prints an unsigned int.
 * @args: Argument to print.
 *
 * Return: Number of characters printed.
 */
int printx_unsi(va_list args)
{
    unsigned int p = va_arg(args, unsigned int);
    int number, last = p % 10, digit, exp = 1;
    int j = 1;

    p = p / 10;
    number = p;

    if (p < 0) // Corrected condition
    {
        _putchar('-');
        number = -number;
        p = -p;
        last = -last;
        j++;
    }

    if (number > 0)
    {
        while (number / 10 != 0)
        {
            exp = exp * 10;
            number = number / 10;
        }
        number = p;
        while (exp > 0)
        {
            digit = number / exp;
            _putchar(digit + '0');
            number = number - (digit * exp);
            exp = exp / 10;
            j++;
        }
    }

    _putchar(last + '0');

    return (j);
}
