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

	n = check(format, '%');

	if (n != 0)
	{
		va_start(args,format);
		for (i = 0; i < _strlenc(format); i++)
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
					putchar(va_arg(args, int));
					break;
				case 'd':
					break;
				default:
					continue;
			}
			printf("after switch");
		}
		printf("after loop");
	}
	printf("EOF");
	va_end(args);
	return (0);
}
