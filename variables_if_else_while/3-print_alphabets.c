#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - list out lower case alphabet
 *
 * Return: 0 on success
 */

int main(void)
{
	char lowercap = 'a', uppercap = 'A';

	while (lowercap <= 'z')
	{
		putchar(lowercap);
		lowercap++;
	}
	while (uppercap <= 'Z')
	{
		putchar(uppercap);
		uppercap++;
	}		
	putchar('\n');
	return (0);
}
