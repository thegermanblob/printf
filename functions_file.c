#include "holberton.h"
/**
 * _strlen - checks length
 * @s: string to mesure
 *
 * Return: length of string
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strlenc - checks length
 * @s: string to mesure
 *
 * Return: length of string
 *
 */
int _strlenc(const char *s)
{
	int i = 0;
	char c = 'n';

	while (c != '\0')
	{
		c = s[i];
		i++;

	}
	return (i - 1);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strcat - concanates string
 * @dest: destination string
 * @src: source strin
 * Return: concanated string
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, scount;

	scount = 0;
	i = _strlen(dest);

	while (src[scount] != '\0')
	{
		dest[i] = src[scount];
		scount++;
		i++;
	}
	return (dest);
}
/**
 * _strdup - returns pointer to new string duplicate
 * of string str
 * @str: string to duplicate
 * Return: On success, _strdup function returns pointer to duplicated
 * string, returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int len;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	dup = malloc((sizeof(char) * (len + 1)));
	if (dup == NULL)
		return (NULL);

	while (len >= 0)
	{
		dup[len] = str[len];
		len--;
	}
	return (dup);
}
