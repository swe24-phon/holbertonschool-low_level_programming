#include "main.h"

/**
 * print_alphabet - call _putchar to print the lower case alphabet
 *
 * Return: 0 on sucess
 *
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter < 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
