i#include <stdio.h>

/**
 * main - Display the size of each types
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %c byte(s)", c);
	printf("Size of a int: %d byte(s)", i);
	printf("Size of a long int: %ld byte(s)", li);
	printf("Size of a long long int: %lld byte(s)", lli);
	printf("Size of a float: %f byte(s)", f);
	return (0);
}
