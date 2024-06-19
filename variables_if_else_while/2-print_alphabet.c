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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
