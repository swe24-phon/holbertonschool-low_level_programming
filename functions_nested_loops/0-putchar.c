#include "main.h"

/**
 * main - call _putchar to print characters
 *
 * Return: 0 on sucess
 *
 */

int main(void)
{
	char str[] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0' };
	int position_counter = 0;
	while (str != '\0')
	{
	_putchar(str[position_counter]);
	position_counter++;
	}
	_putchar('\n');
	return (0);
}
