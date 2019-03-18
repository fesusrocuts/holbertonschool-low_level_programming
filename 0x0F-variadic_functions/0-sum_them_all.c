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
	va_list o;

	va_start(o, n);

	if (n == 0)
		return (0);
	for (i = 0, sum = 0; i < n; i++)
		sum = sum + va_arg(o, int);
	va_end(o);

	return (s);
}
