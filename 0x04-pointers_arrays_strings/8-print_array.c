#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: get array of integers
 * @n: get integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf(i < n - 1 ? "%d, " : "%d", a[i]);
		i++;
	}
	putchar(10);
}
