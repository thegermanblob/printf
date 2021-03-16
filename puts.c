#include "holberton.h"
/**
 * put - prints string
 * @str: string to print
 * Return: nothing
 */
void put(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}
