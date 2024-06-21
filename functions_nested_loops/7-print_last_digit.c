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
	int last_digit;

	if (n > 0)
	{
		last_digit = (n % 10);
	}

	else if (n == 0)
	{
		last_digit = n;
	}
	else
	{
		last_digit =  (-1 * (n % 10));
	}
	return (last_digit);
}
