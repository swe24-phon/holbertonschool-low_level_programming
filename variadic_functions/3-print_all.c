#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all type of arguments
 *
 * @format: type selector
 * Return: none
 */

void print_all(const char * const format, ...)
{
	char *str;
	const char *selector = format;

	va_list list;

	va_start(list, format);
	
	while (selector && *selector != '\0')
	{
		switch (*selector)
		{
			case'c':
        	                printf("%c", va_arg(list, int));
                	        break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *) ?
					printf("%s", str) :
					printf("(nil)");
				break;
			default:
				break;			
		}
		selector++;
		if (*(selector) != '\0')
			printf(", ");
	}

	va_end(list);
	printf("\n");
}
