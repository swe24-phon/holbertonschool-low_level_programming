#include "main.h"

/**
 * _strlen_recursion - find string len recursively
 *
 * @s: string of characters
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
	len = len + 1 + _strlen_recursion(s + 1);
	}
	return (len);
}
