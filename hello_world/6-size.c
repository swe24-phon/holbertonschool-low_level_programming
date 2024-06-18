#include <stdio.h>

/**
 * main - Display the size of each types
 * Return: 0
 */

int main(void)
{
	char c="a"i;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %c byte(s)\n", c);
	printf("Size of a int: %d byte(s)\n", i);
	printf("Size of a long int: %ld byte(s)\n", li);
	printf("Size of a long long int: %lld byte(s)\n", lli);
	printf("Size of a float: %f byte(s)", f);
	return (0);
}
