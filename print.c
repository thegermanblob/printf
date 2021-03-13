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
	int i, n, e=0;

	n = check(format, '%');

	va_list args;

	if (n != 0)
	{
		va_start(args,format);
		for (i = 0; i < n; i++)

		va_end(args);
		return (e);
	}
	else
		return ( write(1, format, _strlenc(format)));
	return (0);
} "sttrstrstrst%ssrtrstrst%sstrsts%s", str, str, str 
