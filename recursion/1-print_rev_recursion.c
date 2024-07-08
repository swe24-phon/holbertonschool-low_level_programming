#include "main.h"

/**
 * _print_rev_recursion - add characters in reverse recursively
 *
 * @s: string of characters
 *
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
