#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n > 1)
        print_binary(n >> 1);

    (n & 1) ? _putchar('1') : _putchar('0');
}
