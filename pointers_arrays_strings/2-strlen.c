#include <stdio.h>
#include "main.h"

/**
 * _strlen - string length
 *
 * @s: string
 *
 * Return: 0 on sucess
 */


int _strlen(char *s)
{
	int count = 0;

	for ( ; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
