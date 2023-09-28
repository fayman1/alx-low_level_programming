#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, s = 0;

	va_start(a, n);
	i = 0;
	while (i < n)
	{
		s += va_arg(a, int);
		i++;
	}
	va_end(a);
	return (s);
}
