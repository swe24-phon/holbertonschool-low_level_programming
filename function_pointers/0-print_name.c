#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name- prints a name
 * @name: name of the person
 * @f: pointer function of chracters
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	else
		exit(1);
}
