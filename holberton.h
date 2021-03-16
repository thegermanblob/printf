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
int switcher(va_list arg, char c);
int switcher2(va_list arg, char c);
int converter(unsigned int n, int base, int up);
int converter2(int n, int base, int up);
int converter3(unsigned int n, int base, int up);
void dprint(unsigned int n);
int put(char *str);
int putr(char *str);
int putn(char *str);
char *_strcat(char *dest, char *src);
int _putchar(char c);

#endif
