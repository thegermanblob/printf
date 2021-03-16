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
		len += switcher3(arg, format[i]);
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
	int n, len = 0;
	char ch;

	switch (c)
	{
		case 'c':
			ch = va_arg(arg, int);
			if (ch > 0)
				len = _putchar(ch);
			break;
		case 'd':
			n = va_arg(arg, int);
			if (n < 0)
			{
				n = -n;
				_putchar('-');
				len++;
			}
			len += converter(n, 10, 0);
			break;
		case 'i':
			n = va_arg(arg, int);
			if (n < 0)
			{
				n = -n;
				_putchar('-');
				len++;
			}
			len += converter(n, 10, 0);
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
	char *str;

	switch (c)
	{
		case 's':
			str = _strdup(va_arg(arg, char *));
			if (str != NULL)
				len = put(str);
			else
				len = put("(null)");
			break;
		case 'b':
			len = converter(va_arg(arg, int), 2, 0);
			break;
		case 'p':
			len = converter(va_arg(arg, int), 16, 0);
			break;
		case 'o':
			len = converter(va_arg(arg, int), 8, 0);
			break;
		case 'x':
			len = converter(va_arg(arg, int), 16, 0);
			break;
		default:
			break;
	}
	return (len);
}
/**
 * switcher3 - is the main switch for the function print
 * @arg: list of arguments given to printf
 * @c: character to be used for the case
 * Return: length of printed things
 *
 */

int switcher3(va_list arg, char c)
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
		case 'X':
			len = converter(va_arg(arg, int), 16, 1);
			break;
		default:
			break;
	}
	return (len);
}
