#include "holberton.h"
/**
 * *_strstr - finds string inside string
 * @haystack: string with all goodies
 * @needle: string to be found
 * Return: matching substring, else null
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;
		while (*needle != '\0' && *search != '\0' && *search == *haystack)
		{
			haystack++;
			search++;
		}
		if (*search == '\0')
			return (start);
		haystack = start + 1;
	}
	return (0);
}
