#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy string
 *
 * @dest: destination to copy to
 * @src: orginal source
 *
 * Return: 0 on sucess
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';	
	return (dest);
}
