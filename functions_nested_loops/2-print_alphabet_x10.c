#include "main.h"

/**
 * print_alphabet_x10 - call _putchar to print the lowercase alphabet 10 times
 *
 * Return: 0 on sucess
 *
 */

void print_alphabet_x10(void)
{
	int loop_count = 0;
	
	while (loop_count < 10)
	{
		char letter = 'a';
		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
		_putchar('\n');
		loop_count++;
	}
}
