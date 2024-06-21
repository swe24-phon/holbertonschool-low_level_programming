#include "main.h"

/**
 * print_alphabet - call _putchar to print the lower case alphabet
 *
 * Return: 0 on sucess
 *
 */

void print_alphabet_x10(void);

{
	int loop_count = 0;
	char letter = 'a';
	
	while (loop_count < 10;)
	{
		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
		loop_count++;
		_putchar('\n');
	}
}
