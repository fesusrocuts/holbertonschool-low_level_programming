#include "holberton.h"
/**
 * print_alphabet - writes the alphabet with _putchar
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
