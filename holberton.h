#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _strlen(char *s);
int _strlenc(const char *s);
void switcher(const char *format);
void converter(unsigned int n, int base, int up);
void dprint(unsigned int n);
void put(char *str);

#endif
