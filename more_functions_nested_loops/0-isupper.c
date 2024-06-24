#include <stdio.h>
#include "main.h"

#define CAP_A 65
#define CAP_Z 90

/**
 * _isupper - checking the input character is upper case
 * @c : integer value input for a character
 *
 * Return: 1 for true else 0 for fault
 *
 */


int _isupper(int c)
{
	if ((c >= CAP_A) && (c <= CAP_Z))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
