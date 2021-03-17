# _printf

## Synopsis
**_printf** FORMAT [ARGUMENT]...

**_printf** OPTION

## Description
Print ARGUMENTS(s) according to FORMAT, or execute according to OPTION:

## RETURN VALUE
On a successful return, the function will return the number of characters printed (excluding the null byte).
A negative value is returned when the output encounters and error.

## OPTIONS

**%d, %i**
format specifier to print and integer of base 10.

**%b**
format specifier to print number in binary.

**%o**
format specifier to print value of an octal variable.

**%c**
format specifier to print a character.

**%s**
format specifier to print a string.

**%S**
format specifier to print a string. Non printable characters (0 < ASCII value < 32 or >= 127) are
printed this way: \\x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

**%%**
format specifier to print a percent sign.

**%x**
format specifier to print value of a lower-case hexadecimal variable.

**%X**
format specifier to print the value of an upper-case hexadecimal variable.

**%p**
format specifier to print an address.

**%u**
format specifier to print an unsigned integer.

**%R**
format specifier to print the rot13 of a string.

**%r**
format specifier to print a reversed string.

**EXAMPLE**
How to use _printf with conversion specifiers:

```
#include "holberton.h"

_printf("The %s won the game by %d runs.", "Yankees", 2);
```

Output: "The Yankees won the game by 2 runs."

## Author
Jose Pablo Bonilla, Andres Morales.

## See also
printf(3), write(2)
