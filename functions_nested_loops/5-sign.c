#include "main.h"

/**
 * print_sign - checking the sign of a number
 *@i : character to be checked
 *
 * Return: true on sucess
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
