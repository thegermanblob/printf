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
	while(str[i])
	{
		putchar(str[i]);
		i++;
	}
}
/**
 * pointer - prints an adress
 * @str: where adress is stored
 * Return: nothing
 */

int pointer(char *str)
{
	int i = &str;
	return (i);
}
