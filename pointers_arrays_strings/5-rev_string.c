#include <stdio.h>
#include "main.h"

/**
 * rev_string - string in reverse
 *
 * @s: string of char pointer
 *
 */


void rev_string(char *s)
{
	char *end = s;
	char *start = s;
	char swap;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		swap = *start;
		*start = *end;
		*end = swap;
		start++;
		end--;
	}
}
