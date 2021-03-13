#include "holberton.h"
/**
 *
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
