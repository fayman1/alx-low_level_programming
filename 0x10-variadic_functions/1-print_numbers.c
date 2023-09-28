#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print numbers
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i = 0;

	va_start(x, n);

	while (i < n)
	{
		printf("%d", va_arg(x, int));

		if (separator && i != n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(x);
	printf("\n");
}
