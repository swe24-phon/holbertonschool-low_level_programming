#include <stdio.h>
#include "main.h"

#define ZERO 48
#define NINE 90

/**
 * _isdigit - checking the input character is a number
 * @c : integer value input for a character
 *
 * Return: 1 for true else 0 for fault
 *
 */


int _isdigit(int c)
{
	if ((c >= ZERO) && (c <= NINE))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
