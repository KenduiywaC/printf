#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
char *id;
int (*f)();
} convert_match;

int _printf(const char *format, ...);
int _putchar(char character);
int _puts(char *s);
int printf_40(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_int(va_list args);
int print_dec(va_list args);
int print_binary(va_list val);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_excl_string(va_list val);
int print_HEX_extra(unsigned int num);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int);
int print_reversed(va_list val);
int print_rot13(va_list val);

#endif
