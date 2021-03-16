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
	if (str != NULL)
	{
	while (str[i])
	{
		_putchar(str[i]);
		len++;
		i++;
	}
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
/**
 * rot13 - prints a string in rot13.
 * @str: string to encrypt
 * Return: string after encription.
 */
int rot13(char *s)
{
	int i, j, len;
	char az[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char nm[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char c;

	i = 0;
	while (s[i] != 0)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == az[j])
			{
				len += _putchar(nm[j]);
				break;
			}
		}
		i++;
	}
	return (len);
}
