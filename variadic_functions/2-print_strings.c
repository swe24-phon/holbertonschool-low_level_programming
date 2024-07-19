#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print string
 *
 * @n: counter all options entered
 * @separator: number separator
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
