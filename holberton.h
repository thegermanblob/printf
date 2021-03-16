#ifndef HOLBERTON_H
#define HOLBERTON_H
#define UNUSED(p) ((void)(p))
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _strlen(char *s);
int _strlenc(const char *s);
void switcher(va_list arg, char c);
char *converter(int n, int base, int up);
void dprint(unsigned int n);
void put(char *str);
char *_strcat(char *dest, char *src);
int _putchar(char c);

#endif
