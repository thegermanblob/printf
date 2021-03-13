#include "holberton.h"
/**
 * _strchr - searches string for given character
 * @s: string given
 * @c: character given
 * Return: returns pointer to character in string, or null
 *
 */

char *_strchr(char *s, char c, int *n)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
		return ('\0');
}

