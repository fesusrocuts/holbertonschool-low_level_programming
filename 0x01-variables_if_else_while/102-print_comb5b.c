#include <stdio.h>
/**
 * main - print amount the numbers
 * Return: 0
 */
int main(void)
{
	int a,b;
	a=0;
	while(a<99)
	{
		b=a+1;
		while(b<100)
		{
			putchar((a/10)+'0');
			putchar((a%10)+'0');
			putchar(' ');
			putchar((b/10)+'0');
			putchar((b%10)+'0');
			if(a!=98)
				putchar(',');
				putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
