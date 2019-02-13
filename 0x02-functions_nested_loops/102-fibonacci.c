#include "holberton.h"
#include <stdio.h>
/**
 * main - return serie fibonacci until number 50
 *
 * Return: 0.
 */
int main(void)
{
	unsigned long long int a = 1, b = 2;
	int c = 0;

	while (c < 50)
	{
		printf("%llu, %llu\n", a, b);
		c++;
		a += b;
		b = a + b;
	}
}
