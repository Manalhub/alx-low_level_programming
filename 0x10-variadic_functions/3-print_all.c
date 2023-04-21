#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *strg, *sepr = "";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sepr, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sepr, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sepr, va_arg(ls, double));
					break;
				case 's':
					strg = va_arg(ls, char *);
					if (!strg)
						strg = "(nil)";
					printf("%s%s", sepr, strg);
					break;
				default:
					i++;
					continue;
			}
			sepr = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ls);
}
