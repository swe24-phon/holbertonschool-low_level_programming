i#include <stdio.h>

/**
 * main - Display the size of each types
 * Return: 0
 */

int main(void)
{
	char c;
	int i;

	printf("Size of a char: %c byte(s)", c);
	printf("Size of a int: %i byte(s)", i);
	printf("Size of a long int: %ui byte(s)", li);
	printf("Size of a long long int: %dd byte(s)", lli);
	printf("Size of a float: %c byte(s)", f);
	return (0);
}
