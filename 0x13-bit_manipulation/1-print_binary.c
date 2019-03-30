#include "holberton.h"
#include <stdio.h>
/**
 * print_binary -  prints the binary representation of a number.
 * @n: decimal num to bin
 */
void print_binary(unsigned long int n)
{
	unsigned long int t;
	int s;

	if (n == 0)
	{printf("0");
		return; }

	for (s = 0, t = n; (t >>= 1) > 0; s++)
		;
	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			printf("1");
		else
			printf("0");
	}
}
