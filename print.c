#include "holberton.h"
/**
 *
 *
 *
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
 *
 *
 */
int _printf(const char *format, ...)
{
	int i, n;
	va_list args;
	char elstring[1024];

	n = check(format, '%');

	if (n != 0)
	{
		va_start(args,format);
		for (i = 0; i < _strlenc(format); i++)
		{
			while (format[i] != '%' && i < _strlenc(format))
			{
				putchar(format[i]);
				i++;
			}
			if (format[i] == '%')
				i++;

		switch (format[i])
			{
				case 'c':
					putchar(va_arg(args, int));
					break;
				case 'd':
					converter(va_arg(args,int), 10, 0);
					break;
				case 'o':
					converter(va_arg(args,int), 8, 0);
					break;
				case 'x':
					converter(va_arg(args,int), 16, 0);
					break;
				case 'X':
					converter(va_arg(args,int), 16, 1);
					break;
				case 's':
					put(va_arg(args, char *));
					break;
				default:
					continue;
			}
		}
	}
	va_end(args);
	return (0);
}
