#include "main.h"
#include <stdlib.h>
/**
 * print_hex_extra - converts to hex
 * Return: counter
 */

int print_hex_extra(unsigned long int num)
{
long int i, counter = 0;
long int *array;
unsigned long int num = num;
while (num / 16 != 0)
{
num = num / 16;
counter++;
}
counter++;
array = (int *)malloc(sizeof(long int) * counter);
if (array == NULL)
return (-1);

for (i = 0; i < counter; i++)
{
array[i] = num % 16;
unsigned long int num = num / 16;
}
for (i = counter - 1; i >= 0; i--)
{
if (array[i] < 10)
_putchar(array[i] + '0');
else
_putchar(array[i] + 'A' - 10);
}

free(array);
return (counter);
}
