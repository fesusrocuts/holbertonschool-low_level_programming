#include <stdio.h>

/**
 * main - game FizzBuzz where case 3,5 or both should print any words
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int lim = 100;
	char *ph1 = "Fizz";
	char *ph2 = "Buzz";
	int c1 = 3;
	int c2 = 5;

	while (i < lim)
	{
		if ((i % c1) == 0 || (i % c2) == 0)
		{
			if ((i % c1) == 0)
				printf("%s", ph1);
			if ((i % c2) == 0)
				printf("%s", ph2);
		}
		else
		{
			printf("%d", i);
		}
		if (i < (lim - 1))
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
