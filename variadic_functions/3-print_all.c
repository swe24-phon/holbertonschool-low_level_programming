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
	int n = 0;
	const char *selector = format;

	va_list list;

	va_start(list, format);
	
	while (*selector != '\0')
	{
		switch (*selector){
			case'c':
        	                printf("%c", va_arg(list, int)), n++;
                	        break;
			case 'i':
				printf("%d", va_arg(list, int)), n++;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), n++;
				break;
			case 's':
				str = va_arg(list, char *), n++;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;			
				}
	}

	va_end(list);
	printf("\n");
}
