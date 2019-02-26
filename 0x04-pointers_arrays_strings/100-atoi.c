#include "holberton.h"
/**
 *  _atoi- return integer of the string
 * @s: get string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int r = -1;
	int c;
	int nc = 0;
	int n = 1;

	while (*(s + i) != '\0')
	{
		c = (int)*(s + i) - 48;
		if (c == -3 && r == -1 )
		{
			nc++;
			if (nc > 1)
				n = -1;
			else if (nc == 1 && i == 0)
				n = -1;
		}
		else if (c >= 0 && c <= 9)
			r =  r > 0 ? r * 10 + c : r + c + 1;
		else if (r >= 0)
			i = -2;
		else
		{
			n = 1;
			nc = 0;
		}
		i++;
	}
	return (i != 0 ? r * n : 0);
}
