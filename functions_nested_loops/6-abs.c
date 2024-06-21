#include "main.h"

/**
 * _abs - change to absolute number format
 *@n : number to be checked
 *
 * Return: true on sucess
 *
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
