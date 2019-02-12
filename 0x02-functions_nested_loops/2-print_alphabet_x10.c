#include "holberton.h"
/**
 * print_alphabet_x10 - writes the alphabet with _putchar 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
