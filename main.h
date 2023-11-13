#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - Associates specifiers with print functions
 * @id: Char pointer specifier modifiers (e.g., l, h) for (d, i, u, o, x, X)
 * @f: Function pointer to the associated print function
 *
 * Description:
 * Maps specifiers respective print functions for custom output formatting.
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printx_xpointer(va_list val);
int printx_hexa_x(unsigned long int num);
int printx_HEXA_x(unsigned int num);
int printx_exc_str(va_list val);
int printx_HEXA(va_list val);
int printx_hexa(va_list val);
int printx_octal(va_list val);
int printx_unsi(va_list args);
int printx_binbash(va_list val);
int printx_revs(va_list args);
int printx_r(va_list args);
int printx_int(va_list args);
int printx_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printx_1337(void);
int printx_char(va_list val);
int printx_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif

