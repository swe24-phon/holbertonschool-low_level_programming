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
	char lowercap = 'a';

	while (lowercap <= 'z')
	{
		if (lowercap != 'e' && lowercap != 'q')
		{	
			putchar(lowercap);
		}
		lowercap++;
	}
	putchar('\n');
	return (0);
}
