#include <stdio.h>
/**
 * main - return serie fibonacci until number 50
 *
 * Return: 0.
 */
int main(void)
{
	long long int a = 1, b = 2;
	int c = 0;

	while (c < 25)
	{
		if (c != 24)
			printf("%llu, %llu, ", a, b);
		else
			printf("%llu, %llu\n", a, b);
		c++;
		a += b;
		b = a + b;
	}
	return (0);
}
