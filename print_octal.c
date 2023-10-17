#include "main.h"
#include <stdlib.h>
/**
 * print_octal - converts to octal
 * @val: value to be converted
 * Return: counter
 */

int print_octal(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	if (array == NULL)
		return -1;
	num = va_arg(val, unsigned int);

	for (i = 0; i < counter; i++)
	{
		array[i] = num % 8;
		num = num / 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (counter);
}
