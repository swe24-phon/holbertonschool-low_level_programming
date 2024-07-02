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

    while (*s == ' ' || !(*s >= '0' && *s <= '9') || (*s == '-'))
    {
    if (*s == '-')
    {
        sign = -1;
    }
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        digit = *s - '0';
        if (result > (INT_MAX - digit) / 10)
	{
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        result = result * 10 + digit;
        s++;
    }
    if (result == 0)
    {
	    return (0);
    }
    else
    {
	    return result * sign;
    }
}
