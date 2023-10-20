#include "main.h"
/**
 *printf_reversed - Custom function to print a reversed string.
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
convert_match m[] = {
{"%s", printf_string}, {"%c", printf_char}, {"%%", printf_40},
{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_reversed},
{"%R", printf_rot13}, {"%b", printf_binary}, {"%u", printf_unsigned},
{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
{"%S", printf_excl_string}, {"%p", printf_pointer}
};

va_list args;
int i = 0, j, len = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Then:
while (format[i] != '\0')
{
j = 13;
while (j >= 0)
{
if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
{
len += m[j].f(args);
i = i + 2;
goto Then;
			}
j--;
}
_putchar(format[i]);
len++;
i++;
}
va_end(args);
return (len);
}
