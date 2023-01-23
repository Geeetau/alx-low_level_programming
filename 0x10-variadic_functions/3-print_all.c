#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *a, *b = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", b, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", b, va_arg(list, double));
					break;
				case 's':
					a = va_arg(list, char*);
					if (!a)
						a = "(nil)";
					printf("%s%s", b, a);
					break;
				default:
					j++;
					continue;
			}
			b = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(list);
}
