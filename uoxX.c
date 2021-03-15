#include "holberton.h"

/**
 *
 *
 */
char *converter(unsigned int n, int base, int up, int *tlen)
{
	static char numupchars[]= "0123456789ABCDEF";
	static char numlochars[]= "0123456789abcdef";
	static char buffer[50];
	char *num;

	num = &buffer[49];
	*num = '\0';

	do
	{
		if (up)
			*--num = numupchars[n%base];
		else
			*--num = numlochars[n%base];
		n /= base;
	}while (n != 0);
	*tlen += _strlen(num);
	printf("conv number[%s]", num);

	return (num);
}
