#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - list out lower case alphabet in reverse
 *
 * Return: 0 on success
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
