#include <stdio.h>
#include <unistd.h>
/**
 * main - print the alphabet
 * Return: 0
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
