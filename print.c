#include "holberton.h"

/**
 * check - count of specific char
 * @s: string given
 * @c: char to find
 * Return: count total
 */

int check(const char *s, char c)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			count++;
	}
	return (count);
}

/**
 * _printf - print an output
 * @format: format given
 * Return: 0 for success
 */

int _printf(const char *format, ...)
{
	int i, n;
	va_list arg;

	n = check(format, '%');

	if (n != 0)
	{
		va_start(arg, format);
		for (i = 0; i < _strlenc(format); i++)
		{
			while (format[i] != '%' && i < _strlenc(format))
			{
				_putchar(format[i]);
				i++;
			}
			if (format[i] == '%')
				i++;
			switcher(arg, format[i]);

		}
	}
	va_end(arg);
	return (i);
}


/**
 * switcher - is the main switch for the function print
 * @arg: list of arguments given to printf
 * @c: character to be used for the case
 *
 */
void switcher(va_list arg, char c)
{
			switch (c)
			{
				case 'c':
					_putchar(va_arg(arg, int));
					break;
				case 'd':
					converter(va_arg(arg, int), 10, 0);
					break;
				case 'i':
					converter(va_arg(arg, int), 10, 0);
					break;
				case 'o':
					converter(va_arg(arg, int), 8, 0);
					break;
				case 'x':
					converter(va_arg(arg, int), 16, 0);
					break;
				case 'X':
					converter(va_arg(arg, int), 16, 1);
					break;
				case 's':
					put(va_arg(arg, char *));
					break;
				case 'b':
					converter(va_arg(arg, int), 2, 0);
					break;
				case 'p':
					converter(va_arg(arg, int), 16, 0);
					break;
				case '%':
					put("%");
					break;
			}
}
