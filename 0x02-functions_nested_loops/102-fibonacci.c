#include <stdio.h>
/**
 * main - return serie fibonacci until number 50
 *
 * Return: 0.
 */
int main(void)
{
	long int tmp = 0;
	long int a = 0;
	long int b = 1;
	int c = 1;

	while (c <= 50)
	{
		tmp = a;
		a = b;
		b += tmp;
		printf(c < 50 ? "%ld, " : "%ld\n", b);
		c++;
	}
	return (0);
}
