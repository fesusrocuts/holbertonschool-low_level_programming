#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: integer set as a parameter
 *Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("%d\n", n);
}
