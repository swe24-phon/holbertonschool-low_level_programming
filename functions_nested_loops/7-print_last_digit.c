#include "main.h"

/**
 * print_last_digit - find the last digit
 *@n : number to be checked
 *
 * Return: true on sucess
 *
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		return (n % 10);
	}

	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (-1 * (n % 10));
	}
}
