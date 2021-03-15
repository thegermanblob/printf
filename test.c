#include "holberton.h"

int main(void)
{
	int i = 36;
	int *j = &i;
	char c = 'C';

	_printf("%c\n", c);
	_printf("Value of variable i is: %d\n", i);
	_printf("Number i in octal is: %o\n",  i);
	_printf("Number i in lowercase hexadecimal is: %x\n", i);
	_printf("Number i in uppercase hexadecimal is: %X\n", i);
	_printf("Address of variable i is: %p\n", j);
	_printf("Number i in binary is is: %b\n", i);
	_printf("%s\n", "Holberton School");
	return (0);
}
