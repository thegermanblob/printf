#include "holberton.h"

/**
 * converter - converts number to given base and he to a string
 * @n: number to ocnvert
 * @base: base to convert number to
 * @up: used as a bollean variable to make hex uppercase\
 *
 * Return: returns pointer to string version of number
 *
 */
int converter(unsigned int n, int base, int up)
{
	static const char numupchars[] = "0123456789ABCDEF";
	static const char numlochars[] = "0123456789abcdef";
	static char buffer[50];
	char *num;
	int len = 0;

	num = &buffer[49];
	*num = '\0';

	do {
		if (up)
			*--num = numupchars[n % base];
		else
			*--num = numlochars[n % base];
		n /= base;
	} while (n != 0);

	len = put(num);

	return (len);
}
/**
 * converter2 - converts number to given base and he to a string
 * @n: number to ocnvert
 * @base: base to convert number to
 * @up: used as a bollean variable to make hex uppercase\
 *
 * Return: returns pointer to string version of number
 *
 */
int converter2(int n, int base, int up)
{
	static const char numupchars[] = "0123456789ABCDEF";
	static const char numlochars[] = "0123456789abcdef";
	static char buffer[50];
	char *num;
	int nn, len = 0;

	num = &buffer[49];
	*num = '\0';
	nn = n;
	if (n < 0)
		n =  -(n);

	do {
		if (up)
			*--num = numupchars[n % base];
		else
			*--num = numlochars[n % base];
		n /= base;
	} while (n != 0);

	if (nn < 0)
		*--num = '-';
	len = put(num);

	return (len);
}
