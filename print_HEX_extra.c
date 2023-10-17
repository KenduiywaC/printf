#include "main.h"
#include <stdlib.h>
/**
 * print_HEX - converts to HEX
 * @val: value to be converted
 * Return: counter
 */

int print_HEX_extra(unsigned int num)
{
        int i, counter = 0;
        int *array;

        while (num / 16 != 0)
        {
                num = num / 16;
                counter++;
        }
        counter++;
        array = (int *)malloc(sizeof(int) * counter);
        if (array == NULL)
                return -1;
        num = va_arg(val, unsigned int);

        for (i = 0; i < counter; i++)
        {
                array[i] = num % 16;
                num = num / 16;
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
