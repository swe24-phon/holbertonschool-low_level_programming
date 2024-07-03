#include <stdio.h>
#include "main.h"

/**
 * cap_string - all words change to capital letter
 *
 * @s: string of words
 *
 * Return: result
 */

char *cap_string(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] >= 97 && s[n] <= 122)
		{
			if (n == 0)
			{
				s[n] -= 32;
			}

                if (s[n - 1] == ' ' || s[n - 1] == '\n' ||
                        s[n - 1] == ',' || s[n - 1] == ';' ||
                        s[n - 1] == '.' || s[n - 1] == '!' ||
                        s[n - 1] == '?' || s[n - 1] == '"' ||
                        s[n - 1] == '(' || s[n - 1] == ')' ||
                        s[n - 1] == '{' || s[n - 1] == '}' ||
                        s[n - 1] == '\t')
			{
				s[n] -= 32;
			}
		}
		n++;
	}
	return (s);
}
