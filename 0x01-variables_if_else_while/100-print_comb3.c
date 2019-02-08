#include <stdio.h>
/**
 * main - print two two-digit numbers from 0-99
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
