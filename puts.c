#include "holberton.h"
/**
 * put - prints string
 * @str: string to print
 * Return: nothing
 */
int put(char *str)
{
	int i, len = 0;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		len++;
		i++;
	}
	return (len);
}
