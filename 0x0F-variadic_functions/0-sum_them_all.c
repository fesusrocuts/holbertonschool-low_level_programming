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
	unsigned int i, v, s = 0;
	va_list args;

	if(n == 0)
		return (0);

	va_start(args, n);
	for(i = 0; i < n; i++)
	{
		v = va_arg(args, int);
		s += v;
	}
	va_end(args);

	return (s);
}
