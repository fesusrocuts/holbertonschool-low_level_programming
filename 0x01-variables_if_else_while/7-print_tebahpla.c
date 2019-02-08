#include <stdio.h>
/**
 * main - print the alphabet backwards
 * Return: 0
 */
int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
