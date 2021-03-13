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
	char c = 'n';

	while (c != '\0')
	{
		c = s[i];
		i++;

	}
	return (i - 1);
}
