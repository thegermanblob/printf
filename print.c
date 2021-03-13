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
	char *str1;
	int i, n;

	n = check(format, '%');

	va_list args;

	if (n != 0)
	{
	//	va_start(args, check(format, '%');
		va_end(args);
	}
	else
		return ( write(1, format, _strlenc(format)));
	return (0);
}
