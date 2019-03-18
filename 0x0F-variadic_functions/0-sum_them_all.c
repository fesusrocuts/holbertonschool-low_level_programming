#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: integer value
 * @...: void
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int s;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0, s = 0; i < n; i++)
		s += va_arg(args, int);
	va_end(args);

	return (s);
}
