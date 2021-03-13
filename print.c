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
	char *str;
	int i;

	n = check(format, '%');

	va_list args;

	if (n != 0)
	{
		va_start(args,format);
		for (i = 0; format[i] != '\0'; i++)
		{
			while (format[i] != '%')
			{
				putchar(format[i]);
				i++;
			}
			i++;

			switch (format[i])
			{
				case 'c':
					write(1, va_arg(args, int), 1);
					break;
				case 'd':
					dprint(va_arg(args, int));
					break;
			}
			default:
			continue;

			va_end(args);
			return (e);
		}
		else
			return ( write(1, format, _strlenc(format)));
		return (0);
	}
}
