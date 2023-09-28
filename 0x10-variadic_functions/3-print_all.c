#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *p = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(l, double));
					break;
				case 's':
					s = va_arg(l, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", p, s);
					break;
				default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(l);
}
