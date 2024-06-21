#include "main.h"

/**
 * main - call _putchar to print characters
 *
 * Return: 0 on sucess
 *
 */

int main(void)
{
	int position_counter = 0;

	while (position_counter <= 26)
	{
	_putchar(print_alphabet());
	position_counter++;
	}
	_putchar('\n');
	return (0);
}
