#include <stdio.h>
/**
 * main - prints all possible combinations of two-digit numbers
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 99; x++)
	{
		for (y = x + 1; y < 100; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
