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
/**
 * putr - prints string
 * @str: string to print
 * Return: nothing
 */
int putr(char *str)
{
	int i, len = 0;

	i = _strlen(str);
	while (i != -1)
	{
		_putchar(str[i]);
		len++;
		i--;
	}
	return (len - 1);
}
/**
 * putn - prints string
 * @str: string to print
 * Return: nothing
 */
int putn(char *str)
{
	int i, len = 0;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] < 32)
		{
			len += put("\\");
			len += put("x");
			len += converter3(str[i], 16, 1);
		}
		else
			_putchar(str[i]);
		len++;
		i++;
	}
	return (len);
}
