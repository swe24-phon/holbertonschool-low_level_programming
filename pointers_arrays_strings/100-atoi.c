#include <stdio.h>
#include "main.h"

#include <limits.h>

/**
*
* _atoi - convert text to digit
*
*@s: string of text
*
*Return: result
*/

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int digit;

    while (*s)
    {
    if (*s == '-')
    {
        sign = -1;
    }
    else if (*s == ' ' || !(*s >= '0' && *s <= '9'))
		    {
		    	result = 0;
		    }
    else if (*s >= '0' && *s <= '9')
    {
        digit = *s - '0';
        if (result > (INT_MAX - digit) / 10)
	{
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        result = result * 10 + digit;
    }
	s++;
    }
	return (result * sign);
}
