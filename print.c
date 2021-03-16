#include "holberton.h"


/**
 * _printf - print an output
 * @format: format given
 * Return: 0 for success
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list arg;

	va_start(arg, format);
	for (i = 0; i < _strlenc(format); i++)
	{
		while (format[i] != '%' && i < _strlenc(format))
		{
			_putchar(format[i]);
			len++;
			i++;
		}
		if (format[i] == '%')
			i++;
		len += switcher(arg, format[i]);
		len += switcher2(arg, format[i]);

	}
	va_end(arg);
	return (len);
}


/**
 * switcher - is the main switch for the function print
 * @arg: list of arguments given to printf
 * @c: character to be used for the case
 * Return: length of printed things
 *
 */
int switcher(va_list arg, char c)
{
	int len = 0;

	switch (c)
	{
		case 'c':
			len = _putchar(va_arg(arg, int));
			break;
		case 'd':
			len = converter2(va_arg(arg, int), 10, 0);
			break;
		case 'i':
			len = converter2(va_arg(arg, int), 10, 0);
			break;
		case 'o':
			len = converter(va_arg(arg, int), 8, 0);
			break;
		case 'x':
			len = converter(va_arg(arg, int), 16, 0);
			break;
		case 'X':
			len = converter(va_arg(arg, int), 16, 1);
			break;
		case 's':
			if (va_arg(arg, char *) != NULL)
				len = put(va_arg(arg, char *));
			break;
		case 'b':
			len = converter(va_arg(arg, int), 2, 0);
			break;
		case 'p':
			len = converter(va_arg(arg, int), 16, 0);
			break;
		default:
			break;
	}
	return (len);
}

/**
 * switcher2 - is the main switch for the function print
 * @arg: list of arguments given to printf
 * @c: character to be used for the case
 * Return: length of printed things
 *
 */

int switcher2(va_list arg, char c)
{
	int len = 0;

	switch (c)
	{
		case '%':
			len = put("%");
			break;
		case 'u':
			len = converter(va_arg(arg, int), 10, 0);
			break;
		case 'r':
			len = putr(va_arg(arg, char *));
			break;
		case 'S':
			len = putn(va_arg(arg, char *));
			break;
	}
	return (len);
}
